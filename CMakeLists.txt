cmake_minimum_required(VERSION 3.18)

# Nome do projeto e linguagem
project(HelloWorld LANGUAGES CXX)

# Adicionando os arquivos fonte da biblioteca
add_library(message Message.cpp)

# Criando o executável
add_executable(hello-world hello-world.cpp)

# Vinculando a biblioteca 'message' ao executável
target_link_libraries(hello-world message)
