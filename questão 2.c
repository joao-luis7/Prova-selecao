#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Um estacionamento cobra suas tarifas com base no tempo de perman�ncia e no 
tipo de ve�culo (Carro - 'C' ou Moto - 'M'). 
Motos:
At� 2 horas: R$ 5,00.
Acima de 2 horas: R$ 3,00 por hora adicional (ou fra��o de hora).
Carros:
At� 1 hora: R$ 8,00.
Acima de 1 hora e at� 4 horas: R$ 6,00 por hora adicional (ou fra��o de hora).
Acima de 4 horas: R$ 4,00 por hora adicional (ou fra��o de hora, ap�s as primeiras 4 horas). 
Crie um algoritmo que leia o tipo de ve�culo e o tempo de perman�ncia em horas 
(considere que o tempo pode ser um valor real, ex: 2.5 horas). 
Calcule e escreva o valor total a ser pago.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float hora, vtotal, adchora;
    char veiculo;

    printf("Qual seu ve�culo? ");
    scanf("%c", &veiculo);
    printf("Quanto tempo voc� ficou no estacionamento? ");
    scanf("%f", &hora);

    if (veiculo == 'C' || veiculo == 'c'){
        if (hora <= 1){
            vtotal = 8;}
        else if (hora > 1 && hora <= 4){
            adchora = hora-1;
            vtotal = (adchora*6)+8;
        }
        else{
            adchora =  hora-4;
            vtotal = (adchora*4)+26;
        }
        printf("Pelo estacionamento do carro, voc� parag� R$%.2f", vtotal);
    }
    else{
        if (hora <= 2){
            vtotal = 5;}
        else{
            adchora = hora-2;
            vtotal = (adchora*3)+5;
        }
        printf("Pelo estacionamento da moto, voc� parag� R$%.2f", vtotal);
    }

    system("pause");
    return 0;
}