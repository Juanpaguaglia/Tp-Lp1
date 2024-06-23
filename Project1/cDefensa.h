#include "Headers.h"

enum eTipoDefensa
{
	mordida, garrazo, coletazo
};

class cDefensa : public cAtaque
{
protected:
	eTipoDefensa tipo;

public:
	eTipoDefensa get_tipoDefensa();
	void set_tipoDefensa(eTipoDefensa Tipo);
	string to_stringDef();

	cDefensa();
	cDefensa(int Danio, eTipoDefensa Tipo); // Constructor con parámetros
	~cDefensa();

	void Polimorfico_no_desarrollado();// Implementación de la función virtual pura
};


