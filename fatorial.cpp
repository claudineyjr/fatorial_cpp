#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
        int numero;
        double resultado;
        numero=resultado=0;
        //Início
        cout << "Calculador de fatorial :\n";
        cout << "Digite o numero para calcular o fatorial :";
        cin >> numero;
        //Consistir se o número é positivo
        while(numero<0)
        {
                cout<<"O numero tem que ser positivo, digite um numero positivo :";
                cin >> numero;
        }
        //Começar o fatorial
        resultado=numero*(numero-1);
        numero=numero-1;
        while(numero>1)
        {
                resultado=resultado*(numero-1);
                numero--;
        }
        cout << "O fatorial deste numero eh :" << resultado;
        return 0;
}