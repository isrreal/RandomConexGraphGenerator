# Random Connected Graph Generator

This project implements a random connected graph generator in C++ using a constructor in `Graph.cpp` and command-line arguments passed via `argc` and `argv` in `main.cpp`. The generated graph is undirected, and its edges are based on a given probability. 

## Features

- **Graph Representation:** Uses an adjacency list to represent the graph.
- **Random Edge Generation:** Edges between vertices are generated randomly based on a user-defined probability.
- **Connected Graph:** Ensures that the generated graph is connected by guaranteeing at least one edge between each vertex and another random vertex.
- **Undirected Graph:** By default, the graph generated is undirected.

## Usage

### Building the Project
  ```bash
      make
  ```
### Command-Line Arguments

To run the program, use the following format:

./app <number_of_vertices> <probability_of_edge>

Where:

- `<number_of_vertices>` is the number of vertices (nodes) in the graph.
- `<probability_of_edge>` is the probability of an edge existing between any two vertices. It should be a floating-point number between `0.0` and `1.0`, where:
  - `0.0` means no additional edges will be added (besides the one edge needed to ensure connectivity).
  - `1.0` means all possible edges will be added, forming a complete graph.

### Example

```bash
./app 10 0.5
