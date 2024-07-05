#include <iostream>
#include <cmath> // Include cmath for mathematical functions

using namespace std;

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double exponentiate(double base, double exp);
double squareRoot(double x);
double logarithm(double x);
double sine(double x);
double cosine(double x);
double tangent(double x);

int main() {
    double num1, num2, result;
    int choice;

    while (true) {
        displayMenu();
        cout << "Enter your choice (1-11): ";
        cin >> choice;

        if (choice == 11) {
            cout << "Exiting the program." << endl;
            break;
        }

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else {
            cout << "Enter number: ";
            cin >> num1;
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error! Division by zero." << endl;
                } else {
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                }
                break;
            case 5:
                if (static_cast<int>(num2) == 0) {
                    cout << "Error! Division by zero." << endl;
                } else {
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "Result: " << result << endl;
                }
                break;
            case 6:
                cout << "Enter exponent: ";
                cin >> num2;
                result = exponentiate(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 7:
                result = squareRoot(num1);
                cout << "Result: " << result << endl;
                break;
            case 8:
                result = logarithm(num1);
                cout << "Result: " << result << endl;
                break;
            case 9:
                result = sine(num1);
                cout << "Result: " << result << endl;
                break;
            case 10:
                result = cosine(num1);
                cout << "Result: " << result << endl;
                break;
            default:
                cout << "Invalid choice! Please choose a valid option." << endl;
                break;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\nCalculator Menu" << endl;
    cout << "1.  Add            6.  Exponentiate" << endl;
    cout << "2.  Subtract       7.  Square Root" << endl;
    cout << "3.  Multiply       8.  Logarithm" << endl;
    cout << "4.  Divide         9.  Sine" << endl;
    cout << "5.  Modulus       10.  Cosine" << endl;
    cout << "                   11. Exit" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double exponentiate(double base, double exp) {
    return pow(base, exp);
}

double squareRoot(double x) {
    if (x >= 0)
        return sqrt(x);
    else {
        cout << "Error! Square root of a negative number." << endl;
        return 0;
    }
}

double logarithm(double x) {
    if (x > 0)
        return log(x);
    else {
        cout << "Error! Logarithm of a non-positive number." << endl;
        return 0;
    }
}

double sine(double x) {
    return sin(x);
}

double cosine(double x) {
    return cos(x);
}

double tangent(double x) {
    return tan(x);
}
