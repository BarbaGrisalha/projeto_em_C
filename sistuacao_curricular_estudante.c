#include <stdio.h>
//Constantes utilizadas para gestão da quantidade de Estudantes, UC's e Avaliações
#define MAX_ESTUDANTES 150
#define MAX_UCS 18
#define MAX_AVALIACOES 5000
#define TESTE "TESTE GERADO CORRETAMENTE"
//Estruturas criadas para gestão dos dados inerentes ao Estudante, UC's e Avaliações
typedef struct 
{
   int identificador_estudante;
   int codigo_uc;
   char nome_uc[50];
   int ano_curricular;
   int semestre;
   int ects;
}estudante;

typedef struct
{
    int identificador_uc;
    int codigo_uc;
    char nome[50];
    char ano_curricular[10];
    char semestre[15];
    int ects;
}unidadeCurricular;

typedef struct 
{
    int identificador_avaliacao;
    int id_estudante;
    int id_uc;
    char ano_letivo[10];
    char epoca[30];
    char data[15];
    float classificacao;
    
}avaliacao;
//Declaração das funções utilizadas no programa
int menu();

//Main, aonde o programa será gerado
int main(){
char teste;

estudante estudante1;
unidadeCurricular uc1;
avaliacao avaliacao1;

    printf("\n\n\n\n");
    printf("%s\n",TESTE);
    printf("\n\n\n\n");


    return 0;
}

//Funções criadas
int menu(){

}