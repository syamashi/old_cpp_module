#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << "> " << "Died..." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
