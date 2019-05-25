// Experiment 4, Problem 2
// Created on May 24, 2019
// Code by Louis Mirano | 2018110858 | 1-29
#include <iostream>

using namespace std;

int main()
{
    int s, x, y, a, array[100];
    cout << "Enter the array size: " << endl;
    cin >> s;
    cout << "Enter the 5 elements: " << endl;
    for (x = 0; x < s; x++)
    {
        cin >> array[x];
    }
    cout << "Sorting..." << endl;
    
    for (x = 0; x < s; x++)
    {
        for (y = x + 1; x < s; y++)
        {
            if(array[x] > array[y])
            {
                a = array[x];
                array[x] = array[y];
                array[y] = a;
            }
        }
    }
    cout << "Sorted data is: " << endl;
    for (x = 0; x < s; x++)
    {
        cout << array[x] << " ";
    }
    
    return 0;
}
