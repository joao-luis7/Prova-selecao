#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Funcionários com mais de 5 anos de casa recebem 20% do salário.
Funcionários com 2 a 5 anos (inclusive) de casa recebem 10% do salário.
Funcionários com menos de 2 anos de casa recebem 5% do salário.
Adicionalmente, se o funcionário tiver batido a meta de vendas
(informada como 'S' ou 'N'), ele recebe um bônus fixo de R$ 500,00, cumulativo 
com o bônus por tempo de casa. Crie um algoritmo que leia o salário do
funcionário, seu tempo de casa (em anos) e se ele bateu a meta de vendas. 
Calcule e escreva o valor total do bônus.*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    float salario, bonus;
    int anos;
    char tempo;

    printf("Digite qual seu salário atual: ");
    scanf("%f", &salario);
    printf("A quanto tempo você está na empresa (em anos)? ");
    scanf("%d", &anos);
    printf("Você bateu a meta de vendas? (S ou N) ");
    scanf("  %c", &tempo);

    if (tempo == 'S' || tempo == 's'){
       switch (tempo){
        case 0 ... 1:
            bonus = (salario * 0.05) + 500;
            break;
        case 2 ... 5:
            bonus = (salario * 0.10) + 500;
            break;
       default:
            bonus = (salario * 0.20) + 500;
            break;
        }
        printf("Parabéns pela meta batida. Seu bônus ficou em: R$%.2f\n", bonus);

    }
    else{
       switch (tempo){
        case 0 ... 1:
            bonus = (salario * 0.05);
            break;
        case 2 ... 5:
            bonus = (salario * 0.10);
            break;
       default:
            bonus = (salario * 0.20);
            break;
        }
        printf("Seu bônus sem a meta ficou em R$%.2f\n", bonus);
    }

    system("pause");
    return 0;
    

}