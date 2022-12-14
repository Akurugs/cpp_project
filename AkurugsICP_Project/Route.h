
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Route{

    //creating member variables
    private:
        string Airline;
        int AirlineID;
        string SourceAirport;
        int SourceAirportID;
        string DestinationAirport;
        int DestinationAirportID;
        char Codeshare;
        int Stops;
        string Equipment;

    public:

        //creating member functions:

        string getAirline(){return Airline;}
        void setAirline(string air_line){Airline = air_line;}
        string getSourceAirport(){return SourceAirport;}
        void setSourceAirport(string airport){SourceAirport = airport;}
        int getSourceAirportId(){return SourceAirportID;}
        void setSourceAirportId(int source_airport_id){SourceAirportID = source_airport_id;}
        string getDestinationAirport(){return DestinationAirport;}
        void setDestinationAirport(string de_airport){DestinationAirport = de_airport;}
        int getDestinationAirportId(){return DestinationAirportID;}
        void setDestinationAirportId(int de_airportID){DestinationAirportID = de_airportID;}
        char getCodeshare(){return Codeshare;}
        void setCodeshare(char codes_share){Codeshare = codes_share;}
        int getStops(){return Stops;}
        void setStops(int no_stops){Stops = no_stops;}
        string getEquipment(){return Equipment;}
        void setEquipment(string eqi){Equipment = eqi;}

};

