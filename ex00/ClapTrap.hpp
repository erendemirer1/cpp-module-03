#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
class ClapTrap
{
private:
    std::string _name;
    unsigned int         _hit_points;
    unsigned int         _energy_points;
    unsigned int         _attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& cpy);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& cpy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif