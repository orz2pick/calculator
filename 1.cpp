#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	stack <int>a;
	stack <char>b;
	string s;
	while(cin>>s){
	int len = s.length();
	for(int i=0;i<len;i++){
		if('0'<=s[i]&&s[i]<='9'){
			int sum = 0;
			
			
			while('0'<=s[i]&&s[i]<='9'&&i<len)	{sum=sum*10+(s[i]-'0');i++;}
			i--;
			a.push(sum);
// 			cout<<a.top()<<endl;
		}
		else if(s[i]=='(')
			;
		else if(s[i]==')'){
			char op = b.top();
			b.pop();
			int x1=a.top();
			a.pop();
			int x2 = a.top();
			a.pop();
// 			printf("%d %c %d\n",x1,op,x2);
			if(op=='+')
				a.push(x1+x2);
			else if(op=='-')
				a.push(x2-x1);
			else if(op=='*')
				a.push(x1*x2);
			else if(op=='/')
				a.push(x1/x2);

		}
		else{
		    b.push(s[i]);
            
		}


	}
	while(!b.empty())
	{
	    char op = b.top();
			b.pop();
			int x1=a.top();
			a.pop();
			int x2 = a.top();
			a.pop();
// 			printf("%d %c %d\n",x1,op,x2);
			if(op=='+')
				a.push(x1+x2);
			else if(op=='-')
				a.push(x2-x1);
			else if(op=='*')
				a.push(x1*x2);
			else if(op=='/')
				a.push(x1/x2);
	}
	cout<<a.top()<<endl;
	}
	return 0;
}
