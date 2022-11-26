//programa  para contar moneda
//nombre:nina tapuyo


#include<iostream>//utilizamos para  entrada y salida de datos en la libreria.
using namespace std;// utilizamos para ejecutar  cin, cout y no estar utlizando cada linea con  el std.
int main()//el cuerpo del programa

{
	float x=0,s=0,c1=0,s5=0;//declaramos los variables de x, s, c1, s5
	int s1=0,l,i1=0,i5=0;//declaramos el acumulador de s1,l, i1
	cout<<"ingrese l:  "; cin>>l;//utilizamos para mostrar  un mensaje al usuario que ingrese un valores  y lo guardamos.
	do{//utilizamos para  repetir hasta que la condicion se cumpla.
	
	cout<<" ingrese x:  "; cin>>x;//se muestra el mensaje al usuario en pantalla de x.
	i1=i1+1;//el  contador 1
	s=s+x;// el acumulador general
	if(x==1){//utilizamos si la condicion cumple si x es igual a 1.
	i1=i1+1;///contador general de i1
	s1=s1+x;// acumulador de s1
	}else{//utilizamos cuando la condicion es falsa
	i5=i5+1;// el contador i5
	s5=s5+x;// el acumolador de s5
	}
	}while(i1==l);// hasta que la condicion finalize.
	cout<<"la cantidad de monedas fue:  " <<i1<<endl;//se muestra el mensaje al usuario del resultado en monedasde i1.
	cout<<"el valor fue:  "<<s<<endl;//se muestra al usuario el valor total de s en pantalla
	
	cout<<"la cantidad de monedas de s1 fue:  "<<i1<<endl;// el resultado de s1
	cout<<"el valor fue:  "<<s<<endl;//se muestra el valor total al usuario.

	cout<<"la cantidad de monedas s5 fue: "<<i5<<endl;//se muestra al usuario en pantalla  la cantidad de monedas de s5.
	cout<<"el valor fue: "<<s5<<endl;//se muestra el valor total al usuario en pantalla.
	return 0;//finalizamos con la ejecucion.

}
