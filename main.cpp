//Name:Tyler Archer
//Date: 31 March 2016
//File: main.cpp
//Description: Simple hello world to test git

#include <iostream>

using namespace std;

int sum(int value);

int product(int value);

int main()
{
  int n;

  cout << "Hello World!" << endl;
  cout << endl;

  cout << "Enter a number: ";
  cin >> n;

  cout << "The sum of the previous integers and your number is: " << sum(n) << endl;

  cout << endl;

  cout << "The product of the previous integers and your number is: " << product(n) << endl;

  cout << endl;

  return 0;

}


int sum(int value)
{
  int total = 0;

  for(int i = 1; i <= value; i++)
    {
      total += i;
    }

  return total;
}

int product(int value)
{
  int total = 1;

  for(int i = 1; i <= value; i++)
    {
      total *= i;
    }

  return total;
}
