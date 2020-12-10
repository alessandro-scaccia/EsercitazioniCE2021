#include <stdio.h>

char A[] = {'a','b','c','d','e','f','g','h','i','l','m','n'};
int N = 12;


void print_arr(int N, char arr[])
{
	int i;
	for(i=0; i<N; i++) {
		printf("%c ",arr[i]);
	}
	puts("");
}


void scambia_elem(int N, char arr[])
{
	int i, halfN = N/2;
	char arrcpy[halfN];
	
	for(i=0; i<N; i++) {
		if(i<halfN) {
			arrcpy[i] = arr[i];
			arr[i] = arr[i+halfN];
		}
		else
			arr[i] = arrcpy[i-halfN];
	}
}


int main()
{
	print_arr(N,A);
	scambia_elem(N,A);
	print_arr(N,A);
	return 0;
}
