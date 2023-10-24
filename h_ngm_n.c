//
// Created by Ciro on 17/10/2023.
//

#include "h_ngm_n.h"
#include <stdio.h>
#include <stdlib.h>

Lista *newLista() {
    Lista * aux = NULL;
    aux= malloc(sizeof (Lista));
    if(aux==NULL){
        printf("ERROR al asignar memoria.\n");
        exit(-1);
    } else{
        aux->cabeza=NULL;
    }
    return aux;
}

Nodo *newNodo(char caracter) {
    Nodo * aux =NULL;
    aux= malloc(sizeof (Nodo));
    if(aux==NULL){
        printf("ERROR al asignar memoria.\n");
        exit(-1);
    }else{
        aux->caracter=caracter;
        aux->sig=NULL;
    }
    return aux;
}

void ingresarPalabra(Lista * Lista1) {
    char c;
    printf("Ingresar palabra.('/' para finalizar).\n");
    while(1){
        printf("Ingresar letra: ");
        scanf("%c",&c);
        if(c=='/'){
            break;
        }
        enlistar(Lista1, newNodo(c));
    }
}

void enlistar(Lista *lista, Nodo *nodo) {
    Nodo * aux= lista->cabeza;
    if(aux==NULL){
        lista->cabeza=nodo;
    }
    while (aux->sig!=NULL){
        aux= aux->sig;
    }
    aux->sig=nodo;
    nodo->sig=NULL;
}

void adivinar(Lista *listaP, Lista *listaV, char letra) {
    Nodo * auxP = listaP->cabeza;
    Nodo * auxV = listaV->cabeza;
    while (auxP != NULL){
        if(auxP->caracter==letra){
            auxV->caracter=letra;
        }
        auxP=auxP->sig;
        auxV=auxV->sig;
    }
}

int tamLista(Lista *lista) {
    int size;
    Nodo * aux =lista->cabeza;
    while (aux!=NULL){
        size++;
        aux=aux->sig;
    }
    return size;
}

void guionar(Lista * listaV, int tam) {
    for (int  i= 0; i < tam; ++i) {
        enlistar(listaV, newNodo('_'));
    }
}

void imprimir(Lista *lista) {
    Nodo * aux = lista->cabeza;
    while(aux != NULL){
        printf("%c ",aux->caracter);
        aux=aux->sig;
    }
    printf("\n");
}
