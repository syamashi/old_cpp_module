#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <time.h>

class	Zombie
{
	public:
		Zombie(const std::string& name);
		~Zombie();
		void	announce( void );

	private:
		std::string	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif