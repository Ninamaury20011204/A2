//programa  para calcular edad
//nombre:nina tapuyo


#include<iostream>//utilizamos para la entrada y salida de datos en la libreria.
using namespace std;//se  utiliza para poder ejecutar  cin, cout y tambien para el std.
int main()//el cuerpo del programa

{
	int aa,ma,da,an,mn,dn,a,m,d;//declaramos todos los variables
	cout<<"ingrese la fecha actual: ";//muestra mensaje al usuario en pantalla para que ingrese su dato.
	cin>>aa>>ma>>da;//con cin guardamos los datos 

	cout<<"ingrese la fecha de nacimiento:  ";// ingresa el dato el usuario  que sale en la pantalla
	cin>>an>>mn>>dn;//guardamos el dato 
	if(da>dn){//utilizamos cuando  la condicion es verdadero
		d=da-dn;//declarmos variable de dia general

	}else{//utilizamos cuando la condicion es falso
		da=da+30;//declaramos dia actual
		ma=ma-1;//decalramos mes actual
		d=da-dn;//declaramos dia 

	}
	if(ma>mn){//utilizamos cuando  es verdadero
		m=ma-mn;//variable del mes 
	}else{//utilizamos si la condicion es falso
		ma=ma+12;//variable  mes actual para finalizar
		aa=aa-an;//variable del  año actual para finalizar
		m=ma-mn;//variable del mes general
	}
	a=aa-an;//escribimos el año general para fianlizar
	cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl;//mostramos al usuario el mensaje en pantalla el resultado
	return 0;//finaliza la ejecucion del programa.

}
