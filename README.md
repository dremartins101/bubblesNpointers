# bubblesNpointers


## Sort function Algorithm

constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)

## Main function algorithm

create values for array
print before sort
x and y set to test swap
check first values of x and y 
swap x and y with swap func
check again

sort function to sort array
print sorted array


## Swap function Algorithm

given int pointers x and y
make int called temp
temp = *a
*a = *b
*b = temp

## Print values algorithm

given int pointer for values array
print "["
step through array
    print each value + space
print newline
print "]"

