#include "IntComplex.h"


IntComplex::IntComplex(int real, int imaginary) : real(real), imaginary(imaginary) {}

IntComplex IntComplex::operator+(const IntComplex& other) const {
    int newReal = real + other.real;
    int newImaginary = imaginary + other.imaginary;
    return IntComplex(newReal, newImaginary);
}

IntComplex IntComplex::operator-(const IntComplex& other) const {
    int newReal = real - other.real;
    int newImaginary = imaginary - other.imaginary;
    return IntComplex(newReal, newImaginary);
}

IntComplex IntComplex::operator*(const IntComplex& other) const {
    int newReal = (real * other.real) - (imaginary * other.imaginary);
    int newImaginary = (real * other.imaginary) + (imaginary * other.real);
    return IntComplex(newReal, newImaginary);
}

IntComplex IntComplex::operator/(const IntComplex& other) const {
    int divisor = (other.real * other.real) + (other.imaginary * other.imaginary);
    int newReal = ((real * other.real) + (imaginary * other.imaginary)) / divisor;
    int newImaginary = ((imaginary * other.real) - (real * other.imaginary)) / divisor;
    return IntComplex(newReal, newImaginary);
}

void IntComplex::print() const {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}
