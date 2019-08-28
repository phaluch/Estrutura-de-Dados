/*
This shall be my auxiliary library. Muahahaha.
*/



int * n_vector_int(int n)
/* Declares and returns a vector of integer values of size n; */
{
    int * v = (int*)malloc(sizeof(int)*n);
    return v;
}


float * n_vector_float(int n)
/* Declares and returns a vector of float values of size n; */
{
    float * v = (float*)malloc(sizeof(float)*n);
    return v;
}

