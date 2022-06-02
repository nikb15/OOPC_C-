#include<iostream>
using namespace std; 

class Hero{
    private:

    int health ;
    char level;
        //Propertied 
    

public:
    Hero()
    {
        this->health= 99;
        this->level='N';
    }
    Hero(int health)
    {
        this->health = health;
    }


   void show()
   {
       cout<<health;
   } 

   void setter(int x)
   {
       this->health= x;
   }
};

int main()
{


    // //static allocation
    // Hero h1;

    // //dynamic allocation 
    // Hero * h2 = new Hero;


    //Using constructor function
    Hero ramesh ;
    Hero rami(10);
    Hero copy(rami);
    // //cout<<sizeof(h1); // 4 
    // h1.setter(10);
    // h1.show();

    // (*h2).setter(20);
    // (*h2).show();

    //seeing val 
    ramesh.show();

    rami.show();

    copy.show();
    return 0;
}