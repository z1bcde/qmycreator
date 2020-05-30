install:
	sudo install ./bin/qmycreator /usr/local/bin/.
	sudo install ./bin/qmytest /usr/local/bin/.
	sudo install ./bin/make.sh /usr/local/bin/.

all:
	qmycreator
