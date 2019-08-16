#include <stdio.h>

void troca (int *x, int *y)
{
	int aux;
	aux= *x;
	*x= *y;
	*y= aux;
}
void quicksort (int *v, int inf, int sup)
{
	int i, j, chave;
	if (sup- inf< 2)
	{
		if ((sup- inf)== 1)
		{
			if (v[inf]> v[sup])
			{	
				troca (&v[inf], &v[sup]);
			}
		}
	}
	else
	{
		i= inf;
		j= sup;
		chave= v[inf];
	while (j> i)
	{
		i++;
		while (v[i]< chave)
		{
			i++;
		}
		while (v[j]> chave)
		{
			j--;
		}
		if (j> i)
		{
			troca (&v[i], &v[j]);
		}
	}
	troca (&v[inf], &v[j]);
	quicksort (v, inf, j- 1);
	quicksort (v, j+ 1, sup);
	} 
}
int main ()
{
	int i, inf, sup, *x, *y;
	int v[6]= {1, 4, 6, 2, 3, 5};
	troca (&x, &y);
	inf= 0;
	sup= 5;
	quicksort (v, inf, sup);
	for (i= 0; i< 6; i++)
		printf ("\t%d", v[i]);
	return 0;
}

