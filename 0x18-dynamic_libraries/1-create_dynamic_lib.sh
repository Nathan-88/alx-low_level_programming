#!/bin/bash
# a script that creates a dynamic library called liball.so 
# from all the .c files that are in the current directory
gcc -c -fPIC ./*.c
gcc -shared -o liball.so ./*.o
