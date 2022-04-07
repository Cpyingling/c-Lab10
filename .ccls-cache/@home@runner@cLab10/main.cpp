#include <iostream>

using namespace std;

class Animal {
private:
  int aWeight;
  int aHeight;
  int aAge;
  int aId;
public:
  string colorOfSkin;
  string colorOfEye;


Animal() {//const with no param
  aWeight=0;
  aHeight=0;
  aAge=0;
  aId=-1;
}
Animal(int Weight, int Height, int Age, int Id) {//const with 4 param
  aWeight=Weight;
  aHeight=Height;
  aAge=Age;
  aId=Id;
}
public:
    /*
1. Create a getter method called getWeight() that returns an integer.
Inside this method write code to return weight.*/
    int getWeight() {
      return aWeight;
    }
    /*
2. Create a setter method called setWeight(int x)
Write code for the following:
if x is negative,
   display "invalid input for weight ignored"
else
   set weight to x.
This method does not return any value.*/
    void setWeight(int x) {
      if(x<0){
        cout<<"invalid input for weight '"<<x<<"' ignored\n";
      } else {
      x = aWeight;
    }
  }
      public:
    /*
3. Create a getter method called getHeight() that returns an integer.
Inside this method write code to return height.*/
    int getHeight() {
      return aHeight;
    }
    /*
4. Create a setter method called setHeight(int x)
Write code for the following:
if x is negative,
   display "invalid input for height ignored"
else
   set height to x.
This method does not return any value.*/
    void setHeight(int x) {
      if(x<0){
        cout<<"invalid input for height '"<<x<<"' ignored\n";
      } else {
      x = aHeight;
    }
  }
      public:
/*
5. Create a getter method called getAge() that returns an integer.
Inside this method write code to return age.*/
    int getAge() {
      return aAge;
    }
/*
6. Create a setter method called setAge(int a)
Write code for the following:
if a is between 0 and 120( inclusive of both values)
   set age to a.
else
   display "invalid input for age ignored"
This method does not return any value.*/
    void setAge(int a) {
      if(a>0 && a<120){
        a = aAge;
    } else {
        cout<<"invalid input for age '"<<a<<"' ignored\n";
    }
  }
void intro() {
  cout<<"Weight: " <<aWeight<< " Height: " <<aHeight<< " Age: " <<aAge<< " Id: " <<aId<<"\n";
  cout<<"Color of skin: " <<colorOfSkin<< "\n"" Color of Eyes: " <<colorOfEye<<"\n";
}
};

int main() {
  cout << "|c++Lab10|Author:Charles Yingling\n";
 Animal a1;//first const with no param     
  a1.colorOfSkin="Tan";
  a1.colorOfEye="Blue";
  a1.intro();
  Animal a2(5,3,1,34);//2nd const with 4 param
  a2.colorOfSkin="White";
  //test cases
  a2.setAge(125);
  a2.setHeight(-5);
  a2.setWeight(-5);
  //end test
  a2.colorOfEye="Brown";
  a2.intro();
}
