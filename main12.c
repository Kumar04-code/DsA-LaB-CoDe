#include<conio.h>
#include<stdio.h>
int main()
{
int i, fact = 1, number;
printf("Enter the number to find the factorial: ");
scanf("%d", &number);
for(i = 1; i <= number; i++){
fact = fact * i;
}
printf("Factorial of the given number %d is %llu", number, fact);
return 0;
}
