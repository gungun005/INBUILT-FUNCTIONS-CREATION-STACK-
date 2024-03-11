
#include <iostream>
using namespace std;
class Stack
{
  public:
  int *arr;
  int size;
  int top;
  Stack(int size)
  {
      arr=new int[size];
      this->size=size;
      this->top=-1;
  }
  void push(int data){
      if(top==size-1)
      {
          cout<<"OVERFLOW!"<<endl;
      }
      else
      {
          top++;
          arr[top]=data;
      }
  }
  void pop()
  {
      if(top==-1)
      {
          cout<<"UNDERFLOW!"<<endl;
      }
      else
      {
          top--;
      }
  }
  bool isEmpty()
  {
      if(top==-1)
      {
          return true;
      }
      return false;
  }
  int getTop()
  {
      if(top==-1)
      {
          cout<<"stack is empty!"<<endl;
      }
      return arr[top];
  }
  int getSize()
  {
      return top+1;
  }
  void print()
  {
      cout<<"STACK:";
      for(int i=0;i<getSize();i++)
      {
          cout<<arr[i]<<" ";
      }cout<<endl;
  }
};
int main() {
    //CREATION OF STACK
    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(23);
    st.pop();
    st.print();
    st.push(12);
    st.push(25);
    st.push(78);
    st.pop();
      st.print();
      cout<<st.getTop()<<endl;
      cout<<st.getSize()<<endl;
    return 0;
}
