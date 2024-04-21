# C - Sorting algorithms & Big O

---

### Description
Team project. Introduction to popular sorting algorithms, and using big O notation to indicate time and space complexity.


### Requirements
* You are not allowed to use global variables
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like `printf`, `puts`, … is totally forbidden.
* The following format is expected for big O notation:
  * `O(1)`
  * `O(n)`
  * `O(n!)`
  * n squared -> `O(n^2)`
  * log(n) -> `O(log(n))`
  * n * log(n) -> `O(nlog(n))`
  * n + k -> `O(n+k)`

Please use the "short" notation (don't use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.

### Provided file(s)
* [`print_array.c`](print_array.c)
* [`print_list.c`](print_list.c)
* definition of `listint_t` for [`sort.h`](sort.h)
* [`0-main.c`](tests/0-main.c) [`1-main.c`](tests/1-main.c) [`2-main.c`](tests/2-main.c) [`3-main.c`](tests/3-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Bubble sort
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

* Prototype: `void bubble_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): [`0-bubble_sort.c`](0-bubble_sort.c) [`0-O`](0-O)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble`

### :white_check_mark: 1. Insertion sort
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

* Prototype: `void insertion_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the `list` after each time you swap two elements

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): [`1-insertion_sort_list.c`](1-insertion_sort_list.c) [`1-O`](1-O)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion`

### :white_check_mark: 2. Selection sort
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

* Prototype: `void selection_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): [`2-selection_sort.c`](2-selection_sort.c) [`2-O`](2-O)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select`

### :white_check_mark: 3. Quick sort
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

* Prototype: `void quick_sort(int *array, size_t size);`
* You must implement the Lomuto partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the `array` after each time you swap two elements

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): [`3-quick_sort.c`](3-quick_sort.c) [`3-O`](3-O)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick`


---

## 👥 Team
👨‍💻 Nihad Amirov [nihadamirov](https://github.com/nihadamirov)

👨‍💻 Kamran Mahmudov  [kamurano](https://github.com/kamurano)

