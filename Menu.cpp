//
//  Menu.cpp
//  RestaurantMenu
//
//  Created by Boris Angelov on 11/10/16.
//  Copyright © 2016 Boris Angelov. All rights reserved.
//

#include "Menu.hpp"

Menu::Menu(){
    price=0;deliveryTime=0;weight=0;
}
Menu::Menu(double price, double deliveryTime, double weight){
    
}
double Menu::getPrice(){
    return this->price;
}

double Menu::getDeliveryTime(){
    return this->deliveryTime;
}

double Menu::getWeight(){
    return this->weight;
}
