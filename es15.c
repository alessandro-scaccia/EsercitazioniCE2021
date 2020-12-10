#include <stdio.h>
#include <stdbool.h>
#include <string.h>


char *parola = "OVATTAVO";


bool ver_palindroma_iter(char *stringa)
{
	bool flag = true;
	int i;
	int n = strlen(stringa);
	for(i=0; i<n/2; i++) {
		if(stringa[i] != stringa[n-1-i]) {
			flag = false;
		}
	}
	return flag;
}


int main()
{
	bool verifica;
	verifica = ver_palindroma_iter(parola);
	printf("La stringa e' palindroma: %c\n", (verifica == true) ? 'y' : 'n');
	return 0;
}
