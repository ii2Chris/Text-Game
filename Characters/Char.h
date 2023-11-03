#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
public:
    int hp;
    int max_hp;
    int mp;
    int max_mp;
    int level;
    int defense;

    Character(int level);

    virtual void attack(Character& target);
    virtual void defend();
    virtual void heal();
};

#endif