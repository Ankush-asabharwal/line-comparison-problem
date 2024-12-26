#include<iostream>

#include<cmath>

using namespace std;

int length(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

int main(){
    cout << "Welcome to Line Comparison Computation Program";

    int x1,x2;
    int y1,y2;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    cout << "length is : " << length(x1,y1,x2,y2);

}