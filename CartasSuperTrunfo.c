
#include <stdio.h>

int main(){
const char *codigo ="B01";
unsigned int populacao = 2.8;
float area = '693';
float pib = 62954487488;
int pontos_turisticos= 15;


printf("cadastro da carta: %s:\n");
 scanf("%s, &codigo");

 printf("população: 2,8 milões \n");
 scanf("%d", &populacao);

printf("Área: 693, km \n");
 scanf("%f", &area);

printf("PIB: 62954487488 \n");
scanf("%f", &pib);

 printf("Numero de pontos turisticos: %d\n");
scanf("%d", &pontos_turisticos);
 
// Exibir os dados
printf("\n--- Cadastro da Carta ---\n");
printf("Código: %s\n", codigo);
printf("População: %d\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões\n", pib);
printf("Pontos turísticos: %d\n", pontos_turisticos);
return 0;
}
