#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<iomanip>
#include <sstream>
#include <limits>
#include <bitset>
#include<math.h>
#include<conio.h>
#include<windows.h>


#define LIMITE_INF -999999.99
#define N_DIGITOS_ENTERO 6
#define UNIDADES 5
#define DECENAS 4
#define CENTENAS 3
#define MILLARES 2
#define DECENAS_MILLAR 1
#define CENTENAS_MILLAR 0
#define LIMITE_SUP 999999.99



using namespace std;
int main(){
	int opcion, op1;
	string text;
    int aux;
	int igual; 
	
	string salida;
	int argc;
	char* argv[4];
	int parteEntera,parteDecimal;
	double numr;
	do
	{
		system("cls");
	cout<<"1. Suma, Resta, Multiplicacion y Division de dos numero"<<endl;
	cout<<"2. Determinar si un numero es par o impar"<<endl;
	cout<<"3. Convertir Kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4. Determinar si una palabra o un numero es palindromo"<<endl;
	cout<<"5. Conversion de numeros arabigos a romanos(minimo 1,000)"<<endl;
	cout<<"6. conversion de numeros enteros a letras"<<endl;
	cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8. Una tabla de Muñltiplicar"<<endl;
	cout<<"9. Todas las tablas de multiplicar"<<endl;
	cout<<"10. Crear de forma grafica la multiplicacion manual"<<endl;
	cout<<"11. Conversion de numero decimales a binario"<<endl;
	cout<<"12. Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13. Crear figuras Geometricas Basicas"<<endl;
	cout<<"14. Mover un punto en toda la pantalla"<<endl;
	cout<<"15. Simular un cajero Automatico(Autonomata)"<<endl;
	cout<<"16. Calcular la Hipotenusa"<<endl;
	cout<<"17. Calcular si es Mayor de edad"<<endl;
	cout<<"18. Calcular el area de un rectangulo"<<endl;
	cout<<"19. Calcular el perimetro de un rectangulo"<<endl;
	cout<<"20. Calcular el salario de una persona"<<endl;
	cout<<"21. Salir"<<endl;
	cin>>opcion;

	switch(opcion){
		case 1:
			system("cls");
			cout<<"1. Suma"<<endl;
			cout<<"2. Resta"<<endl;
			cout<<"3. Multiplicacion"<<endl;
			cout<<"0. Division"<<endl;
			cin>>op1;
			switch(op1){
				case 1:
					system("cls");
					int num1,num2,suma;
					cout<<"Ingrese el Primer Numero"<<endl;
					cin>>num1;
					cout<<"Ingrese el Segundo Numero"<<endl;
					cin>>num2;
					suma = num1 + num2;
					cout<<"El resultado de la Suma de "<<num1<< " + "<<num2<<" es: "<<suma<<endl;
					cout<<"Preciona cualquier tecla para regresar al menu principal"<<endl;;
					system("PAUSE");
					break;
			    case 2:
				system("cls");
				int resta;
					cout<<"Ingrese el Primer Numero"<<endl;
					cin>>num1;
					cout<<"Ingrese el Segundo Numero"<<endl;
					cin>>num2;
					resta = num1 - num2;
					cout<<"El resultado de la Resta de "<<num1<<" - "<<num2<<" es: "<<resta<<endl;
			        cout<<"Preciona cualquier tecla para regresar al menu principal"<<endl;;
			        system("PAUSE");
				break;
			    case 3:
			    	system("cls");
			    	int multi;
			    	cout<<"Ingrese el Primer Numero"<<endl;
					cin>>num1;
					cout<<"Ingrese el Segundo Numero"<<endl;
					cin>>num2;
					multi = num1 * num2;
					cout<<"El resultado de la Multiplicacion de "<<num1<<" * "<<num2<<" es: "<<multi<<endl;
					cout<<"Preciona cualquier tecla para regresar al menu principal"<<endl;;
					system("PAUSE");
					
			    break;
			    case 4:
			    	system("cls");
			    	int div;
			    	cout<<"Ingrese el Primer Numero"<<endl;
					cin>>num1;
					cout<<"Ingrese el Segundo Numero"<<endl;
					cin>>num2;
					div = num1 / num2;
					cout<<"El resultado de la Division de "<<num1<<" / "<<num2<<" es: "<<div<<endl;
					cout<<"Preciona cualquier tecla para regresar al menu principal"<<endl;;
					system("PAUSE");
				break;
				case 0:
					system("cls");
			}
			break;
		case 2:
			system("cls");
			int nu;
			float re;
			cout<<"Ingrese el numero"<<endl;
			cin>>nu;
			re= nu%2;
			if(re == 0){
				cout<<"El numero es Par"<<endl;
			}
			else{
				cout<<"El numero es Impar"<<endl;
			}
			system("PAUSE");
			break;
		case 3:
			system("cls");
			int op2;
			cout<<"1. Convertir kilometros a millas"<<endl;
			cout<<"2. Convertir metros a pulgadas"<<endl;
			cout<<"3. Convertir Libras a Kilogramos"<<endl;
			cout<<"4. Convertir Kilogramos a Libras"<<endl;
			cout<<"0. Regresar al menu principal"<<endl;
			cin>>op2;
			switch(op2){
				case 1:
					double kilometros, metros, resultado;
				  system("cls");
				  cout<<"Ingrese los kilometros que desea convertir"<<endl;
				  cin>>kilometros; 
				  metros = kilometros * 1000;
				  cout<<"El resultado de la conversion es: "<<metros<<endl;
				  
				  system("PAUSE");
		        break;
				case 2:
		          system("cls");
		          double metros2,pulgadas;
		          cout<<"Ingrese los metros a convertir"<<endl;
		          cin>>metros2;
		          pulgadas = metros2 * 39.3701;
		          cout<<"El resultado de la conversion es: "<<pulgadas<<endl;
				  system("PAUSE");
		        break; 
		        
		        case 3:
		        	system("cls");
		        	double libras,kilo;
		        	cout<<"Ingrese las Libras a convertir"<<endl;
		        	cin>>libras;
		        	kilo = libras * 0.453592;
		        	cout<<"El resultado de la conversion es: "<<kilo<<endl;
		        	system("PAUSE");
		        break;
		        case 4:
		        	system("cls");
		        	double kilog, libra;
		        	cout<<"Ingrese los kilogramos a convertir"<<endl;
		        	cin>>kilog;
		        	libra = kilog *2.20462;
					cout<<"El resultado de la conversion es: "<<libra<<endl;
					system("PAUSE"); 
		        break;
		        
		        case 0:
		        break;
			}
		break;
		
		case 4:
		    system("cls");
		    cout<< "Ingrese la palabra o numero a evaluar: "<<endl;
	        getline(cin >> ws, text);
		    for(int ind = text.length() - 1; ind >= 0; ind--) {
		         if(text[ind] == text[aux]) {
	             igual++;
		    }
	        aux++;		
		   }
		    if(text.length() == igual) {
		       cout<<"La palabra o numero ingresado es palindromo!! "<<endl;
			} 
	        else {
               cout<<"La palabra o numero ingresado no es palindromo!!"<<endl;
            }
			system("PAUSE");
		break;
		case 5:
			system("cls");
			int num, a;
			cout << "Escribe el numero a convertir, que sea mayor o igual a 1 y menor o igual a 3999" << endl;
			cin >> a;
			num=a;
			while(num!=0)
			{
			if (num<= 3999 && num>= 1000)
			{
			cout << "M";
			num = num -1000;
			}
			else if(num <1000 && num>=900)
			{
			cout << "CM";
			num = num - 900;
			}
			else if(num < 900 && num>500)
			{
			cout << "D";
			num = num - 500;
			}
			else if (num == 500)
			{
			cout << "D";
			num = num -500;
			}
			else if (num<500 && num>= 400)
			{
			cout << "CD";
			num = num - 400;
			}
			else if (num<400 && num >99)
			{
			cout << "C";
			num = num -100;
			}
			else if (num< 100 && num>89)
			{
			cout << "XC";
			num = num - 90;
			}
			else if (num< 90 && num>59)
			{
			cout << "L";
			num = num - 50;
			}
			else if(num<60 && num >50)
			{
			cout << "L";
			num = num - 50;
			}
			else if (num ==50)
			{
			cout << "L";
			num = num -50;
			}
			else if(num<50 && num>39)
			{
			cout << "XL";
			num = num - 40;
			}
			else if(num< 40 && num> 10)
			{
			cout << "X";
			num = num - 10;
			}
			else if(num == 10)
			{
			cout << "X";
			num = num -10;
			}
			else if(num==9)
			{
			cout << "IX";
			num = num - 9;
			}
			else if(num<=8 && num>=6)
			{
			cout << "V";
			num = num - 5;
			}
			else if (num == 5)
			{
			cout << "V";
			num = num - 5;
			}
			else if (num == 4)
			{
			cout << "IV";
			num = num - 4;
			}
			else if (num<= 3 && num>=1)
			{
		cout << "I";
		num = num - 1;
		}
		}
		system("PAUSE");
		break;
		case 6:
			int x;
			system("cls");
			cout<<"ingrese un numero"<<endl;
			cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
			else{
			if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
			else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
			else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
			else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
			else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
			else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
			else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
			else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
			else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
			else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
			if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
			if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
			else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
			else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
			else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
			else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
			else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
			else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
			if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
			if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
			if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
			else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
			else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
			else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
			else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
			else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
			}
			cout<<endl;
			system("PAUSE");
			break;
			
			case 8:
				system("cls");
				for(int i= 1;i <=10; i++){
					int nu=5;
					int t;
					t=nu*i;
					cout<<i<<" x "<<nu<<" = "<<t<<endl;
				}
				system("PAUSE");
			 break;
		    case 9:
		    	system("cls");
		    	cout<<"Tabla del 1"<<endl;
		    	for(int i=1; i<=10;i++){
		    		int uno=1;
		    		int t;
		    		t= uno*i;
		    		cout<<uno<<" x "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 2"<<endl;
				for(int i=1; i<=10;i++){
					int dos=2;
					int t;
					t=dos*i;
					cout<<dos<<" X "<<i<<t<<endl;
				}
				cout<<"Tabla del 3"<<endl;
				for(int i=1; i<=10; i++){
					int tres=3;
					int t;
					t=tres*i;
					cout<<tres<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 4"<<endl;
				for(int i=1;i<=10;i++){
					int cuatro=4;
					int t;
					t=cuatro*i;
					cout<<cuatro<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 5"<<endl;
				for(int i=1;i<=10;i++){
					int cinco=5;
					int t;
					t=cinco*i;
					cout<<cinco<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 6"<<endl;
				for(int i=1;i<=10;i++){
					int seis=6;
					int t;
					t=seis*i;
					cout<<seis<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 7"<<endl;
				for(int i=1;i<=10;i++){
					int siete=7;
					int t;
					t=siete*i;
					cout<<siete<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 8"<<endl;
				for(int i=1; i<=10;i++){
					int ocho=8;
					int t;
					t=ocho*i;
					cout<<ocho<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 9"<<endl;
				for(int i=1; i<=10; i++){
					int nueve=9;
					int t;
					t=nueve*i;
					cout<<nueve<<" X "<<i<<" = "<<t<<endl;
				}
				cout<<"Tabla del 10"<<endl;
				for(int i=1; i<=10; i++){
					int diez=10;
					int t;
					t=diez*i;
					cout<<diez<<" X "<<i<<" = "<<t<<endl;
				}
				system("PAUSE");
			 break;	
			case 10:
				system("cls");
				double numero1, numero2, resultado;
				cout<<"Ingrese el primer numero a multiplicar"<<endl;
				cin>>numero1;
				cout<<"Ingrese el segundo numero a multiplicar"<<endl;
				cin>>numero2;
				resultado=numero1*numero2;
				cout<<"     "<<numero1<<endl;
				cout<<" X   "<<numero2<<endl;
				cout<<"--------------------"<<endl;
				cout<<"     "<<resultado<<endl;
				system("PAUSE");
				break;
			case 11:
				int i;
				int numero[15];
				int bin[15];
				system("cls");
				cout<<"Ingrese el numero decimal a convertir"<<endl;
				cin>>numero[0];
				if(numero[0]==1){
					cout<<1;
				}
				else{
				
				for(i=0; numero[i] !=1 ;i++){
					numero[i+1] = numero[i] / 2;
					bin[i] = numero[i] % 2;
					if(numero[i+1] == 1) bin[i+1] =1;
				}
				for(int m = i; m>0; m--){
				cout<<bin[m];
			    }
		        }
			    system("PAUSE");
				break;
			case 12:
				system("cls");
				int digitoex[20];
				int residuo, resul, f;
				int decima;
				cout<<"Ingrese el numero decimal"<<endl;
				cin>>decima;
				do
				{
					residuo= decima % 16;
					resultado= decima / 16;
					digitoex[f]= residuo;
					decima = resul;
					f++;
				}while(resul>15);
				digitoex[f] = resul;
				cout<<"El equivalente en hexadecimal es: ";
				for(int j= f; j>=0; j--){
					if(digitoex[j]==10){
						cout<<"A";
					}
					else if(digitoex[j] ==11){
						cout<<"B";
					}
					else if(digitoex[j] == 12){
						cout<<"C";
					}
					else if(digitoex[j] == 13){
						cout<<"D";
					}
					else if(digitoex[j] == 14){
						cout<<"E";
					}
					else if(digitoex[j] == 15){
						cout<<"F";
					}
					else{
						cout<<digitoex[j];
					}
				}
				system("PAUSE");
			break;
			case 13:
				system("cls");
					int size,col,row;
					cout << " Ingrese el tamano del cuadro "<<endl; 
					cin >> size;
					for (int row = 1; row <= size; ++row) 
					{
					for (int col = 1; col <= size; ++col) 
					{
					cout << "* ";
					}
            cout << endl;
            }
            cout<<"Presione cualquier tecla para regresar al menu principal"<<endl;
            system("pause");
			system("cls");
				break;
			char ir;
			case 14:
				void gotoxy();
				{
					int x1;
					int y1;
					HANDLE hcon= GetStdHandle(STD_OUTPUT_HANDLE);
					COORD dwPos;
					dwPos.X = x1;
					dwPos.Y = y1;
					SetConsoleCursorPosition(hcon, dwPos);
				}
				while(ir!='z');
				{
					int v=10, l=10;
					system("cls");
					gotoxy(); 
					cout<<"*";
					ir=getch();
					switch(ir)
					{
						case 'w':
						  l--; 
						break;
						case 's': 
						 l++; 
						break;
						case 'a':
						 v--; 
						break;
						case 'd': 
						 v++; 
						break;
					}
				}
				system("PAUSE");
				break;
			
			case 15:
				system("cls");
				int retiro, saldo_inicial, dinero, o;
				saldo_inicial=1000;
				cout<<"Bienvenido a su cajero virtual"<<endl;
				cout<<"1. Retirar dinero"<<endl;
				cout<<"2. Depositar dinero a su cuenta"<<endl;
				cout<<"3. Sair"<<endl;
				cin>>o;
				switch(o){
					case 1:
						system("cls");
						cout<<"Ingrese la cantidad de dinero que desea Retirar"<<endl;
						cin>>dinero;
						if(dinero<=1000){
							retiro = saldo_inicial-dinero;
							cout<<"Retiro con exito"<<endl;
							cout<<"El saldo restante de su cuenta es: "<<retiro<<endl;;	
						}
						else{
							cout<<"La cantidad que desea retirar es mayor a su saldo actual"<<endl;
							
						}
						system("PAUSE");
						break;
						
					case 2:
						system("cls");
						cout<<"Ingrese el dinero a depositaar en su cuenta"<<endl;
						cin>>dinero;
						retiro= saldo_inicial + dinero;
						cout<<"El deposito se realizo correctamente"<<endl;
						cout<<"El saldo actua es:  "<<retiro<<endl;
						system("PAUSE");
						break;
						}
			system("PAUSE");
			break;
			case 16:
				system("cls");
				double r, b, m, c;
				cout<<"Ingrese el valor de a"<<endl;
				cin>>r;
				cout<<"Ingrese el vaor de b"<<endl;
				cin>>b;
				c= (r * r)+ (b * b);
				m=sqrt(c);
				cout<<"El vaor dela hipotenusa es: "<<m<<endl;
			system("PAUSE");
			break;
			
			case 17:
				int edad;
				system("cls");
				cout<<"Ingrese su edad"<<endl;
				cin>>edad;
				if(edad>=18){
					cout<<"Es mayor de edad"<<endl;
				}
				else{
					cout<<"No es mayor de edad"<<endl;
				}
				system("PAUSE");
				break;
				
			case 18:
				system("cls");
				int area,B,H;
				cout<<"Ingrese el valor de B"<<endl;
				cin>>B;
				cout<<"Ingrese el valor de H"<<endl;
				cin>>H;
				area = B * H;
				cout<<"El valor del area es: "<<area<<endl;
				system("PAUSE");
				break;
			
			case 19:
				system("cls");
				int perimetro, bb,hh;
				cout<<"Ingrese el valor de B"<<endl;
				cin>>bb;
				cout<<"Ingrese el valor de H"<<endl;
				cin>>hh;
				perimetro = bb+bb+hh+hh;
				cout<<"El valor del perimetro es: "<<perimetro<<endl;
				system("PAUSE");
				break;
			
			case 20:
				system("cls");
				int salario, horas, pago_hora, boni;
				cout<<"Ingrese las horas trabajadas"<<endl;
				cin>>horas;
				cout<<"Ingrese el pago por hora"<<endl;
				cin>>pago_hora;
				boni=250;
				salario = (horas * pago_hora) + boni;
				cout<<"Su salario es: "<<salario<<endl;
				system("PAUSE");
				break;
					
					
}

 

}while(opcion != 21);
return 0;
}



