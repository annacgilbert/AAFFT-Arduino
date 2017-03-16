#include <vector>

struct sig_struct{
	std::vector<int> inds;
	std::vector<double> spx;
	double nu;
};

struct tspair{
	int t;
	int s;
};

struct Lambda{ //struct to store frequencies and their corresponding coefficients
	std::vector<double> freq; //frequencies
	std::vector<double> coef; //coefficients
};