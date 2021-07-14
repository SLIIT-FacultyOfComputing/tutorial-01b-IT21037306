/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  // declare variable
  float sub1,sub2 , total, average;

  //get user input
  printf("Enter the marks of Subject 1 = ");
  scanf("%f",&sub1);

  printf("Enter the marks of Subject 2 = ");
  scanf("%f",&sub2);

  //calculation
  total = sub1 +sub2;
  average = total /2;

  //output
  printf("The average is %.2f",average);
  return 0;
}

