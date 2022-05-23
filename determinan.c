#include <stdio.h>

int main(void)
{
	double A[4][4],det=1,temp1utm,tempBwh1utm,temp;

	int i,j,k,baris,brs1utm, bwh1utm,kolom,cari1utm,size;

	printf("Ukuran matriks nxn yang akan dihitung determinannya adalah : ");
	scanf ("%d",&size);

	printf("\nInput anggota matriks %dx%d ",size,size);

	for (i=0;i<size;i++) {
		for (j=0;j<size;j++) {
			scanf ("%lf", &A[i][j]);
		}
		
	}

	for (i=0;i<size; i++ ) {
		for (j=0;j<size;j++){
			printf ("%lf ", A[i][j]);
		}
		printf ("\n");
	}
	printf ("det = %lf \n\n", det);

	for (brs1utm=0;brs1utm<size;brs1utm++) {
	   if (A[brs1utm][brs1utm] != 0) {
              det = det * A[brs1utm][brs1utm];
		temp1utm = A[brs1utm][brs1utm];
	      for (kolom=brs1utm; kolom<size; kolom++) {
		A[brs1utm][kolom]=A[brs1utm][kolom]/temp1utm;
	      }

		for (i=0;i<size; i++ ) {
		for (j=0;j<size;j++){
			printf ("%lf ", A[i][j]);
		}
		printf ("\n");
		}
		printf("det = %lf \n",det);
		printf ("\n");

	      for (bwh1utm = brs1utm +1; bwh1utm<size; bwh1utm++){
	         if (A[bwh1utm][brs1utm] != 0) {
		    tempBwh1utm = A[bwh1utm][brs1utm];
		    for (kolom=brs1utm;kolom<size;kolom++){
		       A[bwh1utm][kolom]=A[bwh1utm][kolom]-A[brs1utm][kolom]*tempBwh1utm;
		 }}

		for (i=0;i<size; i++ ) {
		for (j=0;j<size;j++){
			printf ("%lf ", A[i][j]);
		}
		printf ("\n");
		}
		printf("det = %lf \n",det);
		printf ("\n");
	      }
	      }
	    else {
	       cari1utm=brs1utm+1;
	       while ((A[cari1utm][brs1utm]==0) && cari1utm<size) {
		   cari1utm = cari1utm+1;
	       }
		printf ("baris 1 utama pada baris %d dan cari 1 utama pada baris %d \n",brs1utm, cari1utm);
	       if (cari1utm < size) {
        		det = det * -1;
			printf ("det skrg jadi %lf \n", det);
			//temp1utm = A[cari1utm][brs1utm];
			for (kolom = brs1utm;kolom < size;kolom++){
			   temp = A[cari1utm][kolom];
			   A[cari1utm][kolom]=A[brs1utm][kolom];
			   A[brs1utm][kolom]=temp;
			}
			
		for (i=0;i<size; i++ ) {
		   for (j=0;j<size;j++){
			printf ("%lf ", A[i][j]);
		   }
		   printf ("\n");
	        }	
		   printf("det = %lf \n",det);
		   printf ("\n");
		}


              det = det * A[brs1utm][brs1utm];
	      temp1utm = A[brs1utm][brs1utm];
	      for (kolom=brs1utm; kolom<size; kolom++) {
		A[brs1utm][kolom]=A[brs1utm][kolom]/temp1utm;
	      }

		for (i=0;i<size; i++ ) {
		for (j=0;j<size;j++){
			printf ("%lf ", A[i][j]);
		}
		printf ("\n");
		}
		printf("det = %lf \n",det);
		printf ("\n");

	       if (cari1utm<size-1){
		       for (bwh1utm=cari1utm+1;bwh1utm<size;bwh1utm++){
			       tempBwh1utm=A[bwh1utm][brs1utm];
			       for(kolom=brs1utm;kolom<size;kolom++){
				       A[bwh1utm][kolom]=A[bwh1utm][kolom]-A[brs1utm][kolom]*tempBwh1utm;
			       }
			 }
			for (i=0;i<size; i++ ) {
		for (j=0;j<size;j++){
			printf ("%lf ", A[i][j]);
		}
		printf ("\n");
	}
		printf("det = %lf \n",det);
		printf ("\n");
	        }
	     }
  }

	   printf("nilai determinan adalah %lf ", det);
			       	       
		        
			



}
