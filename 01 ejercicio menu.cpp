//Paso mpor valor, paso por refencia y recursividad
#include <iostream>
#include <conio.h>
using namespace std;

void valor_Nuevo(int&, int&);
int invertir(int);
int fibonacci(int n);

int main(int argc, char** argv) {
int num,num1, num2;
int resultado, bignum;
int numero;


do{
system("cls");
cout<<"\t\t\t.::Elija una opcion::.\n\n"<<endl;
cout<<"1. Paso por referencia "<<endl;
cout<<"2. Paso por valor "<<endl;
cout<<"3. Recursividad"<<endl;
cout<<"4. Salir "<<endl;
cin>>num;
cout<<endl;

  switch (num){
  case 1:
 cout<<"**Opcion 1: Paso por referencia** "<<endl;
 cout<<"Digita dos numeros: "<<endl;
 cin>>num1;
 cin>>num2;
 valor_Nuevo(num1,num2);
 cout<<endl;
 cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
 cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
 system("pause");
 break;
 
case 2:
 cout<<"**Opcion 2: Paso por valor "<<endl;
 cout<<"Ingresa un valor grande entero: "<<endl;
 cin>>bignum;
 resultado = invertir(bignum);
      cout << "Numero introducido: " << bignum << endl;
     cout << "Numero con las cifras invertidas: " << resultado << endl;
     system("pause");
 
 break;

case 3:
 cout<<"**Opcion3: Recursividad Fibonaccci**"<<endl;
 cout<<"Ingresa un numero: "<<endl;
 cin>>numero;
 cout<<"El resultado es: "<<fibonacci(numero);
 cout<<endl;
 system("pause");

 break;

}
   
    }while (num !=4);
    getch();
return 0;
}

void valor_Nuevo(int& xnum, int& ynum){
cout<<"El valor del primer numero es: "<<xnum<<endl;
cout<<"El valor del segundo numero es: "<<ynum<<endl;
xnum = 24;
ynum = 29;
}

int invertir(int bignum)
{
    int inverso = 0, cifra;
    while (bignum != 0)
    {
        cifra = bignum % 10;
        inverso = inverso * 10 + cifra;
        bignum = bignum / 10;
    }
    return inverso;
}

int fibonacci(int n){
if((n==1)||(n==2)){
 return(1);
}
else{
 return (fibonacci(n-1)+fibonacci(n-2));
}
}

