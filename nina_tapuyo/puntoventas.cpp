//programa punto de ventas 
//nombre:nina tapuyo
 
#include<iostream>//entrada y salida de datos en libreria
using namespace std;//para poder utilizar cin y cout 
int main()//el cuerpo del programa

{      

	float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;//decalramos los variables
	int i=0,l;//variable del contador
	cout<<"ingrese l:  ";cin>>l;//mensaje al usuario en pantalla y se guarda
	do{//hacer mientras que la condicion cumpla
	
	cout<<"ingrese x:  ";cin>>x;//mensaje al usuario para que ingrese valor de x
	i=i+1;//contafor general
	s=s+x;//acumludar general
	
	}while(i<l);//ejecuta un elemento hasta que la condicion finalize
	vb=s;//variable del vb
	viva=vb*piva/100;//variable del viva
	vdesc=vb*pdesc/100;//variable del vdesc
	vn=vb+viva-vdesc;//variable del vn
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;//se muestra el resultado final
	return 0;//finaliza la ejecucion 

}
