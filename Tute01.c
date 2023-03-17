/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float total, average;

  printf("Enter subject 1 mark : ");
  scanf("%d", &mark1);

  printf("Enter subject 2 mark : ");
  scanf("%d", &mark2);

  total = mark1 + mark2;
  average = total / 2.0;

  printf("Average is : %.2f", average);
   
  return 0;
}

