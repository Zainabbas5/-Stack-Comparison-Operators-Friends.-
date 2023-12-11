#include<iostream>

using namespace std;

class Stack {
private:
    int* data;
    int size;
    int top;
    // making friend 
    friend  ostream& operator<<(ostream&, const Stack&);
    friend bool operator==(const Stack&, const Stack&);
        friend bool operator!=(const Stack&, const Stack&);
    friend bool operator<(const Stack&, const Stack&);
    friend bool operator>(const Stack&, const Stack&);
    friend bool operator<=(const Stack&, const Stack&);
    friend bool operator>=(const Stack&, const Stack&);
    
public:
    // constructer 
    Stack(const int s = 100) {
        size = s;
        data = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] data;
    }
    // push and size funcation 
    void push(const int& v) {
        top++;
        data[top] = v;
    }

    int Size() const {
        return top + 1;
    }
     
  
};
// display the value of sack 
ostream& operator<<(ostream& a, const Stack& s)
{
    a << "The whole stack one is ";
    for (int i = 0; i < s.Size(); i++)
    {
        a << s.data[i] << " ";
        
    }
    return a;
}
// all operater friend funcations 
bool operator==(const Stack& stk1, const Stack& stk2) {


    for (int i = 0; i < stk1.Size(); i++) {
        if (stk1.data[i] != stk2.data[i]) {
            return false;
        }
        

    }
    return true;
}
bool operator!=(const Stack& stk1, const Stack& stk2) {


    for (int i = 0; i < stk1.Size(); i++) {
        if (stk1.data[i] == stk2.data[i]) {
            return false;
        }
        

    }
    return true;
}
bool operator<(const Stack& stk1, const Stack& stk2)
{


    for (int i = 0; i < stk1.Size(); i++)
    {
        if (stk1.data[i] >= stk2.data[i])
        {
            return false;
        }
       

    }
    return true;
}
bool operator>(const Stack& stk1, const Stack& stk2)
{


    for (int i = 0; i < stk1.Size(); i++)
    {
        if (stk1.data[i] <= stk2.data[i])
        {
            return false;
        }
      

    }
    return true;
}
bool operator>=(const Stack& stk1, const Stack& stk2)
{


    for (int i = 0; i < stk1.Size(); i++)
    {
        if (stk1.data[i] < stk2.data[i])
        {
            return false;
        }
      

    }
    return true;
}
bool operator<=(const Stack& stk1, const Stack& stk2)
{


    for (int i = 0; i < stk1.Size(); i++)
    {
        if (stk1.data[i] > stk2.data[i])
        {
            return false;
        }
        

    }
    return true;
}

int main() {
    // making all the obbject 
    Stack stk1(3), stk2(3);
    // input the value to the stack 
    stk1.push(1);
    stk1.push(2);
    stk1.push(3);

    stk2.push(3);
    stk2.push(4);
    stk2.push(5);
    cout << stk1<<endl;
    if (stk1 == stk2) {
        cout << "Both stk1 and stk2 are equal.\n";
    }
    else {
        cout << "stk1 and stk2 are not equal.\n";
    }
    if (stk1 < stk2) {
        cout << " stk1 are smaller then stk2  .\n";
    }
    else {
        cout << "stk1 are not smaller  then stk2.\n";
    }
    if (stk1 > stk2) {
        cout << " stk1 are greater  then stk2  .\n";
    }
    else {
        cout << "stk1 are  not greater  then stk2.\n";
    }
    if (stk1 >= stk2) {
        cout << " stk1 are greater or equal then stk2  .\n";
    }
    else {
        cout << "stk1 are   not greater or   equal then stk2.\n";
    }
    if (stk1 <= stk2) {
        cout << " stk1 are smaller  then  or euqal to stk2  .\n";
    }
    else {
        cout << "stk1 are not smaller   then  or euqal to stk2.\n";
    }

    return 0;
}
