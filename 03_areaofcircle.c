         //area of circle 


#include <stdio.h>
int main(){
    
    float area, radius;
 
    printf ("enter the radius of circle :");

  scanf ("%f", &radius);  

   //area = π · r2

  area = 3.14159 * radius * radius;

  printf ("the area of circle is :%f cm",area);

   return 0;
}