#!/bin/sh
clear
set -xe
gcc -Wall -Wextra -lm -o Out_setup  main.c #`pkg-config sdl3 --cflags --libs` -lm 
