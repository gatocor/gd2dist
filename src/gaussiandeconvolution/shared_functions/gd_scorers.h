#ifndef GD_SCORERS
#define GD_SCORERS

#include <vector>

//logpdf
double aut_norm_mixt_logpdf(double, std::vector<double>, int, int);
double deconv_norm_mixt_logpdf(double, std::vector<double>, int, int);
double conv_norm_mixt_logpdf(double, std::vector<double>, int, int);

//scoring
std::vector<std::vector<double>> score_autofluorescence(std::vector<std::vector<double>>&, std::vector<double>&, int, int, std::vector<double>, std::vector<double>, int);
std::vector<std::vector<double>> score_autofluorescence(std::vector<std::vector<double>>&, std::vector<double>&, int, int, std::vector<double>, int);
std::vector<std::vector<double>> score_deconvolution(std::vector<std::vector<double>>&, std::vector<double>&, int, int, std::vector<double>, std::vector<double>, int);
std::vector<std::vector<double>> score_deconvolution(std::vector<std::vector<double>>&, std::vector<double>&, int, int, std::vector<double>, int);
std::vector<std::vector<double>> score_convolution(std::vector<std::vector<double>>&, std::vector<double>&, int, int, std::vector<double>, std::vector<double>, int);
std::vector<std::vector<double>> score_convolution(std::vector<std::vector<double>>&, std::vector<double>&, int, int, std::vector<double>, int);

#endif