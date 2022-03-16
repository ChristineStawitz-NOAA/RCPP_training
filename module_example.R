require(Rcpp)
require(inline)
sourceCpp("module_example.cpp")
u <- new(Uniform, 0, 10)
str(u)
show(u)
u$draw(10L)
u$max
u$draw(10)
