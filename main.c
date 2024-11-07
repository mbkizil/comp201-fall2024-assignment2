#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Name: 
// Student ID:
// GitHub Username:

#define MAX_TURNS 6
#define LION_HUNGER_LIMIT 3
#define ZEBRA_HUNGER_LIMIT 3
#define REPRODUCTION_AGE 5
#define GRASS_REGROWTH_PERIOD 2

typedef struct {
    int is_available;       // 1 if grass is available, 0 otherwise
    int regrowth_timer;     // Turns since grass was eaten
} Grass;

typedef struct {
    int age;
    int hunger_counter;
} Lion;

typedef struct {
    int age;
    int hunger_counter;
} Zebra;

typedef struct {
    Lion *lion;             // Pointer to lion in this cell, if any
    Zebra *zebra;           // Pointer to zebra in this cell, if any
    Grass grass;            // Grass status in this cell
} Cell;

// Function prototypes (you can add more)
Cell** read_initial_map(const char *filename, int *height, int *width);
Cell** allocate_grid(int height, int width);
void free_grid(Cell **grid, int height, int width);
void copy_grid(Cell **grid, Cell **grid_buffer, int height, int width);
void display_grid(Cell **grid, int height, int width);
void update_grass(Cell **grid, Cell **grid_buffer, int height, int width);
void move_lions(Cell **grid, Cell **grid_buffer, int height, int width);
void move_zebras(Cell **grid, Cell **grid_buffer, int height, int width);
void simulate(Cell **grid, int height, int width);
void free_memory(Cell **grid, int height, int width);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s sample_map_i.txt\n", argv[0]);
        return EXIT_FAILURE;
    }

    int height, width;
    Cell **grid = read_initial_map(argv[1], &height, &width);
    simulate(grid, height, width);
    //free_memory(grid, height, width);
    //free_grid(grid, height, width);
    return 0;
}

Cell** allocate_grid(int height, int width) {
    // Allocate memory for grid
}

Cell** read_initial_map(const char *filename, int *height, int *width) {
    // Read initial map from file and initialize grid
}

void free_grid(Cell **grid, int height, int width) {
    // Free memory allocated for grid
}

void copy_grid(Cell **grid, Cell **grid_buffer, int height, int width) {
    // Copy grid_buffer to grid
}

void display_grid(Cell **grid, int height, int width) {
    // Display grid
}

void update_grass(Cell **grid, Cell **grid_buffer, int height, int width) {
    // Copy grass data to buffer grid and update (This is just a way to implement this function)
}

void move_lions(Cell **grid, Cell **grid_buffer, int height, int width) {
    // Logic to move lions
}

void move_zebras(Cell **grid, Cell **grid_buffer, int height, int width) {
    // Logic to move zebras
}

void simulate(Cell **grid, int height, int width) {
    // Simulate the ecosystem
}

void free_memory(Cell **grid, int height, int width) {
    // Free any remaining entities
}
