/*Author: Francisco Bumanglag
Project: Solutions to the Quadratic Equation
Assignment: Module 6 Project 4
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Date: March 24, 2024*/


#include <iostream>
#include <cmath> //for the sqrt() and pow() functions
#include <iomanip> //setprecision() function and scientific format

using namespace std;

int main() {
    //declare variables
    int a, b, c;
    //output message to user
    cout << "John Smith -- " << endl << endl;
    cout << "This program will provide solutions for an equation of the form Ax^2 + Bx + C = 0" << endl;
    cout << "Where A, B, C are integers, and A is not equal to zero" << endl << endl;

    //user input -- data based on 4 solutions
    cout << "Enter A, B, and C: ";
    cin >> a >> b >> c;

    //check if the leading coefficient is zero  (data: 0 3 8)
    if (a == 0) {
        cout << endl << "No solutions will be calculated for a leading coefficient of 0!" << endl;
        return 0;
    }

    //calculate the discriminant
    int discriminant = pow(b, 2) - 4 * a * c;

    //output scientific format with 4 decimal places
    cout << setprecision(4) << scientific;

    //calculate and display the solutions of the discriminant
    if (discriminant > 0) {
        //two real solutions  (data: 2 -5 -3)
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << endl << "The two real solutions are x = " << x1 << " and x = " << x2 << endl;
    }
    else if (discriminant == 0) {
        //one real solution (data: 1 -8 16)
        double x = -b / (2 * a);
        cout << endl << "The one real solution is x = " << x << endl;
    }
    else {
        //two imaginary solutions (2 -5 4)
        double realPart = -b / (2.0 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The two imaginary solutions are x = " << realPart << " + (" << imaginaryPart << ") * I and ";
        cout << "x = " << realPart << " - (" << imaginaryPart << ") * I" << endl;
             
    }

    return 0;
}
