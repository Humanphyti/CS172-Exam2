//
//  Citizen.hpp
//  Exam2
//
//  Created by Eben Schumann on 11/10/16.
//  I affirm that all code given below was written solely by me, Eben Schumann, and that any help I received
//  adhered to the rules stated for this exam.
//

#ifndef Citizen_hpp
#define Citizen_hpp

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Citizen
{
public:
    
    //Creates a new Citizen object with the passed in
    //id, name, and favorite color
    //Once a citizen is created, you can't change their id or name
    //but you can change their favorite color
    Citizen(int id,string firstName, string lastName, string color);
    
    //Creates a new Citizen object by copying data from the
    //passed in citizen
    Citizen(Citizen* citizen);
    
    //Returns the first name of this citizen
    string getFirstName();
    
    //Returns the last name of this citizen
    string getLastName();
    
    //Returns the id for this citizen
    int getId();
    
    //Returns the favorite color for this citizen
    string getFavoriteColor();
    
    //Sets the favorite color for this citizen
    void setFavoriteColor(string color);
    
private:
    int id;
    
    string firstName;
    
    string lastName;
    
    string color;
    
};

#endif /* Citizen_hpp */
