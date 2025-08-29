#include <stdio.h>
#include <string.h>

// Definição de constantes
#define MAX_STRING_LENGTH 50
const float TAXA_JUROS = 0.05; // 5% ao ano

int main() {
    // Variáveis primárias
    int num1, num2;
    float num3;
    char str[MAX_STRING_LENGTH];

    // Variáveis para o exercício de juros
    float valorInicial, valorFinal;
    int anos;

    // Variáveis compostas
    int vetor[3] = {10, 20, 30}; 
    int matriz[2][2] = {{1, 2}, {3, 4}}; 

    // Ponteiro
    int *ptr_vetor;

    // Entrada do usuário para a parte de juros
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valorInicial);

    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    // Cálculo do investimento com juros simples
    valorFinal = valorInicial * (1 + (TAXA_JUROS * anos));

    // Exibição do resultado
    printf("\n==== RESULTADO DO INVESTIMENTO ====\n");
    printf("Valor Inicial: %.2f\n", valorInicial);
    printf("Taxa de Juros: %.2f%%\n", TAXA_JUROS * 100);
    printf("Anos: %d\n", anos);
    printf("Valor Final: %.2f\n", valorFinal);

    // Manipulação com ponteiro
    ptr_vetor = &vetor[0];   // Ponteiro aponta para o primeiro elemento do vetor
    *ptr_vetor = 99;         // Modificando o primeiro elemento via ponteiro

    // Exibição dos elementos do vetor
    printf("\n==== VETOR ====\n");
    for(int i = 0; i < 3; i++) {
        printf("vetor[%d] = %d (endereco: %p)\n", i, vetor[i], (void*)&vetor[i]);
    }

    // Exibição dos elementos da matriz
    printf("\n==== MATRIZ ====\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("matriz[%d][%d] = %d (endereco: %p)\n", i, j, matriz[i][j], (void*)&matriz[i][j]);
        }
    }

    return 0;
}
