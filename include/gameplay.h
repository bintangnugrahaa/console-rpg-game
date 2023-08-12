// gameplay.h
#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "character.h"
#include "monsters.h"

extern int isNew;
extern monster monsters[];
extern classes _class[];
extern character playerCharacter;

classes loadClass(char c[]);
void newGame();
void firstMenu();
void fight(monster m);
void fightMenu();
void heal();

#endif