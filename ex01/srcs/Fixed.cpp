#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	copy(other);
}

Fixed::Fixed(const	int		nu)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = nu << this->fractBits;
}

Fixed::Fixed(const	float	nu)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(nu * (1 << this->fractBits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	copy(other);
	return (*this);
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << (fixed.tofloat());
	return (stream);
}

void Fixed::copy(const Fixed& other)
{
	this->fixedPoint = other.fixedPoint;
}

int		Fixed::getRawBits( void ) const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

int		Fixed::getFractBits() const
{
	return (this->fractBits);
}

Fixed::~Fixed()
{
	std::cout << "Destruction ... now" << std::endl;
}

float		Fixed::tofloat(void) const
{
	return ((float)this->getRawBits() / (1 << this->getFractBits()));
}

int			Fixed::toInt(void) const
{
	return(this->getRawBits() >> this->getFractBits());
}
