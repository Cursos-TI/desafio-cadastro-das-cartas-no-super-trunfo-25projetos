#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    char Estado = 'A';
    int Código = 01;
    char Cidade[10] = "Manaus";
    int População = 2000000;
    char Área[20] = "11.401 Km2";
    char PIB [15] = "103 bilhões";
    char Turismo[25] = "35 pontos";

    printf("Estado: %c\n", Estado);
    printf("Código: %d\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("Populacão: %d\n", População);
    printf("Área: %s\n", Área);
    printf("PIB: %s\n", PIB);
    printf("Turismo: %s\n",Turismo);








    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
