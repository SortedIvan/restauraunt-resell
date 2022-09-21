#include <string>
#include <ingredients.hpp>
#include <map>

class Person{
    private:
        int id;
        int balance;
        std::string name;
        std::map<Ingredients, std::string> ingredients;
};
