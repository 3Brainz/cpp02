#include <Fixed.hpp>

Fixed::Fixed()
{
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	copy(other);
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed& other)
{
	copy(other);
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void Fixed::copy(const Fixed& other)
{
	this->fixedPoint = other.fixedPoint;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits called" << std::endl;
	this->fixedPoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destruction ... now" << std::endl;
}

