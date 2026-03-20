#include <iostream>

using namespace std;

int main()
{
    // challenge -  write prog that acceps int number of cents and gives back how many coins are in it
// Dollar	1.00	100¢
// Quarter	0.25	25¢
// Dime	    0.10    10¢
// Nickel	0.05	5¢
// Penny	0.01	1¢
    // const int d {100};
    // const int q {25};
    // const int di {10};
    // const int p {5};

    // int change {};
    // cout<< "Enter an amoint in cents" << endl;
    // cin>> change;
    
    // int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};














    //my solution
    cout<< "enter amount in cents" << endl;
    int cents {0};
    int remainder {0};
    cin>> cents;

    if (cents > 100) {
        int current_coin = cents / 100;
        remainder = cents % 100;
        cout << "Dollar: " << current_coin<< endl;
    }
    else{
        int current_coin = cents / 100;
        remainder = cents % 100;
        cout << "Dollar: 0" << endl;
    }
    // cout<< remainder << endl;
    if (remainder > 25) {
        int current_coin = remainder / 25;
        remainder = remainder % 25;
        cout << "Quarter: " << current_coin<< endl;
    }
    else{
        cout << "Quarter: 0" << endl;
    }
    // cout<< remainder << endl;
    if (remainder > 10) {
        int current_coin = remainder / 10;
        remainder = remainder % 10;
        cout << "Dime: " << current_coin<< endl;
    }
    else{
        cout << "Dime: 0" << endl;
    }
    // cout<< remainder << endl;
    if (remainder > 5) {
        int current_coin = remainder / 5;
        remainder = remainder % 5;
        cout << "Nickel: " << current_coin<< endl;
    }
    else{
        cout << "Nickel: 0" << endl;
    }
    // cout<< remainder << endl;
    if (remainder < 5) {
        // int current_coin = remainder / 25;
        // remainder = remainder & 25;
        cout << "Penny: " << remainder << endl;
    }
    
    //logical opers

    // condition from challenge
    // if ( (age >= 18 || age > 15 && parental_consent) && ssn == true && accidents == false  )//WRITE ALL YOUR CODE WITHIN THE PARENTHESES
    //     cout << "Yes, you can work.";
    
    // cout << std::boolalpha;
    // cout << ((10 < 20) || (10 > 5)) << endl;
    // cout << (!false || 10 < 5) << endl;
    // cout << ((10 < 20) && (10 > 5)) << endl;
    
    
    
    
    
    // relational operators
    // cout << std::boolalpha;
    // cout << (6 > 7) << endl;
    // cout << (7 >= 7) << endl;
    // cout << (8 <= 7) << endl;
    // cout << (6 > 5.9999) << endl;  // stores approximation
    
    
    
    
    //equality/inequality

    // bool equal{false};
    // bool not_equal {false};
    // cout <<std::boolalpha; //displays true/false instead of 1/0
    // int num1{}, num2{};
    // cout <<"enter 2 numbers to compare" << endl;
    // cin>> num1>>num2;
    // equal = num1 == num2;
    // not_equal = num1 !=num2;
    
    // cout <<"equal val -- "<< equal << endl;
    // cout <<"not equal val -- " << not_equal<< endl;
    // mixed type expressions
    
    // int total {};
    // int num1 {}, num2{}, num3{};
    // const int count {3};
    // cout << "enter 3 nums" << endl;
    // cin >> num1>> num2>> num3;
    
    // total = num1 + num2 + num3;
    
    // double avg {0.0};

    // avg = static_cast<double>(total) / count; // both are int,so it saves int to double and demotes it to int

    // cout<< "nums are: " <<  num1 << num2 << num3 << endl;
    // cout<< "total is: " << total << endl;
    // cout<< "avg is: " << avg << endl;
    
    //increment/decrement
    // int counter {10};
    // int result {0};

    // // result = ++counter; 

    // cout << "res --- " << result  << endl;
    // result = counter++ + 10; // first use counter, add to result, then increment it.

    // cout << "res --- " << result  << endl;
    
    // cout << "counter" << counter << endl;
    // cout << "" << << endl;
    // cout << "" << << endl;
    // cout << "" << << endl;
    // cout << "" << << endl;
    
    
    // const double usd_per_eu {1.19};
    // cout<< "welcome to EUR to USD converter" << endl;
    // cout<< "enter the val" << endl;

    // double euros {0.0};
    // double dollars {0.0};
    // cin >> euros;

    // dollars = euros*usd_per_eu;
    // cout << "ull get: " << dollars << " dollars" << endl;




    // cout << 5/10 << endl; //int division
    // cout << 5.0/10.0 << endl; // double division
    // cout << 5.0/10 << endl; // double division
    // cout << 5/10.0 << endl; // double division
    // int num1{200};
    // int num2{100};
    // int result{0};
    // result = num1 + num2;

    // cout << result << endl;

    
    // int num1 {5};
    // int num2 {8};
    // int temp {0};
    // cout << "number 1: "<<  num1 << endl;
    // cout << "number 2: "<<  num2 << endl;
    // cout << "number temp: "<<  temp << endl;
    
    // temp = num1;
    // num1 = num2;
    // num2 = temp;
    // cout << "number 1: "<<  num1 << endl;
    // cout << "number 2: "<<  num2 << endl;
    // cout << "number temp: "<<  temp << endl;

    // num1 = num2 = 200;  // multiple assignment, must be initialized first

    // cout << "number 1: "<<  num1 << endl;
    // cout << "number 2: "<<  num2 << endl;
    // if (5 > 2) cout << "5 more than 2 Hello World!" << endl;
    return 0;
}