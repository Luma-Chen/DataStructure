# include <stdio.h>

void mergesort (int *v, int inicio, int fim)
{
	int meio;
	if (inicio< fim)
	{
		meio= (inicio+ fim)/ 2;
		mergesort (v, inicio, meio);
		mergesort (v, meio + 1, fim);
		intercala (v, inicio, fim, meio);
	}
}
void intercala (int *v, int inicio, int fim, int meio)
{
	int i, aux[5], posLivre= inicio, inicioA1= inicio, inicioA2= meio+ 1;
	while (inicioA1<= meio && inicioA2<= fim)
	{
		if (v[inicioA1]> v[inicioA2])
		{
			aux[posLivre]= v[inicioA2];
			inicioA2++;
		} 
		else 
		{
			aux[posLivre]= v[inicioA1];
			inicioA1++;
		}
		posLivre++;
	}
	for (i= inicioA1; i<= meio; i++) 
	{
		aux[posLivre]= v[i];
		posLivre++;
	}
	for (i= inicioA2; i<= fim; i++) 
	{	
		aux[posLivre]= v[i];
		posLivre++;
	}
	for (i= inicio; i <= fim; i++) 
		v[i] = aux[i];
}
int main ()
{
	int i, v[5], inicio, fim, meio;
	for (i= 0; i< 5; i++)
	{
		printf ("\nDigite o numero inteiro:");
		scanf ("%d", &v[i]);
	}	
	inicio= 0;
	fim= 4;
	mergesort (v, inicio, fim);
	intercala (v, inicio, fim, meio);
	for (i= 0; i< 5; i++)
		printf("\n%d", v[i]);
	return 0;
}

