#include <stdio.h>
#include <stdbool.h>
#include <string.h>


char *parola = "AOVATTAVO";


bool ver_palindroma_iter(char *stringa)
{
	bool flag = true;
	int i;
	int n = strlen(stringa);
	for(i=0; i<n/2; i++) {
		if(stringa[i] != stringa[n-1-i]) {
			flag = false;
			break;
		}
	}
	return flag;
}


bool palindroma_aux(char a, char b, char stringa[])
{
	if(a == b)
		return true;
	if(stringa[a] != stringa[b])
		return false;
	if(a < b+1)
		return palindroma_aux(a+1,b-1,stringa);
}


bool ver_palindroma_rec(char *stringa)
{
	int lung = strlen(stringa);
	if(lung == 0)
		return true;
	else
		return palindroma_aux(0,lung-1,stringa);
}


int main()
{
	bool verifica;
//	verifica = ver_palindroma_iter(parola);
	verifica = ver_palindroma_rec(parola);
	printf("La stringa e' palindroma: %c\n", (verifica == true) ? 'y' : 'n');
	return 0;
}
