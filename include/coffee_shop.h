#ifndef COFFEE_SHOP_H
#define COFFEE_SHOP_H

#include <iostream>
#include <string>

using namespace std;

/** @brief The CoffeeShop class is for a shop
 * that sells coffee, tea, and food, etc.
 * @author Chao
 */ 
class CoffeeShop{
public:
    string shop_name;/**< The name of this coffee shop.*/

    /** The default constructor. 
     */ 
    CoffeeShop(string& shop_name);

    /** The default destructor. 
     */ 
    virtual ~CoffeeShop();

    /** Gonna print out a message for open.
     */ 
    void print_opening_msg(string& shop_name);

    /** Gonna print out a message for close.
     */ 
    void print_closed_msg(string& shop_name);

    /** @brief The Beverages class is designed for
     * including all different kinds of beverages.
    * @author Chao
    */ 
    class Beverages{
        public:
            string beverages_name;/**< The name of the drink.*/
            
            /** The default constructor. 
             */
            Beverages();

            /** The default destructor. 
             */ 
            virtual ~Beverages();
    };

    /** @brief The Foods class is designed for
     * including all different kinds of foods.
    * @author Chao
    */ 
    class Foods{
        public:
            string foods_name;/**< The name of the foods.*/
    };

};


#endif