#!/usr/bin/python3
"""A module with a function that prints square using the # sign"""


def print_square(size):
    """Print square with a character

    Description:
        This function prints a square with the character #. The square is
        denoted by the value given as size

    Args:
        size (int): the argument

    Returns:
        Nothing
    """
    if not isinstance(size, int):
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
    if isinstance(size, float) and size < 0:
        raise TypeError("size must be an integer")

    for i in range(size):
        for i in range(size):
            print("#", end='')
        print()
