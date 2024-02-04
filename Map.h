//
// Created by krzes on 04.02.2024.
//

#ifndef MAPA_MAP_H
#define MAPA_MAP_H
#include <vector>
#include <utility> // Dla std::pair
#include <iostream>
#include <ostream>
template <typename Key, typename Value>
class Map {
    std::vector<std::pair<Key, Value>> data;

public:
    void add(const Key& key, const Value& value) {
        // Implementacja dodawania elementu


        data.emplace_back(key, value);


    }

    Value* find(const Key& key) {
        for (auto& kv : data) {
            if (kv.first == key) {
                return &kv.second;
            }
        }
        return nullptr; // Zwraca nullptr, jeśli nie znaleziono klucza
    }
    friend std::ostream& operator<<(std::ostream& os, const Map<Key, Value>& map) {
        for (const auto& kv : map.data) {
            os << kv.first << ": " << kv.second << '\n';
        }
        return os;
    }

};

class Book {
    // Pola reprezentujące tytuł, autora, kategorię, liczba stron, status, itp.
};

Map<std::string, Book> library; // Mapowanie tytułu książki na obiekt Book
#endif //MAPA_MAP_H
