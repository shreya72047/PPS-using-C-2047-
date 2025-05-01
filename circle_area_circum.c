#include<stdio.h>
 int main()
{
float area, circum, dia;

printf("Enter the Diameter of Circle:\t");

scanf("%f", &dia);

area=(3.14)*(dia/2)*(dia/2); 
printf("Area of Circle is %f\t", area);

circum=2*(3.14)*(dia/2);

printf("\nCircumference of Circle is %f\t", circum);

return 0;
}