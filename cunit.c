#include "CUnit/Basic.h"
#include "CUnit/CUnit.h"
#include "calculator.c"

void sum_test(){
// Check if first param matches with second[2]
    CU_ASSERT_EQUAL(sum(2,3),5);
    CU_ASSERT_EQUAL(sum(0,0),0);
    CU_ASSERT_EQUAL(sum(2,0),2);
}

int main(int argc, char const *argv[])
{
    // Initilize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    CU_pSuite psuite1 = NULL;

    // Add a suite to the registry
    psuite1 = CU_add_suite("birinci suite",0,0);

    // Always check if add was successful
    if ( psuite1 == NULL)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test to the suite

    if(CU_add_test(psuite1,"sum_test",sum_test) == NULL){
        CU_cleanup_registry();
        return CU_get_error();
    }
    




   // Sets the basic run mode, CU_BRM_VERBOSE will show maximum output of run details
   // Other choices are: CU_BRM_SILENT and CU_BRM_NORMAL
   CU_basic_set_mode(CU_BRM_NORMAL);    

      // Run the tests and show the run summary
   CU_basic_run_tests();
   return CU_get_error();

    return 0;
}
