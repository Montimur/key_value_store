#include<stdio.h>
#include<kv.h>

int main() {
  kv_t *table = kv_init(1024);
  printf("%p\n", table);

  printf("%ld\n", table->capacity);

  int first = kv_put(table, "hehe", "haha");
  int second = kv_put(table, "hehe", "hoho");
  int third = kv_put(table, "lala", "hoho");

  printf("%d, %d, %d\n", first, second, third);
  
  for (int i = 0; i < table->capacity; i++) {
    if (table->entries[i].key) {
      printf("[%d] %s: %s\n", i, table->entries[i].key, table->entries[i].value);
    }
  }
}
