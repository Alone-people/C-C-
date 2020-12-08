#include <stdio.h>
#include <easyx.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {

	initgraph(640, 480);

	char Ending;
	MOUSEMSG m;
	IMAGE b;
	loadimage(&b,".\\f\\1.jpg",640,480);
	putimage(0, 0, &b);

	while (1) {

		m = GetMouseMsg();

		switch (m.uMsg) {
		case WM_MOUSEMOVE:

			break;
		case WM_LBUTTONDOWN: {
			if (sqrt((double)(m.x - 34) * (m.x - 34) + (m.y - 223) * (m.y - 223)) < 40|| sqrt((double)(m.x - 360) * (m.x - 360) + (m.y - 223) * (m.y - 223)) < 40) {
				circle(34, 223, 40);
				circle(360, 223, 40);
			}
			else if (sqrt((double)(m.x - 388) * (m.x - 388) + (m.y - 107) * (m.y - 107)) < 20 || sqrt((double)(m.x - 392) * (m.x - 392) + (m.y - 117) * (m.y - 117)) < 20) {
				circle(64, 107, 30);
				circle(390, 107, 30);
			}
			else if (sqrt((double)(m.x - 630) * (m.x - 630) + (m.y - 387) * (m.y - 387)) < 20 || sqrt((double)(m.x - 303) * (m.x - 303) + (m.y - 387) * (m.y - 387)) < 20) {
				circle(630, 387, 25);
				circle(303, 387, 25);
			}
				
			break;
		}

		}

		

	}
	
	return 0;
}