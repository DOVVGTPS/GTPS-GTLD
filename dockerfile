# Gunakan image Ubuntu
FROM ubuntu:20.04

# Install dependencies (g++)
RUN apt-get update && apt-get install -y g++ make

# Set working directory
WORKDIR /app

# Copy semua file ke dalam container
COPY . .

# Compile main.cpp
RUN g++ main.cpp -o gtps -pthread

# Jalankan server
CMD ["./gtps"]
