#ifndef MAIN_C_DEFS_H
#define MAIN_C_DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CREATE_ENUM() \
    enum option { \
        EXIT, \
        TOGGLE_BIT, \
        SET_BIT, \
        CLEAR_BIT, \
        SHOW_BITS, \
        SHOW_NUMBER \
    };

#define CREATE_LOGIC() \
    enum logic { \
        FALSE, \
        TRUE \
    };

#define CREATE_DELAY() \
    struct timespec delay;

#define CREATE_SPACER() \
    printf("############################################################\n");

#define CREATE_LOADING_BAR() \
    printf("\tLoading ["); \
    for (int i = 0; i < 10; i++) { \
        printf("$"); \
        nanosleep(&delay, NULL); \
    } \
    printf("] Done!\n");

#define CREATE_MENU() \
    printf("\t0. Exit\n"); \
    printf("\t1. Toggle bit\n"); \
    printf("\t2. Set bit\n"); \
    printf("\t3. Clear bit\n"); \
    printf("\t4. Show bits\n"); \
    printf("\t5. Show number\n");

#define GET_BIT_AND_CHECK(action) \
    printf("Provide bit number for [%s]:\n", #action); \
    test = scanf("%i", &bit); \
    if (test != 1) { \
        printf("\tInvalid bit number\n"); \
        continue; \
    } \
    if(bit < 0 || (unsigned int)bit > sizeof(number) * 8 - 1) { \
        printf("\tExceeded bit limit!\n"); \
        continue; \
    } \
    CREATE_LOADING_BAR()

#define TOGGLE_BIT(x, n) (x ^= (1 << n));
#define SET_BIT(x, n) (x |= (1 << n));
#define CLEAR_BIT(x, n) (x &= ~(1 << n));
#define SHOW_BITS(x) \
    printf("\tBits: "); \
    for (int i = sizeof(x) * 8 - 1; i >= 0; i--) { \
        printf("%d", (x >> i) & 1); \
        if(!(i % 8)) printf(" "); \
    } \
    printf("\n");
#define SHOW_NUMBER(x) printf("\tNumber: %d\n", x);

#endif //MAIN_C_DEFS_H
