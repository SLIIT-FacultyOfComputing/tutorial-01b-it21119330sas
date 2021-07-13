/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int sum , mark1 , mark2 ;
  float avg ;
  printf("ENTER THE MARKS OF SUBJECT 1:"); 
  scanf("%d", &mark1) ;
  printf("ENTER MARKS OF THE SUBJECT 2: ");
  scanf("%d", &mark2);
  sum = mark1 + mark2 ;
  avg=sum/2.00;
  printf("THE AVERAGE OF THE TWO MARKS IS : %f",avg ); 
  
  return 0;
}

