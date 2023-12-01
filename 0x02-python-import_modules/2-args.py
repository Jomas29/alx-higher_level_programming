#!/usr/bin/python3
import sys
if __name__ == "__main__":
    argc = len(sys.argv) - 1
    count = 1
if argc == 0:
    print("0 arguments.")
elif argc == 1:
    print("1 argument:")
    words = sys.argv[count].split()
    for i, word in enumerate(words, 1):
        print("[]: {}".format(i, word))
else:
    print("{} arguments:".format(argc))
    while count <= argc:
        print("{}:".format(count), sys.argv[count])
        count += 1
