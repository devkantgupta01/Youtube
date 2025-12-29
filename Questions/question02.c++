// Adding an element at botoom at any stack

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x){
    stack <int> temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }

    st.push(x);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

// doing samething by using recursion
void f(stack<int> &st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    f(st, x);
    st.push(curr);
}

int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtBottom(st, 100);

    cout<<"Answer : "<<"\n";
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<"\n";
    }

        cout<<"Answer 2 : "<<"\n";

    stack<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);

    f(st2, 452);

    while(not st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
         cout<<endl;
    }
   
  

    return 0;
}