// cálculo de potenciação

// import de bibliotecas
#include <stdio.h>

// variável para armazenar os valores da função de cálculo
int calculo_potencia(int base, int expoente);

// Função principal 
int main(){

    // criação de variáveis que vão receber os valores
    // informados pelo usuário
    int base_informada = 0, expoente_informado = 0, resultado_potencia;

    // recebimento e leitura dos dados de base e expoente
    printf("Insira o valor da base de calculo: ");
    scanf("%d", &base_informada);

    printf("Insira o valor do expoente para o calculo: ");
    scanf("%d", &expoente_informado);

    // comando para receber o resultado do cálculo
    resultado_potencia = calculo_potencia(base_informada, expoente_informado);
    
    // exibe os valores informados e o resultado do cálculo para o usuário
    printf("\nO resultado da pontenciacao do numero %d elevado a %d e igual a:  %d ", base_informada, expoente_informado, resultado_potencia);

    return 0;
}

// função para realização do cálculo de potência (recursiva)
int calculo_potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    } else {
        return (base * calculo_potencia(base,expoente - 1));
    }
}