#include<stdio.h>
int main()
{
int num, rem;
printf("Enter the number: \t");
scanf("%d", &num);

rem=num%2;
if (rem==0)

 {
  printf("Number is Even", num);

 }

else

 {
  printf("Number is Odd", num);
 }

return 0;
}