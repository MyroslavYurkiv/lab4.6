#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int j, i;
	P = 0;
	i = 1;
	while (i <= 10)
	{
		S = 0;
		j = 1;
		while (j <= i)
		{
			S += sin(j);
			j++;
		}
		P += (cos(i) * S) / (sin(i) + S);
		i++;
	}
	cout << P << endl;
	P = 0;
	i = 1;
	do {
		S = 0;
		j = 1;
		do {
			S += sin(j);
			j++;
		} while (j <= i);
		P += (cos(i) * S) / (sin(i) + S);
		i++;
	} while (i <= 10);
	cout << P << endl;
	P = 0;
	for (i = 1; i <= 10; i++)
	{
		S = 0;
		for (j = 1; j <= i; j++)
		{
			S += sin(j);
		}
		P += (cos(i) * S) / (sin(i) + S);
	}
	cout << P << endl;
	P = 0;
	for (i = 10; i >= 1; i--)
	{
		S = 0;
		for (j = i; j >= 1; j--)
		{
			S += sin(j);
		}
		P += (cos(i) * S) / (sin(i) + S);
	}
	cout << P << endl;
	return 0;
}