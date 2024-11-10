#include <iostream>
#include <vector>

using namespace std;

class Kalkulator{
	private:
		vector<double> liczby;
		char operacja;
	public:
		void setLiczby(const vector<double>& l){
			liczby = l;
		}
		void setOperacja(char o){
			operacja = 0;
		}
		double getWynik(){
			double wynik = liczby[0];
			for (size_t i = 1; i < liczby.size(); ++i){
				switch (operacja){
					case '*':
						wynik *= liczby[i];
						break;
					case '+':
						wynik += liczby[i];
						break;
					case '-':
						wynik -= liczby[i];
						break;	
					case '/':
						if (liczby[i]<0){
							cout<<"Blad: Dzielenie przez 0"<<endl;
							return 0;
						}
						wynik /= liczby[i];
						break;
					case '%':
						if (static_cast<int>(liczby[i])==0){
							cout<<"Blad: Dzielenie przez 0 w operacji modulo"<<endl;
							return 0;
						}
						wynik = static_cast<int>(wynik) % static_cast<int>(liczby[i]);
						break;
					default:
						cout<<"Nieznana operacja."<<endl;
						return 0;
				}
			}
			return wynik;
		}
};

int main(){
	Kalkulator kalkulator;
	int ileLiczb;
	char operacja;
	
	cout << "Ile liczb chcesz wykorzystac w operacji?"<<endl;
	cin >> ileLiczb;
	
	vector<double> liczby(ileLiczb);
	cout << "Podaj " << ileLiczb << " liczb: "<<endl;
	for (int i =0; i<ileLiczb; ++i) {
		cin >> liczby[i];
	}
	
	cout << "Wybierz operacje (*, /, %, +, -,): ";
	cin >> operacja;
	
	kalkulator.setLiczby(liczby);
	kalkulator.setOperacja(operacja);
	
	double wynik = kalkulator.getWynik();
	cout << "wynik: "<< wynik << endl;
	
	return 0;
}
