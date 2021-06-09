#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int		fixedPoint;
	static const int fractBits = 8;
public:
/*Constructors*/
	Fixed();
	Fixed(const	int		nu);
	Fixed(const	float	nu);
	Fixed(const Fixed& other);
	~Fixed();
/*overloads*/
	Fixed& 			operator=(Fixed &other);
/*Methods*/
	void	copy(const Fixed& other);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		getFractBits() const;
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed);

#endif