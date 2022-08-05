/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h> //header file

int main(void) //function main starts execution
{
  int mark1 = 0, mark2 = 0,sum = 0; //declaration of variables
  float average = 0;
  printf ("Please enter the marks of Subject 1 : ");
  scanf ("%d", &mark1); // take marks as user inputs
  printf ("Please enter the marks of Subject 2 : ");
  scanf ("%d", &mark2); // take marks as user inputs

  sum = mark1 + mark2; //calculates the sum
  average = sum / 2; //calculates the average
  
  printf (" Average is : %.2f", average); //prints the average
  
  return 0;
} //function main ends

