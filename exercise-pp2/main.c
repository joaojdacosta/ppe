/*
	Name: Fun��o UnimestreMais
	Copyright: ISPTEC@2023
	Author: Msc Jo�o Costa, docente
	Date: 22/12/23 08:34
	Description: 
	Pretendemos propor melhoria de algumas funcionalidades do sistema Unimestre
	em funcionamento no ISPTEC. 
	
	Actualmente, o sistema mecanogr�fico � baseado apenas no ano de admiss�o. 
	N�o � poss�vel, pelo n�mero de matr�cula, identificar o ano de admiss�o e o curso
	de um determinado estudante.
*/


#include <stdio.h>
#include <stdlib.h>


/*
Estrutura de dados
*/
#define MAX 100 // Quantidade de alunos
#define N_CURSOS 6
#define M 50 // n�mero de admitidos por curso
typedef char t_aluno[MAX/10]; // tipo para o numero
t_aluno matriculas[MAX]; // lista de n�mero de matr�culas geradas
int t = 0; // quantidade de n�mero de matr�cula registado no sistema.

char cn[][M] =     // cn - nome do curso
	{
		"Engenharia Civil",
		"Engenharia Electrotecnica",
		"Engenharia Informatica",
		"Engenharia de Producao Industrial", 
		"Engenharia Quimica",
		"Engenharia Mecanica"
	};
char cs[][10] =             // cs - sigla do curso
	{
		"ECV", // Engenharia Civil
		"EELT", // Engenharia Electrot�cnica
		"EINF", // Engenharia Informatica
		"EPI", // Engenharia de Produ��o Industrial
		"EQM", // Engenharia Qu�mica
		"EMC" // Engenharia de Produ��o Industrial
	};
/*
prot�tipo de fun��es
*/
void gerar_numero(void);
void consultar_aluno(void);
void listar_aluno(void);
void remover_aluno(void);
void terminar_programa(void);


/*
Fun��o principal
*/
int main(int argc, char *argv[]) {
	
	/* TODO (Estudante#1#): Elaborar o menu com as seguintes opc�es:
	                        
	                        1. Gerar n�mero de matr�cula dado o curso
	                        2. Consultar aluno pelo n�mero de matr�cula
	                        3. Listar n�meros de matr�cula
	                        4. Remover n�mero de matr�cula
	                        5. Terminar o programa  */
	menu_cursos();
	return 0;
}


/* TODO (#1#): Fun��o gerar_numero()
               
               Especifica��o
               Passo 1. O sistema lista os cursos dispon�veis e 
               solicita que o funcion�rio da secretaria 
               selecione o curso (usar a fun��o dada);
               Passo 2. O sistema gera o n�mero de matr�cula 
               de estudante no forma NCA (N: n�mero de ordem, C: curso em que se inscreveu e A: ano de admiss�o) 
			   e incrementa a vari�vel t.
               	
				exemplo:0001EINF2022
               			isto �, � o n�mero 0001 do curso de Engenharia Inform�tica e foi admitido no
						   ano lectivo 2022. 
               
			   Obs.: o n�mero gerado deve pertencer ao intervalo [1, M], onde M � o n�mero de 
			   		 admitido por curso. Se j� n�o h� n�mero deve emitir uma mensagem de alerta.
               			
*/

void gerar_numero(void){
	// escreva aqui o seu codigo
}


/* TODO (Estudante#2#): Fluxo de execu��o:
                        Passo 1: o sistema solicita o n�mero de 
                        matr�cula;
                        Passo 2: O operador informa o n�mero
                        Passo 3: O sistema pesquisa o estudante pelo 
                        n�mero de matr�cula
                        Passo 4: Se o n�mero de matr�cula existe, 
                        ent�o
                        Passo 4.1: O sistema apresenta o n�mero do 
                        estudante, o curso e o ano em que o mesmo 
                        foi admitido.
                        Passo 4.2: O sistema solicita ao operador para 
                        pressionar uma tecla para voltar ao menu 
                        principal
                        Passo 5: Se o n�mero de matr�cula n�o existir
                        Passo 5.1: O sistema emite uma mensagem a 
                        informar que o n�mero de matr�cula n�o 
                        existe.
                        Passo 5.2: O sistema solicita ao operador para 
                        pressionar uma tecla para voltar ao menu 
                        principal */

void consultar_aluno(void){
	// escreva aqui o seu codigo
}

/* TODO (Estudante#1#): A fun��o lista todos os n�meros de matr�cula 
                        registados. Se n�o existe nenhum registado, 
                        emite uma mensagem a informar a situa��o.  */

void listar_aluno(void){
	// escreva aqui o seu codigo
}

/* TODO (Estudante#1#): Fluxo de execu��o:
                        Passo 1: O sistema solicita o n�mero de 
                        matr�cula
                        Passo 2: Dado o n�mero de matr�cula, o 
                        sistema pesquisa o n�mero
                        Passo 3: Se o sistema encontrar o n�mero de 
                        matr�cula,
                        Passo 3.1: O sistema move uma vez para 
                        esquerda todos os n�meros que est�o a direito 
                        do n�mero de matr�cula dado
                        Passo 3.2: O sistema informa o operador que o 
                        n�mero foi removido com sucesso
                        Passo 4: Caso o sistema n�o encontre o 
                        n�mero,
                        Passo 4.1: O sistema apresenta uma 
                        mensagem a informar a situa��o.  */

void remover_aluno(void){
	// escreva aqui o seu codigo
}

/* TODO (Estudante#1#): Termina o programa com a confirma��o do 
               operador. */

void terminar_programa(void){
	// escreva aqui o seu codigo
}

int menu_cursos(){
	int i, op;
	printf("\n===== Gerar numero de matricula =====\n\n");
	
	for(i = 0; i < N_CURSOS; i++)
		printf("%d. %s\n", i + 1, cn[i]);
	
	printf("\nInforme o curso do estudante: ");
	scanf("%d",&op);
	
	return op;
}
