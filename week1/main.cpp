#include <stdio.h>

 

int main(void) {
	
	int u;
	int a;
	int t;
	int v;
	int s;

	printf("enter the initial velocity...");
	scanf_s("%i", &u);

	printf("enter the acceleration of the object...");
	scanf_s("%i", &a);

	printf("enter the time that has elapsed...");
	scanf_s("%i", &t);

	v = u + a * t;
	s = u * t + 0.5 * a * t * t;

	printf("the final velocity is %d and the object traversed %d distance", v, s);

	return 0;
}