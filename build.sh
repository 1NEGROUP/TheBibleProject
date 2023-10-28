#!/bin/bash


libs="-lGL -lc -lm -lpthread -ldl -lrt -lX11"


g++ -L/usr/local/lib bibleApp.cpp Funct.cpp -lraylib -g -o bibleApp $libs $warnings
g++ -L/usr/local/lib bibleApp.cpp Funct.cpp -lraylib -g -o bibleApp.Appimage $libs $warnings