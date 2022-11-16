#include <iostream>
using namespace std;
template <class T>
class stacktype{
    T s[10];
    int top;
  public :
    void push();
    T pop();
    T isempty();
    T isfull();
    void display();
    
    stacktype(){
        top =-1;
    }
};
template <class T>
void stacktype < T > ::push(){
    T x;
    cout<<"\n Enter the value of element: ";
    cin>>x;
    top ++;
    s[top ] = x;
}
template <class T>
T stacktype < T > ::pop(){
    T temp;
    temp = s[top];
    top --;
    return temp;
}
template <class T>
T stacktype < T > ::isempty(){
    if(top == -1)
     return 1;
    else return -1;
}
template <class T>
T stacktype < T > ::isfull(){
    if(top == 9)
    return 1;
    else return -1;
}
template <class T>
void stacktype < T > ::display(){
    cout<<"\n The content = "<<endl;
    for(int i =0;i<=top;i++)
    cout<<s[i]<<"\t";
}
int main() {
 int ef,choice, remove;
 stacktype <int> st;
 char ch = 'y';
 
 while(ch =='y'||ch =='Y'){
     cout<<"\n\n\t\t MAIN MENU\n 1.Push \n 2.Pop\n 3.To check if Empty\n 4. To check if full\n 5. Display ";
     cout<<" \n Enter your choice: ";
     cin>>choice;
     
     switch(choice)
     {
         case 1: ef = st.isfull();
                 if(ef == -1) // not full
                 { st.push();
                   st.display();}
                 else {
                     cout<<"\n OVERFLOW! Stack is full, Addition not possible ";
                 }
                 break;
                 
         case 2:ef = st.isempty();
                if(ef==-1){
                    remove = st.pop();
                    cout<<endl<<remove<<" has been popped";
                    st.display();
                }
                else cout<<"\n UNDERFLOW! Stack is empty,deletion is not possible";
                break;
                
        case 3: ef = st.isempty();
                if(ef==1)
                 cout<<"\n Stack is EMPTY";
                else
                    cout<<"\n Stack is NOt EMPTY";
                break;
                
        case 4: ef = st.isfull();
                 if(ef == 1)
                  cout<<"\n Stack is FULL";
                 else
                  cout<<"\n Stack is NOT FULL";
                  break;
                  
        case 5: st.display();
                break;
                
        default: cout<<"\n Wrong Choice!!";
     
     }
     cout<<"\n Do you want to continue?(Y/N): ";
     cin>>ch;
 }

    return 0;
}
