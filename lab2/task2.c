#include <math.h>

double f(double x)
{
	double result;
    x==-sqrt(7) ?  (result = 0) : (((x != -sqrt(7)) && (x<=0)) ? (result = -x / (pow(x, 2) - 7)): (result = log(x) + 9));
	return result;
}

