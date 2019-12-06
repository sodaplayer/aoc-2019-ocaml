.PHONY: test build repl run

build:
	dune build test
	dune build lib
	dune build bin/main.exe

run:
	dune exec bin/main.exe

test:
	dune build @runtest

repl: 
	dune utop lib -- -require rtop;
