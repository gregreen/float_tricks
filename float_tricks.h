

namespace fptricks {

double fast_exp_approx(double x);


}

inline double fptricks::fast_exp_approx(double x) {
	double d;
	*((int*)(&d) + 0) = 0;
	*((int*)(&d) + 1) = (int)(1512775 * x + 1072632447);
	return d;
}