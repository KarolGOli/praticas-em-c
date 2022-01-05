// ler, exibir e classificar informacoes do RU

// import de bibliotecas
#include <stdio.h>

// Função principal
int main(){

    // criação do vetor RU, ponteiro do vetor e também variável de contagem
    int vetorRu[7], i, *ptr_vetorRu;

    // criação das variáveis para armazenar o maior e menor número do vetor
    int num_vet_maior, num_vet_menor;

    // declaração do ponteiro referente ao vetor
    ptr_vetorRu = vetorRu;

    // laço de repetição para adicionar e
    // salvar os números nas posições corretas do vetor
    for(i = 0; i < 7; i++){
        // leitura de dados do RU
        printf("\n Insira os numeros do seu RU para cada posicao do vetor: ");
        scanf_s("%d", &vetorRu[i]);
    }

    // exibição do da RU já inserida no vetor
    printf("\n Vetor preenchido com a RU: ");

    // laço de repetição para passar por cada posição do vator e
    // função de condição para validação dos valores e definição do maior e menor
    for(i = 0; i < 7; i++){
        printf("\n [%d] = %d", i, ptr_vetorRu[i]);

        if(i == 0){
            num_vet_maior = ptr_vetorRu[i];
            num_vet_menor = ptr_vetorRu[i];
        } else{
            if(ptr_vetorRu[i] > num_vet_maior){
                num_vet_maior = ptr_vetorRu[i];
            }

            if(ptr_vetorRu[i] < num_vet_menor){
                num_vet_menor = ptr_vetorRu[i];
            }
        }
    }

    // exibir dados coletados
    printf("\n O maior numero do seu RU e: %d \n", num_vet_maior);
    printf("\n O menor numero do seu RU e: %d", num_vet_menor);

    return 0;
}