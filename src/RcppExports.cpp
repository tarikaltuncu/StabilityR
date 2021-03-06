// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// evaluate_full
NumericVector evaluate_full(arma::mat p, arma::mat s, arma::vec d);
RcppExport SEXP StabilityR_evaluate_full(SEXP pSEXP, SEXP sSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_full(p, s, d));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_linearised
NumericVector evaluate_linearised(arma::mat p, arma::mat s, arma::vec d, double time);
RcppExport SEXP StabilityR_evaluate_linearised(SEXP pSEXP, SEXP sSEXP, SEXP dSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_linearised(p, s, d, time));
    return rcpp_result_gen;
END_RCPP
}
// run_gen_louvain
List run_gen_louvain(NumericMatrix graph, NumericMatrix nullmod, double time, int M);
RcppExport SEXP StabilityR_run_gen_louvain(SEXP graphSEXP, SEXP nullmodSEXP, SEXP timeSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type nullmod(nullmodSEXP);
    Rcpp::traits::input_parameter< double >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(run_gen_louvain(graph, nullmod, time, M));
    return rcpp_result_gen;
END_RCPP
}
// varinfo
arma::mat varinfo(arma::mat x);
RcppExport SEXP StabilityR_varinfo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(varinfo(x));
    return rcpp_result_gen;
END_RCPP
}
