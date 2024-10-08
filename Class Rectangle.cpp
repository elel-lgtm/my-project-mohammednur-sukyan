/*
project name: Class Rectangle
Author: Mohammednur Sukyan
Date: 5th October, 2024.
*/

#include<iostream>
using namespace std;

class Rectangle{


	public:
		double length;
		double width;
		
		double getArea(){
			
			return length * width;
		}
		
		
		
		double getPerimeter(){
			
			
			return 2 * (length + width);
		}
		
		
		
		
		void display(){
			
			cout<<"Area:"<<getArea()<<endl;
			cout<<"Perimeter:"<<getPerimeter()<<endl;
		}
		
		
		
};
		
int main()
{
		Rectangle rect1, rect2;
		
		rect1.length = 2.1;
		rect1.width = 3.5;
		
		rect2.length = 1.5;
		rect2.width = 2.0;
		
		cout<<"Rectangle 1 "<<endl;
		rect1.display();
		
		cout<<"Rectangle 2 "<<endl;
		rect2.display();

}
	
	
		
		
		
	
		
  
	                      
	       
	                      
  
		
		
	
		
	


		

