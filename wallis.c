#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int a)
 {	float pi;
 	float prd=1;
 	for(int i=1; i<=a; i++){
 	float num = (4.0*i*i)/((4.0*i*i)-1);
 	prd= prd*num;
 	}
 	pi= 2*prd;
 	return pi;

 }
