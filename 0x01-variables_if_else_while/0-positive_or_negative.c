int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					
					if (n < 0)
								fprintf("%d is negative\n", n);
						else if (n > 0)
									fprintf("%d is positive\n", n);
							else
										fprintf("%d is zero", n);
								return (0);
}
