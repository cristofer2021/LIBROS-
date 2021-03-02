#include <iostream>
using namespace std;
int main() {
  int OP;
  OP=0;
  while (OP!=5) {
	cout <<" Menu de recoemndaciones \n";
		cout << "     1 LITERATURA\n";
		cout << "     2 CINE\n";
	cout << "     3 MUSICA\n";
		cout << "     4 VIDEO JUEGOS\n";
		cout << "     5 SALIR\n";
		cout << " Elija una opcion(1-5)\n";
		cin>> OP; 
		switch (OP){
			case 1:
				cout << " Lecturas recomendables\n";
				cout << " el principito \n";
				break;
			case 2:
				cout << " Lecturas recomendables\n";
				cout << " el principito \n";
        if (OP==2){
        cout<<"el disco es roginal \n";
        }
        break;
			case 3:
				cout << " Lecturas recomendables\n";
				cout << " Avengers \n";
        break;
			case 4:  
				cout << " Lecturas recomendables\n";
				cout << " Rolling Stones \n";
        break;
			case 5:
				cout << " Lecturas recomendables\n";
				cout << " Mario Car  \n";
        break;
			default:
				cout <<" opcion no valida \n";
	}

	
}

 
}