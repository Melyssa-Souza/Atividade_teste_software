#include "minunit-master/minunit.h"
#include "../src/calcularPreco.h"

MU_TEST(test_preco_crianca) {
	mu_assert_double_eq(10.00 * 2, calcularPreco(12,6));
}

MU_TEST(test_preco_idoso) {
	mu_assert_double_eq(15.00 * 3, calcularPreco(90,3));
}

MU_TEST(test_preco_adulto) {
	mu_assert_double_eq(30.00 * 2, calcularPreco(45,2));
}

MU_TEST(test_quantidade_invalida) {
	mu_assert_double_eq(-1.0, calcularPreco(30,0));
    mu_assert_double_eq(-1.0, calcularPreco(30,6));

}

MU_TEST(test_quantidade_valida){
	mu_assert_double_eq(30.00 * 1, calcularPreco(30,1));
    mu_assert_double_eq(30.00 * 5, calcularPreco(30,5));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_preco_crianca); 
    MU_RUN_TEST(test_preco_idoso);
    MU_RUN_TEST(test_preco_adulto); 
    MU_RUN_TEST(test_quantidade_invalida); 
	MU_RUN_TEST(test_quantidade_valida);
}

int main(void) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
