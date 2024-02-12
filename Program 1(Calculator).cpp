// Program 1(Calculator).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int main() {
    // Declare variables to hold user inputs and operation
    int num1, num2; // Hold the two numbers entered by the user
    char op; // Hold the arithmetic operation entered by the user

    // Ask the user to input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Ask the user to input operation
    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    // Perform the arithmetic operation based on user input
    switch (op) {
    case '+': // Addition
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-': // Subtraction
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*': // Multiplication
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/': // Division
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << (double)num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default: // Unsupported operation
        cout << "Error: Unsupported operation." << endl;
    }

    return 0;
}

