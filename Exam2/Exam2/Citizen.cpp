//
//  Citizen.cpp
//  Exam2
//
//  Created by Eben Schumann on 11/10/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
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
