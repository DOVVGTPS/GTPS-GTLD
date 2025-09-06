#include <iostream>
#include <asio.hpp>

using asio::ip::tcp;

int main() {
    try {
        asio::io_context io;

        // Buka port 17091 (port default Growtopia)
        tcp::acceptor acceptor(io, tcp::endpoint(tcp::v4(), 17091));
        std::cout << "[GTPS] Server running on port 17091..." << std::endl;

        while (true) {
            tcp::socket socket(io);
            acceptor.accept(socket);
            std::cout << "[GTPS] Player connected!" << std::endl;
        }

    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
