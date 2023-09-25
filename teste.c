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
        printf("4 - Sair\n");
            switch(a){
                case 1:
                    soma();
                    break;
                case 2:
                    subtrair(); // linha também correta
                    break;
                case 3:
                    raiz_quadrada(); //linha correta
                    break;
                default:
                    break;
            }              
    }while(menu != 4);
}