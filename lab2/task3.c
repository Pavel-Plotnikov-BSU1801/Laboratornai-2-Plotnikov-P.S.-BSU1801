#include <stdio.h>

_Bool isInArea(double x, double y);
double f(double x);

void main(void)

{

    int value;
    double x;
    double y;
	printf("Choose task 1 or 2:");
	scanf("%d", &value);
    switch (value)
    {

    case 1:
		printf("Completing task 1 :\n");

		printf("x = ");

		scanf("%lf", &x);

		printf("y = ");

		scanf("%lf", &y);
		if (isInArea(x, y) == 1)
		{
			printf("Point is in the area :\n");
		}
		else
		{
			printf("Point is not in area :\n");
		}
        
        break;

    case 2:

		printf("Completing task 2 :\n");

		printf("x = ");

		scanf("%lf", &x);

		printf("%.3lf\n", f(x));
		break;

	default:

		printf("incorrect information, please try again ");

		break;
    }
}