#include <stdio.h>
// Inicializa��o das vari�veis:
int main(void) {
char nome[50];
int idade;
char tipoConsulta[30];
int dia, mes, ano;
int hora;
int opcao;
printf("=== Bem-vindo a marcacao de consultas ===\n\n");

// Dados do paciente:
printf("Nome do paciente: ");
scanf(" %[^\n]", nome);

printf("Idade: ");
scanf("%d", &idade);

//Dados da consulta:
printf("Tipo da consulta: ");
scanf(" %[^\n]", tipoConsulta);

printf("Data da consulta:\n");
printf("Dia: ");
scanf("%d", &dia);
printf("Mes: ");
scanf("%d", &mes);
printf("Ano: ");
scanf("%d", &ano);
printf("Horario da consulta: ");
scanf("%d", &hora);
// Verifica��o de hor�rio
if (hora < 8 || hora > 17) {
   printf("\nHorario esta fora do expediente (08h - 17h).\n");
}
else {
// Confirma��o
printf("\nDeseja confirmar ou cancelar o agendamento?\n");
printf("1 - Confirmar\n");
printf("2 - Cancelar\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);
printf("\n=== RESULTADO DO AGENDAMENTO ===\n");
if (opcao == 1) {
printf("Agendamento realizado\n");
printf("Paciente: %s\n", nome);
printf("Idade: %d anos\n", idade);
printf("Consulta: %s\n", tipoConsulta);
printf("Data: %02d/%02d/%04d\n", dia, mes, ano);
printf("Hor�rio: %02d:00\n", hora);
if (hora < 8 || hora > 17) {
printf("Fora do hor�rio de atendimento\n");
}
} else if (opcao == 2) {
printf("Seu agendamento foi cancelado. Agende novamente. \n");
} else {
printf("Opcao incorreta. Agende novamente. \n");
}
}
}
