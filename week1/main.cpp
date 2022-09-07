#include <stdio.h>



int main(void) {

	int a;
	int b;
	int c;

	a = 10;
	b = 20;

	c = a * b;

	printf("voer een geheel getal in...");
	scanf_s("%d", &b);

	if (b > 9) {

		printf("het invgevoerde getal was groter dan 9");

	}
	else {

		printf("het ingevoerde getal was kleiner of gelijk aan 9");

	}
	printf("programeren is %d leuk %d %d \n", a, b, c);
	printf("hoi");

	return 0;
}