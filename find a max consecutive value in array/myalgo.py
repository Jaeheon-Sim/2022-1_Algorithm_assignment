import sys
import time
from random import *

n = int(sys.argv[1])

array= []

sum = 0

for i in range(n):
    array.append(randrange(-25, 25))

begin = time.time()

# <--------------- 나만의 알고리즘

sum = array[0]
for i in range(n):
    sum = max(array[i], sum+array[i])

# ------------------------------->

end = time.time()
print(f'최대 부분합= {sum}')
print(f'Elapsed time: {end-begin:.7f} sec')
