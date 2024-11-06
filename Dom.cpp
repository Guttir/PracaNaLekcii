#include <iostream>
#include <string>

class Dom{
	private:
		double cena;
		std::string wymiar;
		std::string wlasciciel;
	public:
		//konstruktor
		Dom(double _cena, std::string _wymiar, std::string _wlasciciel ){
			cena = _cena;
			wymiar = _wymiar;
			wlasciciel = _wlasciciel;
		}
		//gettery
	double getCena(){
		return cena;
	}
	std::string getWymiar(){
		return wymiar;
	}
	std::string getWlasciciel(){
		return wlasciciel;
	}
		//settery
	void setCena(double _cena){
		cena = _cena;
	}
	void setWymiar(std::string _wymiar){
		wymiar = _wymiar;
	}
	void setWlasciciel(std::string _wlasciciel){
		wlasciciel = _wlasciciel;
	}
	//inf
	virtual void showInf() const {
		std::cout<<"Cena: "<<cena<<" Wymiar: "<<wymiar<<" Wlasciciel: "<<wlasciceil<<std::endl;
	}
};
class Blok: public Dom {
	private:
		bool balkon;
	public:
		//konstruktor
		Blok(double _cena, std::string _wymiar, std::string _wlasciciel, bool _balkon){
			Dom(_cena, _wymiar, _wlasciciel);
			balkon = _balkon;
		}
		//getter
		bool getBalkon(){
			return balkon;
		}	
		//setter
		void setBalkon(bool _balkon){
			balkon = _balkon;
		}
		//inf
		void showInf() const override{
			Dom::showInf();
			std::cout<<"Balcon: "<<balcon<<std::endl;
		}
};
class DomJed: public Dom{
	private:
		bool ogrod;
	public:
		//konstruktor
		DomJed(double _cena, std::string _wymiar, std::string _wlasciciel, bool _ogrod){
			Dom(_cena, _wymiar, _wlasciciel);
			ogrod = _ogrod;
		}
		//getter
		bool getOgrod(){
			return ogrod;
		}
		//setter
		void setOgrod(bool _ogrod){
			ogrod = _ogrod;
		}
		//inf
		void showInf() const override{
			Dom::showInf();
			std::cout<<"Ogrod: "<<ogrod<<std::endl;
		}
};

int main(){
	
}
