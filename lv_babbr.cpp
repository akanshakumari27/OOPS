#include<iostream>
     // u can also create class in different file creating
     // #include "File_Name.cpp"
using namespace std;

    // 1) when you create class, your inbuild or bydefault, constructor
    // 2) copy constructor,
    // 3) and Destructor automatically generates.
class Hero{
       // class is kind of template
       // properties of class
    int health;

    public:
    string level;
    // Destructor and constructor ,same name as class, no i/o parameters, no return type
    
    Hero(){   // When we create our own constructor, inbuild/default constructor, COPY constructor, destructor vice/versa will die
    cout<<"Default constructor called"<<endl;
    }

      // Parameterised constructor, means giving/providing parameter to constructor
    Hero(int health, string level){
        cout<<"Adress check: "<<this<<endl; // this -> , means storing the cureent object adress
        this -> health = health;  // filling the values over the values of objects
        this -> level = level;
    }
      // Default copy constructor do shallow copy
      // writing our own 
      // Copy constructor
    Hero(Hero& temp){  
           // "&" pass by reference, not pass by value, otherwise will trap in infinite loop
           // 2 parameters
        cout<<"Copy constructor called"<<endl;
        this->level = temp.level;
        this->health = temp.health; 
    }

    Hero(string level){
        // cout<<"Adress check: "<<this<<endl; // this -> , means storing the current object adress
        // 1 parameters
        this -> level = level;
    }
    
        // constructor overloading, same name constructors with different parameters

    void print(){
        cout<<level<<endl; //if we add only level, print() will print only level
        cout<<health<<endl;
    }


    int gethealth(){
        return health;
    }
    string getlevel(){
        return level;
    }
    void sethealth(int h){
       health = h;
    }
    void setlevel(string l){
        level = l;
    }
};
int main(){
    //     // creation of objects
    //     // here we define the values in template, by default garbage value
    // Hero ramesh;
    //     // infact for empty class, size will be 0, as for identification and to keep the track on the class
    // cout<<"Size of health is "<<sizeof(ramesh)<<endl; 
    //    // ramesh.health = 45;
    //    // to use "get" need to use "set" for providing value
    // ramesh.sethealth(70);
    // ramesh.level = 'G';
    // cout<<ramesh.gethealth()<<endl;
    // cout<<ramesh.level<<endl;


    //    // Statically allocated
    // Hero a;
    // a.setlevel("nseiuf");
    // a.sethealth(45);
    // cout<<a.level<<endl;
    // cout<<a.gethealth()<<endl;
    //    // Dynamicall allocated
    // Hero *b = new Hero;
    // (*b).setlevel("jfsuns");  // b->setlevel('OmO');
    // (*b).sethealth(56);    // b->sethealth(56);

    // cout<<(*b).level<<endl;
    // cout<<(*b).gethealth()<<endl;

    // cout<<b->gethealth()<<endl;
    // cout<<b->level<<endl;

      // Statically
    cout<<"Hey"<<endl;
    Hero ramesh;
    cout<<"Helloow"<<endl;
      // Dynamically
    Hero *b = new Hero;  // Hero *b = new Hero();

     // Parameterised constructor
      // Statically
    Hero harsh(46,"fifty");
    cout<<harsh.gethealth()<<endl;
    cout<<harsh.level<<endl;
    cout<<&harsh<<endl;
    harsh.print();
      //Dynamically
    Hero *yash = new Hero("sixty");
    cout<<yash->level<<endl;
    yash->print();
    
      // copy constructor
    Hero l(56,"quit");  // as copy constructor automatically generated
    l.print(); //Remember not to endl;
    Hero p(l); // Equals to, l.health = p.health ,vice/versa
    p.print();

      // Shallow Copy
    

    return 0;
}