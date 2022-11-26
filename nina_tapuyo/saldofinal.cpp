//programa creado para conocer el saldo final
//nombre: nina tapuyo

#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.


{
	float x,s=0;//declaramos variables de x y s
	int i=0,l;//utilizamos el i como el contador
	cout<<"ingrese cantidad de egreso (l):  ";//se muestra un mensaje al asuario en pantalla
		cin>>l;//guardamos la cantidad ingresado por el usuario de l
        cout<<"ingrese saldo inicial (s):  ";//pedimos al usuario que ingrese un valor para s, que se muestra en pantalla el mensaje.
	cin>>s;//guardamos el valor ingresado con el cin
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.
	
	cout<<"ingrese egreso (x):  ";//se muestra mensaje al usaurio. 
	cin>>x;//guardamos valor ingresado de x
	i=i+1;// el contador general (i) para finalizar 
	s=s+x;// el acumulador general del valor de s
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"el saldo final es:  "<<s<<endl;//se muestra el mensaje al usuario del resultado final
	return 0;//finaliza el programa o la ejecucion

}
