#include <iostream>

using namespace std;
int fibonacciRec(int num){
    if((num==1)||(num==2)){
        return 1;
    }
    else{
        return fibonacciRec(num-1)+fibonacciRec(num-2);
    }
}

int fibonacci2(int numero){
    int a=0,b=1,c;
    for(int i=0;i<numero -1;i++)
      {
          c=a+b;
          a=b;
          b=c;
      }
    return c;
}

int power( int base, int exponente){
    int i=1;
    for( i=1; exponente >0 ;exponente--){
        i*=base;
    }
    return i ;
}
int invertido(long numero){
    int digito ;
    while( numero >= 10) {
    digito = numero % 10;
    cout << digito ;
    numero /= 10;

    }
    return numero;

}
long long mult(long long x){

    int suma=0;
    for(int i=3 ;i < x;i++)
        if (i%3==0  ||  i%5==0){
            suma=suma+i;
        }
    return suma;
}
int main()
{
    //EJERCICIO 1

    //cout << "EJERCICIO 1 : " <<mult(1000000) << endl ;
    //cout << "EJERCICIO 2 RECURSIVO : " <<fibonacciRec(6) << endl ;
    //cout << "EJERCICIO 3 POTENCIA : " << power(2,2) << endl ;
    //cout << "EJERCICIO 4 ITERATIVO : " <<fibonacci2(6)<< endl ;
    cout << "EJERCICIO 5 INVERTIDO : " ;
    cout << invertido(1354) << endl ;
    return 0;
}
