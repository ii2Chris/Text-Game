#include "Char.h"
#include <iostream>
using namespace std;


Character::Character(int level) : level(level) {
    hp = max_hp = 100 + level;
    mp = max_mp = 50 + level;
};


void Character::attack(Character& target){
    int damage = 10 + level;
    target.hp = target.hp - damage;
    cout << "Target was attacked for " << damage << "!" << endl;
};

void Character::defend(){
    if (bool guard = true){
        cout << "Guarding!";
        defense = defense * 1.25;
    };
};

void Character::heal(){
    int healing = 20;
    hp = healing + hp;
    cout << "Healed for " << healing << "!" << endl;
};
