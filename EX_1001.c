/* Leia 2 valores inteiros e armazene-os nas vari�veis A e B.
   Efetue a soma de A e B atribuindo o seu resultado na vari�vel X. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ( )
{
	// Definindo a nacionalidade
	setlocale (LC_ALL, "Portuguese");
	
	// Definindo cor de plano e fundo
	system ("color 1f");
	
	
	// Declarando vari�veis
	int A, B, X;
	
	// Armazenando valores dentro das vari�veis
	scanf ("%d %d", &A, &B);
	
	// Processamento
	X = A + B;
	
	// Exibir na tela
	printf ("\n X = %d \n", X);
	
	// Pausa a tela
	getche ( );

}
