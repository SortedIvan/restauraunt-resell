#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <ingredients.hpp>
#include <map>

class Person
{
    int gid;
    int gbalance;
    std::string gname;
    std::map<Ingredients, int> gingredients;

    public:
        Person(int id,int balance, std::string name, std::map<Ingredients, int> ingredients);

        int GetPersonID();
        void SetPersonId(int newId);
        
        int GetBalance();
        void SetBalance(int newBalance);

        std::string GetName();
        void SetName(std::string newName);

        std::map<Ingredients, int> getIngredients();
        void AddIngredient(Ingredients ingredient, int amount);
        
};

#endif