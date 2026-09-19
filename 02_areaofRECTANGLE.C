            // AREA OF RECTANGLE



#include <stdio.h>
int main() {

  float length , breadth ,area;
 
  printf ("Enter the length of rectangle :");

  scanf ("%f",&length );

 printf ("Enter the breadth of rectangle :");

  scanf ("%f",&breadth);

  area = length*breadth;

  printf ("The area of rectangle is : %f",area);
  
  return 0;
}