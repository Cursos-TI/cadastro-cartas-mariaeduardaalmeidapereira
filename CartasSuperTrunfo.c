#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  // Área para definição das variáveis para armazenar as propriedades das cidades

struct carta
{
char estado;
char codigo [10];
char cidade [50];
unsigned long int populacao;
float area;
float pib;
unsigned long int pontos_turisticos;
float densidade;
float pib_per_capita;
float super_poder;

};

  // Área para entrada de dados
int main () {

// Carta 01
struct carta carta1;

printf ("\n-----PRIMEIRA CARTA------\n");

printf ("Digite o estado (A a H)  ");
scanf ("%c", &carta1.estado);

scanf ("%*c");

printf ("Digite o codigo: (Ex: A01)");
scanf (" %s", carta1.codigo);

printf ("Digite o nome da cidade: ");
scanf (" %s", carta1.cidade);

printf ("Digite a população: ");
scanf (" %lu", &carta1.populacao);

printf ("Digite a area: (em km²) ");
scanf (" %f", &carta1.area);

printf ("Digite o pib: ");
scanf (" %f", &carta1.pib);

printf ("Digite o numero de pontos turisticos: ");
scanf (" %lu", &carta1.pontos_turisticos);

// Calculos carta 01
carta1.densidade = carta1.populacao/carta1.area;
printf ("densidade populacional: %f\n",carta1.densidade);

carta1.pib_per_capita = carta1.pib/carta1.populacao;
printf ("pib per capita: %f\n", carta1.pib_per_capita);

carta1.super_poder = 0;
carta1.super_poder += carta1.populacao;
carta1.super_poder += carta1.pib;
carta1.super_poder += carta1.area;
carta1.super_poder += carta1.pib_per_capita;
carta1.super_poder += carta1.pontos_turisticos;
carta1.super_poder += (01.0f/carta1.densidade);

// Carta 02
struct carta carta2;

printf ("\n----SEGUNDA CARTA-----\n");

printf ("Digite o estado (A a H):  ");
scanf (" %c", &carta2.estado);

scanf ("%*c");

printf ("Digite o codigo (Ex: A01): ");
scanf (" %s", carta2.codigo);

printf ("Digite o nome da cidade: ");
scanf (" %s", carta2.cidade);

printf ("Digite a população: ");
scanf (" %lu", &carta2.populacao);

printf ("Digite a area: (em km2) ");
scanf (" %f", &carta2.area);

printf ("Digite o pib: ");
scanf (" %f", &carta2.pib);

printf ("Digite o numero de pontos turisticos: ");
scanf (" %lu", &carta2.pontos_turisticos);

// Calculos carta 02

carta2.densidade = carta2.populacao/carta2.area;
printf ("densidade populacional: %f\n", carta2.densidade);

carta2.pib_per_capita = carta2.pib/carta2.populacao;
printf ("pib per capita: %f\n", carta2.pib_per_capita);

carta2.super_poder = 0;
carta2.super_poder += carta2.populacao;
carta2.super_poder += carta2.pib;
carta2.super_poder += carta2.area;
carta2.super_poder += carta2.pib_per_capita;
carta2.super_poder += carta2.pontos_turisticos;
carta2.super_poder += (01.0f/carta2.densidade);

  // Área para exibição dos dados da cidade

printf ("\n ----- Dados da Carta 01 -----\n");

printf ("Estado: %c\n" , carta1.estado);
printf ("Codigo: %s\n" , carta1.codigo);
printf ("Cidade: %s\n" , carta1.cidade);
printf ("Populacao: %lu habitantes\n" , carta1.populacao);
printf ("Area: %.2fkm2\n", carta1.area);
printf ("PIB: %f bilhoes de reais\n", carta1.pib);
printf ("Pontos turisticos: %lu\n", carta1.pontos_turisticos);

carta1.densidade = carta1.populacao/carta1.area;
printf ("Densidade populacional: %f\n",carta1.densidade);

carta1.pib_per_capita = carta1.pib/carta1.populacao;
printf ("PIB per capita: %f\n", carta1.pib_per_capita);

printf ("\n ----- Dados da Carta 02 -----\n");

printf ("Estado: %c\n" , carta2.estado);
printf ("Codigo: %s\n" , carta2.codigo);
printf ("Cidade: %s\n" , carta2.cidade);
printf ("Populacao: %lu habitantes\n" ,carta2.populacao);
printf ("Area: %.2fkm2\n", carta2.area);
printf ("PIB: %f bilhoes de reais\n", carta2.pib);
printf ("Pontos turisticos: %lu\n", carta2.pontos_turisticos);

carta2.densidade = carta2.populacao/carta2.area;
printf ("Densidade populacional: %f\n", carta2.densidade);

carta2.pib_per_capita = carta2.pib/carta2.populacao;
printf ("PIB per capita: %f\n", carta2.pib_per_capita);

printf ("\n------RESULTADO FINAL------\n");

int resultado_populacao = (carta1.populacao > carta2.populacao);
printf ("Populacao: a carta %d venceu a carta %d(%d)\n",
        resultado_populacao ? 1 : 2,
        resultado_populacao ? 2 : 1,
        resultado_populacao);

int resultado_area = (carta1.area > carta2.area);
printf ("Area: a carta %d venceu a carta %d (%d)\n",
        resultado_area ? 1 : 2, 
        resultado_area? 2 : 1,
        resultado_area);

int resultado_pontos_turisticos = (carta1.pontos_turisticos > carta2.pontos_turisticos);
printf ("Pontos turisticos: a carta %d venceu a carta %d(%d)\n",
        resultado_pontos_turisticos ? 1 : 2, 
        resultado_pontos_turisticos ? 2 : 1,
        resultado_pontos_turisticos);

int resultado_pib = (carta1.pib > carta2.pib);
printf ("PIB: a carta %d venceu a carta %d (%d)\n",
        resultado_pib ? 1 : 2, 
        resultado_pib ? 2 : 1,
        resultado_pib);

int resultado_pib_per_capita = (carta1.pib_per_capita > carta2.pib_per_capita);
printf ("PIB per capita: a carta %d venceu a carta %d (%d)\n",
        resultado_pib_per_capita ? 1 : 2, 
        resultado_pib_per_capita ? 2 : 1,
        resultado_pib_per_capita);
        
int resultado_super_poder = (carta1.super_poder > carta2.super_poder);
printf ("Super poder: a carta %d venceu a carta %d (%d)\n",
        resultado_super_poder ? 1 : 2, 
        resultado_super_poder ? 2 : 1,
        resultado_super_poder);

int resultado_densidade = (carta1.pib < carta2.pib);
printf ("Densidade: a carta %d venceu a carta %d (%d)\n",
        resultado_densidade ? 1 : 2, 
        resultado_densidade ? 2 : 1,
        resultado_densidade);       

return 0;
}
