//Creating a Virtual calculator for 2 and 5 with help of classes:
#include<iostream>
using namespace std;
class Sum{

        public:
                int i,k;
        void getdata(int x,int y){
                i = x;
                k = y;
        }
        int putdata(){
		
		return (i+k);
	}
};
class Sub{
	public:
		int p,q;;
		void getdata(int x,int y){
                p = x;
		q = y;
		}
	        int putdata(){
			return (2-5); 
int main(){

	Sum s;
	Sub sb;
	s.getdata(2,5);
	sb.getdata(2,5);

	cout<<"The sum of 2 and 5 is: "<<s.putdata()<<endl;
	cout<<"The Substraction of 2 and 5 is: "<<sb.putdata()<<endl;

	return 0;
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
Program.cpp[+] [unix] (05:29 01/01/1970)                                                   18,10-31 All
-- INSERT --

