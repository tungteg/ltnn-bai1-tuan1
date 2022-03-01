#include<iostream>

using namespace std;

bool isCollinear(int x1, int y1, int x2, int y2, int x3, int y3){
	
	int a2=x2-x1;
	int b2=y2-y1;
	int a3=x3-x1;
	int b3=y3-y1;
	
	if((a2==0 && a3==0) || (b3==0  && b2==0)) return true;
	else{
		double k1=(double)min(a3,a2)/max(a3,a2);
		if(b2>0 && b3>0){

			if(k1*max(b2,b3)==min(b2,b3)) return true;
			else return false;
		}
		else{
			if(k1*min(b2,b3)==max(b2,b3)) return true;
			else return false;
		}
		
	}
		
	
	
}

int main(){
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if(isCollinear(x1, y1, x2, y2, x3, y3)){
    	cout << "Collinear.";
	} else {
    	cout << "Not collinear.";
	}	
}
