/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h> //header file

int main(void) //function main starts execution
{
  int num = 1, sum = 1, max = 0; //declaration of variables
  printf ("Please input the maximum number : ");
  scanf ("%d", &max); //takes the max num as user input

  while (num < max) //checks the condition
  {
    num = num + 1; //increments num by 1
    sum = sum + num; //adds the numbers
  }

printf ("The total is : %d", sum); //prints the total
  
  
  return 0;
} //function main ends execution

