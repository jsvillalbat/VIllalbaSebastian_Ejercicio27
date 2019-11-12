ODE.png : ode.py expd1.dat 
	python ode.py

expd1.dat :ode.x
	./ode.x    
    
ode.x : ODE.cpp
	c++ ODE.cpp -o ode.x

clean:
	rm ode.x  ode.png