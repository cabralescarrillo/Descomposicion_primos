//Descomponer primos 
//en este programa se descompone en primos 
#include <iostream>
using namespace std;


int main() {

    int n;
    cout<<"ingrese un numero "; //en este punto le pedimos al ususario ingresar el numero
    cin>>n;
    for(int i = 2; n > 1 ; i++) { // con este for podemos evaluar los numeros desde el 2 sin evaluar los pares  ni multiplos de 3
        while (n%i == 0) 
        {
            
            n = n/i;
            if (n>1)cout<<i<<"x"; // aqui le agregamos la x de multipliccion 
            else cout<<i;


        }

    }
    return 0;
 
}