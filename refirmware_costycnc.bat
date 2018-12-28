echo off
cls
set /p UserInputPath= Insert your port where costycnc is connected (example com1)


mode %UserInputPath% BAUD=9600 PARITY=n DATA=8
    echo E > %UserInputPath%
bin\avrdude -p m328p -b 57600 -P %UserInputPath% -c arduino -U flash:w:refirmware.hex 

pause 