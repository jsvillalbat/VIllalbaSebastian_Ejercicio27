#!/usr/bin/env python
# coding: utf-8

# In[5]:


import numpy as np
import matplotlib.pyplot as plt


# In[3]:


datos1 = np.loadtxt('expd1.dat')
datos2 = np.loadtxt('expd2.dat')
datos3 = np.loadtxt('expd3.dat')

datos4 = np.loadtxt('impd1.dat')
datos5 = np.loadtxt('impd2.dat')
datos6 = np.loadtxt('impd3.dat')


# In[6]:
t1 = np.linspace(0,40,4000)
t2 = np.linspace(0,40,400)
t3 = np.linspace(0,40,40)

plt.figure(figsize=(6,8))
plt.subplot(1,2,1)
plt.plot(t1,datos1,label = 'delta x = ' + str(0.01))
plt.plot(t2,datos2,label = 'delta x = ' + str(0.1))
plt.plot(t3,datos3,label = 'delta x = ' + str(1))
plt.title('Metodo Explicito')
plt.legend()

plt.subplot(1,2,2)
plt.plot(t1,datos4,label = 'delta x = ' + str(0.01))
plt.plot(t2,datos5,label = 'delta x = ' + str(0.1))
plt.plot(t3,datos6,label = 'delta x = ' + str(1))
plt.title('Metodo Implicito')
plt.legend()


plt.savefig('ODE.png')


# In[ ]:




