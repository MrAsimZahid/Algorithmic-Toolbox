#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a;
    int b;
    cin >> a >> b;
    cout << add(a, b);

}