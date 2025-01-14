#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "debug" << std::endl;
}
void Harl::info( void )
{
	std::cout << "info" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "warning" << std::endl;
}
void Harl::error( void )
{
	std::cout << "error" << std::endl;
}

void Harl::complain( std::string level )
{
	typedef void (Harl::*PtrToFt)(void);
	PtrToFt Arrfunts[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[] = {"debug", "info", "warning", "error"};

	for(int i = 0; i < 4; i++)
	{
		if (level == lvls[i])
			{
				(this->*Arrfunts[i])();
				return ;
			}
	}
}