#include <iostream>
using namespace std;
#include <fstream>
void exahustiva ();
void arreglo ();
 int  arreglo (int a[],int n,int dato);
 /*
#define tamanio(a)(sizeof(a)/sizeof(a[0]));
*/
//UN PROGRAMA DE ORDENAMIENTO  , UNIDO CON ARCHIVOS Y FUNCIONES 
//

int main() {
  
arreglo ();
 exahustiva ();
 int    a[10]={0,1,2,3,4,5,6,7,8,9};
 
 if (arreglo(a,10,5)==-1){
   cout<<"elemento no encontrado.";
 }
 else{
   cout<<"elemento encontrado en la posicion: "<<arreglo (a,10,5);//arreglo,el numero de elementos del arreglo, y el elemento que deseamos encontrar;
 }
 
  return 0;
} void arreglo(){
ofstream Busqueda;
Busqueda.open("Busqueda.txt",ios::app);

 int b,i,j,k;
 int  a[10]={0,1,2,3,4,5,6,7,8,9};
 /*
 cout<< tamao(a);
 */
  i=0;//posicon inicila
  j=10-1;//ultimo posicion
  b=5;//datos buscado
  do{
k=(i+j)/2;//el elemento medio
if(a[k]<=b){
  i=k+1;//parte isquierda

}
if (a[k]>=b){
  j=k-1;//parte derecha
}
  }
 while (i<=j);
 cout <<"\n elemento buscado: "<<b<<endl;
 Busqueda<<"\n elemento encontrado: "<< a[k]<<endl;



}

int  arreglo(int a[],int n,int dato){
ofstream Busqueda;
int i=0;
Busqueda.open("Busqueda.txt",ios::app);
 
  for (int i=0;i<=n;i++){
    if (a[i]==dato){
      Busqueda <<"posicion"<<i<<"\n";
      return i;
    }
  

  }
  
  return -1;
}
void exahustiva (){
  int  arreglo(int a[],int n,int dato);
  int i,j,band;
   int b=5;
  int    a[10]={0,1,2,3,4,5,6,7,8,9};
  int o;
  ofstream Busqueda;

Busqueda.open("Busqueda.txt",ios::app);
///////////////


///////////////////
  for (int i=0;i<10;i++)
  { int k=i,j=0;
  
while (a[k]==b&&j<=10){
  k++;
  j++;


      if ((j<10-1)&& (j=b)){
        cout<<"se encuentra en la posicion "<<i<<endl;
      }
      
      if (band ==0){
      cout <<"no se encuentra";
    }


}
  
  cout <<"\n  buscado: "<<b<<endl;
 Busqueda<<"\n  encontrado: "<< a[b]<<endl;

}


}

