/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

#include<iostream>
long Factorical(int no);
long nCr(int n,int r);
int main (void)
{
  int n,r;

  std::cout<<"Enter the value for n: ";
  cin>>n;

  std::cout<<"Enter the value for r: ";
  cin>>r;

  std<<cout<<"nCr = ";
  std::cout<<nCr(n,r);

  std::cout<<std::endl;
}
long Factorical(int no)
{
  int result = 0;
  for(i = 0 ; i < no ; i++)
    {
      result = no * i;
    }
}
long nCr(int n,int r)
{
  nCr = n!/r!*(n-r)!;
  return nCr;
}