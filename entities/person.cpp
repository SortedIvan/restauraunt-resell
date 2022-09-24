#include <person.hpp>
#include <string>

Person::Person(int id,int balance, std::string name, std::map<Ingredients, int> ingredients){
    this->gid = id;
    this->gbalance = balance;
    this->gname = name;
    this->gingredients = ingredients;
}

int Person::GetPersonID(){
    return this->gid;
}

void Person::SetPersonId(int newId){
    this->gid = newId;
}

int Person::GetBalance(){
    return this->gbalance;
}

void Person::SetBalance(int newBalance){
    this->gbalance = newBalance;
}

std::string Person::GetName(){
    return this->gname;
}

void Person::SetName(std::string newName){
    this->gname = newName;
}

std::map<Ingredients, int> Person::getIngredients(){
    return this->gingredients;
}

void Person::AddIngredient(Ingredients ingredient, int amount){
    gingredients.insert({ingredient, amount});
}

