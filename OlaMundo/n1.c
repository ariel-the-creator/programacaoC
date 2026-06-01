#include <stdio.h>

int main() {
    int idade = 31;
    float altura = 1.60;
    char opcao = 'A';
    char nome[20] = "Ariel";

    //Usando Scanf

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);
    
    printf("Digite a opção: \n");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);

    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);





}