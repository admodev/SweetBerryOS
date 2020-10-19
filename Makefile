%.o: %.cpp

	g++ $(CPPPARAMETERS) -o $@ -c $ <

	CPPPARAMETERS = -m32 -fno-use-cxa-atexit -nostdlib -fno-builtin -fno-rtti -fno-leading-underscore -fno-exceptions -Wno-write-strings
