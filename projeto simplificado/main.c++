#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {

    int sorvete;

    do{
        printf("\n OLA! SEJA BEM VINDO A NOSSA BARRAQUINHA DE SORVETE\n\n");

        printf("\t OPCAO (1) ... MORANGO\n");
        printf("\t OPCAO (2) ... CHOCOLATE\n");
        printf("\t OPCAO (3) ... COCO\n");
        printf("\t OPCAO (4) ... NAPOLITANO\n");

        printf("\n DIGITE O NUMERO DO SABOR => ");
        scanf("%d", & sorvete);
    }while ((sorvete <1) || (sorvete >4));

    switch (sorvete) {
        case 1:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t SABOR: MORANGO\n");           
            break;
        
        case 2:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t SABOR: CHOCOLATE\n");
            break;
        
        case 3:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t SABOR: COCO\n");
            break;
        
        case 4:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t SABOR: NAPOLITANO\n");
            break;
    }

    return 0;
}