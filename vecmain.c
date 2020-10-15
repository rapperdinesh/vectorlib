/* Custom Library Imports */
#include "veclib.h"

/* Function for taking input. */
void inputVector(vector vecA) {
	printf("Please Enter four space seprated values for the vector in R^4 :\n");
	for (int i = 0; i < 4; i++)
		scanf("%f", &vecA[i]);
}

/* Print the vector */
void print(vector vecA) {
	printf("[ ");
	for (int i = 0; i < 4; i++)
		printf("%f ", vecA[i]);
	printf("]");
	printf("\n");
}

/* Main Function */
int main() {
	/* Vector Declaration */
	vector vec1, vec2, vec3;
	/* Input Vector 1 */
	inputVector(vec1);
	/* Input Vector 2 */
	inputVector(vec2);

	/* Element product of two vectors */
	eleProd(vec1, vec2, vec3);
	printf("Element product of two vectors:\n");
	print(vec3);


	/* Addition of two vectors */
	add(vec1, vec2, vec3);
	printf("Addition of two vectors:\n");
	print(vec3);

	/* Dot product of two vectors */
	float dotp = dotprod(vec1, vec2);
	printf("Dot product of two vectors: %f\n", dotp);

	/* Norm of two vectors*/
	float normv = norm(vec1, vec2);
	printf("norm of two vectors: %f\n", normv);	

	/*Angle between two vectors*/
	float angle_v = angle(vec1, vec2);
	printf("Angle between two vectors: %f\n", angle_v);
}