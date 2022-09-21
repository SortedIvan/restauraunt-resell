#include <string>
#include <map>
#include <ingredients.hpp>

class Recipe{
    private: 
        std::string dish_name;
        std::map<Ingredients, std::string> required_ingredients;
};


