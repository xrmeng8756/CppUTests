IF not Exist build goto create_build_folder

::clear build output folder
:clear_build_folder
echo Cleaning build folder...
del /Q /S build\*
rd /Q /S build
echo Cleaning finished!

::create build output folder
:create_build_folder
echo Create build folder
mkdir build

::cmake generate vc project
cd build
start /B /WAIT D:\cmake-3.11.0-win64-x64\bin\cmake.exe ..\src

::build project
start /B /WAIT D:\cmake-3.11.0-win64-x64\bin\cmake.exe --build .

::return from build folder
cd ..

pause 
