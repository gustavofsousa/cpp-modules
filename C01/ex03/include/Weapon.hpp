
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
private:
	std::string	_type;

public:
	std::string	getType( void );
	void		setType( std::string value );
};
#endif
