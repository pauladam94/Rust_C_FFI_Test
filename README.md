# Rust_C_FFI_Test
Some tests about Rust C FFI in the context of in internship about this subject.

- [Website to follow](https://doc.rust-lang.org/nomicon/ffi.html)

How to compile the C file :

```bash
gcc main.c -o main -lrust_from_c -L./target/debug
```

```rust
#[no_mangle]
pub extern "C" fn hello_from_rust() {
    println!("Hello word from Rust");
}
```

```C
extern void hello_from_rust();

int main(void) {
    hello_from_rust();
    return 0;
}
```
