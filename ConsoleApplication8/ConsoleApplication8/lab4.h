#include <iostream>
#ifndef Complex_H
#define Complex_H
using namespace std;
class Complex
{
private:
    double re;
    double im;
public:
    Complex();
    Complex(double Re);
    Complex(double Re, double Im);
    double Re() const;
    double Im() const;
    double R() const;
    double Phi() const;
    Complex operator+(const Complex& q) const;
    Complex operator/(const Complex& q) const;
    friend ostream& operator<< (ostream& out, const Complex& q);
};
#endif