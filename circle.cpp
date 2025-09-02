#include<iostream>
using namespace std;
class circle{
  private:
    float radius;
    float pi=3.14;
  public:
    void setradius(float r){
      if(r>=0){
        radius=r;
      }
      else{
        cout<<"error";
      }
    }
    float getarea(){
      return pi*radius*radius;
    }
};
int main(){
  circle c;
  c.setradius(5);
  cout<<c.getarea();
  return 0;
}