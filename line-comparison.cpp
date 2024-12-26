#include<iostream>

#include<cmath>

using namespace std;

int length(int x1, int x2, int y1, int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

bool isLineEqual(int x1a, int x2a, int y1a, int y2a,
                 int x1b, int x2b, int y1b, int y2b){
                    int len1 = length(x1a,x2a,y1a,y2a);
                    int len2 = length(x1b,x2b,y1b,y2b);
                    return len1-len2;
                }

int main(){
    cout << "Welcome to Line Comparison Computation Program"<<endl;

    cout << "Enter coordinates for Line 1 (x1, y1, x2, y2): ";
    int x1a, y1a, x2a, y2a;
    cin >> x1a >> y1a >> x2a >> y2a;
    cout << "Enter coordinates for Line 2 (x1, y1, x2, y2): ";
    int x1b, y1b, x2b, y2b;
    cin >> x1b >> y1b >> x2b >> y2b;
    if(isLineEqual(x1a, y1a, x2a, y2a, x1b, y1b, x2b, y2b)){
        cout << "The lines are equal" << endl;
    }
    else {
        cout << "The lines are not equal." << endl;
    }

    return 0;
}