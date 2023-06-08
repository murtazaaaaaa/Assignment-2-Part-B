#include "FloatComplex.h"
#include <iostream>

FloatComplex::FloatComplex(float real, float imaginary) : IntComplex(static_cast<int>(real), static_cast<int>(imaginary)),
                                                          real(real), imaginary(imaginary) {}

FloatComplex FloatComplex::operator+(const FloatComplex& other) const {
    float newReal = real + other.real;
    float newImaginary = imaginary + other.imaginary;
    return FloatComplex(newReal, newImaginary);
}

FloatComplex FloatComplex::operator-(const FloatComplex& other) const {
    float newReal = real - other.real;
    float newImaginary = imaginary - other.imaginary;
    return FloatComplex(newReal, newImaginary);
}

FloatComplex FloatComplex::operator*(const FloatComplex& other) const {
float newReal = (real * other.real) - (imaginary * other.imaginary);
float newImaginary = (real * other.imaginary) + (imaginary * other.real);
return FloatComplex(newReal, newImaginary);
}

FloatComplex FloatComplex::operator/(const FloatComplex& other) const {
float divisor = (other.real * other.real) + (other.imaginary * other.imaginary);
float newReal = ((real * other.real) + (imaginary * other.imaginary)) / divisor;
float newImaginary = ((imaginary * other.real) - (real * other.imaginary)) / divisor;
return FloatComplex(newReal, newImaginary);
}

void FloatComplex::print() const {
std::cout << real << " + " << imaginary << "i" << std::endl;
}
