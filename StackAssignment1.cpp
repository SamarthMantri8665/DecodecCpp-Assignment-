// Question Option1:  2.[2]

//Question 2:
#include<iostream>
#include<stack>
using namespace std;

void removeKth(stack<int>& st, int k){
    stack<int> temp;
    for(int i=1; i<k; i++){
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int k;
    cin>>k;
    removeKth(st, k);
}

//Question 3: Option1. Prints Binary representation of n

//Question 4: Option3 and Option4






