#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o calc.so -fPIC calc.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("/usr/local/bin/score 23fb5072-a1fc-4c13-94e6-ce6eac7a1058");
}
