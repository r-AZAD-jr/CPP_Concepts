int main()
{
	int Number = 10;
	int Number_1 = 100;

	int const* pNumber = &Number;
	pNumber = &Number_1;
	// *pNumber = 10;
	
	int* const pNumber_1 = &Number;
	*pNumber_1 = 20;
	// pNumber_1 = & Number_1;

	int const* const pNumber_3 = &Number;
	// *pNumber_3 = & Number_1;
	// pNumber_3 = &Number_1;
	int Number_2 = *pNumber_3;
	int const* pNumber_4 = pNumber_3;

	return 0;
}
