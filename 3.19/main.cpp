#include <stdio.h>

int main(void) 
{
	float interest;
	float principal = 1;
	float rate;
	int days;

	while (principal != -1)
	{
		printf("enter loan prinicpal (-1 to end):");
		scanf_s("%f", &principal);
		if (principal >= 0)
		{
			printf("enter interest rate:");
			scanf_s("%f", &rate);
			printf("enter term of the loan in days:");
			scanf_s("%d", &days);

			interest = principal * rate * days / 365;
			printf("the interest charge is %.2f\n\n", interest);

		}
		else if (principal != -1 && principal <= 0){
			printf("please enter a number above 0\n\n");
			principal = 1;
		}
	}

	return 0;
}