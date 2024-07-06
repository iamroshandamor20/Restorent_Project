#include<iostream>
#include<string.h>
using namespace std;

class Restorent
{
    float r,bill;
public:
void order(int qnt)
{
    r=100;
    bill=r*qnt;
    cout<<"You Chooseed "<<qnt<<" Sadi Thali and Your Bill is : "<<bill<<endl;
}
void order(int qnt)
{
    r=200;
    bill=r*qnt;
    cout<<"You Chooseed "<<qnt<<" Deluxe Thali and Your Bill is : "<<bill<<endl;
}
void order(int qnt, char mdish[25])
{
     cout<<"\t Menu"<<endl;

    do
    {
        cout<<"Dal Tadka\t Rs 50 \t Press 1"<<endl;
        cout<<"Dal Fry\t Rs 50 \t Press 1"<<endl;
        cout<<"Dal Makhani\t Rs 50 \t Press 1"<<endl<<endl;
        cout<<"Shahi Paneer\t Rs 60 \t Press 1"<<endl;
        cout<<"Kadai Paneer\t Rs 60 \t Press 1"<<endl;
        cout<<"Masala Paneer\t Rs 60 \t Press 1"<<endl<<endl;
        cout<<"Chana Masala\t Rs 40 \t Press 1"<<endl;
        cout<<"Malai Kofta\t Rs 40 \t Press 1"<<endl;
        cout<<"Aloo Jeera\t Rs 40 \t Press 1"<<endl;

        cin>>int ch;
        switch (ch)
        {
        case 1:
            r=50;
            bill=qty*r;
            break;
        case 2:
            r=50;
            bill=qty*r;
            break;
        case 3:
            r=50;
            bill=qty*r;
            break;
        case 4:
            r=40;
            bill=qty*r;
            break;
        case 5:
            r=60;
            bill=qty*r;
            break;
        case 6:
            r=60;
            bill=qty*r;
            break;
        case 7:
            r=60;
            bill=qty*r;
            break;
        case 8:
            r=40;
            bill=qty*r;
            break;
        case 9:
            r=40;
            bill=qty*r;
            break;
        
        default: cout<<"Choose Betweeen Oftions Only..."
            break;
        }
        cout<<"Press Y to Exit and Press Any Key To Continue...."<<endl;
        cin>>char choo;
    }while (choo!='y' || choo!='Y');  
}
void order(int qnt, char sdish[25])
{
     cout<<"\t Menu"<<endl;

    do
    {
        cout<<"Normal Burger\t Rs 49 \t Press 1"<<endl;
        cout<<"Cheese Burger\t Rs 59 \t Press 1"<<endl;
        cout<<"Munees Burger\t Rs 59 \t Press 1"<<endl<<endl;
        cout<<"Corn Pizza\t Rs 199 \t Press 1"<<endl;
        cout<<"Chicken Pizza\t Rs 199 \t Press 1"<<endl;
        cout<<"Vegei Pizza\t Rs 199 \t Press 1"<<endl<<endl;
        cout<<"Moroccan Spice Pasta \t Rs 139 \t Press 1"<<endl;
        cout<<"Jalapano Cheese Pasta\t Rs 149 \t Press 1"<<endl;
        cout<<"Tomato Creamy Pasta\t Rs 149 \t Press 1"<<endl;

        cin>>int ch;
        switch (ch)
        {
        case 1:
            r=50;
            bill=qty*r;
            break;
        case 2:
            r=50;
            bill=qty*r;
            break;
        case 3:
            r=50;
            bill=qty*r;
            break;
        case 4:
            r=40;
            bill=qty*r;
            break;
        case 5:
            r=60;
            bill=qty*r;
            break;
        case 6:
            r=60;
            bill=qty*r;
            break;
        case 7:
            r=60;
            bill=qty*r;
            break;
        case 8:
            r=40;
            bill=qty*r;
            break;
        case 9:
            r=40;
            bill=qty*r;
            break;
        
        default: cout<<"Choose Betweeen Oftions Only..."
            break;
        }
        cout<<"Press Y to Exit and Press Any Key To Continue...."<<endl;
        cin>>char choo;
    }while (choo!='y' || choo!='Y');  


}ob;

int main()
{
    ob.order(5);
}