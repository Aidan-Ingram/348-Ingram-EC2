# Set the base image to use
FROM gcc:latest
# Copy the C program into the container
COPY scorepossibilities.c .
# Compile the C program
RUN gcc -o scorepossibilities scorepossibilities.c
# Set the command to run when the container starts
CMD ["./scorepossibilities"]