#include <iostream>
#include <cstring>
using namespace std;

class Restaurant {
    float r, bill;
public:
    void order(int qnt, string type = "Sadi") {
        if (type == "Sadi") {
            r = 100;
        } else if (type == "Deluxe") {
            r = 200;
        } else {
            cout << "Invalid thali type." << endl;
            return;
        }
        bill = r * qnt;
        cout << "You chose " << qnt << " " << type << " Thali and your bill is: " << bill << endl;
    }

    void order(int qnt, char mdish[]) {
        cout << "\tMenu" << endl;
        cout << "1. Dal Tadka\t Rs 50" << endl;
        cout << "2. Dal Fry\t Rs 50" << endl;
        cout << "3. Dal Makhani\t Rs 50" << endl;
        cout << "4. Shahi Paneer\t Rs 60" << endl;
        cout << "5. Kadai Paneer\t Rs 60" << endl;
        cout << "6. Masala Paneer\t Rs 60" << endl;
        cout << "7. Chana Masala\t Rs 40" << endl;
        cout << "8. Malai Kofta\t Rs 40" << endl;
        cout << "9. Aloo Jeera\t Rs 40" << endl;

        int ch;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: case 2: case 3:
                r = 50;
                break;
            case 4: case 5: case 6:
                r = 60;
                break;
            case 7: case 8: case 9:
                r = 40;
                break;
            default:
                cout << "Choose between options only." << endl;
                return;
        }

        bill = qnt * r;
        cout << "You chose " << qnt << " " << mdish << " and your bill is: " << bill << endl;
    }

    void order(int qnt, const char sdish[]) {
        cout << "\tMenu" << endl;
        cout << "1. Normal Burger\t Rs 49" << endl;
        cout << "2. Cheese Burger\t Rs 59" << endl;
        cout << "3. Munees Burger\t Rs 59" << endl;
        cout << "4. Corn Pizza\t Rs 199" << endl;
        cout << "5. Chicken Pizza\t Rs 199" << endl;
        cout << "6. Veggie Pizza\t Rs 199" << endl;
        cout << "7. Moroccan Spice Pasta\t Rs 139" << endl;
        cout << "8. Jalapeno Cheese Pasta\t Rs 149" << endl;
        cout << "9. Tomato Creamy Pasta\t Rs 149" << endl;

        int ch;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                r = 49;
                break;
            case 2: case 3:
                r = 59;
                break;
            case 4: case 5: case 6:
                r = 199;
                break;
            case 7:
                r = 139;
                break;
            case 8: case 9:
                r = 149;
                break;
            default:
                cout << "Choose between options only." << endl;
                return;
        }

        bill = qnt * r;
        cout << "You chose " << qnt << " " << sdish << " and your bill is: " << bill << endl;
    }
};

int main() {
    Restaurant ob;
    ob.order(5, "Sadi");
    ob.order(3, "Deluxe");
    ob.order(2, "Paneer Dish");
    ob.order(1, "Pasta Dish");
    return 0;
}
