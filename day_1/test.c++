#include<iostream>
using namespace std;
int x,y; //x,y是全局变量
int main()
{
    int a,b; //a,b是局部变量 因为在main函数内
    cout << "hello world\n" << endl;
    cout << "a = " << a << endl; //c++常用cout输出

    printf("a=%d,b=%d\n",a,b);
    printf("x=%d,y=%d\n",x,y);//c++也可以用printf输出


    system("pause");
    return 0;

}

void function_1(void)
{
    static int a = 1;
    a ++;
}