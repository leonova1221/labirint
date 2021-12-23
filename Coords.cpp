#include <cmath>
#include "Coords.h"

Point3D_Cart::Point3D_Cart(const Point3D_Sph &ps)
{
	x = ps.r * cos(ps.theta) * cos(ps.phi);
	y = ps.r * cos(ps.theta) * sin(ps.phi);
	z = ps.r * sin(ps.theta);
}

Point3D_Sph::Point3D_Sph(const Point3D_Cart &p)
{
	r = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
	phi = atan2(p.y, p.x);
	theta = atan2(hypot(p.x, p.y), p.z);
}
