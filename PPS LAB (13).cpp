#include <iostream>
using namespace std;
//Base class Vehicle 
class Vehicle {
  public:
  void vehicle () {
    cout<<"I am a Vehicle "<<endl;
  }
};
// class Fourwheeler derived from Vehicle 
class Fourwheeler : public Vehicle {
  public:
  void fourwheeler()
  {
    cout<<"I have four wheels"<<endl;
  }
};
//class Car derived from Fourwheeler
class Car: public Fourwheeler{
  public:
  void car() {
    cout<<"I am a car"<<endl;
  }
};

int main() 
{
    Car mycar;
    mycar.car();
    mycar.fourwheeler();
    mycar.vehicle();
    
    return 0;
}