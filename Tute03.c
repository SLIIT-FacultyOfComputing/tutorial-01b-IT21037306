/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  //declare variable
  int num , i , total = 0;

  //get input from user
  printf("Enter the number = ");
  scanf("%d",&num);
  
  //calculation
  for(i=1 ; i <= num ; i++)
  {
    total += i ; 
  }

  //output
  printf("The total is %d",total);
  
  return 0;
}

