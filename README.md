# FastMemset
In C++,memset is O(len),but this can create an array with O(1) memset.

# How to use?
## create
- `fastmemset<type,len> valname;` to create an array `valname`,with valuetype=`type`,length=`len`,init value is default.
- `fastmemset<type,len> valname(val);` to create an array `valname`,with value type=`type`,length=`len`,init value=`val`.

## set and get a value
- `valname[ind]=val` and `valname[ind]` just like classic array.(If `valname[ind]` causes compile error,please use `(type)valname[ind]`,because some types(like `string`) don't convert automatically.)

## memset(fill)
- `valname.set(val)` to fill the array `valname` with `val`.

## You can use all of them like an array
- like `((valname[ind1]=valname.set(val1).set(val2)[ind2])=val3)+val4`,means `valname.set(val1);valname.set(val2);valname[ind1]=valname[ind2];valname[ind1]=val3;valname[ind1]+val4`
