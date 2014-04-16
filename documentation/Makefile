all:
	make clean
	make circuit_diagram.png
	make wiring_diagram.png
%.png: %.dia
	bash makedia.sh $<
clean:
	rm -f *~ *.*~* *.png
