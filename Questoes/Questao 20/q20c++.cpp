#include <vector>
#include <string>
#include <iostream>

using namespace std;

string codigos[5] = {"1001", "1234", "5123", "6533", "1578"};
float precos[5] = {5.32, 6.46, 2.7, 7, 12.1};		

int main(){
	string codigo;
	int quantidade;
	float total;
	while(true){
		cout<<"Entre numero do produto"<<endl;
		cin>>codigo;
		if (codigo == "exit") break;
		cout<<"Entre quantidade desse produto"<<endl;
		cin>>quantidade;
		for (int i = 0; i <= 5; i++){
			if (codigo == codigos[i]) total += quantidade * precos[i];
		}
		cout<<"Total: "<<total<<endl;
	}	
	return 0;
}
