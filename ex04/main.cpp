#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac < 4)
		std::cout << "parameters are missing" << std::endl;
	else if (ac > 4)
		std::cout << "too many parameters" << std::endl;
	else 
	{
		std::string filename = av[1];
		std::string file_replace = filename + ".replace";
		std::string str1 = av[2];
		std::string str2 = av[3];
		std::string line;
		int i = 0;

		std::ifstream ifile(filename);
		std::ofstream ofile(file_replace);
		if (!ifile.is_open() || !ofile.is_open())
		{
			std::cout << "Error: Cannot open file" << std::endl;
			return (1);
		}
		while (getline(ifile, line))
		{
			int i = 0;
			while ((i = line.find(str1, i)) != -1)
			{
				line.erase(i, str1.length());
				line.insert(i, str2);
				i += str2.length();
			}
			ofile << line << std::endl;
		}
		ifile.close();
		ofile.close();
	}
	return (0);
}