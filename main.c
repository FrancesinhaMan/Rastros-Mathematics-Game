#include <stdio.h>
#include <string.h>
#include "interface.h"
#include "logica.h"
int main() {
    entrada();
    pedir_entrada();
    ESTADO *e = inicializar_estado();
    interpretador(e);
    while(?){
        jogar(?);
    }
    fim(?);
    return 0;
}