#include <stdio.h>
#include <stdlib.h>


struct lista {
	int row;
	int col;
	int elemento;
	struct lista *link;
};


struct lista *esamina_matrice(int row, int col, int matrix[row][col])
{
	struct lista *head;
	struct lista *ptr;
	int i, j;
	ptr = malloc(sizeof(struct lista));
	head = ptr;
	
	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			if(matrix[i][j] != 0) {
				ptr->row = i;
				ptr->col = j;
				ptr->elemento = matrix[i][j];
				ptr->link = malloc(sizeof(struct lista));
				ptr = ptr->link;		
			}
		}
	}
	ptr->link = NULL;
	return head;
}


void print_list(struct lista *ptr)
{
	printf("L: ");
	while(ptr->link != NULL) {
		printf("(%d,%d,%d)", ptr->elemento, ptr->row, ptr->col);
		ptr = ptr->link;
		if(ptr->link != NULL) {
			printf(" -> ");
		}
	}
	printf("\n");
}


int main()
{	
	int row = 4;
	int col = 4;
	int matrice[4][4] = {{0,0,0,0},{5,8,0,0},{0,0,3,0},{0,6,0,0}};
	struct lista *ret_lista;
	ret_lista = esamina_matrice(row,col,matrice);
	print_list(ret_lista);
}
