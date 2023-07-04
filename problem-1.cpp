#include <bits/stdc++.h>
using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Cannot divide by zero" << endl;
            return 0.0;
        }
    }
};

int main() {
    double a, b;
    char operation;

    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    cout << "Enter the type of operation (+, -, *, /): ";
    cin >> operation;

    Calculator calculator(a, b);

    double result;

    switch (operation) {
        case '+':
            result = calculator.add();
            break;
        case '-':
            result = calculator.subtract();
            break;
        case '*':
            result = calculator.multiply();
            break;
        case '/':
            result = calculator.divide();
            break;
        default:
            cout << "Error: Invalid operation" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
