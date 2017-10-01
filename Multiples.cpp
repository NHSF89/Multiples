/*
Multiples of 3 & 5
Problem 1
"If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000."

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int LCD (int num1, int num2)
{
        int mod = num1*num2;
          
        for (int i = 1; i <= mod; i++)
        {
            if (mod%i == 0 && i%num1 == 0 &&i%num2 == 0)
               mod = i;
        }
                
        return (mod);  
}

int main()
{
          const int MAX_ARRAY = 2;
          int multiples[MAX_ARRAY], accumulate = 0, maxValue, subtractNum;
          
          system("CLS");
          
          for (int i = 0; i < MAX_ARRAY; i++)
          {
              cout << "Please enter the value of multiples " << i+1 <<": ";
              cin >> multiples[i];
              system("CLS");
          }
          
          cout << "Please enter the value you would like to take multiples from: ";
          cin >> maxValue;
          
          system("CLS");
          
          for (int i = 1; i< maxValue; i++)
          {
              if (i % multiples[0] == 0 || i % multiples[1] == 0)
              accumulate+=i;  
          }
          
          cout << "Your multiples of " << maxValue << " accumulate to : " << accumulate;
          cout << endl << endl;
          
          system("pause");

     return 0;
}
