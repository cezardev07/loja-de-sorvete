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

        printf("\n DIGITE O NUMERO DO SABOR QUE VOCE QUER SABOREA => ");
        scanf("%d", & sorvete);
    }while ((sorvete <1) || (sorvete >4));

    switch (sorvete) {
        case 1:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t =====================================================");
            printf("\n\t MORANGO : HUMM, OTIMA ESCOLHA SORVETE DELICIOSO ^-^\n");
            printf("\t =====================================================\n");
            // ----------------- VALOR NUTRICIONAL -----------------
            printf("\n\t\t\t  - VALOR NUTRICIONAL -\n");
            printf("\n\t CALORIAS    | 253 KCAL\n");
            printf("\n\t PROTEINAS   | 36,4 G\n");
            printf("\n\t VITAMINA    | A \n");
            printf("\n\t VITAMINA    | C \n");

            printf("\n\t =====================================================\n");
            printf("\n OBS: OS VALORES CONTIDO NESSA TABELA SAO APENAS FALACIAS, NAO-\n");
            printf(" SE APEGUE AOS VALORES, SAO APENAS EXEMPLOS\n");
           
            break;
        
        case 2:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t =====================================================");
            printf("\n\t CHOCOLATE : HUMM, OTIMA ESCOLHA SORVETE DELICIOSO ^-^\n");
            printf("\t =====================================================\n");
            // ----------------- VALOR NUTRICIONAL -----------------
            printf("\n\t\t\t  - VALOR NUTRICIONAL -\n");
            printf("\n\t CALORIAS    | 216 KCAL\n");
            printf("\n\t PROTEINAS   | 3,8 G\n");
            printf("\n\t VITAMINA    | C \n");
            printf("\n\t VITAMINA    | B6 \n");

            printf("\n\t =====================================================\n");
            printf("\n OBS: OS VALORES CONTIDO NESSA TABELA SAO APENAS FALACIAS, NAO-\n");
            printf(" SE APEGUE AOS VALORES, SAO APENAS EXEMPLOS\n");
            break;
        
        case 3:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t =====================================================");
            printf("\n\t COCO : HUMM, OTIMA ESCOLHA SORVETE DELICIOSO ^-^\n");
            printf("\t =====================================================\n");
            // ----------------- VALOR NUTRICIONAL -----------------
            printf("\n\t\t\t  - VALOR NUTRICIONAL -\n");
            printf("\n\t CALORIAS    | 130 KCAL\n");
            printf("\n\t PROTEINAS   | 3,8 G\n");
            printf("\n\t VITAMINA    | C \n");
            printf("\n\t VITAMINA    | B6 \n");

            printf("\n\t =====================================================\n");
            printf("\n OBS: OS VALORES CONTIDO NESSA TABELA SAO APENAS FALACIAS, NAO-\n");
            printf(" SE APEGUE AOS VALORES, SAO APENAS EXEMPLOS\n");
            break;
        
        case 4:
            // ----------------- SABOR ESCOLHIDO -----------------
            printf("\n\t ======================================================");
            printf("\n\t NAPOLITANO : HUMM, OTIMA ESCOLHA SORVETE DELICIOSO ^-^\n");
            printf("\t ======================================================\n");
            // ----------------- VALOR NUTRICIONAL -----------------
            printf("\n\t\t\t  - VALOR NUTRICIONAL -\n");
            printf("\n\t CALORIAS    | 216 KCAL\n");
            printf("\n\t PROTEINAS   | 3,8 G\n");
            printf("\n\t VITAMINA    | C \n");
            printf("\n\t VITAMINA    | B6 \n");

            printf("\n\t ======================================================\n");
            printf("\n OBS: OS VALORES CONTIDO NESSA TABELA SAO APENAS FALACIAS, NAO-\n");
            printf(" SE APEGUE AOS VALORES, SAO APENAS EXEMPLOS\n");
            break;
    }

    return 0;
}