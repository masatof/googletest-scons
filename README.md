#GoogleTest-Scons

This example runs the google test by Scons.

##Download

- http://code.google.com/p/googletest/

##Build

    unzip gtest-1.7.0.zip
    cp -r gtest-1.7.0.zip ~
    cd ~/gtest-1.7.0
    cmake .
    make

## Edit the .bashrc

Set the GOOGLE_TEST_PATH in your .bashrc

    export GOOGLE_TEST_PATH=$HOME/gtest-1.7.0

##Setup the SConstruct

You need to set the inculde path and source path in SConstruct

```python
# Include Path
include_path_list = [os.path.join(os.getcwd(), 'src')]

# Source List
source_path_list = [
    Glob('./src/*.cpp'),
    Glob('./tests/*.cpp'),
    ]
```

##Run

    ./runtest.sh

You will get the answer.

    ...

    scons: done building targets.
    Running main() from gtest_main.cc
    [==========] Running 1 test from 1 test case.
    [----------] Global test environment set-up.
    [----------] 1 test from FactorialTest
    [ RUN      ] FactorialTest.Negative
    [       OK ] FactorialTest.Negative (0 ms)
    [----------] 1 test from FactorialTest (0 ms total)

    [----------] Global test environment tear-down
    [==========] 1 test from 1 test case ran. (0 ms total)
    [  PASSED  ] 1 test.
