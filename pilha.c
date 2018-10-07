#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct pilha {
  No *primeiro;
};

Pilha* pilha_criar(int tamanho) {
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	p->dados =(Token*) malloc(tamanho*sizeof(Token));
	p->tamanho = tamanho;
	return p;
}

void pilha_push(Pilha *p, Token t) {
	if(p->topo >= p->tamanho) {
		printf("Pilha Cheia!\n");
		return;
	}
	p->dados[p->topo] = info;
	p->topo++;
}

Token pilha_pop(Pilha *p) {
	if(p->topo == 0) {
		printf("Pilha Vazia\n");
		return 0;
	}
	p->topo--;
	return p->dados[p->topo];

}

Token pilha_primeiro(Pilha *p) {
	    if(p->primeiro == NULL){
        printf("Pilha Vazia!\n");
        return;
    }
    Token tmpToken = p->primeiro->token;
	return(tmpToken);
}

int pilha_vazia(Pilha *p) {
	if (p->primeiro == NULL){
        return(1);
    }
    else{
        return(0);
    }
}

void pilha_destruir(Pilha *p) {
	free(p->dados);
	free(p);
}

void pilha_imprimir(Pilha *p) {
		if(p->primeiro == NULL){
        printf("Pilha Vazia!\n");
        return;
    }
    No *tmp = p->primeiro;
    while(tmp != NULL){
        Token tmpToken = tmp->token;
        token_imprimir(tmpToken);
        tmp = tmp->prox;
    }
}
