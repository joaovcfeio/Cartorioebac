#include <stdio.h> // biblioteca de comunicação com o usurario
#include <stdlib.h> // biblioteca de alocação de espaços em memoria (variaveis, funções e array)
#include <locale.h> // biblioteca de alocação de texto por região (acentuação)
#include <string.h> // biblioteca responsavel por cuidar das strings 

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];

	printf("digite o CPF a ser cadastrado:");
	scanf("%s", cpf);

	strcpy(arquivo, cpf);

	FILE *file;
	file = fopen(arquivo, "ws");
	fprintf(file, cpf);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);

	printf("Digite o nome a ser cadastrado:");
	scanf("%s", nome);

	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);

	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);

	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);

	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);

	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);

	system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "portuguese");

	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s", cpf);

	FILE *file;
	file = fopen(cpf, "r");

	if(file == NULL)
	{
		printf("Não foi possível abrir o arquivo, não localizado!.\n");
	}
	while (fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");

}

int deletar()
{
	char cpf[40];

	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s", cpf);

	remove(cpf);

	FILE *file;
	file = fopen(cpf, "r");

	if (file == NULL)
	{
		printf("O usuário não se encontra no sistema! .\n" );
		system("pause");
	}
}

int main() 
{
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
		
		setlocale(LC_ALL, "portuguese");
	
		printf("\t\t### cartório da EBAC ###\n\n");
		printf("\tEscolha a opção desejada no menu:\n\n");
		printf("\t1 - registrar nome\n\n");
		printf("\t2 - consultar os nomes\n\n");
		printf("\t3 - deletar nomes\n\n");
		printf("\t4 - Sair do sistema\n\n");
		printf("opção: "); 
		
		scanf("%d", &opcao);
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;

			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			break;
			
			default:
			printf("Está opção não está disponivel!");
			system("pause");
			break;
		}
	
	}
}

//_____________________________________________________
//
//
//int main() 
//{
//	int opcao=0;
//	int laco=1;
//	
//	for(laco=1;laco=1;)
//	{
//		
//		system("cls");
//		
//		setlocale(LC_ALL, "portuguese");
//	
//	
//		setlocale(LC_ALL, "portuguese");
//		printf("\t\t### cartório da EBAC ###\n\n");
//		printf("\tEscolha a opção desejada no menu:\n\n");
//		printf("\t1 - registrar nome\n\n");
//		printf("\t2 - consultar os nomes\n\n");
//		printf("\t3 - deletar nomes\n\n");
//		
//		scanf("%d", &opcao);
//		
//		system("cls");
//
//
//		if(opcao==1)
//		{
//			printf("Você escolheu o registro de nomes!\n");
//			system("pause");
//		}
//		if(opcao==2)
//		{
//			printf("Você escolheu consultar os nomes!\n");
//			system("pause");
//		}
//		if(opcao==3)
//		{
//			printf("Você escolheu deletar nomes!\n");
//			system("pause");
//		}
//		if(opcao==4 || opcao<=0)
//		{
//			printf("Está opção não está disponivel!\n");
//			system("pause");
//		}
//
//	 }
//}
//
//      switch(opcao)
//		{
//			case 1:
//			printf("Você escolheu o registro de nomes!\n");
//			system("pause");
//			break;
//			
//			case 2:
//			printf("Você escolheu consultar os nomes!\n");
//			system("pause");
//			break;
//			
//			case 3:
//			printf("Você escolheu deletar nomes!\n");
//			system("pause");
//			break;
//			
//			default:
//			printf("Está opção não está disponivel!\n");
//			system("pause");
//			break;
//		}
//
// int registro()
//{
//	printf("Você escolheu o registro de nomes!\n");
//	system("pause");
//}
//
//int consulta()
//{
//	printf("Você escolheu consultar os nomes!\n");
//	system("pause");
//}
//
//int deletar()
//{
//	printf("Você escolheu deletar nomes!\n");
//	system("pause");
//}

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//










