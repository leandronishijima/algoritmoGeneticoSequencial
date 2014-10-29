#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"
#include "Cromossomo.h"
#include "AlgoritmoGenetico.h"
#include "Vertice.h"

using namespace std;

Cromossomo populacaoInicial[2];

int arraySize(int array[]) {
	return sizeof(array) / sizeof(int);
}

void adicionaVerticesComMesmaCor(Grafo grafo, int corDosVertices, int valores[]) {
	for (int i=0; i < arraySize(valores); ++i)
		grafo.adicionaVertice(valores[i], corDosVertices);
}

void adicionaVerticesComCoresRandomicas(Grafo grafo, int valores[]) {
	for (int i=0; i < arraySize(valores); ++i)
		grafo.adicionaVertice(valores[i], rand() % 4);
}

void adicionaArestasTeste(Grafo& grafo) {
	grafo.adicionaArestaComCor1(0, 1);
	grafo.adicionaArestaComCor1(0, 2);
	grafo.adicionaArestaComCor1(0, 3);
	grafo.adicionaArestaComCor1(1, 0);
	grafo.adicionaArestaComCor1(1, 2);
	grafo.adicionaArestaComCor1(1, 4);
	grafo.adicionaArestaComCor1(2, 0);
	grafo.adicionaArestaComCor1(2, 1);
	grafo.adicionaArestaComCor1(2, 5);
	grafo.adicionaArestaComCor1(3, 0);
	grafo.adicionaArestaComCor1(3, 5);
	grafo.adicionaArestaComCor1(4, 1);
	grafo.adicionaArestaComCor1(4, 5);
	grafo.adicionaArestaComCor1(5, 3);
	grafo.adicionaArestaComCor1(5, 4);
	grafo.adicionaArestaComCor1(5, 2);
}

Grafo geraPrimeiroGrafoTeste() {
	Grafo grafo = Grafo();
	int vertices[] = { 0, 1, 2, 3, 4, 5 };
	adicionaVerticesComMesmaCor(grafo, 0, vertices);
	adicionaArestasTeste(grafo);
	return grafo;
}

Grafo geraSegundoGrafoTeste() {
	Grafo grafo = Grafo();
	int vertices[] = { 0, 1, 2, 3, 4, 5 };
	adicionaVerticesComCoresRandomicas(grafo, vertices);
	adicionaArestasTeste(grafo);
	return grafo;
}

void criaPopulacaoInicial() {
	Cromossomo primeiroCromossomo = Cromossomo(geraPrimeiroGrafoTeste());
	Cromossomo segundoCromossomo = Cromossomo(geraSegundoGrafoTeste());

	populacaoInicial[0] = primeiroCromossomo;
	populacaoInicial[1] = segundoCromossomo;
}

int main() {
//	criaPopulacaoInicial();

	Vertice vertice = Vertice();
	vertice.setCor(2);
	vertice.setValor(2);

	Vertice vertices[10];

	printf("Valor: %d", vertices[0].isReal());

	return 0;
}
