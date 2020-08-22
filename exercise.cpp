#include<iostream>
class a
{
public:
    int show_b()
    {
        std::cout<<b;
        return 0;
    }
private:
    int b;
    int c;
};
int main(){
    a demo;
    demo.show_b();
    return 0;
}