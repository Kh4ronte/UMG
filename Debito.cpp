#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <iomanip>

//LINK DEL VIDEO

using  namespace std;

string imprimirDecimales(float total){
	
	
	
	int l=2, i=0,d=0,u=0,x=0,y=0;
	float r=0;
	string Numero;

total = total*100;


	
	int cantN[l];
	
	if((((int)total-total)!=0) && (total-(((int)total/10)*10)>=9)){
		
		d=((int)total/10)+1;
	}else{
		d=((int)total/10);
	}
	
	
		
		
		r= ((total-(d*10))-((int)total-(d*10)));
	
		
		if(total-(d*10)>=9){
				u=0;
					
		}else if(r>0.9){
			
				u=(total-(d*10)+1);
				
		}else{
				u=(total-(d*10));
		}
	
		
			
		
				cantN[0] = u;
				
			
				cantN[1] = d;
			
			
	
	
		if(cantN[0]==0 && cantN[1]==10 && y==0){
		y++;
	}else if(cantN[0]==0 && cantN[1]==0){
	
	}else {
	Numero +=" punto ";
	}

	for(int j=l; j>=0; j--){
	




		switch(cantN[j]){
			
		
						
			case 2:

				

if(j==2){
	
	Numero += "	Doscientos";	
	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Veinti";
	}else{
	Numero +=" Veinte ";	
	}
	
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Doce ";
	}else{
		Numero +="dos ";
	}
	
}
				
						break;
						
			case 3:

			

if(j==2){
	
	Numero += "Trescientos";	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Treinta y ";
	}else{
	Numero +=" Treinta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Trece ";
	}else{
		Numero +="tres ";
	}
	
}
				
						break;
						
			case 4:

				

if(j==2){
	
	Numero += "Cuatrocientos";	
	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Cuarenta y ";
	}else{
	Numero +=" Cuarenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Catorce ";
	}else{
		Numero +="cuatro ";
	}
	
}
				
						break;
						
			case 5:

				

if(j==2){
	
	Numero += "Quinientos";	
	
	
}
if(j==1){
if(cantN[0]!=0){
		Numero +=" Cincuenta y ";
	}else{
	Numero +=" Cincuenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Quince ";
	}else{
		Numero +="cinco ";
	}
	
}
				
						break;
						
			case 6:

				

if(j==2){
	
	Numero += "Seiscientos";	
	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Sesenta y ";
	}else{
	Numero +=" Sesenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y seis ";
	}else{
		Numero +="seis ";
	}
	
}
				
						break;
						
			case 7:

			

if(j==2){
	
	Numero += "Setecientos";	
	
	
}
if(j==1){
if(cantN[0]!=0){
		Numero +=" Setenta y ";
	}else{
	Numero +=" Setenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y siete ";
	}else{
		Numero +="siete ";
	}
	
}
				
						break;
						
			case 8:

				

if(j==2){
	
	Numero += "Ochocientos";	
	
	
}
if(j==1){
if(cantN[0]!=0){
		Numero +=" Ochenta y ";
	}else{
	Numero +=" Ochenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y ocho ";
	}else{
		Numero +="ocho ";
	}
	
}
				
						break;
						
			case 9:

				

if(j==2){
	
	Numero += "Novecientos";	

	
}
if(j==1){
	
	if(cantN[0]!=0){
		Numero +=" Noventa y ";
	}else{
	Numero +=" Noventa ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y nueve ";
	}else{
		Numero +="nueve ";
	}
	
}
				
						break;
						
			
			
			case 1:

				

if(j==2){
	if(cantN[0]==0 && cantN[1]==0){
	Numero += "Cien ";	
	}else{
			Numero += "Ciento";
	}
	
}

if(j==0){
	if(cantN[1] == 1 && cantN[0] == 1){
		Numero +=" once ";
	}else{
		
		Numero +="uno ";
	}
	
}
				
						break;
			
		}
		
			
			
	}
	
	if(cantN[0]==0 && cantN[1]==10 && x==0){
		x++;
	}else if(cantN[0]==0 && cantN[1]==0){
	
	}else {
	Numero +=" Centavos ";
	}
	
	
	

			
	
	
	
		
	return Numero;
}

 
string imprimirNumero(float total){ 

	int l=0, i=0, c=0,d=0,u=0;
	float r=0;
	string Numero;
	
     while(i == 0){
		
		
		
		if(total<1){
			i++;
		}else{

		total= total/10;
		
		l++;
		
			
		}
	
	}
	
	total = total*(pow(10,l));

	int cantN[l];
	
	
		
	
		
		c=((int)total/100);
		d=((((int)total/10))-(c*10));
		
		r=total-((c*100)+(d*10))-((int)total-((c*100)+(d*10)));
		
		if(r>0.9999){
			u=((int)total-((c*100)+(d*10)))+1;
		}else{
			u=((int)total-((c*100)+(d*10)));
		}
		

	
		
		
		for(i=0; i<l; i++){
			
			if(i==0){
				cantN[0] = u;
			}else if(i==1){
				cantN[1] = d;
			}else if(i==2){
				cantN[2] = c;
			}
		
		
		}
		

	for(int j=l; j>=0; j--){
	

int d = cantN[j];


		switch(d){
			
		
						
			case 2:

				

if(j==2){
	
	Numero += "	Doscientos";	
	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Veinti";
	}else{
	Numero +=" Veinte ";	
	}
	
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Doce ";
	}else{
		Numero +="dos ";
	}
	
}
				
						break;
						
			case 3:

			

if(j==2){
	
	Numero += "Trescientos";	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Treinta y ";
	}else{
	Numero +=" Treinta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Trece ";
	}else{
		Numero +="tres ";
	}
	
}
				
						break;
						
			case 4:

				

if(j==2){
	
	Numero += "Cuatrocientos";	
	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Cuarenta y ";
	}else{
	Numero +=" Cuarenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Catorce ";
	}else{
		Numero +="cuatro ";
	}
	
}
				
						break;
						
			case 5:

				

if(j==2){
	
	Numero += "Quinientos";	
	
	
}
if(j==1){
if(cantN[0]!=0){
		Numero +=" Cincuenta y ";
	}else{
	Numero +=" Cincuenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Quince ";
	}else{
		Numero +="cinco ";
	}
	
}
				
						break;
						
			case 6:

				

if(j==2){
	
	Numero += "Seiscientos";	
	
	
}
if(j==1){
	if(cantN[0]!=0){
		Numero +=" Sesenta y ";
	}else{
	Numero +=" Sesenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y seis ";
	}else{
		Numero +="seis ";
	}
	
}
				
						break;
						
			case 7:

			

if(j==2){
	
	Numero += "Setecientos";	
	
	
}
if(j==1){
if(cantN[0]!=0){
		Numero +=" Setenta y ";
	}else{
	Numero +=" Setenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y siete ";
	}else{
		Numero +="siete ";
	}
	
}
				
						break;
						
			case 8:

				

if(j==2){
	
	Numero += "Ochocientos";	
	
	
}
if(j==1){
if(cantN[0]!=0){
		Numero +=" Ochenta y ";
	}else{
	Numero +=" Ochenta ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y ocho ";
	}else{
		Numero +="ocho ";
	}
	
}
				
						break;
						
			case 9:

				

if(j==2){
	
	Numero += "Novecientos";	

	
}
if(j==1){
	
	if(cantN[0]!=0){
		Numero +=" Noventa y ";
	}else{
	Numero +=" Noventa ";	
	}
}
if(j==0){
	if(cantN[1] == 1){
		Numero +=" Diez y nueve ";
	}else{
		Numero +="nueve ";
	}
	
}
				
						break;
						
			
			
			case 1:

				

if(j==2){
	if(cantN[0]==0 && cantN[1]==0){
	Numero += "Cien ";	
	}else{
			Numero += "Ciento";
	}
	
}

if(j==0){
	if(cantN[1] == 1 && cantN[0] == 1){
		Numero +=" once ";
	}else{
		
		Numero +="uno ";
	}
	
}
				
						break;
			
		}
		
			
			
	}
	
	Numero += "Quetzales";
	
	Numero += imprimirDecimales(r);			
	
	
	
	
		r=0;
	return Numero;
}


int main() {
	float debito, total = 500;
	int i=0;
	string res;
	
	cout<<"\nBienvenido al cajero tiene un saldo limite de Q.500 Quinientos Quetzales para debitar\n";
	
	while (i==0){
		
		
		cout<<"\nIngrese el debito: \n";
	cin>>debito;
	
	if(debito>total || debito<=0){
		cout<<"\nEl monto que escribio es incorrecto, vuelva a escribirlo\n";
		
	}else{
		total -=debito;
		
		
		//
	
	
			cout<<"\nRestante Q."<<fixed<<setprecision(2)<<total;			
			cout<<" ("<<imprimirNumero(total)<<")\n";
			
			
		//	
			
			
			cout<<"\nQuiere volver a hacer un debito? \nresponda S si desea hacerlo de nuevo o N para cerrar\n";
	cin>>res;
	
	if(res.compare("S")){
		
		cout<<"\nGracias por usar nuestro servicio, feliz dia";
		i++;
	}else{
		i=0;
	
	}
	}	
	
	}
	
}


