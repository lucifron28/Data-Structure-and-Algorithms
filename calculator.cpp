#include <iostream>
using namespace std;


// Cada, Ron Vincent

float sum_num(float a, float b);
float subtract_num(float a, float b);
float multiply_num(float a, float b);
float divide_num(float a, float b);

int main(void) {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int optr;
    cout << "Enter operator (Addition-1, Subtraction-2, Multiplication-3, Subtraction ): ";
    cin >> optr;
    switch (optr) {
        case 1:
            cout << "Sum: " << sum_num(num1, num2) << endl;
            break;
        case 2:
            cout << "Difference: " << subtract_num(num1,  num2) << endl;
            break;
        case 3:
            cout << "Product: " << multiply_num(num1,  num2) << endl;  
            break;
        case 4:
            cout << "Quotient: " << divide_num(num1, num2) << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
            break;
    }
    return 0;
}
float sum_num(float a, float b) {
    return a + b;
}

float subtract_num(float a, float b) {
    return a - b;
}

float multiply_num(float a, float b) {
    return a * b;
}

float divide_num(float a, float b) {
    return a / b;
}