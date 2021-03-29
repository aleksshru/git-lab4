#include "Complex.h"
#include "lab4.h"
#include <math.h>
#include "func.h"

Complex ch(const Complex& z)
{
	Complex result(cos(z.Re()) * cosh(z.Im()), sin(z.Re()) * sinh(z.Im()));
	return result;
}

Complex y(const Complex& z)
{
	return  z/2 + ch(1 + z);
}