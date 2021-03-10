//Currancy Converter
#include <iostream>
float changer(float);
using namespace std;
float ans;
int ope;
int main()
{
    float inr;
    cout << "\nEnter Amount In INR : ";
    cin >> inr;

    ans = changer(inr);

    if (ope == 1)
    {
        cout << "Your Amount in Doller : ";
    }
    else if (ope == 2)
    {
        cout << "Your Amount in Dirham : ";
    }
    else if (ope == 3)
    {
        cout << "Your Amount in Euro : ";
    }
    else if (ope == 4)
    {
        cout << "Your Amount in Pound : ";
    }
    else if (ope == 5)
    {
        cout << "Your Amount in Peso : ";
    }
    cout << "" << ans;
    
}
float changer(float money)
{   
    cout << "\nChose In Which Currancy You Want To Conver your money";
    cout << "\n1.Doller\n2.Dirham\n3.Euro\n4.Pound\n5.Peso\n6.Exit\n=>";
    cin >> ope;

    if (ope > 6)
    {
        cout << "\nEnter Valid Currancy";
    }
    else
    {
        switch (ope)
        {
        case 1:
            ans = money * 73.29f;
            break;
        case 2:
            ans = money * 19.95f;
            break;
        case 3:
            ans = money * 87.04f;
            break;
        case 4:
            ans = money * 101.48f;
            break;
        case 5:
            ans = money * 1.51f;
            break;
        case 6:
            exit(0);
            break;
        }
    }

    return ans;
}