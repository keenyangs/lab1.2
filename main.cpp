#include <iostream>
#include <conio.h>
#include <math.h>
int main()
{
	double a, b, c, D, x1, x2, x3;
	printf("Write a ");
	scanf_s("%lf", &a);
	printf("Write b ");
	scanf_s("%lf", &b);
	printf("Write c ");
	scanf_s("%lf", &c);
	D = b * b - 4 * a * c;
	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		printf("%lf\n", x1);
		printf("%lf\n", x2);
	}