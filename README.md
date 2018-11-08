# Pi_MC
Compute pi using Monte Carlo methods. For more details see the code.

## Running the program
Compile the program e.g. by using the following commands on the Unix shell:
```
$ g++ -c pi_mc.cc
$ g++ -o pi_mc pi_mc.o
```

This of course implies that you have the g++ compiler installed. 

Afterwards you can execute the program:
```
$ ./pi_mc
```

When run it will ask you for the number of iterations. The higher the number, the more accurate will the computation of pi be. However, at the machine where this program was tested at around 523,000 iterations the program crashed with a segmentation fault.
The problem seems to be in the for loop, especially in reassigning the *x* and *y* values over and over again.

This could be fixed in the second program `pi_mc_vec.cc`, where we stored the *x* and *y* pseudorandom numbers in a vector first and looped over this vector to compute pi. The limit of iteration using this method seems to be much higher. At least above 100,000,000. For higher values the computation time becomes the dominating limitation.
This program is compiled and run in a similar manner than the former one.
