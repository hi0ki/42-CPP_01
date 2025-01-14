#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl obj;

	if (ac < 2 || ac > 2)
		std::cout << "Error" << std::endl;
	else
	{
		std::string level = av[1];
		obj.complain(level);
	}
}