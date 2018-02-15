main:	main.cc
			clang++ -std=c++17 -o main main.cc -fsanitize=thread -fopenmp
clean: main
			rm main
