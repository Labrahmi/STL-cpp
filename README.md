# STL-cpp
The Standard Template Library in C++, examples explains and code archive

## Sequence containers
Sequence containers implement data structures that can be accessed sequentially. <br>
<code>array</code> Static contiguous array <br>
<code>vector</code> Dynamic contiguous array <br>
<code>deque</code> Double-ended queue <br>
<code>forward_list</code> Singly-linked list <br>
<code>list</code> Doubly-linked list <br>

## Associative containers
Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity). <br>
<code>Set</code> Collection of unique keys, sorted by keys  <br>
<code>Map</code> Collection of key-value pairs, sorted by keys, keys are unique.  <br>
<code>multiset</code> Collection of keys, sorted by keys  <br>
<code>multimap</code> Collection of key-value pairs, sorted by keys  <br>

## Unordered associative containers
Unordered associative containers implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity). <br>
<code>unordered_set</code> Collection of unique keys, hashed by keys. <br>
<code>unordered_map</code> Collection of key-value pairs, hashed by keys, keys are unique. <br>
<code>unordered_multiset</code> Collection of keys, hashed by keys <br>
<code>unordered_multimap</code> Collection of key-value pairs, hashed by keys <br>

## Container adapters
Container adapters provide a different interface for sequential containers. <br>
<code>stack</code> Adapts a container to provide stack (LIFO data structure). <br>
<code>queue</code> Adapts a container to provide queue (FIFO data structure). <br>
<code>priority_queue</code> Adapts a container to provide priority queue. <br>
