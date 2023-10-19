# FastMemset
In C++,memset is O(len),but this can create an array with O(1) memset.

# How to use?
## create
- `fastmemset<type,len> valname;` to create an array `valname`,with valuetype=`type`,length=`len`,init value is default.
- `fastmemset<type,len> valname(val);` to create an array `valname`,with value type=`type`,length=`len`,init value=`val`.

## set and get a value
- `valname[ind]=val` and `valname[ind]` just like classic array.

## memset(fill)
- `valname.set(val)` to fill the array `valname` with `val`.
