// Experiment 4, Problem 1
// Created on May 24, 2019
// Code by Louis Mirano | 2018110858 | 1-29
#include <iostream>
#include <functional> // di ko po alam kung anong library gagamitin for modulus kaya
#include <algorithm>  // linagay ko nalang po yung dalawa

using namespace std;

int main()
{
    char op, choice;
    int num1, num2; // i had to make these as int kasi di po gumagana "%" sa float
    
    cout << "Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    cout << "Enter number of choice: ";
    cin >> op;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    switch(op)
    {
        case '1':
            cout << num1 + num2 << endl;
            break;
            
        case '2':
            cout << num1 - num2 << endl;
            break;
            
        case '3':
            cout << num1 * num2 << endl;
            break;
            
        case '4':
            cout << num1 / num2 << endl;
            break;
            
        case '5':
            cout << num1 % num2 << endl;
            break;
            
        default:
            cout << "Error, input is incorrect.";
            break;
            
            
    }
    
    cout << endl;
    cout << "Would you like to perform another calculation?" << endl;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
        
    
        
    cout << endl;
    return 0;
}
