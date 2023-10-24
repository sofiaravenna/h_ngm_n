//
// Created by Ciro on 17/10/2023.
//

#ifndef H_NGM_N_H_NGM_N_H
#define H_NGM_N_H_NGM_N_H

typedef struct nodo{
    char caracter;
    struct nodo * sig;
}Nodo;

typedef struct lista{
    Nodo * cabeza;
}Lista;
Nodo * newNodo(char caracter);
Lista * newLista();
int tamLista(Lista * lista);
void ingresarPalabra(Lista * lista);
void enlistar(Lista * lista, Nodo * nodo);
void guionar(Lista * listaV, int tam);
void jugar(Lista * lista);
void adivinar(Lista * listaP, Lista * listaV, char letra);
void imprimir(Lista * lista);
#endif //H_NGM_N_H_NGM_N_H
