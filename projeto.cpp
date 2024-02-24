#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>//biblioteca para system("cls")sair do progama
//#include <windows.h>//BIBLIOTECA USADA PARA Sistema operativo WINDOWS
//%[^\n]s:significa:-ler� todos os caracteres at� chegar a \n
struct animais  
// mainAnimais
{
    char nome[20];
    char numero[4];
    char especie[10];
    char datadeentrada[10];
    char idade[5];
   
} ;

struct animalAlterar
// mainAnimais altera��es
{
    char nome[20];
    char numero[10];
    char especie[10];
    char datadeentrada[5];
    char idade[10];
   
} ;


struct tratadores 
// mainTratadores
{
    char nome[20];
    char numero[4];
    char telemovel[9];
    char ativonaoativo[10];
} ;

struct tratadorAlterar
// mainTratadores altera��o
{
    char nome[20];
    char numero[4];
    char telemovel[9];
    char ativonaoativo[10];
} ;

struct visitas 
// mainMarcCV
{
char data[10];
char hora[5];
} ;

//c�digo para mudar de cor
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;

int main()
{

    int  tras,inf; 
    char menuInicial = ' ';
    char GDA = ' ';
    char CD = ' ';
    char CD1 = ' ';
    char DRSOA = ' ';
    char DRSOT = ' ';
    char GT = ' ';
    /*Vari�veis tipo char=' ' para mainMenu;
	GDA gest�o de animais;
    CD/CD1 consultas diversassobre animais  e consultas diversas sobre tratadores;
    DRSOA/DRSOT dados relevantes sobre os animais e  dados relevantes sobre os tratadores;
    MCV Marca��o/Consultas de Vistas;
    GT gest�o de tratadores;*/
    /*Vari�vel tipo int:
	tras:para voltar atras no main4;
	inf: para mostrar informa��o de uma op��o
	*/
mainMenu:
//menu inicial
    do
    {
    system("cls");
    /* Save current attributes FOREGROUND_INTENSITY */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    printf("               Olympia Jardim Zoologico                      \n");
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    
    printf("\n");
    printf("________________________________________\n");
    /* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("|");
    printf(" . 1 - Gestao de animais:             |\n");
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
   
    /* Save current attributes FOREGROUND_RED */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("|");
    printf(" . 2 - Gestao de tratadores:          |\n");
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    
    /* Save current attributes FOREGROUND_BLUE */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("|");
    printf(" . 3 - Marcacao/ Consulta de Visitas: |\n");
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

	printf("|");
    printf(" . 4 - Sair:                          |\n");
    printf("|");
    printf("______________________________________|\n");
   
    printf("Insira um numero: \n");
    fflush(stdin);
    scanf("%[^\n]s", &menuInicial);
    // 1 <= menuInicial <= 4
    }while(!(menuInicial >= '1' && menuInicial <= '4'));

    // escolha de menu
    switch (menuInicial)
    {

    case '1':
        printf("\tGestao de animais\n");
        goto mainAnimais;

    case '2':
        printf("\tGestao de tratadores\n");
        goto mainTratadores;

    case '3':
        printf("\tMarcacao/ Consulta de Visitas\n");
        goto mainMarcCV;

    case '4':
        printf("\tSair\n");
        goto mainSair;
    }
    system("cls");
    return 1;
    //---------------------------------------------------------------------||--------------------------------------------------------------------------------------------
mainAnimais:
    /* Save current attributes  FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    //  gest�o de animais
    do
    {
	system("cls");
    printf("\n");
    printf("\n");
    printf("\t. 1-Voltar atras para menu inicial\n");
    printf("\t. 2-Inserir novos Animais: \n");
    printf("\t. 3-Alterar dados de um animal:\n");
    printf("\t. 4-Consultas diversas:  \n");
    printf("\t. 5-Listagem de animais por ano de entrada: \n");
    printf("\t. 6-Dados relevantes sobre os Animais: \n");
    printf("\n");
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    
    printf("Insira um numero: \n");
    fflush(stdin);
    scanf("%[^\n]s", &GDA);
    // 1 <= menuInicial <= 6
    }while(!(GDA >= '1' && GDA <= '6'));

    // escolha gest�o de animais
    switch (GDA)
    {

    case '1':
        printf("\tA sair... \n");
        system("cls");
        goto mainMenu;
    case '2':
        printf("\tInserir novos Animais\n");
        goto dra1;

    case '3':
        printf("\tAlterar dados de um animal\n");
        goto InserirAnimalAlterar;

    case '4':
        printf("\tConsultas diversas\n");
        goto CD;

    case '5':
        printf("\tListagem de animais por ano de entrada \n");
		//falta
        break;

    case '6':
        printf("\tDados relevantes sobre os Animais \n");
        goto dra2; // dra-->dados relevantes animais
    }
    system("cls");
    return 2;
 /* Save current attributes  FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   
CD:    // Consultas diversas sobre animais //ver para printar
    do
    {

    printf("\n");
    printf("\t.1-Voltar atras para gestao de animais \n");
    printf("\t.2-Consultar dados de um animal: \n");
    printf("\t.3-Obter listagem de Animais: \n");
    printf("\t.4-Obter listagem de Animais por especie: \n");
    printf("\t.5-listagem de Animais com mais tempo ou menos tempo no jardim zoologico: \n");
    printf("\n");
   
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    
	printf("Insira um numero: \n");
    fflush(stdin);
    scanf("%[^\n]s", &CD);
   
    // 1 <= menuInicial <= 5
    }while(!(CD >= '1' && CD <= '5'));
    //  Escolha Consultas diversas sobre animais
    switch (CD)
    {
    case '1':
        printf("\tA sair... \n");
        system("cls");
        goto mainAnimais;

    case '2':
        printf("\tConsultar dados de um animal\n");
        goto dra2;
		break;

    case '3':
        printf("\tObter listagem de Animais\n");
        goto listaanimais;
        break;

    case '4':
        printf("\tObter listagem de Animais por especie\n");
        //Falta
        break;

    case '5':
        printf("\tListagem de Animais com mais tempo ou menos tempo no jardim zoologico \n");
        // Falta goto data_entrada; fazer o print s�
        break;
    }
//____________________________________________________________________ structmain1-struct animais_____________________________________________________________
dra:
printf("\n");
    printf("\t1-Se quiser voltar atras para Gestao de animais  por favor insira 1\n");
    printf("\t2-Se quiser prosseguir por favor insira o numero 2\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainAnimais;
       
    case 2:
    printf("\n");
        system("cls");
        goto dra1;
   
    }
return 0;
//dados relevantes sobre animais (inserir)
dra1: 
	int i; 
	int num;
	struct animais add[30];//numero maximo 30
	printf("Inisira a quantidade de animais que quer introduzir?");
	scanf("%d",&num);
    if(num>=1){	
    for (i=1; i<=num;i++) //pra printar
    {
       /* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\tIntroduza os seguintes dados do animal %d\t \n\tNumero: \n\tNome:\n\tEspecie:\n\tIdade:\n\tdata de entrada:\n", i);
        /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
        scanf("%s %s %s %s %s", &add[i].numero, &add[i].nome, &add[i].especie, &add[i].idade, &add[i].datadeentrada);
	}
	}	
    printf("\n");
	system("cls");
	printf("\n");
    printf("\t1-Se quiser voltar atras para o menu principal insira 1\n");
    printf("\t2-Se quiser Consultar dados de um animal 2\n");
    printf("\t3-Se quiser Alterar informacao  por favor insira 3\n");
    printf("\t4-Se quiser sair por favor insira 4\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainMenu;
       
    case 2:
    	printf("\n");
    	goto dra2;
    	
    case 3:
    	printf("\n");
    	goto AlterarAnimais;
    
    case 4:
    	printf("\n");
    	break;
    }

return 0;

//dados relevantes sobre animais (mostrar)
dra2:
    for (i=1; i<=num; i++) // para scanf
    {/* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\nDados relativos sobre animal  %d :  \nNumero:%s \nNome:%s \nEspecie:%s  \nIdade:%s  \ndata de entrada:%s\n",i, add[i].numero, add[i].nome, add[i].especie, add[i].idade, add[i].datadeentrada);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
	
    printf("\n");
    printf("\t1-Se quiser voltar atras para Gestao de animais por favor insira 1\n");
    printf("\t2-Se quiser alterar os animais por favor insira 2\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    switch (tras)
    {
    case 1:
   
        printf("\n");
        system("cls");
        goto mainAnimais;
       
    case 2:
   
        printf("\n");
        system("cls");
        goto AlterarAnimais;
    }
    return 0;
	printf("\n");
    printf("\t1-Se quiser voltar atras para Gestao de animais por favor insira 1\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    switch (tras)
    {
    case 1:
   
        printf("\n");
        system("cls");
        goto mainAnimais;
    }
	return 0;
	
	listaanimais:for (i=1; i<=num; i++) // para scanf
    {/* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\n Animail  %d :  %s\n",i, add[i].numero, add[i].nome, add[i].especie, add[i].idade, add[i].datadeentrada);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
    printf("\n");
    printf("\t1-Se quiser voltar atras para Gestao de animais por favor insira 1\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    switch (tras)
    {
    case 1:
   
        printf("\n");
        system("cls");
        goto mainAnimais;
    }
	return 0;
	AlterarAnimais:
	for (i=1; i<=num; i++) // para scanf
    {/* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\nDados relativos sobre animal  %d :  \nNumero:%s \nNome:%s \nEspecie:%s  \nIdade:%s  \ndata de entrada:%s\n",i, add[i].numero, add[i].nome, add[i].especie, add[i].idade, add[i].datadeentrada);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
    InserirAnimalAlterar:
    int d; 
	int numalterard;
	struct animalAlterar alterard[30];//numero maximo 30
	printf("Inisira a quantidade de animais que quer introduzir?");
	scanf("%d",&numalterard);
    if(num>=1){	
   for (d=1; d<=numalterard;d++) //pra printar
    {/* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\tIntroduza os seguintes dados do animal %d\t \n\tNumero: \n\tNome:\n\tEspecie:\n\tIdade:\n\tdata de entrada:\n", d);
        /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
        scanf("%s %s %s %s %s", &alterard[d].numero, &alterard[d].nome, &alterard[d].especie, &alterard[d].idade, &alterard[d].datadeentrada);
    } 
	for (d=1; d<numalterard;d++) // para scanf
    {/* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\nDados relativos sobre animal  %d :  \nNumero:%s \nNome:%s \nEspecie:%s  \nIdade:%s  \ndata de entrada:%s\n", d, alterard[d].numero, alterard[d].nome, alterard[d].especie, alterard[d].idade, alterard[d].datadeentrada);
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
		
	}
	if(num<=0){
	goto InserirAnimalAlterar;
	}
    printf("\n");
    printf("\tSe quiser voltar atras para  Gest�o de tratadores  por favor insira 1\n");
    printf("\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
   
        printf("\n");
        system("cls");
        goto mainAnimais;
    }
    return 0;
    //--------------------------------------------------------------------||--------------------------------------------------------------------------------------------
mainTratadores: 
    // Gest�o de tratadores
    /* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    do
    {
    printf("\n");
    printf("\t.1-Voltar atras para menu inicial \n");
    printf("\t.2-Inserir novos Tratadores: \n");
    printf("\t.3-Alterar dados de um tratador: \n");
    printf("\t.4-Colocar um tratador como Ativo ou Nao Ativo: \n");
    printf("\t.5-Consultas diversas: \n");
    printf("\t.6-Nome do Tratador: \n");
    printf("\t.7-Dados relevantes sobre o tratador: \n");
    printf("\n");	
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
   
    printf("Insira um numero: \n");
    fflush(stdin);
    scanf("%[^\n]s", &GT);
   
    // 1 <= menuInicial <= 7
    }while(!(GT >= '1' && GT <= '7'));
    //escolha de Gest\�o de tratadores
    switch (GT)
    {
    case '1':
        printf("\tA sair... \n");
        system("cls");
		goto mainMenu;

    case '2':
        printf("\tInserir novos Tratadores\n");
        goto drt1;
        break;

    case '3':
        printf("\tAlterar dados de um tratador\n");
        goto AlterarTratadores;

    case '4':
        printf("\tColocar um tratador como Ativo ou Nao Ativo\n");
        //falta fazer
        break;

    case '5':
        printf("\tConsultas diversas\n");
        goto CD1;

    case '6':
        printf("\t-Nome do Tratador\n");
        //falta fazer
        break;
    case '7':
        printf("\tDados relevantes sobre o tratador\n");
        goto drt2;
    }
    return 4;
    system("cls");
    CD1:
	/* Save current attributes FOREGROUND_RED*/
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    // consultas diversas Gest�o de tratadores
    printf("\n");
    printf("\t.1-Voltar atras para Gestao de Tratadores \n");
    printf("\t.2-Consultar dados de um tratador: \n");
    printf("\t.3-Obter listagem de tratadores ativos: \n");
    printf("\n");
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    
    printf("Insira um numero: \n");
    scanf("%d", &CD1);

    // escolha de consultas diversas Gest�o de tratadores
    switch (CD1)
    {
    case 1:
        printf("\tA sair... \n");
        system("cls");
        goto mainTratadores;
    case 2:
        printf("\tConsultar dados de um tratador\n");
        goto drt2; 

    case 3:
        printf("\tObter listagem de tratadores ativos\n");
        goto listatratadores;
        break;
    }
    return 0;
    //____________________________________________________________________ structmain2- struct tratadores________________________________________________
drt://dados relevantes sobre tratadores
printf("\n");
    printf("\t1-Se quiser voltar atras para gestao de tratadores por favor insira 1\n");
    printf("\n");
    printf("\t2-Se quiser prosseguir porfavor insira o numero 2\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainTratadores;
       
    case 2:
    printf("\n");
        system("cls");
        goto drt1;
    }
return 0;
drt1:////dados relevantes sobre tratadores (inserir)
	int a; 
	int numtratador;
	struct tratadores ver[10];// numero maximo 10
	printf("Inisira a quantidade de Tratadores que quer introduzir?");
	scanf("%d",&numtratador);
    if(numtratador>=1){	
    for (a=1; a<=numtratador;a++) // para printar
    { /* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\tIntroduza os seguintes dados do Tratador %d\t \n\n\tNome: \n\tNumero: \n\tTelemovel:\n\tativonaoativo:\n", a );
        /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
        scanf("%s %s %s %s", &ver[a].nome, &ver[a].numero, &ver[a].telemovel, &ver[a].ativonaoativo);
    }
	}
	printf("\n");
	system("cls");
	printf("\n");
    printf("\t1-Se quiser voltar atras para o menu principal insira 1\n");
    printf("\t2-Se quiser Consultar dados de um Tratador 2\n");
    printf("\t-Se quiser sair por favor insira outro caracter diferente\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainMenu;
       
    case 2:
    	printf("\n");
    	goto drt2;
    	
    }
return 0;
	//dados relevantes sobre tratadores (mostrar)
drt2:
    for (a=1; a <=numtratador; a++) // para scanf
    { /* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
   printf("\nDados relativos sobre o Tratador  %d :  \nNome:%s \nNumero:%s \nTelemovel:%s \nativonaoativo:%s\n", a, ver[a].nome, ver[a].numero, ver[a].telemovel, ver[a].ativonaoativo);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
   
    printf("\n");
    printf("\t1-Se quiser voltar atras para Alterar por favor insira 1\n");
    printf("\t2-Se quiser voltar para Gest�o de tratadores por favor insira o numero 2\n");
    printf("\n");
    printf("\t-Se quiser sair por favor insira outro caracter\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto AlterarTratadores;
       
    case 2:
    	printf("\n");
        system("cls");
        goto mainTratadores;
    }
   
return 0;
listatratadores:
	for (a=1; a <=numtratador; a++) // para scanf
    { /* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
   printf("\nTratador  %d :  %s\n", a, ver[a].nome, ver[a].numero, ver[a].telemovel, ver[a].ativonaoativo);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
    printf("\n");
    printf("\t1-Se quiser voltar atras para Gestao de tratadores por favor insira 1\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    switch (tras)
    {
    case 1:
   
        printf("\n");
        system("cls");
        goto mainTratadores;
    }
	return 0;
AlterarTratadores:
	for (a=1; a <=numtratador; a++) // para scanf
    { /* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
   printf("\nDados relativos sobre o Tratador  %d :  \nNome:%s \nNumero:%s \nTelemovel:%s \nativonaoativo:%s\n", a, ver[a].nome, ver[a].numero, ver[a].telemovel, ver[a].ativonaoativo);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
InserirTratadoresAlterar:
    int c; 
	int numalterart;//alterar tratador
	struct tratadorAlterar alterart[10];//numero maximo 10
	printf("Inisira a quantidade de Tratadores que quer introduzir?");
	scanf("%d",&numalterart);
    if(numalterart>=1){	
   for (c=1; c<=numalterart;c++) //pra printar
    {/* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\tIntroduza os seguintes dados do Tratador %d\t \n\n\tNome: \n\tNumero: \n\tTelemovel:\n\tativonaoativo:\n", c);
        /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
        scanf("%s %s %s %s", &alterart[c].nome, &alterart[c].numero, &alterart[c].telemovel, &alterart[c].ativonaoativo);
    } 
	for (c=1; c<numalterart;c++) // para scanf
    {/* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
   printf("\nDados relativos sobre o Tratador  %d :  \nNome:%s \nNumero:%s \nTelemovel:%s \nativonaoativo:%s\n", c, alterart[c].nome, alterart[c].numero, alterart[c].telemovel, alterart[c].ativonaoativo);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
    
		if(numalterart<=0){
	goto InserirTratadoresAlterar;
	}
	}
	
    printf("\n");
    printf("\tSe quiser voltar atras para  Gest�o de tratadores  por favor insira 1\n");
    printf("\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainTratadores;
    }
    return 0;
    //---------------------------------------------------------------------||Marca��o/Consultas de Vistas--------------------------------------------------------------------------------------------
mainMarcCV:
// Marca��o/Consultas de Vistas
printf("\n");
    printf("\t1-Se quiser voltar atras pra ao menu inicial por favor insira 1\n");
    printf("\n");
    printf("\t2-Se quiser prosseguir porfavor insira o numero 2 \n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainMenu;
        
    case 2:
    printf("\n");
    system("cls");
        goto drcv;
    }
    return 0;
    //____________________________________________________________________ struct marca��o consultas visitas ____________________________________________
drcv:
// dados relevantes consulta de viagens
	int numconsultv;
	int b;// "b" para struct drcv
    struct visitas visita[100];//numero m�ximo 100
    printf("Quantas visitas pretende introduzir?");
	scanf("%d",&numconsultv);
	 if(numconsultv>=1){
    for (b=1; b<=numconsultv; b++)// para printar
    {
  /* Save current attributes FOREGROUND_BLUE*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("Introduza os seguintes dados para a visita\n\nIntroduza uma data:\nIntroduza uma hora referente a  horas certas (ex.: 10:00, 11:00, 15:00, etc):\n",b);
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
        scanf("%s %s", &visita[b].data, &visita[b].hora);
    }
		
    for (b=1; b<=numconsultv; b++) // para scanf
    {
    /* Save current attributes FOREGROUND_BLUE*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("\nDados relativos da visita %d\ndata:%s \nhora:%s \n ", b, visita[b].data, visita[b].hora);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }

	printf("\n");
    printf("\t1-Se quiser voltar atras para o menu princiapal insira 1\n");
    printf("\t2-Escolher animal \n");
    printf("\t3-Escolher tratador \n");
    printf("\t-Se quiser sair por favor insira: \n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainAnimais;
    
    case 2:
    	printf("\n");
        system("cls");
        goto veranimal;
        
    case 3:
    	printf("\n");
        system("cls");
        goto vertratador;
    }

return 0;
    
veranimal:
	int veranimal;
	printf("Porfavor insira o numero do  animal que quer ver?");
	scanf("%d",&veranimal);
	
    for (i=veranimal; i<=veranimal;i++) // para scanf
    {/* Save current attributes FOREGROUND_GREEN*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\n Animail  %d :  %s\n",i, add[i].numero, add[i].nome, add[i].especie, add[i].idade, add[i].datadeentrada);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
	}
	printf("\n");
    printf("\t1-Se quiser voltar atras para o menu princiapal insira 1\n");
    printf("\t-Se quiser sair por favor insira: \n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainMenu;
    
    }
    return 0;
vertratador:
int vertratador;
printf("Porfavor insira o numero do  animal que quer ver?");
	scanf("%d",&vertratador);

for (a=vertratador; a <=vertratador;a++) // para scanf
    { /* Save current attributes FOREGROUND_RED*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
   printf("\nTratador  %d :  %s\n", a, ver[a].nome, ver[a].numero, ver[a].telemovel, ver[a].ativonaoativo);
	/* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
	printf("\n");
    printf("\t1-Se quiser voltar atras para o menu princiapal insira 1\n");
    printf("\t-Se quiser sair por favor insira: \n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainMenu;
    
    }
    return 0;

}
    printf("\n");
    printf("\tSe quiser voltar atras pra ao menu inicial por favor insira 1\n");
    printf("\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
   
        printf("\n");
        system("cls");
        goto mainMenu;
    }
    return 0;
//---------------------------------------------------------------------||--------------------------------------------------------------------------------------------
mainSair://mainSair
    printf("\n");
    printf("\tSe quiser voltar atras pra ao menu inicial por favor insira 1\n");
    printf("\n");
    printf("\n");
    printf("\tCaso queira mesmo sair do progama por favor insira outro caracter diferente que 1\n");
    scanf("%d", &tras);
    system("cls");
    switch (tras)
    {
    case 1:
        printf("\n");
        system("cls");
        goto mainMenu;
    }
    return 0;
}
//------------------------------------------------------------------Fim------------------------------------------------------------------------------------------------------------------

