#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int		fixedPoint;
	static const int fractBits = 8;
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& 	operator=(Fixed &other);
	void	copy(const Fixed& other);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	~Fixed();
};

#endif