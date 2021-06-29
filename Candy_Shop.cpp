//Program for Candy machine 
//Soham Ganmote
#include <iostream>
#include <stdlib.h>
using namespace std;
class candy
{
public:
    int productcode = 0;
    int quantity = 0;

    int loop;

    int bill1 = 0;
    int bill2 = 0;
    int bill3 = 0;
    int bill4 = 0;
    int total_bill = 0;

    int product1 = 0;
    int product2 = 0;
    int product3 = 0;
    int product4 = 0;

    int quan1;
    int quan2;
    int quan3;
    int quan4;

    int producttable()
    {
        cout << "Product         Product Code     Product Code" << endl;
        cout << "*********       ************     *************" << endl;
        cout << "Candies              101              Rs.1" << endl;
        cout << "Chipe                102              Rs.5" << endl;
        cout << "Gum                  103              Rs.1" << endl;
        cout << "Cookies              104              Rs.10" << endl;
        cout << "*************************************************" << endl;
        return 0;
    }
    int display()
    {

        cout << "How Many Products You Want : ";
        cin >> loop;
        if (loop <= 4)
        {
            for (int i = 1; i <= loop; i++)
            {
                cout << "*********************" << endl;
                cout << "Product code : ";
                cin >> productcode;
                if (100 < productcode && productcode < 105)
                {
                    cout << "Product Quantity : ";
                    cin >> quantity;
                    if (productcode == 101)
                    {
                        bill1 = quantity * 1;
                        product1++;
                        quan1 = quantity;
                    }
                    if (productcode == 102)
                    {
                        bill2 = quantity * 5;
                        product2++;
                        quan2 = quantity;
                    }
                    if (productcode == 103)
                    {
                        bill3 = quantity * 1;
                        product3++;
                        quan3 = quantity;
                    }
                    if (productcode == 104)
                    {
                        bill4 = quantity * 10;
                        product4++;
                        quan4 = quantity;
                    }
                }
                else
                {
                    cout << "Invalid Product Code" << endl;
                }
            }
        }
        else
        {
            cout << "We Don't Have That Much Products" << endl;
        }
        total_bill = bill1 + bill2 + bill3 + bill4;
        return 0;
    }
    int printbill()
    {
        system("CLS");
        cout << "Bill" << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Products         |       Product Quantity        |      Product Price" << endl;
        cout << "---------------------------------------------------------------------" << endl;
        if (product1 > 0)
        {
            cout << "(1)Candies       |              " << quan1 << "                |         Rs.1" << endl;
        }
        if (product2 > 0)
        {
            cout << "(2)Chipes        |              " << quan2 << "                |         Rs.5" << endl;
        }
        if (product3 > 0)
        {
            cout << "(3)Gum           |              " << quan3 << "                |         Rs.1" << endl;
        }
        if (product4 > 0)
        {
            cout << "(4)Cookies       |              " << quan4 << "                |        Rs.10" << endl;
        }
        cout << "---------------------------------------------------------------------" << endl;
        cout << "                                                Total Price : Rs." << total_bill;
        return 0;
    }
};
int main()
{
    candy one;
    one.producttable();
    one.display();
    one.printbill();
    return 0;
}
