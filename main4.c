#include <stdio.h>
#include <dlfcn.h>

int main () {
	void *library_handler;
	library_handler = dlopen("/home/slam/prog/5libs/libmyexpdyn.so",RTLD_LAZY);
	if (!library_handler){
		fprintf(stderr,"dlopen() error: %s\n", dlerror());
		return 0;
	};
	int (*exp3)()=dlsym(library_handler, "exp3");
	int (*exp4)()=dlsym(library_handler, "exp4");
	int n;
	printf("Input number\n");
	scanf("%d",&n);
	printf("%d raised to the power 3 is %d \n",n,exp3(n));
	printf("%d raised to the power 4 is %d \n",n,exp4(n));
	dlclose(library_handler);
	return 0;
}
