#include<locale.h>
#include <math.h>
#include <windows.h>
main()
{  setlocale(LC_ALL,"Portuguese");
   int n, cont=0, x,soma=0,produto=1,maior,menor,contPAR=0,cont2=0;
   float porcentagem,media;
   printf ("Quantos números processar?\n");
   scanf ("%d", &n);
   do
   {  printf ("Digite um número\n");
      scanf("%d",&x);
      cont++;
      soma=soma+x;
      produto=produto*x;
      if(cont==1)
      {  maior=x;
         menor=x;
	  }
	  else
	    {  if(x>maior)
	         maior=x;
	       if(x<menor)
		     menor=x;  
		}
	  if(x%2==0)
	    contPAR++;
	  if(x<6)
	    cont2++;		
   } while(cont<n);
   media=soma/n;
   porcentagem=(100.*contPAR)/n;
   printf("Soma=%d, Produto=%d, Média=%.2f, Maior=%d, Menor=%d\n",soma,produto,media,maior,menor); 
   printf("Porcentagem de pares= %.2f%%, Quantidade de números menores do que 6=%d\n",porcentagem,cont2);
  
}.+
