#include "Zombie.hpp"
#include <string>

Zombie::Zombie() {}
void Zombie::setName(std::string n) {name = n;};

void Zombie::announce( void )
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << "Destructor called!" << std::endl;
}
