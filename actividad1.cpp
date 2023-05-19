#include <iostream>
#include <string>

using namespace std;    

int main (){

    //-------------------------------------------------PUNTO 1--------------------------------------------------

    /* // int numero = 4;
    // float numeroDecimal = 3.5;
    // bool booleano = false;
    // string texto = "Hola mundo";

    float promedio;
    float notaT;
    float numero1 = 0;
    cout << "Ingrese el numero de notas que va a ingresar" << endl;
    cin >> numero1;
    for (int i = 1; i <= numero1; i++)
    {   
        float nota;
        cout << "Ingresa la nota numero #"<< i << endl;
        cin >> nota;
        if (nota <= 5 && nota >= 0)
        {
           notaT += nota;
        }
        else{
            cout << "Nota no valida, solo de 1 a 5" << endl;
            cout << "" << endl;
            i --;
        }

    }
    promedio = notaT / numero1;
    cout << "El promedio definitivo del estudiante fue " << promedio << endl;

    if (promedio >= 3.9)
    {
        cout << "Becado yei" << endl;
    }
    else
    {
        cout << "Estudie vago" << endl;
    } */
    

    //-------------------------------------------------PUNTO 2--------------------------------------------------

    /* int numeroDividido;
    int numero;

    cout << "Inserte un numero" << endl;
    cin >> numero;
    numeroDividido = numero % 2;
    if (numeroDividido == 0)
    {
        if (numero >= 10)
        {
            cout << "Su numero es par y mayor que 10" << endl;
        }else{
            cout << "Su numero es par y menor que 10" << endl;
        }
        
    }
    else{
        if (numero >= 10)
        {
            cout << "Su numero es impar y mayor que 10" << endl;
        }else{
            cout << "Su numero es impar y menor que 10" << endl;
        }
        
    } */

    //-------------------------------------------------PUNTO 3--------------------------------------------------

    /* float voltaje;
    float resistencia;
    float intensidadCorriente;

    cout << "Inserte la resistencia del circuito" << endl;
    cin >> resistencia;

    cout << "Inserte la intensidad de la corriente del circuito" << endl;
    cin >> intensidadCorriente;

    voltaje = resistencia * intensidadCorriente;

    cout << "El voltaje del circuito de resistencia " << resistencia << " y de intensidad " << intensidadCorriente << " es de" << voltaje << endl; */

    //-------------------------------------------------PUNTO 4--------------------------------------------------

    /* int personas;
    string persona;
    int edad;
    int edadM;
    string personaM;

    cout << "Inserte la cantidad de personas que quiere ingresar" << endl;
    cin >> personas;

    for (int i = 1; i <= personas; i++)
    {
        cout << "Inserte el nombre de la #" << i << " persona" <<endl;
        cin >> persona;
        
        cout << "Inserte la edad de " << persona << endl;
        cin >> edad;

        if (edad > edadM)
        {
            edadM = edad;
            personaM = persona;
        }
        
    }

    cout << "La persona con mayor edad es " << personaM << " con " << edadM << " años. " ; */

    //-------------------------------------------------PUNTO 5--------------------------------------------------

    /* float numero1;
    float numero2;
    float suma;
    float diferencia;
    float multiplicacion;
    float division;

    cout << "Inserta el primer numero" << endl;
    cin >> numero1;

    cout << "Inserta el segundo numero" << endl;
    cin >> numero2;

    if (numero1 > numero2)
    {
        suma = numero1 + numero2;
        diferencia = numero1 - numero2;

        cout << "Al ser " << numero1 << " mayor a " << numero2 << " se suman, y esta suma da como resultado " << suma << " ademas su diferencia da " <<diferencia << endl;
    }
    else
    {
        multiplicacion = numero2 * numero1;
        division = numero2 / numero1;

        cout << "Al ser " << numero2 << " mayor a " << numero1 << " se multiplican, y esta multiplicacion da como resultado " << multiplicacion << " ademas su division da " <<division << endl;
    } */
    
    //-------------------------------------------------PUNTO 6--------------------------------------------------

    

}