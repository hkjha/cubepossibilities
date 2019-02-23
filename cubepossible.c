#include<stdio.h>

void rotate(int corners[8][3],int edges[12][2],int code);
void printcube(int corners[8][3],int edges[12][2]);
char color(int a);

int main()
{

   int corners[8][3]={1,4,5,1,4,6,1,3,5,1,3,6,2,4,5,2,4,6,2,3,5,2,3,6};
   int edges[12][2]= {1,3,1,4,1,5,1,6,2,3,2,4,2,5,2,6,3,5,3,6,4,5,4,6};
   //up = 1; down=2; right = 3; left=4; front=5; rear=6;
   //color scheme
   //Yellow=1, White=2, pink=3, red=4, green=5, blue=6; YWP RGB   
   // rotation schemes
   //U-1,U2-2,U'-3, D-4,D2-5,D3-6
   //F-7,F2-8,F'-9, B-10, B2-11,B'-12
   //R-13, R2-14, R'-15, L-16,L2-17,L'-18
   

   //rotate(corners,edges,13);
   printcube(corners,edges); //pritn top face colors, bottom, front, rear, right and left colors
        
   getch();
}               

char color(int a){ if(a==1) return 'Y'; if(a==2) return 'W'; if(a==3) return 'P'; if(a==4) return 'R'; if(a==5) return 'G'; if(a==6) return 'B'; }

void printcube(int corners[8][3],int edges[12][2]){
     int i,j;
     //print top face
     printf("Top Face\n");
     printf(" %c %c %c\n",color(corners[0][0]),color(edges[0][0]),color(corners[1][0]));
     printf(" %c %c %c\n",color(edges[3][0]),color(1),color(edges[1][0]));
     printf(" %c %c %c\n",color(corners[3][0]),color(edges[2][0]),color(corners[2][0]));
     
     //print bottom face
     printf("Bottom Face\n");
     printf(" %c %c %c\n",color(corners[4][0]),color(edges[10][0]),color(corners[5][0]));
     printf(" %c %c %c\n",color(edges[10][0]),color(2),color(edges[9][0]));
     printf(" %c %c %c\n",color(corners[7][0]),color(edges[8][0]),color(corners[6][0]));

     
     //print right face
     printf("Right Face\n");
     printf(" %c %c %c\n",color(corners[1][1]),color(edges[10][0]),color(corners[2][1]));
     printf(" %c %c %c\n",color(edges[10][0]),color(3),color(edges[9][0]));
     printf(" %c %c %c\n",color(corners[7][0]),color(edges[8][0]),color(corners[7][0]));
          
     //print left face
     printf("Left Face\n");
     printf(" %c %c %c\n",color(corners[4][0]),color(edges[10][0]),color(corners[5][0]));
     printf(" %c %c %c\n",color(edges[10][0]),color(4),color(edges[9][0]));
     printf(" %c %c %c\n",color(corners[7][0]),color(edges[8][0]),color(corners[7][0]));
     
     //print Front face
     printf("Front Face\n");
     printf(" %c %c %c\n",color(corners[4][0]),color(edges[10][0]),color(corners[5][0]));
     printf(" %c %c %c\n",color(edges[10][0]),color(5),color(edges[9][0]));
     printf(" %c %c %c\n",color(corners[7][0]),color(edges[8][0]),color(corners[7][0]));
     
     //print rear face
     printf("Rear Face\n");
     printf(" %c %c %c\n",color(corners[4][0]),color(edges[10][0]),color(corners[5][0]));
     printf(" %c %c %c\n",color(edges[10][0]),color(6),color(edges[9][0]));
     printf(" %c %c %c\n",color(corners[7][0]),color(edges[8][0]),color(corners[7][0]));

}
