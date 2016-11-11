//
//  Citizen.cpp
//  Exam2
//
//  Created by Eben Schumann on 11/10/16.
//  I affirm that all code given below was written solely by me, Eben Schumann, and that any help I received
//  adhered to the rules stated for this exam.
//

#include "Citizen.hpp"

Citizen::Citizen(int id,string firstName, string lastName, string color){
    
    this-> id = id;
    this-> firstName = firstName;
    this-> lastName = lastName;
    this-> color = color;
    
}

Citizen::Citizen(Citizen* citizen){
    
    id  = this-> getId();
    firstName = this-> getFirstName();
    lastName = this-> getLastName();
    color = this-> getFavoriteColor();
    
}

int Citizen::getId(){
   
    return id;
    
}

string Citizen::getFavoriteColor(){
    
    return color;
    
}

string Citizen::getFirstName(){
    
    return firstName;
    
}

string Citizen::getLastName(){
    
    return lastName;
    
}

void Citizen::setFavoriteColor(string color){
    
    this -> color = color;
    
}
