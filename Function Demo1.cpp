double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	functionM();	//a) worked
	a = functionM();	//b) worked
	b = functionN(a, b);	//c) worked
	r = functionO(r,a,s,b);	//d) worked
	//s = functionP(a,b,c,d,e);	//e) does not work, because there's too many arguments passed to functionP
	u = functionM();	//f) worked
	c = d + functionN(r,s);	//g) worked
	t = s * functionO(r, a, r, a);	//h) worked
	a = v + functionP(r, s, t, t);	//i) worked
	functionP(functionN(a, a), s, t, t+r);	//j) worked
	v = functionP(functionN(a, a), s, t, t+r);	//k) worked
}

//the program will work flawlessly if the function prototypes are defined, below:

