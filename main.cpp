#include<iostream>
using namespace std;

class kooba {
private:
	int xpos;
	int ypos;
	char xdir;
	char ydir;
public:
	kooba(int x, int y);
	void move();
	void print();
};

int main() {
	kooba k1(400, 400);
	kooba k2(600, 600);
	kooba k3(200, 500);
	while (1) {
		k1.move();
		k2.move();
		k3.move();

		k1.print();
		k2.print();
		k3.print();
		system("pause");
	}
}

kooba::kooba(int x, int y) {
	xpos = x;
	ypos = y;
	xdir = 'l';
	ydir = 'u';
}

void kooba::move() {
	if (xpos <= 0)
		xdir = 'r';
	if (ypos <= 0)
		ydir = 'd';
	if (xpos >= 800)
		xdir = 'l';
	if (ypos >= 800)
		ydir = 'u';

	if (xdir == 'l') {
		xpos -= 10;
	}
	if (xdir == 'r') {
		xpos += 10;
	}

	if (ydir == 'u') {
		ypos -= 10;
	}
	if (ydir == 'd') {
		ypos += 10;
	}
}

void kooba::print() {
	if (xdir == 'l' && ydir == 'u')
		cout << "Hello I'm a Koopa I'm at " << xpos << ", " << ypos << " I'm moving LEFT and UP" << endl;
	if (xdir == 'r' && ydir == 'd')
		cout << "Hello I'm a Koopa I'm at " << xpos << ", " << ypos << " I'm moving RIGHT and DOWN" << endl;
}
