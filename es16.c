#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int row;
	int col;
	int data;
}

struct lista {
	struct elemento nodo;
	struct lista *link;
}

struct lista *rest_lista(int row, int col, int matrice)
{	
	int i, j; 				// variabili per iterare sulla matrice
	struct lista *ptr;
	struct lista *head;			// puntatore testa della lista
	head->next = NULL;			// lo inizializzo come puntatore nullo
	head = (struct lista *)malloc(sizeof(struct lista));

	for(i=0; i<row; ++i) {
		for(j=0; i<col; ++j) {
			
			if(matrice[i][j] != 0) {
				head->next = ptr;
			}
		}
	}
}


int main()
{
	int row = 3;
	int col = 3;
	int matrice[row][col] = {{0,1,0},{7,0,0},{0,0,5}};
	struct lista *ptr;

	ptr = rest_lista(row,col,matrice);
	
	print_lista(ptr);

	return 0;
}
