#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    // Write C++ code here
    int x1,x2,y1,y2;
    cin>> x1 >> x2 >> y1 >>y2;
    
    float result = ((float)(y2-y1))/(x2-x1);
    cout<<result;
    cout<<"okay";
    return 0;
}
