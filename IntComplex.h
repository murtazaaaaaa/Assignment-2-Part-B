#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H
#include <iostream>
using namespace std;
class IntComplex {
private:
    int real;
    int imaginary;

public:
    IntComplex(int real, int imaginary);

    IntComplex operator+(const IntComplex& other) const;
    IntComplex operator-(const IntComplex& other) const;
    IntComplex operator*(const IntComplex& other) const;
    IntComplex operator/(const IntComplex& other) const;

    void print() const;
};

#endif
