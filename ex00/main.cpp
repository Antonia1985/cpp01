#include "Zombie.hpp"
#include <string>

int main()
{
    Zombie x;
    x.randomChump("temporZombie");

    Zombie y;
    y.newZombie("permaZombie");
    delete &y;
}