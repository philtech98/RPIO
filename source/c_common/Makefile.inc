cpuinfo2.6:
	mkdir -p build
	gcc -pthread -fno-strict-aliasing -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -fPIC -I/usr/include/python2.6 -c ../c_common/cpuinfo.c -o build/cpuinfo.o

cpuinfo2.7:
	mkdir -p build
	gcc -pthread -fno-strict-aliasing -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -fPIC -I/usr/include/python2.7 -c ../c_common/cpuinfo.c -o build/cpuinfo.o

cpuinfo3.2:
	mkdir -p build
	gcc -pthread -fno-strict-aliasing -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -fPIC -I/usr/include/python3.2mu -c ../c_common/cpuinfo.c -o build/cpuinfo.o