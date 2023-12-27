/*
	Name: Função UnimestreMais
	Copyright: ISPTEC@2023
	Author: Msc João Costa, docente
	Date: 22/12/23 08:34
	Description: 
	Pretendemos propor melhoria de algumas funcionalidades do sistema Unimestre
	em funcionamento no ISPTEC. 
	
	Actualmente, o sistema mecanográfico é baseado apenas no ano de admissão. 
	Não é possível, pelo número de matrícula, identificar o ano de admissão e o curso
	de um determinado estudante.
*/


#include <stdio.h>
#include <stdlib.h>


/*
Estrutura de dados
*/
#define MAX 100 // Quantidade de alunos
#define N_CURSOS 6
#define M 50 // número de admitidos por curso
typedef char t_aluno[MAX/10]; // tipo para o numero
t_aluno matriculas[MAX]; // lista de número de matrículas geradas
int t = 0; // quantidade de número de matrícula registado no sistema.

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
		"EELT", // Engenharia Electrotécnica
		"EINF", // Engenharia Informatica
		"EPI", // Engenharia de Produção Industrial
		"EQM", // Engenharia Química
		"EMC" // Engenharia de Produção Industrial
	};
/*
protótipo de funções
*/
void gerar_numero(void);
void consultar_aluno(void);
void listar_aluno(void);
void remover_aluno(void);
void terminar_programa(void);


/*
Função principal
*/
int main(int argc, char *argv[]) {
	
	/* TODO (Estudante#1#): Elaborar o menu com as seguintes opcões:
	                        
	                        1. Gerar número de matrícula dado o curso
	                        2. Consultar aluno pelo número de matrícula
	                        3. Listar números de matrícula
	                        4. Remover número de matrícula
	                        5. Terminar o programa  */
	menu_cursos();
	return 0;
}


/* TODO (#1#): Função gerar_numero()
               
               Especificação
               Passo 1. O sistema lista os cursos disponíveis e 
               solicita que o funcionário da secretaria 
               selecione o curso (usar a função dada);
               Passo 2. O sistema gera o número de matrícula 
               de estudante no forma NCA (N: número de ordem, C: curso em que se inscreveu e A: ano de admissão) 
			   e incrementa a variável t.
               	
				exemplo:0001EINF2022
               			isto é, é o número 0001 do curso de Engenharia Informática e foi admitido no
						   ano lectivo 2022. 
               
			   Obs.: o número gerado deve pertencer ao intervalo [1, M], onde M é o número de 
			   		 admitido por curso. Se já não há número deve emitir uma mensagem de alerta.
               			
*/

void gerar_numero(void){
	// escreva aqui o seu codigo
}


/* TODO (Estudante#2#): Fluxo de execução:
                        Passo 1: o sistema solicita o número de 
                        matrícula;
                        Passo 2: O operador informa o número
                        Passo 3: O sistema pesquisa o estudante pelo 
                        número de matrícula
                        Passo 4: Se o número de matrícula existe, 
                        então
                        Passo 4.1: O sistema apresenta o número do 
                        estudante, o curso e o ano em que o mesmo 
                        foi admitido.
                        Passo 4.2: O sistema solicita ao operador para 
                        pressionar uma tecla para voltar ao menu 
                        principal
                        Passo 5: Se o número de matrícula não existir
                        Passo 5.1: O sistema emite uma mensagem a 
                        informar que o número de matrícula não 
                        existe.
                        Passo 5.2: O sistema solicita ao operador para 
                        pressionar uma tecla para voltar ao menu 
                        principal */

void consultar_aluno(void){
	// escreva aqui o seu codigo
}

/* TODO (Estudante#1#): A função lista todos os números de matrícula 
                        registados. Se não existe nenhum registado, 
                        emite uma mensagem a informar a situação.  */

void listar_aluno(void){
	// escreva aqui o seu codigo
}

/* TODO (Estudante#1#): Fluxo de execução:
                        Passo 1: O sistema solicita o número de 
                        matrícula
                        Passo 2: Dado o número de matrícula, o 
                        sistema pesquisa o número
                        Passo 3: Se o sistema encontrar o número de 
                        matrícula,
                        Passo 3.1: O sistema move uma vez para 
                        esquerda todos os números que estão a direito 
                        do número de matrícula dado
                        Passo 3.2: O sistema informa o operador que o 
                        número foi removido com sucesso
                        Passo 4: Caso o sistema não encontre o 
                        número,
                        Passo 4.1: O sistema apresenta uma 
                        mensagem a informar a situação.  */

void remover_aluno(void){
	// escreva aqui o seu codigo
}

/* TODO (Estudante#1#): Termina o programa com a confirmação do 
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
