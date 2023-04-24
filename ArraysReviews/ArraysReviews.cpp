// ArraysReviews.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadArrayNumbers(int v[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Number [" << i << "] : ";
        cin >> v[i];
    }
}
void printArrayNumbers(int v[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }
}
int printSumArrayNumbers(int v[5])
{
    int Sum = 0;
    for (int i = 0; i < 5; i++)
    {
        Sum += v[i];
    }

    return Sum;
}
int printAvGArrayNumbers(int v[5])
{
   return printSumArrayNumbers(v) / 5;
 
}

int main()
{
    int v[5];
    ReadArrayNumbers(v);
    //printArrayNumbers(v);

    cout << "\nThe Sum OF ARRAYS NUMBERS : " << printSumArrayNumbers(v) <<endl;
    cout << "The AVGE is : " << printAvGArrayNumbers(v) << endl;
    

   return 0;
}

