import os


# Include Path
include_path_list = [
    os.path.join(os.getcwd(), 'src'),
    ]

# Source List
source_path_list = [
    Glob('./src/*.cpp'),
    Glob('./tests/*.cpp'),
    ]

# Google Test Path
gtest_path = os.environ['GOOGLE_TEST_PATH']
gmock_path = os.environ['GOOGLE_MOCK_PATH']

include_path_list.append(os.path.join(gtest_path, 'include'))
include_path_list.append(os.path.join(gmock_path, 'include'))

# Library path listrary
lib_path_list = [
    os.path.join(gtest_path, 'lib'),
    os.path.join(gmock_path, 'lib'),
    ]

env = Environment(CPPPATH=[include_path_list])
common_libs = ['gtest_main', 'gtest', 'gmock_main', 'gmock', 'pthread']
env.Append(LIBS=common_libs)
env.Program('test', source=source_path_list, LIBPATH=lib_path_list)
