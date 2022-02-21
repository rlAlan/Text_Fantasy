#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
  public:
// Public Funcs
    void getStrength();
    void getAgility();
    void getHP();
    void getMP();
// Public Vars
    int strength{};
    int agility{};
    int mp{};
    int hp{};
};
/// Update Character.cpp
#endif
