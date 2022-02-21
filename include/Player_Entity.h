#ifndef ENTITY_H
#define ENTITY_H

#include <Types.h>

class Entity
{
  private:
// private vars
    std::string m_name{};
    stattype m_agility{};
    stattype m_strength{};
    stattype m_mp{};
    stattype m_hp{};

  public:
    const std::string& getName(){return m_name;}
    void setName(std::string name){ m_name = name;}

    const stattype getStrength(){return m_strength;}
    void setStrength(stattype strength){ m_strength = strength;}


    const stattype getAgility(){return m_agility;}
    void setAgility(stattype name){ m_agility = agility;}

    const stattype getMP(){return m_mp;}
    void setMP(stattype mp){ m_mp = mp;}

    const stattype getHP(){return m_hp;}
    void setHP(stattype hp){ m_hp = hp;}
};
#endif
