#include <stdio.h>
#include "h_ngm_n.h"

int main() {
    Lista * palabra=newLista();
    Lista * vacia =newLista();

    ingresarPalabra(palabra);
    imprimir(palabra);
    guionar(vacia, tamLista(palabra));
    imprimir(vacia);

    return 0;
}
