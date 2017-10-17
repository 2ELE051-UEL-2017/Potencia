double potencia(double base, int expoente)
{
	double res = 1.0;
	int i;

	for (i = 0; i < expoente; i++)
		res = res*base;

	return res;
}