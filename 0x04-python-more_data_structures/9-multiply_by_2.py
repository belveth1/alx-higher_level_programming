#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    d = a_dictionary.copy()
    k = list(d.keys())
    for k in k:
        d[k] *= 2
    return d
