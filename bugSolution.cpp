int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; // Dereferencing only if ptr is not null
  } else {
    // Handle the case where ptr is null appropriately, e.g.,
    std::cerr << "Error: Null pointer encountered.\n";
    return 1; // Indicate an error
  }
  return 0;
}