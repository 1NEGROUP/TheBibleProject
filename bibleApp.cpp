#include "iostream"
#include "string"
#include "cstdio"
#include "stdexcept"
#include "raylib.h"
#include "Funct.h"

using namespace std;

// Program main entry point
//------------------------------------------------------------------------------------

Color playColor;

struct vari v;

enum verseGen{
    S1, S2, S3, S4, S5, S6, S7, S8, S9, S10,
    S11, S12, S13, S14, S15, S16, S17, S18, S19, S20,
    S21, S22, S23, S24, S25, S26, S27, S28, S29, S30,
    S31, S32, S33, S34, S35, S36, S37, S38, S39, S40,
    S41, S42, S43, S44, S45, S46, S47, S48, S49, S50
};

int main(void)
{
    InitWindow(v.screenWidth, v.screenHeight, "Crappy Turd");

    
    Font pixelFont = LoadFont("res/editundo.ttf");
    Image imagePlayText = ImageTextEx(pixelFont, "Play", 50.0f, 1.0f, BLACK);
    Texture2D playTxtTexture = LoadTextureFromImage(imagePlayText);

    float imgPlyTxtFrameWidth = imagePlayText.width;
    float imgPlyTxtFrameHeight = imagePlayText.height;

    // Initialization
    //--------------------------------------------------------------------------------------

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

    SetTargetFPS(60);

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        
        BeginDrawing();

            ClearBackground(RAYWHITE);

            

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadTexture(playTxtTexture);
    UnloadImage(imagePlayText);
    UnloadFont(pixelFont);        // Texture unloading

    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}