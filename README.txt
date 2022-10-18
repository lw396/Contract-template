--- data Project ---

 - How to Build -
   - cd to 'build' directory
   - run the command 'cmake ..'
   - run the command 'make'

   - if use DUNE run the command 'dune --cmake-build ./'

 - After build -
   - The built smart contract is under the 'data' directory in the 'build' directory
   - You can then do a 'set contract' action with 'cleos' and point in to the './build/data' directory

 - Additions to CMake should be done to the CMakeLists.txt in the './src' directory and not in the top level CMakeLists.txt
