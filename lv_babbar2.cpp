#include<iostream>
using namespace std;

class Identity{
  public:
    // Static keyword
    static int name;
    // Constructor
  Identity(){
    cout<<"Constructor called"<<endl;
  }  
    // Destructor
  ~Identity(){
    cout<<"Destructor called"<<endl;
  }
};
// Intializing static here
int Identity::name = 4;
int main(){
      // we can directly printout static keyword without creating an object
    cout<<Identity::name<<endl;
      // Now we try to acess it using object, it an be aces but not a good practice becz 
      //it's belongs to only class not an object
    Identity S3;
    cout<<S3.name<<endl;
    
     // Statically
    Identity S1; //creating an object // Here Destructor automatically called
     
     // Dynamically
    Identity *S2 = new Identity(); // but, Here we need to call it manually
    delete S2;
    
    return 0;
}