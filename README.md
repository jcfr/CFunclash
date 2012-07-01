CFunclash
=========

This is a small project put together while working on [Slicer issue #2249](http://www.na-mic.org/Bug/view.php?id=2249).

Given a static library `thelib` and a program linked against it, it illustrates that the linker does 
NOT ensure that the function exported in `thelib` matches the function declared in `main.c` using 
`extern` keyword.

For example:

```
/* thelib.c */

int thefunc_(long int *arg1, long int * arg2, long int *arg3)
```

```
/* main.c */

extern int thefunc_(int *arg1, int *arg2, int *arg3);
```

Usage
-----

```
$ ./CFunclash
```


Output:

```
CFunclash 0.1.0

System properties
  sizeof(int): 4
  sizeof(long int): 8

Function:
  int thefunc_(long int *arg1, long int * arg2, long int *arg3)

  Arguments as pointer:
    arg1: 0x7fff4713340c
    arg2: 0x7fff47133408
    arg3: 0x7fff47133404

  Difference between arg1 and arg2 pointers:
    arg1 - arg2: 4

  Argument values:
    *arg1: 2
    *arg2: 2
    *arg3: 2

  Setting argument value: *arg3 = 0

  Argument values:
    *arg1: 2
    *arg2: 0
    *arg3: 0

  NOTE: While only 'arg3' has been set, 'arg2' value has also been updated !

  Return value: 0
```

Contributing
------------

Once you've made your great commits:

1. [Fork][fk] CFunclash
2. Create a topic branch - `git checkout -b my_branch`
3. Push to your branch - `git push origin my_branch`
4. Create an [Issue][is] with a link to your branch
5. That's it!


Meta
----

* Code: `git clone git://github.com/jcfr/CFunclash.git`
* Home: <http://jcfr.github.com>
* Bugs: <http://github.com/jcfr/CFunclash/issues>

License
-------

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

[fk]: http://help.github.com/forking/
[is]: http://github.com/jcfr/CFunclash/issues
