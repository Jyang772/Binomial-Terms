/** Written by Justin Yang **/

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int degree;
int power;
double x;

int Convert(int output);

int main()
{
    int output;
    char answer;
    do
    {
    cout << "Enter degree: \n";
    cin >> degree;
    cout << "Enter power: \n";
    cin >> power;
    cout << "Enter 'x': \n";
    cin >> x;
    
    cout << "Output: ";
    cout << Convert(output);
    cout << "X^" << power << endl;
    cout << "\nWould you like to try another? (y/n): ";
    cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    system("PAUSE");
    return 0;
}

int Convert(int output)
{
     long factorial1;
     factorial1 = 1L;
     for(long i=2L; i <= degree; i++)
              factorial1 *= i;
              
     long factorial2;
     factorial2 = 1L;
     for(long i=2L; i <=power; i++)
              factorial2 *= i;
              
     long factorial3;
     factorial3 = 1L;
     for(long i=2L; i <= (degree - power); i++)
              factorial3 *= i;
    
    double exponentiated;
    double exponent;         
    exponent = (degree - power);
    exponentiated = pow(x,exponent);
              
    output = (factorial1) / ((factorial2) * (factorial3)) * exponentiated;
    return output;
}
