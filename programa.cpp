#include<iostream>
#include<conio.h>
using namespace std;
float porcentaje(float total,float porcen);
void credito(float total,float porcen);
void imprimir(float t_propio,float t_banco);
main(){
  char rsp;
  float total,p,b,c,t_propio,t_banco,t_credito;
  do{
    system("cls");
    cout<<"Monto total de la compra: ";
    cin>>total;
    cout<<endl;
    if(total< 500000){
      p =0.70;
      c =0.30;
      b =0;
      }
    else{
      p =0.55;
      b =0.30;
      c =1-(p+b);
     }
    t_propio = porcentaje(total,p);
    t_banco = porcentaje(total,b);
    imprimir(t_propio,t_banco);
    credito(total,c);
    cout<<"¿Desea realizar otro calculo?";
    cin>>rsp;
  }while(rsp=='s');
  getch();
}

float porcentaje(float total,float porcen){
  float tcalculo;
  tcalculo = total * porcen;
  return tcalculo;
}

void credito(float total,float porcen){
  float tcredito,intereses,cfinal;
  tcredito = total * porcen;
  intereses = tcredito * .20;
  cfinal = intereses + total;
  cout<<"El credito solicitado al fabricante es de "<<tcredito<<endl;
  cout<<"Los intereses por el credito seran "<<intereses<<endl;
  cout<<"El costo final con intereses es de "<<cfinal<<endl;
}

void imprimir(float t_propio,float t_banco){
  cout<<"La inversion propia es de "<<t_propio<<endl;
  cout<<"El prestamo del banco es de "<<t_banco<<endl;
}
