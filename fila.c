#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct fila {
  No *primeiro, *ultimo;
};

Fila* fila_criar() {
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->primeiro = NULL;
	f->ultimo = NULL;
	return f;
}

void fila_adicionar(Fila *f, Token t) {
	No *n = (No*) malloc(sizeof(No));
	n->token = token;
	n->prox = NULL;
	
	if(f->ultimo == NULL) {
		f->primeiro = n;
		f->ultimo = n;
		return;
	}
	
	f->ultimo->prox = n;
	f->ultimo = n;
}

Token fila_remover(Fila *f) {
	if(f->primeiro == NULL){
		printf("Fila Vazia!\n");
		return 0;
	}
	No *excluir = f->primeiro
	f->primeiro = f->primeiro->prox;
	
	if(f->primeiro == NULL){
		f->ultimo = NULL;
	}
	
	Token infor = excluir->token;
	free(excluir);
	return token;
}

int fila_vazia(Fila *f) {
	if(f->primeiro == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void fila_destruir(Fila *f) {
	free(f->token);
	free(f);
}

void fila_imprimir(Fila *f) {
	No *tmp = 1->primeiro;
	while(tmp !=NULL){
		printf("%lfn", tmp->token);
		tmp = tmp->prox;
	}
}
