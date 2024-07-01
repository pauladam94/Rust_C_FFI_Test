#[no_mangle]
extern "C" fn double_twice(a: &mut i32, b: &i32) {
    *a += *b;
    *a += *b;
}
