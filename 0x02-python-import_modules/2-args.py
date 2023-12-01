#!/usr/bin/python3
import sys
if __name__ == "__main__":
    argc = len(sys.argv) - 1
    count = 1
if argc == 0:
    print("0 arguments.")
elif argc == 1:
    print("1 argument:")
    print("1:", sys.argv[1])
else:
    print("{} arguments:".format(argc))
    while count <= argc:
        print("{}:".format(count), sys.argv[count])
        count += 1
