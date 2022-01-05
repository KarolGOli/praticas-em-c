// exercício utilizando a biblioteca math.h
// cálculo de área e perímetro de um hexágono

// import de bibliotecas
#include <stdio.h>
#include <math.h>

// função que realiza o cálculo da área e perímetro do hexágono
void calc_hexa(float l, float *area, float *perimetro){
    *area = (3* pow(l,2) * sqrt(3))/2;
    *perimetro = 6 * l;
}

// Função principal 
int main(){

    // criação das variáveis
    float lado_hexa, area_hexa, perimetro_hexa;

    // leitura de dados informados
    printf("Qual o valor do lado do hexagono? ");
    scanf("%f", &lado_hexa);

    // laço de repetição onde só é interrompido quando for maior que zero
    while(lado_hexa > 0){
        calc_hexa(lado_hexa, &area_hexa, &perimetro_hexa);
        printf("\n A area do hexagono e igual a %.2f", area_hexa);
        printf("\n O perimetro do hexagono e igual a %.2f", perimetro_hexa);

        printf("\n Insira o valor do lado do hexagono: ");
        scanf("%f", &lado_hexa);
    }
}