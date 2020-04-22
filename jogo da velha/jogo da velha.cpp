#include<stdio.h>
#include<iostream>

//mostra a tabela do jogo atualizada
void mostraJogo (char matriz1[3][3]){
system("cls");
	printf ("*JOGO DA VELHA*\n\n");	 	
	printf ("    1   2   3  \n\n");
	printf ("1   %c | %c | %c \n",matriz1[0][0],matriz1[0][1],matriz1[0][2]);
	printf ("   ----------\n");
	printf ("2   %c | %c | %c \n",matriz1[1][0],matriz1[1][1],matriz1[1][2]);
	printf ("   ----------\n");
	printf ("3   %c | %c | %c \n\n\n",matriz1[2][0],matriz1[2][1],matriz1[2][2]);
return;
}

//lê e registra a jogada do usuario
void jogadaUsuario(char matriz2[3][3]){
	int i,j;

do{
	printf("\nEscolha uma posicao para jogar:\nLinha: ");
	scanf("%d",&i);
	printf("Coluna: ");
	scanf("%d",&j);
	if(matriz2[i-1][j-1]=='o' || matriz2[i-1][j-1]=='x'|| i<1 || i>3 || j<1 || j>3)
	printf("\nDigite um posicao valida!\nLinhas e colunas entre 1 e 3!\n");
}while(matriz2[i-1][j-1]=='o' || matriz2[i-1][j-1]=='x'|| i<1 || i>3 || j<1 || j>3);
matriz2[i-1][j-1]='x';
return;
}

//testar se houve e retorna o vencedor
char testaVencedor(char matriz3[3][3]){
	//x linhas
	if (matriz3[0][0] == 'x' && matriz3[0][1] == 'x' && matriz3[0][2] == 'x')
		return 'x';
		
	if (matriz3[1][0] == 'x' && matriz3[1][1] == 'x' && matriz3[1][2] == 'x')
		return 'x';

	if (matriz3[2][0] == 'x' && matriz3[2][1] == 'x' && matriz3[2][2] == 'x')
		return 'x';

	//x colunas
	if (matriz3[0][0] == 'x' && matriz3[1][0] == 'x' && matriz3[2][0] == 'x')
		return 'x';

	if (matriz3[0][1] == 'x' && matriz3[1][1] == 'x' && matriz3[2][1] == 'x')
		return 'x';

	if (matriz3[0][2] == 'x' && matriz3[1][2] == 'x' && matriz3[2][2] == 'x')
		return 'x';

	//x diagonais
	if (matriz3[0][0] == 'x' && matriz3[1][1] == 'x' && matriz3[2][2] == 'x')
		return 'x';

	if (matriz3[2][0] == 'x' && matriz3[1][1] == 'x' && matriz3[0][2] == 'x')
		return 'x';
		
	//o linhas
	if (matriz3[0][0] == 'o' && matriz3[0][1] == 'o' && matriz3[0][2] == 'o')
		return 'o';
		
	if (matriz3[1][0] == 'o' && matriz3[1][1] == 'o' && matriz3[1][2] == 'o')
		return 'o';

	if (matriz3[2][0] == 'o' && matriz3[2][1] == 'o' && matriz3[2][2] == 'o')
		return 'o';

	//o colunas
	if (matriz3[0][0] == 'o' && matriz3[1][0] == 'o' && matriz3[2][0] == 'o')
		return 'o';

	if (matriz3[0][1] == 'o' && matriz3[1][1] == 'o' && matriz3[2][1] == 'o')
		return 'o';

	if (matriz3[0][2] == 'o' && matriz3[1][2] == 'o' && matriz3[2][2] == 'o')
		return 'o';

	//o diagonais
	if (matriz3[0][0] == 'o' && matriz3[1][1] == 'o' && matriz3[2][2] == 'o')
		return 'o';

	if (matriz3[2][0] == 'o' && matriz3[1][1] == 'o' && matriz3[0][2] == 'o')
		return 'o';

	return ' ';
	
}

//testa as possibilidades e realiza a jogada do computador
void jogadaComputador(char matriz4[3][3]){
	//linhas 2x
	if(matriz4[0][0]=='x' && matriz4[0][1]=='x' && matriz4[0][2] == ' ') 
	{matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[0][0]=='x' && matriz4[0][2]=='x' && matriz4[0][1] == ' ') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][1]=='x' && matriz4[0][2]=='x' && matriz4[0][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[1][0]=='x' && matriz4[1][1]=='x' && matriz4[1][2] == ' ') 
	{matriz4[1][2] = 'o';
		return;
	}
	if(matriz4[1][0]=='x' && matriz4[1][2]=='x' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='x' && matriz4[1][2]=='x' && matriz4[1][0] == ' ') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[2][0]=='x' && matriz4[2][1]=='x' && matriz4[2][2] == ' ') 
	{matriz4[2][2] = 'o';
		return;
	}
	if(matriz4[2][0]=='x' && matriz4[2][2]=='x' && matriz4[2][1] == ' ') 
	{matriz4[2][1] = 'o';
		return;
	}
	if(matriz4[2][1]=='x' && matriz4[2][2]=='x' && matriz4[2][0] == ' ') 
	{matriz4[2][0] = 'o';
		return;
	}
	//colunas 2x
	if(matriz4[0][0]=='x' && matriz4[1][0]=='x' && matriz4[2][0] == ' ') 
	{matriz4[2][0] = 'o';
		return;
	}
	if(matriz4[1][0]=='x' && matriz4[2][0]=='x' && matriz4[0][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[0][0]=='x' && matriz4[2][0]=='x' && matriz4[1][0] == ' ') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[0][1]=='x' && matriz4[1][1]=='x' && matriz4[2][1] == ' ') 
	{matriz4[2][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='x' && matriz4[2][1]=='x' && matriz4[0][1] == ' ') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][1]=='x' && matriz4[2][1]=='x' && matriz4[1][1] == ' ')
	{ matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[0][2]=='x' && matriz4[1][2]=='x' && matriz4[2][2] == ' ')
	{ matriz4[2][2] = 'o';
		return;
	}
	if(matriz4[1][2]=='x' && matriz4[2][2]=='x' && matriz4[0][2] == ' ') 
	{matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[0][2]=='x' && matriz4[2][2]=='x' && matriz4[1][2] == ' ') 
	{matriz4[1][2] = 'o';
		return;
	}
	//diagonais 2x
	if(matriz4[0][0]=='x' && matriz4[1][1]=='x' && matriz4[2][2] == ' ') 
	{matriz4[2][2] = 'o';
		return;
	}
	if(matriz4[0][0]=='x' && matriz4[2][2]=='x' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='x' && matriz4[2][2]=='x' && matriz4[0][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[2][0]=='x' && matriz4[1][1]=='x' && matriz4[0][2] == ' ')
	{ matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[2][0]=='x' && matriz4[0][2]=='x' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='x' && matriz4[0][2]=='x' && matriz4[2][0] == ' ') 
	{matriz4[2][0] = 'o';
		return;
	}
	//linhas 2o
	if(matriz4[0][0]=='o' && matriz4[0][1]=='o' && matriz4[0][2] == ' ') 
	{matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[0][0]=='o' && matriz4[0][2]=='o' && matriz4[0][1] == ' ') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][1]=='o' && matriz4[0][2]=='o' && matriz4[0][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[1][0]=='o' && matriz4[1][1]=='o' && matriz4[1][2] == ' ') 
	{matriz4[1][2] = 'o';
		return;
	}
	if(matriz4[1][0]=='o' && matriz4[1][2]=='o' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='o' && matriz4[1][2]=='o' && matriz4[1][0] == ' ') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[2][0]=='o' && matriz4[2][1]=='o' && matriz4[2][2] == ' ') 
	{matriz4[2][2] = 'o';
		return;
	}
	if(matriz4[2][0]=='o' && matriz4[2][2]=='o' && matriz4[2][1] == ' ') 
	{matriz4[2][1] = 'o';
		return;
	}
	if(matriz4[2][1]=='o' && matriz4[2][2]=='o' && matriz4[2][0] == ' ') 
	{matriz4[2][0] = 'o';
		return;
	}
	//colunas 2o
	if(matriz4[0][0]=='o' && matriz4[1][0]=='o' && matriz4[2][0] == ' ')
	{ matriz4[2][0] = 'o';
		return;
	}
	if(matriz4[1][0]=='o' && matriz4[2][0]=='o' && matriz4[0][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[0][0]=='o' && matriz4[2][0]=='o' && matriz4[1][0] == ' ') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[0][1]=='o' && matriz4[1][1]=='o' && matriz4[2][1] == ' ') 
	{matriz4[2][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='o' && matriz4[2][1]=='o' && matriz4[0][1] == ' ') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][1]=='o' && matriz4[2][1]=='o' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[0][2]=='o' && matriz4[1][2]=='o' && matriz4[2][2] == ' ') 
	{matriz4[2][2] = 'o';
		return;
	}
	if(matriz4[1][2]=='o' && matriz4[2][2]=='o' && matriz4[0][2] == ' ') 
	{matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[0][2]=='o' && matriz4[2][2]=='o' && matriz4[1][2] == ' ') 
	{matriz4[1][2] = 'o';
		return;
	}
	//diagonais 2o
	if(matriz4[0][0]=='o' && matriz4[1][1]=='o' && matriz4[2][2] == ' ') 
	{matriz4[2][2] = 'o';
		return;
	}
	if(matriz4[0][0]=='o' && matriz4[2][2]=='o' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='o' && matriz4[2][2]=='o' && matriz4[0][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[2][0]=='o' && matriz4[1][1]=='o' && matriz4[0][2] == ' ') 
	{matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[2][0]=='o' && matriz4[0][2]=='o' && matriz4[1][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][1]=='o' && matriz4[0][2]=='o' && matriz4[2][0] == ' ') 
	{matriz4[2][0] = 'o';
		return;
	}
	//linhas 1x
	if(matriz4[0][0]==' ' && matriz4[0][1]=='x' && matriz4[0][2] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[0][0]=='x' && matriz4[0][1]==' ' && matriz4[0][2] == ' ') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][0]==' ' && matriz4[0][1]==' ' && matriz4[0][2] == 'x') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[1][0]==' ' && matriz4[1][1]=='x' && matriz4[1][2] == ' ') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[1][0]=='x' && matriz4[1][1]==' ' && matriz4[1][2] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[1][0]==' ' && matriz4[1][1]==' ' && matriz4[1][2] == 'x') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[2][0]==' ' && matriz4[2][1]=='x' && matriz4[2][2] == ' ') 
	{matriz4[2][0] = 'o';
		return;
	}
	if(matriz4[2][0]=='x' && matriz4[2][1]==' ' && matriz4[2][2] == ' ') 
	{matriz4[2][1] = 'o';
		return;
	}
	if(matriz4[2][0]==' ' && matriz4[2][1]==' ' && matriz4[2][2] == 'x') 
	{matriz4[2][0] = 'o';
		return;
	}
	//colunas 1x
	if(matriz4[0][0]==' ' && matriz4[1][0]=='x' && matriz4[2][0] == ' ') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[0][0]=='x' && matriz4[1][0]==' ' && matriz4[2][0] == ' ') 
	{matriz4[1][0] = 'o';
		return;
	}
	if(matriz4[0][0]==' ' && matriz4[1][0]==' ' && matriz4[2][0] == 'x') 
	{matriz4[0][0] = 'o';
		return;
	}
	if(matriz4[0][1]==' ' && matriz4[1][1]=='x' && matriz4[2][1] == ' ') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][1]=='x' && matriz4[1][1]==' ' && matriz4[2][1] == ' ') 
	{matriz4[1][1] = 'o';
		return;
	}
	if(matriz4[0][1]==' ' && matriz4[1][1]==' ' && matriz4[2][1] == 'x') 
	{matriz4[0][1] = 'o';
		return;
	}
	if(matriz4[0][2]==' ' && matriz4[1][2]=='x' && matriz4[2][2] == ' ') 
	{matriz4[0][2] = 'o';
		return;
	}
	if(matriz4[0][2]=='x' && matriz4[1][2]==' ' && matriz4[2][2] == ' ') 
	{matriz4[1][2] = 'o';
		return;
	}
	if(matriz4[0][2]==' ' && matriz4[1][2]==' ' && matriz4[2][2] == 'x') 
	{matriz4[0][2] = 'o';
		return;
	}
	
}

main()
{
	char matVelha[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '} ;
	int cont =0;

mostraJogo(matVelha);

do
{jogadaUsuario(matVelha);
mostraJogo(matVelha);
testaVencedor(matVelha);
	if(testaVencedor(matVelha)!='x'){
	jogadaComputador(matVelha);
	mostraJogo(matVelha);
	testaVencedor(matVelha);	
	}
cont++;
}while(testaVencedor(matVelha) != 'x'&& testaVencedor(matVelha) != 'o' && cont<5);

if (testaVencedor(matVelha)=='x') printf("\nUsuario WINS!\n\n");
else if (testaVencedor(matVelha)=='o') printf("\nComputador WINS!\n\n");
else printf("\nDEU VELHA!\n\n");
}
