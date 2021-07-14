/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  //Declare Variable
  float distance ,amount;

  //Get input from user
  printf("Enter the Distance = ");
  scanf("%f",&distance);
  
  //Calculation
  if (0 < distance && distance <= 30 )
  {
    amount = distance * 50 ;
  }
  else if (distance > 30)
  {
    amount = (distance - 30) * 40 + (50*30);
  }

  //output
  printf("The total amount is = %.2f",amount);
  
  return 0;
}
