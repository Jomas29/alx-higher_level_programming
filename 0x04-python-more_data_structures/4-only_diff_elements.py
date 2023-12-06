#!/usr/bin/phython3
def only_diff_elements(set_1, set_2):
    only_diff_elements = set_1.symmetric_difference(set_2)
    return list(only_diff_elements)
