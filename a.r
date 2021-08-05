dyn.load("a.dll")
print_str = function() .C("set_string", c("a",NA,"c"), NAOK=T)
