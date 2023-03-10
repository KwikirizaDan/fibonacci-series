/*
Program :Fibonacci series
Author :Dan
*/
#include <iostream>
using namespace std;
int
main ()
{
  int n1 = 0, n2 = 1, n3, i, number;
  cout << "Enter the number of elements: ";
  cin >> number;
  cout << n1 << " " << n2 << " ";	//printing 0 and 1    
  for (i = 2; i < number; ++i)	   //loop starts from 2 because 0 and 1 are already printed    
    {
      n3 = n1 + n2;		         // first no plus second number = number3   
      cout << n3 << " ";	      // print number threee   
      n1 = n2;			         // assign number 2 to number 1  
      n2 = n3;			        // number2 = number 3  
    }				           // continue the process
  return 0;
}
