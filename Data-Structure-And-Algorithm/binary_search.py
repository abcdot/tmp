# -*- coding: utf-8 -*-


def binarySearch(search_list, item):
    low = 0
    high = len(search_list) - 1

    while(low <= high):
        mid = (low + high) / 2
        if search_list[mid] == item:
            return mid
        if search_list[mid] < item:
            low = mid + 1
        else:
            high = mid - 1

    return None


my_list = [1, 3, 5, 7, 9]

print binarySearch(my_list, 3)
print binarySearch(my_list, -1)
