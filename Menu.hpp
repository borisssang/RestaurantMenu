//
//  Menu.hpp
//  RestaurantMenu
//
//  Created by Boris Angelov on 11/10/16.
//  Copyright © 2016 Boris Angelov. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>

class Menu{
private:
    double price;
    double deliveryTime;
    double weight;
    
public:
    Menu();
    Menu(double price, double deliveryTime, double weight);
    virtual double getPrice();
    virtual double getDeliveryTime();
    virtual double getWeight();
    
};



#endif /* Menu_hpp */
