//
// Created by Mauricio on 27-12-2018.
//

#include "Aeroporto.h"

void Aeroporto::CargarActividad() {
    //Cargar en el archivo
}

void Aeroporto::CierreActividad() {
    //Final
}
void *Aeroporto::Reloj() {
    int horaActual=this->horaActual;
    while(true){ //this->vuelos!=NULL
        for(long int i=0;i<segundo;i++);
        horaActual++;
        if(horaActual%100==60){
            horaActual+=40;
            if (horaActual==2400){
                horaActual=0;
                this->fecha->AddDay();
            }
        }
        this->horaActual=horaActual;
        cout << "Hora Actual: ";
        if (int(this->horaActual/ 100)<10)
            cout <<"0";
        cout << int(this->horaActual / 100) << ":";
        if (this->horaActual%100<10)
            cout << "0";
        cout << this->horaActual%100 << "\n";
    }
    return NULL;
}

void Aeroporto::GenerarInforme() {
    //Escribir en el archivo
}

void Aeroporto::IniciarActividad() {


}
void Aeroporto::InterrumpirActividad() {
    this->GenerarInforme();
    this->ImprimirInforme();
}
void Aeroporto::ImprimirInforme() {
    cout << "----------AEROPUERTO---------\n";
    cout << this->nombre << "\n";
    cout << "----------AEROLINEAS---------\n";
    for(Aerolinea* i=this->aerolineas;i!=NULL;i=i->getNext())
        i->ImprimirVuelos();
    cout << "\n";
    cout << "----------TERMINALES---------\n";
    for(Terminal* i=this->terminales;i!=NULL;i=i->getNext())
        i->ImprimirDatosTerminal();
    cout << "\n";
}

void Aeroporto::RegistrarTerminal(Terminal* terminal) {
    Terminal* i;
    if (this->terminales==NULL) {
        this->terminales = terminal;
        return;
    }
    for(i=this->terminales;i!=NULL;i=i->getNext())
        if(i->getNext()==NULL){
            i->setNext(terminal);
            return;
        }
}

void Aeroporto::RegistrarAerolinea(Aerolinea* aerolinea) {
    Aerolinea* i;
    if (this->aerolineas==NULL) {
        this->aerolineas = aerolinea;
        return;
    }
    for(i=this->aerolineas;i!=NULL;i=i->getNext())
        if(i->getNext()==NULL){
            i->setNext(aerolinea);
            return;
        }
}