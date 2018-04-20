// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// reconstruct_caller
Rcpp::DataFrame reconstruct_caller(Rcpp::StringVector input_u, Rcpp::StringVector input_v, Rcpp::NumericVector input_w, int max_depth, int max_k);
RcppExport SEXP _rline_reconstruct_caller(SEXP input_uSEXP, SEXP input_vSEXP, SEXP input_wSEXP, SEXP max_depthSEXP, SEXP max_kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type input_u(input_uSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type input_v(input_vSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type input_w(input_wSEXP);
    Rcpp::traits::input_parameter< int >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< int >::type max_k(max_kSEXP);
    rcpp_result_gen = Rcpp::wrap(reconstruct_caller(input_u, input_v, input_w, max_depth, max_k));
    return rcpp_result_gen;
END_RCPP
}
// line_caller
Rcpp::NumericMatrix line_caller(Rcpp::StringVector input_u, Rcpp::StringVector input_v, Rcpp::NumericVector input_w, int binary, int dim, int order, int negative, int samples, float rho, int threads);
RcppExport SEXP _rline_line_caller(SEXP input_uSEXP, SEXP input_vSEXP, SEXP input_wSEXP, SEXP binarySEXP, SEXP dimSEXP, SEXP orderSEXP, SEXP negativeSEXP, SEXP samplesSEXP, SEXP rhoSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type input_u(input_uSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type input_v(input_vSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type input_w(input_wSEXP);
    Rcpp::traits::input_parameter< int >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    Rcpp::traits::input_parameter< int >::type negative(negativeSEXP);
    Rcpp::traits::input_parameter< int >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(line_caller(input_u, input_v, input_w, binary, dim, order, negative, samples, rho, threads));
    return rcpp_result_gen;
END_RCPP
}
// concatenate_caller
Rcpp::List concatenate_caller(Rcpp::DataFrame input_one, Rcpp::DataFrame input_two, int binary);
RcppExport SEXP _rline_concatenate_caller(SEXP input_oneSEXP, SEXP input_twoSEXP, SEXP binarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type input_one(input_oneSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type input_two(input_twoSEXP);
    Rcpp::traits::input_parameter< int >::type binary(binarySEXP);
    rcpp_result_gen = Rcpp::wrap(concatenate_caller(input_one, input_two, binary));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rline_reconstruct_caller", (DL_FUNC) &_rline_reconstruct_caller, 5},
    {"_rline_line_caller", (DL_FUNC) &_rline_line_caller, 10},
    {"_rline_concatenate_caller", (DL_FUNC) &_rline_concatenate_caller, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rline(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
