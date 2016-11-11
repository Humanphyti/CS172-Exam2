//
//  City.cpp
//  Exam2
//
//  Created by Eben Schumann on 11/10/16.
//  I affirm that all code given below was written solely by me, Eben Schumann, and that any help I received
//  adhered to the rules stated for this exam.
//

#include "City.hpp"

string City::getFirstPhrase(string & phrases)
{
	string singlePhrase = phrases.substr(0, phrases.find(' '));

	phrases.erase(0, phrases.find(' ') + 1);

	return singlePhrase;
}

City::City(string cityName){
    
	ifstream restorer;
	string line;

	int civId = 0;
	string civFirstName;
	string civLastName;
	string civFavoriteColor;

	this->cityName = cityName;
	fileName = cityName + ".txt";

	restorer.open(fileName.c_str());

	if (!restorer.fail()) {

		while (getline(restorer, line)) {

			civId = stoi(getFirstPhrase(line));
			civFirstName = getFirstPhrase(line);
			civLastName = getFirstPhrase(line);
			civFavoriteColor = getFirstPhrase(line);

			citizens->push_back(Citizen(civId, civFirstName, civLastName, civFavoriteColor));
		}
	}
	restorer.close();
}

City::~City(){
    
	ofstream saver;

	saver.open(fileName.c_str());

	for (int i = 0; i < citizens->size(); i++) {
		saver << to_string((*citizens)[i].getId()) << " " << (*citizens)[i].getFirstName() << " " << (*citizens)[i].getLastName() << " " << (*citizens)[i].getFavoriteColor() << " " << endl;
	}

	delete citizens;

	saver.close();
    
}

string City::getCityName()
{
	return cityName;
}

int City::populationSize()
{
	return (int)citizens -> size();
}

Citizen * City::getCitizenAtIndex(int index)
{
	return &(*citizens)[index];
}

void City::addCitizen(Citizen * citizen)
{
	citizens->push_back(Citizen(citizen));
}

Citizen * City::getCitizenWithId(int id)
{
	for (int i = 0; i < citizens->size(); i++) {
		if ((*citizens)[i].getId() == id) {
			return &((*citizens)[i]);
		}
	}
	cout << "no citizen with ID " << id << " was found" << endl;
	return nullptr;
}

vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
	vector<Citizen*> sameFavoriteColorCitizens;

	for (int i = 0; i < citizens->size(); i++) {

		if ((*citizens)[i].getFavoriteColor() == color) {
			sameFavoriteColorCitizens.push_back(&((*citizens)[i]));
		}
	}
	return sameFavoriteColorCitizens;
}
