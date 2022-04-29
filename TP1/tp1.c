#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	
	char caracter;
	printf ("Ingrese una cadena: ");
	
	caracter=getchar();
	while(caracter!=EOF)
	     {if(isdigit(caracter)==0)
		    {if(isupper(caracter)==0)
		       {caracter=toupper(caracter);}
		     else
		       {caracter=tolower(caracter);}
		        putchar(caracter);
			}
		  caracter=getchar();
	     }

	return 0;
}
