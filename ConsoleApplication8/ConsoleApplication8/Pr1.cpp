#include <math.h>
#include <iostream>
#include "lab4.h"
Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}
Complex::Complex(double re)
{
	this->re = re;
	this->im = 0;
}
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
Complex Complex::operator+(const Complex& q) const
{
	Complex res(this->re + q.re, this->im + q.im);
	return res;
}

Complex Complex::operator/(const Complex& q) const
{
    Complex res((this->re * q.re + this->im * q.im) / (q.re * q.re + q.im * q.im), 
        (this->im * q.re - this->re * q.im) / (q.re * q.re + q.im * q.im)); 
    return res;
}
Complex Complex::operator/(const Complex& q) const
{
    Complex res((this->re * q.re + this->im * q.im) / (q.re * q.re + q.im * q.im),
        (this->im * q.re - this->re * q.im) / (q.re * q.re + q.im * q.im));
    return res;
}

double Complex::Re() const
{
    return this->re;
}

double Complex::Im() const
{
    return this->im;
}

double Complex::R() const
{
    return sqrt(re * re + im * im);
}
double Complex::Phi() const
{
    return atan2(im, re);
}
ostream& operator<< (ostream& out, const Complex& q)
{
    if (q.Im() >= 0)
    {
        out << q.Re() << "+" << q.Im() << "i";
    }
    else
    {
        out << q.Re() << q.Im() << "i";
    }
    return out;
}
