// tamagotchiEstudi.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Zexi Li Li

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int hora = 40; //aquestes son les hores d'estudi per evolucionar
int mod_hora[3];
void doble_hores() { //funcio per afegir el doble d'hores d'estudi que les actuals
    cout<<"Afegint el doble d'hores d'estudi que les actuals: "<<hora * 2;
}
void hores_random() {   //funcio per afegir un nombre d'hores aleatories (positives o negatives)
    int hora = 40;
    int hora_random = rand() % 12 + 1;
    int afegir_restar = rand() % 2 + 1; //per decidir si sumar o restar
    cout << "Generant un nombre a l'atzar: ";
    if (afegir_restar == 1 )    //si es 1, suma
    {
        cout << "+" << hora_random << endl;
        cout << "Hores despres de sumar: "<<hora + hora_random;
    }
    else if (afegir_restar == 2 )   //si es 2 resta
    {
        cout << "-"<<hora_random<<endl;
        cout << "Hores despres de restar: "<<hora - hora_random;
    }
}

void assignatures() { //funcio que demana usuari assignatura i hores
    //assignatura 1
    string assignatura;
    int horesAssignatura;
    cout << "Introdueix nom de l'assignatura: \n";
    cin >> assignatura;
    if (assignatura == "0")
    {
        cout<<"Programació i molt";
    }
    cout << "Assigna-li les hores a l'assignatura: \n";
    cin >> horesAssignatura;
    
    //assignatura 2
    string assignatura2;
    int horesAssignatura2;
    cout << "Introdueix nom de l'assignatura: \n";
    cin >> assignatura2;
    if (assignatura2 == "0")
    {
        cout << "Programació i molt";
    }
    cout << "Assigna-li les hores a l'assignatura: \n";
    cin >> horesAssignatura2;

    cout << assignatura << ": " << horesAssignatura << " hores"<<endl;
    cout << assignatura2 << ": " << horesAssignatura2 << " hores";
}
//amb arrays no funciona
//void assignatures() {
//    string assignatura, horesAssignatura[9];
//    cout << "Introdueix nom de l'assignatura: \n";
//    cin >> assignatura[0];
//    if (assignatura == 0)
//    {
//        cout << "Programació i molt";
//    }
//    cout << "Assigna-li les hores a l'assignatura: \n";
//    cin >> horesAssignatura[0];
//    cout << assignatura << ": " << horesAssignatura; <-- aquesta part retorna el que sembla ser hexadecimal
//}
int main()
{
    srand(time(NULL));
  
    doble_hores(); cout << endl;
    cout << "Hores necessaries per evolucionar: "<<hora <<endl;
    hores_random(); cout << endl;
    assignatures();
}
