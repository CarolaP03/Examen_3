//EXAMEN 3 FUNDAMENTOS

#include <iostream>
using namespace std;


int factorial(int n)
{
    if (n <= 1) 
        return 1;
    else
        return n * factorial(n - 1); 
}

int main()
{
    int num;
    cout << "Ingrese el numero que desea calcular: ";
    cin >> num;
    cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    return 0;
}
