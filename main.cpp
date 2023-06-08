#include <iostream>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 9) {
        std::cout << "Invalid number of arguments. Please provide four integers for IntComplex and four floats for FloatComplex." << std::endl;
        return 1;
    }

    // Parse command line arguments
    int intReal1 = std::stoi(argv[1]);
    int intImaginary1 = std::stoi(argv[2]);
    int intReal2 = std::stoi(argv[3]);
    int intImaginary2 = std::stoi(argv[4]);

    float floatReal1 = std::stof(argv[5]);
    float floatImaginary1 = std::stof(argv[6]);
    float floatReal2 = std::stof(argv[7]);
    float floatImaginary2 = std::stof(argv[8]);

    // Create instances of IntComplex and FloatComplex
    IntComplex intComplex1(intReal1, intImaginary1);
    IntComplex intComplex2(intReal2, intImaginary2);

    FloatComplex floatComplex1(floatReal1, floatImaginary1);
    FloatComplex floatComplex2(floatReal2, floatImaginary2);

    // Perform arithmetic operations
    IntComplex intResultAdd = intComplex1 + intComplex2;
    IntComplex intResultSub = intComplex1 - intComplex2;
    IntComplex intResultMul = intComplex1 * intComplex2;
    IntComplex intResultDiv = intComplex1 / intComplex2;

    FloatComplex floatResultAdd = floatComplex1 + floatComplex2;
    FloatComplex floatResultSub = floatComplex1 - floatComplex2;
    FloatComplex floatResultMul = floatComplex1 * floatComplex2;
    FloatComplex floatResultDiv = floatComplex1 / floatComplex2;

    // Print results
    std::cout << "Integer Complex Number 1:" << std::endl;
    intComplex1.print();
    std::cout << "Integer Complex Number 2:" << std::endl;
    intComplex2.print();

    std::cout << "Float Complex Number 1:" << std::endl;
    floatComplex1.print();
    std::cout << "Float Complex Number 2:" << std::endl;
    floatComplex2.print();

    std::cout << "Integer Complex Number Addition:" << std::endl;
    intResultAdd.print();
    std::cout << "Integer Complex Number Subtraction:" << std::endl;
    intResultSub.print();
    std::cout << "Integer Complex Number Multiplication:" << std::endl;
    intResultMul.print();
    std::cout << "Integer Complex Number Division:" << std::endl;
    intResultDiv.print();

    std::cout << "Float Complex Number Addition:" << std::endl;
    floatResultAdd.print();
    std::cout << "Float Complex Number Subtraction:" << std::endl;
    floatResultSub.print();
    std::cout << "Float Complex Number Multiplication:" << std::endl;
    floatResultMul.print();
    std::cout << "Float Complex Number Division:" << std::endl;
    floatResultDiv.print();

    return 0;
}

