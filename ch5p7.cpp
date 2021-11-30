/* 
    Quadratic equations [calculator]
    There is a problem, though: if b2–4ac is less than zero, then it will fail. Write a program that can calculate x for a
    quadratic equation. Create a function that prints out the roots of a quadratic equation, given a, b, c. When the program
    detects an equation with no real roots, have it print out a message. How do you know that your 
    results are plausible? Can you check that they are correct?
*/

#include "std_lib_facilities.h"

void calculateRoots(double a, double b, double c, double test){
    double root1, root2;

    if(test < 0){
        cout << "Error: no real roots.";
    } else if(test == 0){
        root1 = (-b)/(2*a);
        cout << "The real root of the equation is: " << root1;
    } else {
        root1 = (-b-sqrt(test))/(2*a);
        root2 = (-b+sqrt(test))/(2*a);

        cout << "The real roots of the equation are: " << root1 << " and " << root2;
    }
}

int main(){

    double a, b, c;

    cout << "Enter values for a, b, and c: ";
    cin >> a >> b >> c;

    double test;
    double root1, root2;

    test = (b*b)-(4*a*c);

    calculateRoots(a, b, c, test);

    return 0;
}