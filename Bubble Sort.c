#include <stdio.h>

int main ()
{
	int i, j, k, menor;
	int v[]= {1, 3, 4, 2, 5, 6};
	for (i= 0; i < 5; i++)
	{
		for (j= i + 1; j < 6; j++)
		{
			if (v[i]> v[j])
			{
				menor= v[i];
				v[i]= v[j];
				v[j]= menor;
			}
		}
	}
	for (k= 0; k< 6; k++)
	{
		printf ("\t%d", v[k]);
	}	
	return 0;
}
