#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Mathematical Expressions
    int x = 10;
    int y = 3;
    int z = x + y;

    cout << "The result of x + y is: " << z << endl;
    cout << "===============================================" << endl;

    // Incrementation
    int incrementVar = 10;
    incrementVar = incrementVar + 5;
    incrementVar++;
    cout << "The incremented value is: " << incrementVar << endl;
    cout << "===============================================" << endl;

    // Printing
    cout << "The printed result is: Hello World!" << endl;
    cout << "===============================================" << endl;

    // Swapping Variables
    int a = 1;
    int b = 2;
    int c = a;
    a = b;
    b = c;
    cout << "Swapped variable a is: " << a << endl;
    cout << "===============================================" << endl;

    // Constants
    const double pi = 3.14;
    cout << "The value of pi is: " << pi << endl;
    cout << "===============================================" << endl;

    // Reading from the console
    cout << "Enter a value: ";
    int value; // Change int to double if value is decimal
    cin >> value;
    cout << "The value you entered is: " << value << endl;
    cout << "===============================================" << endl;

    cout << "Enter values for x and y: ";

    double x1; double y1;
    cin >> x1 >> y1;

    cout << "The sum of your input is: " << x1 + y1 << endl;
    cout << "===============================================" << endl;

    // Exercise 4
    cout << "Enter a temperature in Fahrenheit: ";

    int fahrenheit; 
    cin >> fahrenheit;
    
    double celsius = (fahrenheit - 32) / 1.8;

    cout << "The temperature in Celsius is: " << celsius << endl;
    cout << "===============================================" << endl;

    // Working with the Standard library
    double result = floor(1.2);

    cout << result << endl;
    cout << "===============================================" << endl;

    // Exercise 5
    cout << "Enter radius: ";
    double radius;
    cin >> radius;

    const double pi1 = 3.14;
    double area = pi * pow (radius, 2);

    cout << area << endl;
    cout << "===============================================" << endl;

    // Comments (lamo)
    // This is a single line comment

    /*
     *  This is a multi-line comment
     */



    return 0;
}
