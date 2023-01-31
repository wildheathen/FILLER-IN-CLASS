set BAT_BASE_PATH = %~sp0 
set PRJ_PATH      = %BAT_BASE_PATH%\filler-core
set TEST_PATH     = %BAT_BASE_PATH%\filler-test
set TARGET_PATH   = %BAT_BASE_PATH%\x64

set SRC_PATH      = %BAT_BASE_PATH%\src
set INC_PATH      = %BAT_BASE_PATH%\include

set RES_PATH      = %TEST_PATH%\resources

XCOPY /E /Q /Y /I %RES_PATH% %TARGET_PATH%\Debug\resources