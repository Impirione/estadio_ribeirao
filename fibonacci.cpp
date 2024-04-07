#include <iostream>

using namespace std;

int main(){
    
    int numero, soma, x=0, y=1;

    cout <<"Informe um numero: "<< endl;
    cin >> numero;

    if(numero==0||numero==1){
        cout << "O numero "<< numero<< " pertence ao Fibonacci."<<endl;
    }else{

        do{
          soma = x + y;
          x = y;
          y = soma;


        } while (soma<numero);
        

        if(numero==soma){
            cout << "O numero "<< numero<< " pertence ao Fibonacci."<<endl;
        }else{
            cout << "O numero "<< numero<< " nao pertence ao Fibonacci."<<endl;
        }
    }
}