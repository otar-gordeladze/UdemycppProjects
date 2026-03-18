#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // challenge
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    vector <vector<int>> vector_2d; //empty 2d vec
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "============================" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    cout << "again 2d============================" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << "again vector1============================" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;


    // 2d vec is vector of vectors
    // vector<vector<int>> scores1{// rows are classess, columns are students
    //                             {11, 22, 33},
    //                             {44, 55, 66},
    //                             {77, 88, 99}};

    // cout << "2d vec el row1: " << scores1[0][1] << endl;
    // cout << "2d vec el row2: " << scores1[1][2] << endl;
    // cout << "2d vec el row3: " << scores1[2][0] << endl;
    // cout << "2d vec el row3 .at.at(): " << scores1.at(0).at(2) << endl;
    // cout << "2d vec el row3 .at.at(): " << scores1.at(1).at(0) << endl;
    // cout << "2d vec el row3 .at.at(): " << scores1.at(2).at(2) << endl;

    // vector<int> scores(10);               // declare with size or (size, all_elements value)
    // vector<int> ages{54, 53, 19, 20, 42}; // initialize with list
    // ages.at(3) = 100;
    // ages.push_back(19);

    // cout << "enter scores " << ages.size() << endl;
    // cin >> ages.at(0);
    // cin >> ages.at(1);
    // cin >> ages.at(2);
    // cout << "new ages el: " << ages.at(0) << endl;
    // cout << "new ages el: " << ages.at(1) << endl;
    // cout << "new ages el: " << ages.at(2) << endl;
    // cout << "using push_back method: " << ages.at(5) << endl;
    // cout << "using .at method: " << ages.at(3) << endl;
    // cout << "using index " << ages[3] << endl;
    // cout << "using .size " << ages.size() << endl;

    // const int days {355};
    // double temp [days] {1,2,4,5,6,7,8};
    // int scores [] {11, 23, 43, 53, 123};
    // int ages [10] {19, 21, 40};
    // ages [0]  = 22;
    // cin >>scores[0];
    // cin >>scores[1];
    // cin >>scores[2];
    // cin >>scores[3];
    // cin >>scores[4];

    // cout << scores[0] << endl;
    // cout << scores[1] << endl;
    // cout << scores[2] << endl;
    // cout << scores[3] << endl;
    // cout << scores[4] << endl;
    // cout << scores[5] << endl;
    // cout << "num of elements: " << sizeof(ages)/ sizeof(int) << endl;
    // cout << "size: " << sizeof(char) << endl;
    return 0;
}