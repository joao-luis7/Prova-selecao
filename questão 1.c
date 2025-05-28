#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Funcion�rios com mais de 5 anos de casa recebem 20% do sal�rio.
Funcion�rios com 2 a 5 anos (inclusive) de casa recebem 10% do sal�rio.
Funcion�rios com menos de 2 anos de casa recebem 5% do sal�rio.
Adicionalmente, se o funcion�rio tiver batido a meta de vendas
(informada como 'S' ou 'N'), ele recebe um b�nus fixo de R$ 500,00, cumulativo 
com o b�nus por tempo de casa. Crie um algoritmo que leia o sal�rio do
funcion�rio, seu tempo de casa (em anos) e se ele bateu a meta de vendas. 
Calcule e escreva o valor total do b�nus.*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    float salario, bonus;
    int anos;
    char tempo;

    printf("Digite qual seu sal�rio atual: ");
    scanf("%f", &salario);
    printf("A quanto tempo voc� est� na empresa (em anos)? ");
    scanf("%d", &anos);
    printf("Voc� bateu a meta de vendas? (S ou N) ");
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
        printf("Parab�ns pela meta batida. Seu b�nus ficou em: R$%.2f\n", bonus);

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
        printf("Seu b�nus sem a meta ficou em R$%.2f\n", bonus);
    }

    system("pause");
    return 0;
    

}