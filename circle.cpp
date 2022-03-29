#include "circle.h"
void Fields(Point t, Circle r){
	if ((((r.x - t.x1) * (r.x - t.x1) + (r.y - t.y1) * (r.y - t.y1)) < r.r * r.r)) cout << "YES";
	else cout << "NO";
}