#include <iostream>
using namespace std;
int main()
{
    float angulo = 0.00;

    cout<<"Ingresar el tipo de angulo\n";
    cout<<"Ingrese angulo\n";
    cin >> angulo;


    if (angulo<90)
    {
    cout <<"El angulo es agudo\n";
    }
    else if(angulo>90)
    {
        cout<<"El angulo es obtuso\n";
    }
    else if(angulo = 90)
    {
        cout<<"El angulo es recto\n";
    }
    return 0;
}
