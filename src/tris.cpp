#include <iostream>
#include <string>
using namespace std;

class Tris{
	private:
		int tabella[3][3];
		
	public:

	Tris(){
		for(int i=0; i<3; i++)
			for (int j=0; j<3; j++)
				tabella[i][j]= 0; 
		 //matrice inizializzata con tutti 0
	}
	
	void print(){
		for(int i=0; i<3; i++) {  //for righe
			if(i!=0) {
				cout<<"---------"<<endl;
			}
			for (int j=0; j<3; j++){	//for colonne
				if(j==2){
					cout<<tabella[i][j];
				}
				else 
					cout<<tabella[i][j]<<" | ";
				}
			cout<<endl;
			}	
		}
	
	void segna_mossa(int player, int x, int y){
 		tabella[x-1][y-1]=player;
 		stato();
 		cout<<endl;
 	}
 	
 	void stato(){
 		cout<<"Tabella aggiornata: "<<endl;
 		print();
	}
	
	bool vittoria(){
		
		bool vinto = false;
		for (int i=0; i<3; i++){		//elementi uguali su stessa riga
			if (tabella[i][0]==tabella[i][1]==tabella[i][2]==1)
				vinto = true;
		}
		
		for (int i=0; i<3; i++){	//elementi uguali su stessa colonna
			if (tabella[0][i]==tabella[1][i]==tabella[2][i]==1)
				vinto = true;
		}
		
		if (tabella[0][0]==tabella[1][1]==tabella[2][2]==1)	//elementi uguali su diagonale dx -> sx
			vinto = true;
		
		else if (tabella[0][2]==tabella[1][1]==tabella[2][0]==1)
		 	vinto = true;
		
		else 
			vinto = false;
			
		return vinto;
	
	}
	 
 
};




