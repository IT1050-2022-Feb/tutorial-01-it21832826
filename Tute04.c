/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h> //header files
int minimum (int x, int y); //declaration of the functions
int maximum (int x, int y);
int multiply (int x, int y);

int main() //function main starts execuion
{
   int no1, no2; //declaration of variables
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1); //gets no 1 as user input
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2); //gets no 2 as user input
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
} //function main ends execution
int minimum (int x, int y) //implementation of function minimum
{
  int min;
  if (x < y)
    min = x;
    
  else
    min = y;
    
  return min;
}

int maximum (int x, int y) //implementation of function maximum
{
	int max;
	if (x > y)
		max = x;
	else
		max = y;
	return max;
}

int multiply (int x, int y) //implementation of function multiply
{
	int mul;
	mul = x * y;
	return mul;
}

