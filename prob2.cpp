//valid {[{}]} parentheses  or not....????

#include <iostream>
using namespace std;
#include <stack>
#include <string>

bool Parentheses(string& str) {
    stack<char> Stack;

    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            Stack.push(ch);
        }
         else if (ch == ')' || ch == '}' || ch == ']')
          {
            if (Stack.empty())
             {
                return false;
            }
            char top = Stack.top();
            Stack.pop();

            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '['))
             {
                return false;
            }
        }
    }
    return Stack.empty();
}

int main() {
    string input;
    cout << "Enter a string containing parentheses: ";
    cin >> input;

    if (Parentheses(input)) {
        cout << "The parentheses are balanced.\n";
    } else {
        cout << "The parentheses are not balanced.\n";
    }

    return 0;
}

//=====second way (try to solve with new idea)======================//

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// bool parentheses(string &str)
// {
//     stack<char>;

//     for( int i=0;i<str.length();i++)
//     {
//         if(t.empty()){
//             t.push(str[i]);
//         }
//         else if((t.top()=='(' && str[i]==')')||(t.top()=='{' && str[i]=='}')||
//         (t.top()=='[' && str[i]==']')){
//             t.pop();
//         }
//         else{
//             t.push(str[i]);
//         }
//     }
// if(t.empty()){
//     return true;
// }
// return false;

// }
// int main(){
//   string str ="{()}[]";

//   if(parentheses(str))
//   cout<<"Balanced";
//   else
//   cout<<"Not Balanced";
//   return 0;
// }
