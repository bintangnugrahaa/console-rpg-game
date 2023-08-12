// monsters.h
#ifndef MONSTERS_H
#define MONSTERS_H

typedef struct {
    char name[200];
    int damage;
    int maxHealth;
    int expGained;
    int goldGained;
} monster;

#endif