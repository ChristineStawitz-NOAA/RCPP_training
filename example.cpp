#include <Rcpp.h>
using namespace Rcpp;

template <typename T>
T meanC(std::vector<T> x) {
  int n = x.size();
  float total = 0;
  
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total / n;
}

// [[Rcpp::export]]
SEXP mean_wrap(SEXP input){
  std::vector<double> x = as<std::vector<double>>(input);
  float mean = meanC(x);
  
  return wrap(mean);
}




// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
mean_wrap(c(42,34))
*/
