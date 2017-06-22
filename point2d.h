#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>

namespace arc {
	class Point2D {
	public:
		int x;
		int y;

		Point2D();

		Point2D(int otherX, int otherY);

		friend std::ostream& operator<<(std::ostream& os, const Point2D pnt);
	};
}

#endif