#include<stdio.h>

int main() {
    //Declaration of variables
    int contador_total = 0, contador_sit_1 = 0, contador_sit_2 = 0,
    contador_sit_3 = 0, contadior_sit_4 = 0, identificacao, defeito;

    //Input
    printf("Informe a identificação: ");
    scanf("%d", &identificacao);

    while(identificacao != 0) {
        printf("1 - Necessita de esfera. \n");
        printf("2 - Necessita de limpeza. \n");
        printf("3 - Necessita de troca do cabo ou conector. \n");
        printf("4 - Quebrado ou inutilizado. \n");
        scanf("%d", &defeito);

        //Process
    if(defeito == 1){
        contador_sit_1 = contador_sit_1 + 1;
    }
     if(defeito == 2){
        contador_sit_2 = contador_sit_2 + 1;
    }
     if(defeito == 3){
        contador_sit_3 = contador_sit_3 + 1;
    }
     if(defeito == 4){
        contador_sit_4 = contador_sit_4 + 1;
    }
    contador_total = contador_total + 1;
    
    printf("Informe a identificação: ");
    scanf("%d", &identificacao);  

    }
    float p1, p2, p3, p4; // (float) cast
    p1 = ((float)contador_sit_1 / (float)contador_total * 100);
    p2 = ((float)contador_sit_2 / (float)contador_total * 100);
    p3 = ((float)contador_sit_3 / (float)contador_total * 100);
    p4 = ((float)contadior_sit_4 / (float)contador_total * 100);

    printf("Quantidade de mouses %d\n\n", contador_total);
    printf("Situação \t\tQuantidade \tPercentual\n");
    printf("1- Necessita de esfera \t\t\t%d \t%.2f%%\n", contador_sit_1, p1);  
    printf("2- Necessita de limpeza. \t\t\t%d \t%.2f%%\n", contador_sit_2, p2);  
    printf("3- Necessita de troca do cabo ou conector \t\t\t%d \t%.2f%%\n", contador_sit_3, p3);  
    printf("4- Quebrado ou inutilizado \t\t\t%d \t%.2f%%\n", contadior_sit_4, p4);  
}