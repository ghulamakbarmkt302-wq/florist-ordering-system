#include <iostream>
#include <cstdlib>
using namespace std;

class florist
{
private:
    static int count;

    int Bouquet_Size;
    int Flower_Type;
    int Flower_Color;

    int smallcount = 0;
    int largecount = 0;
    int mediumcount = 0;

   int choice = 0;
    double Size_price[4] = {0, 5.5, 7.5, 9.5};
    double Type_price[8] = {0, 1.2, 1.3, 1.0, 1.0, 1.1, 1.1, 0.8};
    double Color_price[7] = {0, 1.3, 1.2, 1.1, 1.1, 1.2, 1.0};

    int rosecount = 0;
    int lilycount = 0;
    int carnationscount = 0;
    int daffodilscount = 0;
    int gerberacount = 0;
    int chrysanthemumcount = 0;
    int assortedcount = 0;

    int whitecount = 0;
    int redcount = 0;
    int pinkcount = 0;
    int yellowcount = 0;
    int bluecount = 0;
    int mixedcount = 0;

    double totalSales = 0;
    double minsales = 0;
    double maxsales = 0;
    double averageSales = 0;

public:
 florist()
    {
        Bouquet_Size = 0;
        Flower_Type = 0;
        Flower_Color = 0;
    }
 
    void MainMenu()
    {

        while (choice != 3)
        {
            cout << endl;
            cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
            cout << "           Welcome to the Florist Ordering System" << endl;
            cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
            cout << endl;
            cout<<endl;
            
            cout<<"-____________________________________________________________-"<<endl;
            cout<<endl;

            cout << "               1. Order Flowers" << endl;
            cout << "               2. viewing sales statistics" << endl;
            cout << "               3. Exit" << endl;

            cout<<"-____________________________________________________________-"<<endl;

            cout << endl;
            cout << "      +_+_+  Dear Customer, Kindly Enter your choice:  +_+_+ : ";
            cin >> choice;
            system("cls");
            if (choice == 1)
            {
                OrderedFlowers();
            }
            else if (choice == 2)
            {
                ViewSalesStatistics();
            }
            else if (choice == 3)
            {
                cout << endl;
                cout << "+_+_+  Thank you for visiting our Florist Ordering System!  +_+_+" << endl;
                cout << endl;
            }
            else
            {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    void OrderedFlowers()
    {
        if (count < 10)
        {
            cout << "+_+_+  Thanks for Choosing us Sir  +_+_+" << endl;
            cout << endl;
            cout << "+_+_+  ***** We have a variety of flowers available for you to choose from *****  +_+_+" << endl;

            cout << endl;
   cout<<"-____________________________________________________________-"<<endl;

            cout << "          1. Small  " << endl;
            cout << "          2. Medium    " << endl;
            cout << "          3. Large " << endl;
            cout<<"-____________________________________________________________-"<<endl;
cout << endl;
            cout << "+_+_+  Kindly sir, Enter Your Bouquet Size in term of (1,2 OR 3) +_+_+ :  ";

            cin >> Bouquet_Size;
            system("cls");
            while (Bouquet_Size < 1 || Bouquet_Size > 3)
            {
                cout << "Invalid bouquet size. Please enter a valid size (1, 2, or 3) : ";
                cin >> Bouquet_Size;
                system("cls");
            }
            cout << Bouquet_Size;

            cout << endl;

            cout << "+_+_+  ********* Sir, We have only Seven types of flowers available  *********  +_+_+ " << endl;

   cout<<"-____________________________________________________________-"<<endl;

            cout << "          1.  Rose    " << Type_price[1] << endl;
            cout << "          2.  Lily   " << Type_price[2] << endl;
            cout << "          3.  Carnations     " << Type_price[3] << endl;
            cout << "          4.  Daffodils  " << Type_price[4] << endl;
            cout << "          5.  Gerbera    " << Type_price[5] << endl;
            cout << "          6.  Chrysanthemum  " << Type_price[6] << endl;
            cout << "          7.  Assorted   " << endl;
   cout<<"-____________________________________________________________-"<<endl;

            cout << "+_+_+  kindly sir, Enter Your Flower Type in (1,2..)+_+_+ :  ";

            cin >> Flower_Type;
            system("cls");
            while (Flower_Type < 1 || Flower_Type > 7)
            {
                cout << "Invalid flower type. Please enter a valid type (1-7): ";
                cin >> Flower_Type;
                system("cls");
            }
            cout << Flower_Type;

            cout << endl;

            cout << "+_+_+  ********* Sir, We have only six colors of flowers available *********  +_+_+" << endl;
   cout<<"-____________________________________________________________-"<<endl;
            cout << "       1.  White   " << Color_price[1] << endl;
            cout << "       2.  Red     " << Color_price[2] << endl;
            cout << "       3.  Pink   " << Color_price[3] << endl;
            cout << "       4.  Yellow  " << Color_price[4] << endl;
            cout << "       5.  Blue    " << Color_price[5] << endl;
            cout << "       6.  Mixed  " << Color_price[6] << endl;
   cout<<"-____________________________________________________________-"<<endl;
            cout << "+_+_+  Kindly sir, Enter Your Flower Color in term of(1,2,3...)+_+_+ : ";

            cin >> Flower_Color;
            system("cls");
            while (Flower_Color < 1 || Flower_Color > 6)
            {
                cout << "Invalid flower color. Please enter a valid color (1-6): ";
                cin >> Flower_Color;
                system("cls");
            }
            cout << Flower_Color;

            cout << endl;

            count++;
            if (Bouquet_Size == 1)
            {
                smallcount++;
            }
            else if (Bouquet_Size == 2)
            {
                mediumcount++;
            }
            else if (Bouquet_Size == 3)
            {
                largecount++;
            }
            if (Flower_Type == 1)
            {
                rosecount++;
            }
            else if (Flower_Type == 2)
            {
                lilycount++;
            }
            else if (Flower_Type == 3)
            {
                carnationscount++;
            }
            else if (Flower_Type == 4)
            {
                daffodilscount++;
            }
            else if (Flower_Type == 5)
            {
                gerberacount++;
            }
            else if (Flower_Type == 6)
            {
                chrysanthemumcount++;
            }
            else if (Flower_Type == 7)
            {
                assortedcount++;
            }
            if (Flower_Color == 1)
            {
                whitecount++;
            }
            else if (Flower_Color == 2)
            {
                redcount++;
            }
            else if (Flower_Color == 3)
            {
                pinkcount++;
            }
            else if (Flower_Color == 4)
            {
                yellowcount++;
            }
            else if (Flower_Color == 5)
            {
                bluecount++;
            }
            else if (Flower_Color == 6)
            {
                mixedcount++;
            }
            double Price = (Type_price[Flower_Type] + Color_price[Flower_Color]) * Size_price[Bouquet_Size];
            cout << "Your total price is: " << Price << endl;
            totalSales += Price;
            if (count == 1)
            {
                minsales = Price;
                maxsales = Price;
            }
            else
            {
                if (Price < minsales)
                {
                    minsales = Price;
                }
                if (Price > maxsales)
                {
                    maxsales = Price;
                }
            }
            averageSales = totalSales / count;

            cout << endl;
            cout << "Thank you for your order!" << endl;
             char anotherOrder;
            cout << "Would you like to place another order? ( Y/N ): ";
            cin >> anotherOrder;
            if (anotherOrder == 'Y' || anotherOrder == 'y')
            {
                OrderedFlowers();
            }
            else
            {
            	cout<<endl;
                cout << "Returning to the main menu... " << endl;
            }
        }
        else
        {

            cout << "Sorry, we have reached the maximum number of orders for today. Please try again tomorrow." << endl;
        }
    }
    void ViewSalesStatistics()
    {
        while (true)
        {
            cout << endl;
            cout << "+_+_+  Welcome to Sales Statistics System  +_+_+" << endl;
            cout << endl;
            cout << "1.Number of Bouquets Sold by Size: " << endl;
            cout << "2.Number of Bouquets Sold by Flower Type: " << endl;
            cout << "3.Number of Bouquets Sold by Color:" << endl;
            cout << "4.Statistics of the Day: " << endl;
            cout << "5. Back to Main Menu.... " << endl;
            cout << endl;
            cout << "+_+_+  Dear Customer, Kindly Enter your choice (1,2,3,4,5) +_+_+ :  ";
            cin >> choice;
            system("cls");
            if (choice == 1)
            {
                cout << "Number of Bouquets Sold by Size: " << endl;
                cout << "Small: " << smallcount << endl;
                cout << "Medium: " << mediumcount << endl;
                cout << "Large: " << largecount << endl;
            }
            else if (choice == 2)
            {
                cout << "Number of Bouquets Sold by Flower Type: " << endl;
                cout << "Rose: " << rosecount << endl;
                cout << "Lily: " << lilycount << endl;
                cout << "Carnations: " << carnationscount << endl;
                cout << "Daffodils: " << daffodilscount << endl;
                cout << "Gerbera: " << gerberacount << endl;
                cout << "Chrysanthemum: " << chrysanthemumcount << endl;
                cout << "Assorted: " << assortedcount << endl;
            }
            else if (choice == 3)
            {
                cout << "Number of Bouquets Sold by Color: " << endl;
                cout << "White: " << whitecount << endl;
                cout << "Red: " << redcount << endl;
                cout << "Pink: " << pinkcount << endl;
                cout << "Yellow: " << yellowcount << endl;
                cout << "Blue: " << bluecount << endl;
                cout << "Mixed: " << mixedcount << endl;
            }
            else if (choice == 4)
            {
                if (count == 0)
                {
                    cout << "No sales have been made yet." << endl;
                }
                else
                {
                    cout << "Statistics of the Day: " << endl;
                    cout << "Total Bouquets Sold: " << count << endl;
                    cout << "Total Sales: " << totalSales << endl;
                    cout << "Minimum Sale: " << minsales << endl;
                    cout << "Maximum Sale: " << maxsales << endl;
                    cout << "Average Sale: " << averageSales << endl;
                }
            }
            else if (choice == 5)
            {
                return;
            }
            else
            {
                cout << "Invalid choice. Please try again And Enter the choice again...." << endl;
            }
        }
    }
};

int florist::count = 0;
int main()
{
    florist f1;
    f1.MainMenu();
}
