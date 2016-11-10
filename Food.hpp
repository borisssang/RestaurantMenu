//
//  Food.hpp
//  RestaurantMenu
//
//  Created by Boris Angelov on 11/10/16.
//  Copyright © 2016 Boris Angelov. All rights reserved.
//

#ifndef Food_hpp
#define Food_hpp

#include "Menu.hpp"
#include <stdio.h>

class Food : Menu {
private:
    double price;
    double deliveryTime;
    double weight;
    
public:
    Food();
    Food(double price, double time, double weight);
    
    
    
    
    
};





#endif /* Food_hpp */
