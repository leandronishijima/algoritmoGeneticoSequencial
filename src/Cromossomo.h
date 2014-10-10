#ifndef CROMOSSOMO_H_
#define CROMOSSOMO_H_

#include "Vertice.h"
#include "Aresta.h"
#include "Grafo.h"

class Cromossomo {

	Grafo grafo;

public:
	Cromossomo();
	Cromossomo(Grafo);
};

#endif
