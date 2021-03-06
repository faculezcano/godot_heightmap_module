#include "utility.h"

void clamp_min_max_excluded(Point2i &out_min, Point2i &out_max, Point2i min, Point2i max) {

	if (out_min.x < min.x)
		out_min.x = min.x;
	if (out_min.y < min.y)
		out_min.y = min.y;

	if (out_min.x >= max.x)
		out_min.x = max.x - 1;
	if (out_min.y >= max.y)
		out_min.y = max.y - 1;

	if (out_max.x < min.x)
		out_max.x = min.x;
	if (out_max.y < min.y)
		out_max.y = min.y;

	if (out_max.x > max.x)
		out_max.x = max.x;
	if (out_max.y > max.y)
		out_max.y = max.y;
}

