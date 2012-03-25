#include<stdio.h>
int main () {
int r,c,i,j,n;
char word[50];

	while(scanf("%d %d",&r,&c)!=EOF){
		char bank[r][c];
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			scanf("%c",&bank[i][j]);

		scanf("%d",&n);

		for(i=0;i<n;i++){
			for(j=0;j<r;j++){
				for(k=0;k<c;k++){
				for(m=0;m<8;m++){
					switch(m){
						case 0: 
							for(g=0;g<strlen(word);g++){
								if(word[g]!=bank[j][k++])
									
							}
						case 1:
							for()  
								if( )
									count++
				
				
				
				
					}
					if(count==8)
				}
				}
			}

		}
	}
}
