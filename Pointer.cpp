#include <iostream>
using namespace std;

int main(){
    int a = 41;
    int b = 31;
    int c = 9;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    cout << "a <- 41 = " << a << endl;
    cout << "b <- 31 = " << b << endl;
    cout << "c <- 9 = " << c << endl;
    cout << "P1 <- a = " << p1 << endl;
    cout << "P2 <- b = " << p2 << endl;
    cout << "*P1 <- c = " << *p1 << endl;
    cout << "a <- *p2 = " << a << endl;
    *p2 = 1;
    cout << "b <- 1 = " << *p2 << endl;
    cout << "p3 <- &b = " << p2 << endl;
    cout << "p3 <- &c = " << p3 << endl;
    cout << "*p1 <- *p3 = " << *p3 << endl;

    cout <<endl;
    cout <<"=============================="<<endl;
    cout <<"Output Finalnya Adalah"<<endl;
    cout << "nilai a Adalah = " << a <<endl;
    cout << "nilai b Adalah = " << b <<endl;
    cout << "nilai c Adalah = " << c <<endl;
    cout << "nilai p1 Adalah = " << p1 <<endl;
    cout << "nilai p2 Adalah = " << p2 <<endl;
    cout << "nilai p3 Adalah = " << p3 <<endl;





    cin.get();
    return 0;

}
