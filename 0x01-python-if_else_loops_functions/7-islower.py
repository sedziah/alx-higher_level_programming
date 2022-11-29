#!/usr/bin/python3
def islower(c):
    for i in range(97, 97 + 26):
        if ord(c) == i:
            return True
        return False
