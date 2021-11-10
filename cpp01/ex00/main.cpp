#include "Zombie.hpp"

template <typename T>
void pout(T S)
{
	std::cout << std::endl;
	std::cout << "--- " << S << " ---" << std::endl;
}
int main()
{
	pout("constructer");
	Zombie z("z");
	z.announce();

	pout("newZombie");
	Zombie *z_heap = newZombie("heap");

	pout("newZombie delete");
	delete z_heap;

	pout("randomChump");
	randomChump("random");
}
