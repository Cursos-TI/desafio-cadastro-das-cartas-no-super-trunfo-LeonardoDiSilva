#include <stdio.h>

int main(){
    /// Declaração de variáveis da primeira carta 
    char Estado1, Codigo1[4], Cidade1[50];
    int Turisticos1, População1;  // Turisticos é uma abreviação para os pontos turísticos
    float PIB1, Área1;

    /// Declaração de variáveis da segunda carta 
    char Estado2, Codigo2[4], Cidade2[50];
    int Turisticos2, População2;
    float PIB2, Área2;

    /// Entrada de dados da primeira carta
    printf("--Cadastro da Primeira Carta--\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado1); /// Espaço antes do %c evita problemas com a leitura dos especificadores

    printf("Digite o Código da Carta (ex: H04): \n");
    scanf(" %s", &Codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &Cidade1);

    printf("Digite a População: \n");
    scanf(" %d", &População1);

    printf("Digite a Área: \n");
    scanf(" %f", &Área1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &Turisticos1);

    printf("\n");

    /// Entrada de dados da segunda carta
    printf("--Cadastro da Segunda Carta--\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta (ex: H04): \n");
    scanf(" %s", &Codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &Cidade2);  
    
    printf("Digite a População: \n");
    scanf(" %d", &População2);

    printf("Digite a Área: \n");
    scanf(" %f", &Área2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &Turisticos2);

    printf("\n");

    /// Exibição das informações introduzidas
    printf("-Carta 1-\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f\n", Área1);
    printf("PIB: %.2f\n", PIB1);
    printf("Quantidade de Pontos Turísticos: %d\n", Turisticos1);

    printf("\n");

    printf("-Carta 2-\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f\n", Área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Quantidade de Pontos Turísticos: %d\n", Turisticos2);

    return 0;

}