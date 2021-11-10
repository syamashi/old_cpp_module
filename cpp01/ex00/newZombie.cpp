#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*ret;

	try
	{
		ret = new Zombie(name);
	}
	catch(std::bad_alloc)
	{
		std::cerr << "bad_alloc" << std::endl;
	}
	return ret;
}
