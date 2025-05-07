#include <stdio.h>

int main(){
    /// Declaração de variáveis da primeira carta 
    char Estado1, Codigo1[4], Cidade1[50];
    int Turisticos1; // Turisticos é uma abreviação para os pontos turísticos
    float PIB1, Área1;
    unsigned long int População1;

    /// Declaração de variáveis da segunda carta 
    char Estado2, Codigo2[4], Cidade2[50];
    int Turisticos2;
    float PIB2, Área2;
    unsigned long int População2;

    /// Entrada de dados da primeira carta
    printf("--Cadastro da Primeira Carta--\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado1); 

    printf("Digite o Código da Carta (ex: H04): \n"); 
    scanf(" %s", &Codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", &Cidade1);

    printf("Digite a População: \n");
    scanf(" %u", &População1);

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
    scanf(" %[^\n]", &Cidade2);

    printf("Digite a População: \n");
    scanf(" %d", &População2);

    printf("Digite a Área: \n");
    scanf(" %f", &Área2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &Turisticos2);

    /// Calculoos de Pib per Capta e Densidade populacional
    float PerCapta1 = PIB1 / População1;
    float DensiPop1 = População1 / Área1;

    float PerCapta2 = (float) PIB2 / População2;
    float DensiPop2 = (float) População2 / Área2;

    /// DensiPopIn: Densidade populacional ao contrario, requisito do Super Poder
    float DensiPopIn1 = Área1 / População1;
    float DensiPopIn2 = Área2 / População2;


    float SuperPoder1 = (População1 + Área1 + PIB1 + Turisticos1 + PerCapta1 + DensiPopIn1);
    float SuperPoder2 = (População2 + Área2 + PIB2 + Turisticos2 + PerCapta2 + DensiPopIn2);

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
    printf("Densidade populacional: %.2f\n", DensiPop1);
    printf("Pib per Capta: %.2f\n", PerCapta1);


    printf("\n");

    printf("-Carta 2-\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f\n", Área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Quantidade de Pontos Turísticos: %d\n", Turisticos2);
    printf("Densidade populacional: %.2f\n", DensiPop2);
    printf("Pib per Capta: %.2f\n", PerCapta2);

    printf("\n");
    /// Comparação das cartas
    printf("--Comparação de Cartas--\n");
    printf("População: Carta 1 Venceu %d\n", População1 > População2);
    printf("Área: Carta 1 Venceu %d\n", Área1 > Área2);
    printf("PIB: Carta 1 Venceu %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 Venceu %d\n", Turisticos1 > Turisticos2);
    printf("Densidade Populacional: Carta 1 Venceu %d\n", DensiPop1 > DensiPop2);
    printf("PIB per Capita: Carta 1 Venceu %d\n", PerCapta1 > PerCapta2);
    printf("Super Poder: Carta 1 Venceu %d\n", SuperPoder1 > SuperPoder2);

    printf("\n");

    /// Comparação do atributo escolhido (PibperCapta)
    printf("A carta vencedora com maior Pib per Capta é: \n");
    if (PerCapta1 > PerCapta2)
    {printf("%s venceu com o maior Pib per Capta \n", Cidade1);}
    else 
    {printf("%s venceu com o maior Pib per Capta \n", Cidade2);}

    return 0;
}