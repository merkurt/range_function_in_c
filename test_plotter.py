import pandas as pd
import matplotlib.pyplot as plt

raw = pd.read_csv('output.csv', index_col=0)
raw.columns =['output']
print(raw)

# 1
plt.figure()
plt.plot(raw)
plt.xlabel("Time (ms)")
plt.ylabel("Value")
plt.legend(raw.columns)
plt.grid('on')

plt.show()