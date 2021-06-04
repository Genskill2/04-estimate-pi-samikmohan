#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int n)
{	
	int pc=0,ps=n;
	
	for(int i=0; i<n; i++){
	float x,y,len;
	x=frandom();
	y=frandom();
	len =x*x+y*y;
	if(len<=1){
	pc++;
	}
	}
	float pi = 4.0*pc/ps;
	return pi;
}
