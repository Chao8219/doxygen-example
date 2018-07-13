#include "../include/coffee_shop.h"

/** Define Constructer.
 */
CoffeeShop::CoffeeShop(string& shop_name){
    print_opening_msg(shop_name);
}

CoffeeShop::~CoffeeShop(){
    print_closed_msg(shop_name);
}

void CoffeeShop::print_opening_msg(string& shop_name){
    cout << "Coffee shop " << shop_name << " is opening!" << endl;
}

void CoffeeShop::print_closed_msg(string& shop_name){
    cout << "Coffee shop " << shop_name << " is closed!" << endl;
}