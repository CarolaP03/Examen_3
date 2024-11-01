//EXAMEN 3 FUNDAMENTOS
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1) 
        return 1;
    else
        return n * factorial(n - 1); // Se manda a llamar la recursividad
}


void cajeroAutomatico()
{
    int saldo = 20000;
    int opcion, retiro;

    do
    {
        cout << "Cajero Automatico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar efectivo" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cout << "[->] ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Su saldo actual es: " << saldo << " USD" << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad a retirar: " << endl;
            cout << "[->] ";
            cin >> retiro;
            if (retiro <= saldo)
            {
                saldo -= retiro;
                cout << "Retiro exitoso. Su nuevo saldo es: " << saldo << " USD" << endl;
            }
            else
            {
                cout << "Fondos insuficientes." << endl;
            }
            break;
        case 3:
            cout << "Saliendo del cajero automatico..." << endl;
            break;
        default:
            cout << "Opcion invalida intentelo de nuevo. " << endl;
            break;
        }
    } while (opcion != 3);
}

int main()
{
    int seleccion;

    cout << "Seleccione una funcion: " << endl;
    cout << "1. Calcular Factorial" << endl;
    cout << "2. Usar Cajero Automático" << endl;
    cout << "[->] ";
    cin >> seleccion;

    if (seleccion == 1)
    {
        int num;
        cout << "Ingrese un numero para calcular su factorial: ";
        cin >> num;
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }
    else if (seleccion == 2)
    {
        cajeroAutomatico();
    }
    else
    {
        cout << "Opcion invalida intentalo nuevamente";
    }

    return 0;
}
