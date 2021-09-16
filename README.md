# pointers
#The memory of a process is bbasically divided into two major parts -stack -heap

#Stack works simply by the calling of a function and is a linear memory

#heap is a large bucket of memory

in C we use malloc to allocate -it takes the size for the bucket -malloc return the void pointers
-in c++ we use "new" to initializee memory (new is a operator tho) -the new operator takes the datatype of the in the bucket in order to operateit into the heap memory -new return the pointer the type of bucket

####what is void poiter -It is a pointer with no initialized datatype -Normal pointer -"int* a=&b" -Void pointer =" void* a=&x"this is void no initialization(We canot dereference a void pointer)

##How to deallocate heap memory in c/c++ -C -> free is function that deallocate -c++ -> delete operator to deallocate memory block

###What is a dangling pointer -A pointer thata previously allcoated to memory but the memory but that memory is being delted themn the pointer is said to be dangling pointer

###NULL POINTER

-- It is a pointer which points to nothing

#what is a wild pointer -- A pointer which is not being initialized and having a garbage value except NULL is wild pointer

#function pointer --It is a special type of pointers that points to the function present in the program ---it is as simple as pointer + function = this !!

###Smart pointer -As the roll of the pointer ets over it automatically deletes that and there is no garbage collector -C++ also doesn't internally contains / understands garbage collector

###Different types of smart pointers -Unique pointer - this pointer will have unique adress and cannot share the adress with any pointer

-shared pointer- This is the pointer that has many of the adresseer located at the same adress of a pointer ----use_count tells the number of pointers connected to thsis pointers adress

-Weak pointer - It is like a watcher (expired function tells us about that no pointer in the whole program is pointing to any of the pointer ) ifyes -> true/false (boolean);
