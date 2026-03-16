#include <iostream>

using namespace std;

//room cleaning service

int main()
{
    int num_small_rooms {0};
    int num_big_rooms {0};
    const float tax {0.06};
    const int price_small_room {25};
    const int price_big_room {35};
    
    cout<< "hello room service here" << endl;
    cout<< "how many small rooms and big rooms do you want to clean?" << endl;

    cin>> num_small_rooms >> num_big_rooms;
    
    cout << "num of small rooms: " << num_small_rooms << endl;
    cout << "num of big rooms: " << num_big_rooms << endl;
    cout << "price per small room:$" << price_small_room << endl;
    cout << "price per big room:$" << price_big_room << endl;
    
    int cost = (num_small_rooms * price_small_room) + (num_big_rooms * price_big_room);
    double tax_result = tax * cost;
    
    cout << "total cost:$" << cost << endl;
    cout << "tax:$" << tax_result << endl;
    cout << "total estimate:$" << cost + tax_result << endl;
    cout << "this estimate is valid for 30 days." << endl;
    
    return 0;
}