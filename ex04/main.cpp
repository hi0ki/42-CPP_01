#include <iostream>

//std::ifstream to read from a file
//std::ofstream to write to a file


int main(int ac, char **av)
{
	if (ac < 4)
		std::cout << "parameters are missing" << std::endl;
	else if (ac > 4)
		std::cout << "too many parameters" << std::endl;
	else 
	{
		std::string filename(av[1]);
		std::string str1(av[2]);
		std::string str2(av[3]);
		std::cout << str1 << filename << str2 << std::endl;
	}
}