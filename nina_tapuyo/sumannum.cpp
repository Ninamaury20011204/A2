//programa suma de varios numeros
//nombre:nina tapuyo

#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;// para utilizar cin, cout y el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.
{

	float x=0,s=0;//utilizamos float para declarar variables x, s.
	int i=0,l;//para declarar variables en numeros enteros
	cout<<"ingrese eo valor de l:  ";//muestra en pantalla al usuario un mensaje para que ingrese un valor de l
	cin>>l;//guardamos con el cin el valor ingresado por el usuario.
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.

	cout<<"ingrese el valor de x:  ";//muestra el mensaje al usuario que ingrese valor de x
	cin>>x;//guardamos el vslor de  x
	i=i+1;//utilizamos el contadorgeneral para poder finalizar el programa. 
	s=s+x;//el acumulador general del variable s para finalizar.
	 
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"la suma de los numeros fue:  "<<s<<endl;//muestra el mensaje  en pantalla al usuario del resultado
	return 0;//finaliza la ejecucion y devuelve.

}
