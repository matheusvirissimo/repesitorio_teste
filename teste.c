int soma(){
    int a, soma = 0;
        for(int i = 0; i < 2; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &a);
            soma = soma + a;
        }
    return soma;
}

int subtrair(){
    int a, subtracao = 0;
    for(int i = 0; i < 2; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &a);
                if(i = 0){

                }
            subtracao = subtracao + a;
        }
    subtracao = subtracao - a;
    return subtracao;
}

double raiz_quadrada(){
    double x, resultado = 0;
    printf("Digite o numero: ");
    scanf("%d", &x);
    resultado = sqrt(x);
    return resultado;
}

int multiplicacao(){
    int x, multiplies = 1;
        for(int i = 0; i < 2; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &x);
            multiplies = multiplies * x;
        }
    return multiplies;
}

#include <math.h>
#include <stdio.h>
int main (){
    int a;
    int menu;
    printf("/tCalculadora de soma, subtracao e raiz quadrada em C\n\n");
    do{
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Raiz quadrada○\n");
        printf("4 - Multiplicacao\n");
        printf("5 - Divisao");
        printf("6 - Sair");
            switch(a){
                case 1:
                    soma();
                    break;
                case 2:
                    subtrair();
                    break;
                case 3:
                    raiz_quadrada(); 
                    break;
                case 4:
                    multiplicacao(); 
                    break;
                case 5: 
                    break;
                default:
                    printf("Obrigado por usar!")
                    break;
            }              
    }while(menu != 6);
}