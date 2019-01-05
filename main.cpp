#include <iostream>
#include "Aeroporto.h"
#include "Cronometro.h"
#include <windows.h>

int main() {
    Aeroporto *aeropuerto = new Aeroporto("Brasil", 2, 0, 2, 4, 2010);
    Terminal *terminal1 = new Terminal("CR20", 10, 10, 0);
    Terminal *terminal2 = new Terminal("TE12", 5, 4, 0);
    Terminal *terminal3 = new Terminal("QW01", 7, 5, 1);
    Aerolinea *aerolinea1 = new Aerolinea("AmericanAirlines");
    Aerolinea *aerolinea2 = new Aerolinea("Rutaca");
    Vuelo *vuelo1 = new Vuelo("N4", "Brasil", "Chile",20,30 , 4, 1, 2019, 2, new Avion("67", 60, 16, 0));
    Vuelo *vuelo2 = new Vuelo("N2", "Colombia", "Brasil",15, 10, 4, 1, 2019, 1, new Avion("67", 60, 16, 0));
    Vuelo *vuelo3 = new Vuelo("N1", "Brasil", "USA",5,45, 4, 1, 2019, 0, new Avion("67", 60, 16, 0));
    Vuelo *vuelo4 = new Vuelo("N3", "Venezuela", "Brasil",5,45, 4, 1, 2019, 1, new Avion("67", 60, 16, 0));
    aeropuerto->RegistrarTerminal(terminal1);
    aeropuerto->RegistrarTerminal(terminal3);
    aeropuerto->RegistrarTerminal(terminal2);
    aerolinea1->RegistrarVuelo(vuelo1);
    aerolinea1->RegistrarVuelo(vuelo2);
    aerolinea2->RegistrarVuelo(vuelo3);
    aeropuerto->RegistrarVuelo(vuelo1);
    aeropuerto->RegistrarVuelo(vuelo2);
    aeropuerto->RegistrarVuelo(vuelo3);
    aeropuerto->RegistrarAerolinea(aerolinea2);
    aeropuerto->RegistrarAerolinea(aerolinea1);
    aeropuerto->AgregarAColaVuelos(vuelo2);
    aeropuerto->AgregarAColaVuelos(vuelo1);
    aeropuerto->AgregarAColaVuelos(vuelo4);
    aeropuerto->AgregarAColaVuelos(vuelo3);
    aeropuerto->IniciarGestion();
}