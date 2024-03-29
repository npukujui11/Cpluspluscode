#include <iostream>
using namespace std;

/* 不同的变量类型长度不同，但指向不同变量类型的指针的长度相同*/
/*无论指针指向哪一种类型的变量，其内容都是一个地址——一个数字。*/

int main()
{
    cout << "sizeof fundamental types -" << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;


    cout << "sizeof pointer to fundamental types -" << endl;
    cout << "sizeof pointers to fundamental types -" << endl;
    cout << "sizeof(char*) = " << sizeof(char*) << endl;
    cout << "sizeof(int*) = " << sizeof(int*) << endl;
    cout << "sizeof(double*) = " << sizeof(double*) << endl;

    return 0;
}