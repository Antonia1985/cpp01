#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

    private:
    std::string name;

    public:    
    Zombie();
    void setName(std::string n);    
    void announce(void);
    void randomChump( std::string name );
    Zombie* newZombie( std::string name );
    ~Zombie();
    
};

#endif