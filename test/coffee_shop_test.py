"""@package docstring
This package for testing the doxygen
"""
import pandas

class CoffeeShop:
    """Class CoffeeShop:
    This is a test class
    """
    def __init__(self, coffee_shop_name=None):
        """This is a test constructor."""
        if coffee_shop_name==None:
            self.coffee_shop_name = "CoolCoffee"
        else: 
            self.coffee_shop_name = coffee_shop_name
        self.inventory_column_names = ["Inventory ID", "Name", "Description", "Unit Price", "Quantity"]

    def initialize_inventory(self):
        """Initialize dataframe with names only, then fill one row of sample data"""
        self.inventory_df = pandas.DataFrame(columns=self.inventory_column_names)
        sample_data = pandas.Series({"Inventory ID": "001", "Name": "Cool Beans", 
                                     "Description": "Some awesome cool beans.", 
                                     "Unit Price": 15.0, "Quantity": 10.0}) 
        self.inventory_df.loc[0, :] = sample_data.values
        print(self.inventory_df)