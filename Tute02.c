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
  float dist , finalamt ;
  printf("ENTER THE DISTANCE TRAVELLED BY THE VAN:") ;
  scanf("%f", &dist);
  if (dist < 30 )
    finalamt = dist * 50 ;
  else
    finalamt = 30*50 + (dist-30)*40 ;
    printf("AMOUNT TO BE PAID FOR THE RENTED VEHICLE IS == %.3f\n",finalamt);

  return 0;
}
