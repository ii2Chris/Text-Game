#ifndef ENEMY_H
#define ENEMY_H

#include "Char.h" 
#include <cstdlib> //Rand

class Enemy : public Character {
public:
    Enemy(int level);

    // Overriding functions to incorporate RNG in enemy actions
    void attack(Character& target) override;
    void defend() override;
    void heal() override;
};

#endif