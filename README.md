# RestaurantMenu
firstSuccessfull connection
Plamen Duchev
Boris Angelov
COS221a
Description:
Our program is going to give the opportunity to explore two types
of restaurant menus (drinks and food). The purpose of the program
is to facilitate the client who can order from our menu even before
he has arrived in the restaurant. The user can make or cancel an
order. They have the option to check the availability, the price,
quantity and weight of every single item. They can also sort the
selected menu by price, estimated time for preparation and weight.
Data Structures:
We are going to store the orders in vectors and we are going to store
the different items in every category(Soups, MainCourse, Desert,
Alcohol, SoftDrink and HotDrinks) in a dictionary also known as
map (in C++). The key is going to be a string containing the name
of the item and the value is going to be a linked list which is going
to contain the price, weight or milliliters, estimatedTime and
quantity.
We are going to implement sorting algorithms for Price,
EstimatedTime and Weight. Boris is going to make MergeSort
(O(nlogn)) for the Food and Plamen is going to make QuickSort
(O(nlogn)) for the Drinks.
Hierarchy:
Parent abstract class Menu. Classes Foods and Drinks are going to
inherit Menu. Food is going to be inherited by Soups, MainCourse
and Desert. Drinks are going to be inherited by Alcohol, SoftDrink
and HotDrinks.
Polymorphic functions:
getPrice() -> it is going to return the price for the selected item
getWeight()->it is going to return the weight for the selected item
Restaurant
getEstimatedTime()->it is going to return the preparation time for
the selected item
sortBy(string sorting)->it is going to sort an array consisted from
the keys of the dictionary of items by a criteria defined by the user
(string sorting)
