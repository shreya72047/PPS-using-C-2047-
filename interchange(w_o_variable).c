#include<stdio.h>
int main()
{
int a,b;

printf("Enter number 1:",a);
scanf("%d", &a);

printf("Enter number 2:",b);
scanf("%d", &b);

printf("Initially value of a is %d \n",a);
printf("Initially value of b is %d \n",b);

b=a+b;
a=b-a;
b=b-a;

printf("Interchange the value of a in %d \n", a);
printf("Interchange the value of b in %d \n", b);

return 0;
}