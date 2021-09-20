#include <math.h>

_Bool isInArea(double x, double y)
{
	return (abs((abs(x) <= abs(y)) && (x >= -1) && (x <= 1) && (y <= 1) && (y >=-1)));
}
