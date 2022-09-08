#include <stdio.h>

 

int main(void) {
	int a;
	int b;
	int c;
	int sum;
	int average;
	int product;
	int smallest;
	int largest;

	printf("enter three different integers:");
	scanf_s("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	printf("Sum is %d\n", sum);

	average = sum / 3;
	printf("average is %d\n", average);
	
	product = a * b * c;
	printf("product is %d\n", product);

	if (a > b && a > c)
		printf("largest is %d\n", a);
	else if (b > a && b > c)
		printf("larest is %d\n", b);
	else if (c > a && c > b)
		printf("largest is %d\n", c);

	if (a < b && a < c)
		printf("smallest is %d\n", a);
	else if (b < a && b < c)
		printf("smallest is %d\n", b);
	else if (c < a && c < b)
		printf("smallest is %d\n", c);

	return 0;
}