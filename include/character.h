// character.h
#ifndef CHARACTER_H
#define CHARACTER_H
#include "classes.h"

typedef struct {
    char name[200];
    classes _class;
    int exp;
    int level;
    int gold;
    int health;
} character;

#endif