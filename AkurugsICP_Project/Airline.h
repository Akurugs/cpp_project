#include <vector>
#include <string>
using namespace std;

class Airline{
    //declaring fields for Airline:
    private: 
        int AirlineID;
        string Name;
        string Alias;
        string IATA;
        string ICAO;
        string Callsign;
        string Country;
        char Active;

    //creating member functions:
    public:
        int getAirlineId(){return AirlineID;}
        void setAirlineId(int airlineId){AirlineID = airlineId;}
        void setName(string name){Name = name;}
        string getName(){return Name;}
        string getAlias(){return Alias;}
        void setAlias(string alias){Alias = alias;}
        string getCountry(){return Country;}
        void setCountry(string coutry){Country = country;}
        string getICAO(){return ICAO;}
        void setICOA(string icao){ICAO = icao;}
        string getIATA(){return IATA;}
        void setIATA(string iata){IATA = iata;}

};