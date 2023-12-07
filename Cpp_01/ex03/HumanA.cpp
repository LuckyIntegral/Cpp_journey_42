
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string &name, Weapon &weapon )
	: _name(name), _weapon(weapon) {}
HumanA::~HumanA() {}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with their "
		<< this->getWeapon().getType() << std::endl;
}

Weapon	HumanA::getWeapon( void ) const
{
	return (this->_weapon);
}

std::string	HumanA::getName( void ) const
{
	return (this->_name);
}

void	HumanA::setWeapon( const Weapon weapon )
{
	this->_weapon = weapon;
}

void	HumanA::setName( const std::string &name )
{
	this->_name = name;
}
