#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
int  sub_401000(void ( *a1)(int, double *, int, int, int),
        void ( *a2)(int, int, int, int, int),
        int a3,
        int a4,
        int Src,
        int a6,
        int a7,
        double *a8,
        double *a9,
        double *Block,
        double *a11,
        int a12);

bool  sub_4056B0(unsigned long *a1, unsigned long *a2);
bool  sub_4172A0(int a1, int a2);
bool  sub_4172C0(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, double a16);
bool  sub_421FB0(double a1, double a2);
bool  sub_422D00(int a1, int a2, unsigned long *a3, double a4, double a5);
bool  sub_42FED0();
bool  sub_430F50(int a1);
bool  sub_4337C0(float *a1, float *a2);
char  sub_403D80( unsigned int a2);
char  sub_405320( unsigned int a2);
char  sub_405390( unsigned int a2);
char  sub_4057B0();
char  sub_406170( double a2, double *a3);
char  sub_406280( double a2, double *a3);
char  sub_42E840(unsigned int a2, char *a3);
char  sub_431060(unsigned );
char  sub_431F70( int a2, int a3, int a4);
char  sub_433070();
char  sub_4330F0( int a2, int a3, int a4, float a5, float a6, double a7, char a8);
char * sub_403F00(char *a2);
char * sub_403FA0(char a2);
char * sub_405400( unsigned int a2);
char * sub_405480( unsigned int a2);
char * sub_4076E0( unsigned int a2);
char * sub_4210E0(unsigned int a2);
char * sub_427500(char a2);
char * sub_4275E0(char a2);
char * sub_42B0B0(unsigned int a2);
char * sub_42B2D0(unsigned int a2);
char * sub_4316E0(char a2);
const char *sub_403C90();
const char *sub_403CA0();
const char *sub_403CB0();
double  sub_402A70(int a1, int a2, int a3, signed int a4);
double  sub_404E30();
double  sub_4060D0( double a2);
double  sub_406A70( double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9);
double  sub_40C4E0();
double  sub_410E70();
double  sub_416680();
double  sub_421F30(double a1, double a2);
double  sub_422A60(double a1, double a2, double a3, double a4, double a5);
double  sub_422BB0(double a1, double a2, double a3, double a4, double a5);
double  sub_423330(double a1);
double  sub_429780( int a2, int a3);
double  sub_429AE0(int a1, int a2, int a3, int a4);
double  sub_42DF70();
double  sub_42E1A0();
double  sub_42E2C0();
double  sub_42E380();
double  sub_42E420();
double  sub_42F560(unsigned long *a1);
double  sub_42F590( int a2);
double  sub_4302B0();
double  sub_4311F0(unsigned );
double  sub_431B10( int a2, int a3, int a4, double a5);
double  sub_431D50(int a1, int a2, int a3, int a4);
double  sub_434290( int a2);
double  sub_434990( int a2, int a3);
double  sub_434A20( int a2);
double  sub_434A80();
double  sub_42DFC0(unsigned long *a1);
double  sub_42E0A0(unsigned long *a1);
double * sub_406C30(long long a1, double a2, double a3, double *a4);
double * sub_406E50(double *a1, double *a2, double *a3);
double * sub_407120(double *a1, double *a2, double *a3);
double * sub_407400(double *a1, double *a2, double *a3);
double * sub_425200(double *a1);
double sub_42B960();
float * sub_42AB70();
float * sub_42E870( int a2, float a3, float a4);
float * sub_431170(unsigned int a2, float *a3);
float * sub_432B30(int a2, float *a3, float *a4);
float * sub_434030();
int  main(int argc, const char **argv, const char **envp);
int  sub_4029D0(int a1, double *a2, double a3, int a4, int a5);
int  sub_402D90(void *Src, void *a2, char *a3, int a4);
int  sub_403CC0( unsigned int a2);
int  sub_403DF0( int a2);
int  sub_403E20(int a2, int a3);
int  sub_403E70();
int  sub_403EE0();
int  sub_403F40();
int  sub_404010(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long *, unsigned long *));
int  sub_4040D0(const int **a1, const int **a2, int a3);
int  sub_404280(int a1, int a2, unsigned char ( *a3)(unsigned long *, unsigned long *));
int  sub_404370(int *a1, int *a2, int *a3, unsigned char ( *a4)(int *, int *));
int  sub_4043F0(int *a1, int *a2, int *a3, unsigned char ( *a4)(int *, int *));
int  sub_404490(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long *, unsigned long *));
int  sub_4046B0(int a1, int a2, int a3);
int  sub_404A00( const int **a2);
int  sub_404AC0( const int **a2);
int  sub_404D80(unsigned long *a1, unsigned long *a2);
int  sub_404F30();
int  sub_405120( unsigned long *a2, unsigned long **a3);
int  sub_405750( unsigned int a2);
int  sub_405E20( int a2, int a3, long long a4);
int  sub_405EB0( int a2, int a3, long long a4);
int  sub_4069A0( unsigned int a2);
int  sub_4077E0( unsigned int a2);
int  sub_416B30(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long, unsigned long));
int  sub_416C80(int a1, int a2, unsigned char ( *a3)(unsigned long, unsigned long));
int  sub_416D30(int *a1, int *a2, int *a3, unsigned char ( *a4)(int, int));
int  sub_416F10(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long, unsigned long));
int  sub_4173B0(int a1, int a2, int a3, const int *a4, unsigned char ( *a5)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_4177B0(int a1, int a2, unsigned char ( *a3)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_417920(int *a1, int *a2, int *a3, unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_417AC0(int *a1, int *a2, int *a3, unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_417B70(int a1, int a2, int a3, const int *a4, unsigned char ( *a5)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_417C60(int *a1, int *a2, int a3, unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_417DA0(const int *a1, int a2, unsigned char ( *a3)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int  sub_4184D0( double a2, int a3, int a4, double a5);
int  sub_4216E0( unsigned int a2);
int  sub_421E50(unsigned long *a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long a8);
int  sub_4244C0(int a1, int *a2, unsigned long *a3, double a4, double a5, long long a6, int a7, unsigned long *a8, unsigned long *a9, double a10);
int  sub_424790(int *a1, int *a2, unsigned long *a3, double a4, double a5, long long a6, int a7, unsigned long *a8, unsigned long *a9, double a10);
int  sub_424B60(int a1, int a2, unsigned long *a3, double a4, double a5, long long a6, int a7);
int  sub_424E00(int a1, int a2, unsigned long *a3, int *a4, unsigned long *a5, double *a6, unsigned long *a7, double a8);
int  sub_426520(unsigned long *a1, unsigned long *a2, unsigned long *a3);
int  sub_426950( int a2, unsigned long *a3, unsigned long *a4, void *a5);
int  sub_426A70(int a1, int *a2);
int  sub_426A90(int a1, unsigned long *a2);
int  sub_426AB0(int a1, int a2, int a3);
int  sub_426C20(int a1, int a2, int a3);
int  sub_4276C0();
int  sub_427CE0( int a2);
int  sub_428190();
int  sub_428700(int a2, int a3);
int  sub_42A690();
int  sub_42B4F0();
int  sub_42B920();
int  sub_42B930( int a2);
int  sub_42B970( unsigned long *a2);
int  sub_42BA60( unsigned int a2);
int  sub_42BB40(unsigned int a2);
int  sub_42BD50( int a2, int a3);
int  sub_42D810();
int  sub_42DA70( void *a2, int a3, unsigned long *a4);
int  sub_42DC50( float *a2, int a3, int a4, int a5);
int  sub_42E4B0();
int  sub_42E790( int a2, int a3);
int  sub_42E7B0( int a2);
int  sub_42E7C0( int a2);
int  sub_42E7D0( int a2, int a3, int a4);
int  sub_42E940( int a2);
int  sub_42E960( int a2, int a3, float *a4, int a5);
int  sub_42EC30( int a2, int a3, float *a4, int a5);
int  sub_42EF70( int a2, int a3, float *a4, int a5);
int  sub_42F910( int a2, float a3, float a4);
int  sub_42FE90(unsigned int a2);
int  sub_42FEE0(unsigned );
int  sub_4307F0();
int  sub_431090();
int  sub_4317A0( int a2, int a3, double a4);
int  sub_431D80();
int  sub_4335C0(const int *a1, int a2);
int  sub_434EA0(unsigned long *a1, int a2, int a3);
int  sub_4352D0(int a1, int a2, int *a3, int a4, unsigned long *a5, int a6);
int  sub_435570(int a1, int a2, int *a3);
int  sub_435770(int a1, int a2, int *a3, int *a4, int *a5, int *a6, double a7);
int  sub_435A50(int a1, unsigned long *a2, int a3);
int  UserMathErrorFunction();
int  sub_425440(int a1, int a2, int a3);
int * sub_403D10(unsigned int a2);
int * sub_404090(const int *a1, const int *a2, int *a3);
int * sub_404680(const int *a1, const int *a2, int *a3);
int * sub_404940(const int *a1, const int *a2, int *a3);
int * sub_404C30(const int ***a2);
int * sub_40D630( char *a2, int a3);
int * sub_4175B0(const int *a1, int *a2, unsigned char ( *a3)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int * sub_4183F0(const int *a1, const int *a2, int *a3);
int * sub_418430(const int *a1, const int *a2, int *a3);
int * sub_4214D0( const int *a2);
int * sub_421580( const int *a2);
int * sub_426EE0(int *a2);
int * sub_427450();
int * sub_42B1E0(unsigned int a2);
int * sub_42B580( int *a2, int *a3, int *a4);
int * sub_42BA10( unsigned long *a2);
int * sub_432060(int a1, int *a2, float *a3);
int ** sub_4046E0(int **a1, int *a2, int *a3, unsigned char ( *a4)(int *, int *));
int ** sub_4170C0(int **a1, int *a2, int *a3, unsigned char ( *a4)(int, int));
int ** sub_417E60(int **a1, int *a2, int *a3, unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
int ** sub_420F10(const  unsigned int a2);
int sub_42B950();
int sub_437697();
signed char * sub_420E20( unsigned int a2);
signed char * sub_420FF0( unsigned int a2);
signed int  sub_4045F0(int *a1, int a2, unsigned char ( *a3)(unsigned long *, unsigned long *));
signed int  sub_417060(unsigned long *a1, int a2, unsigned char ( *a3)(unsigned long, unsigned long));
unsigned int  sub_405560( unsigned int a2);
unsigned int  sub_4055E0( unsigned int a2);
unsigned int  sub_4056D0(unsigned unsigned long *a2);
unsigned int  sub_406920( unsigned int a2);
unsigned int  sub_407760( unsigned int a2);
unsigned int  sub_4172E0();
unsigned int  sub_4211E0( unsigned int a2);
unsigned int  sub_421290( unsigned int a2);
unsigned int  sub_421310( unsigned int a2);
unsigned int  sub_4213C0(unsigned int a2);
unsigned int  sub_421460( unsigned int *a2);
unsigned int  sub_42AE80( unsigned int a2);
unsigned int  sub_42B340(unsigned int a2);
unsigned long * sub_403610( char a2);
unsigned long * sub_4037C0( unsigned long *a2, unsigned int a3, unsigned int Size);
unsigned long * sub_4038E0( unsigned char *Src, unsigned int Size);
unsigned long * sub_403AA0( unsigned int a2, unsigned int a3);
unsigned long * sub_403B40(unsigned long *a1, int a2);
unsigned long * sub_403BC0(unsigned long *a1, int a2);
unsigned long * sub_403C10(unsigned long *a1, int a2);
unsigned long * sub_403E60();
unsigned long * sub_403EA0( char a2);
unsigned long * sub_404980(unsigned long *a1, unsigned long *a2, unsigned long *a3);
unsigned long * sub_406840( unsigned int a2);
unsigned long * sub_407850( int a2, int a3, int a4);
unsigned long * sub_40C640( int a2, int a3, int a4);
unsigned long * sub_411000( int a2, int a3, int a4);
unsigned long * sub_418470(unsigned long *a1, unsigned long *a2, unsigned long *a3);
unsigned long * sub_422240(unsigned long *a1, double a2, double a3);
unsigned long * sub_423450(unsigned int a1, unsigned int a2);
unsigned long * sub_423520(unsigned int a1, unsigned int a2);
unsigned long * sub_423590(int a1, int a2, int a3);
unsigned long * sub_4235F0(unsigned int a1, unsigned int a2);
unsigned long * sub_423660(unsigned int a1);
unsigned long * sub_426540( int a2, unsigned long **a3, int a4);
unsigned long * sub_4265A0( unsigned long *a2, char a3, unsigned long *a4, int a5, void *a6);
unsigned long * sub_4267B0( unsigned long *a2, unsigned long *a3, int *a4, void *a5);
unsigned long * sub_426CE0( unsigned long *a2, unsigned long *a3);
unsigned long * sub_426DD0( unsigned long *a2, unsigned long *a3);
unsigned long * sub_426F90();
unsigned long * sub_4270F0( int a2, int a3);
unsigned long * sub_4273C0( unsigned long *a2);
unsigned long * sub_427610( char a2);
unsigned long * sub_42A0F0( int a2, int a3);
unsigned long * sub_42AE00();
unsigned long * sub_42B050( int a2);
unsigned long * sub_42B3C0( unsigned long *a2);
unsigned long * sub_42B4D0(unsigned long *a2);
unsigned long * sub_42B540();
unsigned long * sub_42B630( unsigned long *a2, unsigned long *a3);
unsigned long * sub_42B8B0( unsigned long *a2, unsigned long **a3, unsigned long **a4);
unsigned long * sub_42BD70();
unsigned long * sub_42DA20(unsigned long *a2, int *a3);
unsigned long * sub_42DC20( char a2);
unsigned long * sub_42DCC0( unsigned long *a2, int a3, float a4, float a5, float a6, float a7);
unsigned long * sub_42F6D0( int a2);
unsigned long * sub_42F770( unsigned long *a2, int a3, int a4, int a5);
unsigned long * sub_42F890();
unsigned long * sub_42F970();
unsigned long * sub_42FF30();
unsigned long * sub_430F80( int a2, int a3, unsigned long *a4);
unsigned long * sub_430FD0( int a2);
unsigned long * sub_434B20( int a2);
unsigned long long * sub_405DE0(unsigned long long *a1, unsigned long long *a2, unsigned long long *a3);
void   sub_403640( int a2, unsigned int Size);
void   sub_422090(const char *a1);
void  sub_403D50();
void  sub_404130(int a1, int a2);
void  sub_404180(int *a1, int *a2, unsigned char ( *a3)(int *, int *));
void  sub_404510(int *a1, int *a2, int a3, unsigned char ( *a4)(int *, int *));
void  sub_4049C0(unsigned long *a1);
void  sub_404F90( unsigned long *a2);
void  sub_405660();
void  sub_405DC0(unsigned long long *a1, int a2);
void  sub_406030();
void  sub_4078C0();
void  sub_4089A0(int a2, unsigned long **a3, unsigned long *a4, double a5, double a6);
void  sub_40C6B0();
void  sub_411070();
void  sub_416820(unsigned long *a1, int a2);
void  sub_417570(int a1, int a2);
void  sub_4183C0(unsigned long long *a1, int a2);
void  sub_419150(double a2, int a3, int a4, double a5);
void  sub_419BD0( int a2, int a3, long long a4);
void  sub_41AC40( double a2, int a3, int a4, long long a5);
void  sub_41DA90( int a2, int a3, double a4);
void  sub_421620(const int **a2);
void  sub_4220C0(void **Block);
void  sub_4220F0(void *Block);
void  sub_422130(unsigned long *a1, double a2);
void  sub_4243C0(double *, unsigned long *, double);
void  sub_425550(int a1, int a2, int a3, int *a4, double a5, double a6, int a7, double a8, double a9, double a10);
void  sub_425F90(int a1, int a2, int a3, int a4, int a5, int a6, double a7, double a8, int a9, double a10, double a11, double a12);
void  sub_426570(unsigned long *a1, unsigned long *a2, unsigned long *a3);
void  sub_426B70(int a1, int a2);
void  sub_426EC0();
void  sub_427130();
void  sub_4271F0();
void  sub_427250();
void  sub_427310();
void  sub_427C60( float a2);
void  sub_427CA0( float a2);
void  sub_427FB0();
void  sub_428040(int a2, int a3, int a4);
void  sub_4283B0();
void  sub_4285B0();
void  sub_429C20();
void  sub_429F10(float a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8);
void  sub_42A1D0( int a2);
void  sub_42AAF0();
void  sub_42ABA0();
void  sub_42AD80(unsigned long *a1, unsigned long *a2);
void  sub_42ADC0(unsigned long *a1, unsigned long *a2);
void  sub_42AE40(void **a1);
void  sub_42AED0( unsigned int a2);
void  sub_42B420();
void  sub_42B480();
void  sub_42BC70(unsigned int a2);
void  sub_42BDA0();
void  sub_42BE00( double a2, long long a3, int a4);
void  sub_42D7B0();
void  sub_42DB50(unsigned );
void  sub_42DE90( int a2, int a3);
void  sub_42E540( int a2);
void  sub_42E560( int a2);
void  sub_42F260( int a2, int a3, float *a4, int a5);
void  sub_42F3F0( int a2, int a3, float *a4, int a5);
void  sub_42F700();
void  sub_42FE20();
void  sub_430740();
void  sub_431250();
void  sub_4313A0();
void  sub_431480(); 
void  sub_4316D0();
void  sub_431850( float a2);
void  sub_431870( float a2);
void  sub_431970( int a2, int a3, int a4, int a5, int a6, int a7);
void  sub_4320C0();
void  sub_432870( float a2, float a3, int a4, int a5, int a6, int a7);
void  sub_433490( int a2, long long a3, int a4, int a5);
void  sub_433A80( long long a2, long long a3);
void  sub_433AA0( int a2, int a3, int a4);
void  sub_4340F0();
void  sub_4348C0( long long a2, int a3);
void  sub_434AE0( int a2);
void  sub_434C30();
void  sub_434CA0();
void  sub_436030(long long a1, unsigned long *a2, unsigned long *a3, int *a4, double a5, double a6);
void  sub_4363E0(long long a1, unsigned long *a2, unsigned long *a3, int *a4);
void  sub_4378C0(); 
void  sub_438C40(); 
void  sub_438C50(); 
void  sub_438C60(); 
void  sub_432D20(int a1, float a2);
void * sub_403790(unsigned int a1);
void * sub_4078E0( char a2);
void * sub_40C6D0( char a2);
void * sub_411090( char a2);
void * sub_416640( void *Src);
void * sub_416BD0(char *Src, char *a2, unsigned char ( *a3)(int, int));
void * sub_416F80(char *Src, char *a2, int a3, unsigned char ( *a4)(int, int));
void * sub_422020(int a1);
void * sub_4274A0();
void * sub_4275B0( char a2);
void * sub_42BDC0( char a2);
void * sub_42DE60();
void * sub_4317E0( int a2);
void * sub_434E70( char a2);
void ** sub_4234C0(unsigned int a1, unsigned int a2, unsigned char a3);
void ** sub_427690( char a2);



int  sub_401000(
        void ( *a1)(int, double *, int, int, int),
        void ( *a2)(int, int, int, int, int),
        int a3,
        int a4,
        int Src,
        int a6,
        int a7,
        double *a8,
        double *a9,
        double *Block,
        double *a11,
        int a12)
{
  FILE *v13; 
  FILE *v15; 
  double v16; 
  double *v17; 
  double v18; 
  double v19; 
  double v20; 
  int v21; 
  int v22; 
  double i; 
  int j; 
  double *v25; 
  int v26; 
  char *v27; 
  double v28; 
  int v29; 
  double *v30; 
  double v31; 
  bool v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  double *v40; 
  int v41; 
  unsigned int v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double *v47; 
  double *v48; 
  char *v49; 
  double *v50; 
  int v51; 
  int v52; 
  double v53; 
  int v54; 
  int v55; 
  double *v56; 
  unsigned int v57; 
  double v58; 
  double *v59; 
  char *v60; 
  double v61; 
  double v62; 
  int v63; 
  double v64; 
  double *v65; 
  int v66; 
  double *v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double *v82; 
  double *v83; 
  char *v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  int v93; 
  unsigned int v94; 
  double *v95; 
  double v96; 
  int v97; 
  double *v98; 
  int v99; 
  double *v100; 
  unsigned int v101; 
  double *v102; 
  double *v103; 
  double *v104; 
  char *v105; 
  char *v106; 
  double v107; 
  int v108; 
  int v109; 
  int v110; 
  double v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  double v116; 
  double v117; 
  double v118; 
  int v119; 
  char *v120; 
  double v121; 
  int v122; 
  double v123; 
  double *v124; 
  unsigned int v125; 
  char *v126; 
  double v127; 
  double *v128; 
  char *v129; 
  double v130; 
  double v131; 
  double v132; 
  int v133; 
  double *v134; 
  int v135; 
  double *v136; 
  unsigned int v137; 
  double *v138; 
  double *v139; 
  double *v140; 
  double v141; 
  double *v142; 
  double v143; 
  double v144; 
  double v145; 
  int v146; 
  double v147; 
  int v148; 
  int v149; 
  unsigned int v150; 
  int v151; 
  char *v152; 
  double v153; 
  int v154; 
  int v155; 
  int v156; 
  unsigned int v157; 
  double *v158; 
  double *v159; 
  int v160; 
  double v161; 
  double v162; 
  double v163; 
  double v164; 
  double v165; 
  double v166; 
  int v167; 
  double *v168; 
  int v169; 
  double *v170; 
  unsigned int v171; 
  double *v172; 
  double *v173; 
  double *v174; 
  double v175; 
  int v176; 
  double *v177; 
  double v178; 
  double v179; 
  int v180; 
  double *v181; 
  unsigned int v182; 
  double *v183; 
  char *v184; 
  const char *X_4; 
  double v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double X; 
  int v193; 
  int v194; 
  int ( *v195)(void *, void *, char *, int); 
  int v196; 
  int v197; 
  int v198; 
  int v199; 
  double v200; 
  int v201; 
  int v202; 
  double v203; 
  double v204; 
  int v205; 
  int v206; 
  double v207; 
  int v208; 
  double *v209; 
  double v210; 
  int v211; 
  int v212; 
  double *v213; 
  int v214; 
  int v215; 
  double *v216; 
  char *v217; 
  double *v218; 
  int v219; 
  double *v220; 
  int v221; 
  char *v222; 
  int v223; 
  char *v224; 
  double *v225; 
  double *v226; 
  double *v227; 
  double *v228; 
  int v229; 
  double *v230; 
  int v231; 
  double *v232; 
  double *v233; 
  double *v234; 
  int v235; 
  double *v236; 
  int v237; 
  int v238; 
  int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  double *v247; 
  int v248; 
  double *v249; 
  int v250; 
  double *Srca; 

  v203 = 1.797693134;
  v204 = 0.0;
  v207 = 0.0;
  v193 = 0;
  v219 = 2;
  v221 = 0;
  v202 = 0;
  v196 = 0;
  v198 = a6 * Src;
  v195 = 0;
  if ( a6 < Src )
  {
    v13 = _iob_func();
    printf(v13 + 2, "dlevmar_der(): cannot solve a problem with fewer measurements [%d] than unknowns [%d]\n", a6, Src);
    return -1;
  }
  if ( !a2 )
  {
    X_4 = "No function specified for computing the Jacobian in dlevmar_der().\n"
          "If no such function is available, use dlevmar_dif() rather than dlevmar_der()\n";
LABEL_6:
    v15 = _iob_func();
    printf(v15 + 2, X_4);
    return -1;
  }
  if ( a8 )
  {
    v187 = *a8;
    v191 = a8[1];
    v188 = a8[2];
    v190 = v188 * v188;
    v16 = a8[3];
  }
  else
  {
    v187 = 0.001;
    v16 = 1.0e-17;
    v191 = 1.0e-17;
    v188 = 1.0e-17;
    v190 = 1.0e-34;
  }
  v189 = v16;
  if ( !Block )
  {
    Block = (double *)malloc(8 * (Src * (Src + a6 + 4) + 2 * a6));
    if ( !Block )
    {
      X_4 = "dlevmar_der(): memory allocation request failed\n";
      goto LABEL_6;
    }
    v193 = 1;
  }
  v17 = &Block[a6];
  v225 = &v17[a6];
  v199 = (int)&v225[Src];
  v194 = Src * Src;
  v217 = (char *)(v199 + 8 * v198 + 8 * Src * Src);
  v224 = &v217[8 * Src];
  Srca = (double *)(v199 + 8 * v198);
  v215 = (int)v17;
  v214 = (int)&v217[8 * Src + 8 * Src];
  a1(a3, v17, Src, a6, a12);
  v197 = 1;
  X = sub_402A70((int)Block, a4, (int)v17, a6);
  v186 = X;
  if ( !finite(X) )
    v221 = 7;
  v206 = 0;
  if ( a7 <= 0 )
  {
    v19 = 1.797693134862316e308;
    v164 = 0.0;
    v18 = 0.0;
    goto LABEL_183;
  }
  v18 = 0.0;
  v19 = 1.7976;
LABEL_19:
  if ( v221 )
    goto LABEL_178;
  if ( v189 >= X )
  {
    v221 = 6;
LABEL_178:
    v164 = v204;
    goto LABEL_180;
  }
  v21 = a6;
  a2(a3, v199, Src, a6, a12);
  ++v202;
  if ( v198 >= 1024 )
  {
    v50 = v225;
    if ( Src > 0 )
    {
      memset(v225, 0, 8 * Src);
      v21 = a6;
    }
    v51 = 0;
    v239 = 0;
    if ( v21 > 0 )
    {
      v52 = v199 - (unsigned long)v225;
      do
      {
        v53 = Block[v51];
        v54 = 0;
        if ( Src >= 4 )
        {
          v55 = (int)v50 + v52 + 24;
          v56 = v50 + 1;
          v57 = ((unsigned int)(Src - 4) >> 2) + 1;
          v54 = 4 * v57;
          do
          {
            v56 += 4;
            v58 = *(double *)(v55 - 24) * v53;
            v55 += 32;
            --v57;
            *(v56 - 5) = v58 + *(v56 - 5);
            *(v56 - 4) = *(double *)((char *)v56 + v52 - 32) * v53 + *(v56 - 4);
            *(v56 - 3) = *(double *)(v55 - 40) * v53 + *(v56 - 3);
            *(v56 - 2) = *(double *)(v55 - 32) * v53 + *(v56 - 2);
          }
          while ( v57 );
          v50 = v225;
        }
        if ( v54 < Src )
        {
          v59 = &v50[v54];
          v60 = (char *)(Src - v54);
          do
          {
            v61 = *(double *)((char *)v59++ + v52);
            --v60;
            *(v59 - 1) = v61 * v53 + *(v59 - 1);
          }
          while ( v60 );
        }
        v51 = v239 + 1;
        v52 += 8 * Src;
        v239 = v51;
      }
      while ( v51 < a6 );
    }
    i = 0.0;
  }
  else
  {
    v22 = v194;
    for ( i = 0.0; v22 > 0; Srca[v22] = 0.0 )
      --v22;
    for ( j = Src; j > 0; v225[j] = 0.0 )
      --j;
    v237 = a6;
    if ( a6 > 0 )
    {
      v245 = -8 * Src;
      v229 = v199 + 8 * v198 - 8;
      v208 = 8 * Src * (a6 - Src) - 8 * v198;
      do
      {
        --v237;
        v208 += v245;
        v229 += v245;
        if ( Src > 0 )
        {
          v25 = (double *)v199;
          v26 = 8 - (unsigned long)v225;
          v27 = (char *)(Src + 1);
          v222 = v217;
          v211 = v208;
          v231 = Src;
          do
          {
            v222 += v245;
            v211 += 8 * Src;
            --v25;
            --v27;
            v28 = *(double *)((char *)v25 + v26 + v229);
            v29 = (int)v27;
            if ( (int)v27 > 0 )
            {
              v30 = (double *)((int)v25 + v26 + (unsigned long)v222);
              do
              {
                v31 = *(double *)((char *)v30-- + v211 - 8);
                --v29;
                *v30 = v31 * v28 + *v30;
              }
              while ( v29 > 0 );
              v26 = 8 - (unsigned long)v225;
            }
            v32 = v231-- == 1;
            *v25 = v28 * Block[v237] + *v25;
          }
          while ( !v32 );
        }
      }
      while ( v237 > 0 );
    }
    v33 = Src;
    if ( Src > 0 )
    {
      v34 = v194;
      v223 = Src * (Src + 2);
      v212 = Src * (Src + 3);
      v35 = -Src;
      v36 = Src * (Src + 4);
      v37 = -1;
      while ( 1 )
      {
        v212 += v35;
        v223 += v35;
        --v33;
        v205 = v35 + v36;
        v38 = v37 + 1;
        v34 += v35;
        v39 = v33 + 1;
        v238 = v33;
        v201 = v38;
        v246 = v34;
        if ( v33 + 1 < Src )
        {
          if ( v38 >= 4 )
          {
            v40 = &Srca[v39 + 2 + v34];
            v230 = &Srca[Src + v33 + v246];
            v232 = &Srca[v33 + v205];
            v41 = 32 * Src;
            v226 = &Srca[v33 + v212];
            v209 = &Srca[v33 + v223];
            v42 = ((unsigned int)(Src - v39 - 4) >> 2) + 1;
            v39 += 4 * v42;
            do
            {
              v43 = *v230;
              v230 = (double *)((char *)v230 + v41);
              *(v40 - 2) = v43;
              v44 = *v209;
              v209 = (double *)((char *)v209 + v41);
              *(v40 - 1) = v44;
              v45 = *v226;
              v226 = (double *)((char *)v226 + v41);
              *v40 = v45;
              v46 = *v232;
              v232 = (double *)((char *)v232 + v41);
              v40[1] = v46;
              v40 += 4;
              --v42;
            }
            while ( v42 );
            v35 = -Src;
            v34 = v246;
            v33 = v238;
          }
          if ( v39 < Src )
          {
            v47 = &Srca[v39 + v34];
            v48 = &Srca[v33 + Src * v39];
            v49 = (char *)(Src - v39);
            do
            {
              *v47++ = *v48;
              v48 += Src;
              --v49;
            }
            while ( v49 );
            v33 = v238;
            v34 = v246;
          }
        }
        if ( v33 <= 0 )
          break;
        v37 = v201;
        v36 = v205;
      }
    }
  }
  v62 = i;
  v63 = 0;
  v204 = i;
  v64 = i;
  v210 = i;
  if ( Src < 4 )
  {
    v80 = i;
    v81 = i;
  }
  else
  {
    v213 = &Srca[3 * Src + 3];
    v227 = &Srca[2 * Src + 2];
    v233 = &Srca[Src + 1];
    v247 = (double *)(v199 + 8 * v198);
    v65 = v225 + 1;
    v66 = 32 * (Src + 1);
    v67 = (double *)(a3 + 16);
    do
    {
      v68 = v64;
      v69 = i;
      v70 = v68;
      v71 = *(v65 - 1);
      if ( v69 > v71 )
        v71 = -v71;
      if ( v71 > v62 )
        v62 = v71;
      *(double *)&v224[8 * v63] = *v247;
      v72 = v70 + *(v67 - 2) * *(v67 - 2);
      v73 = *v65;
      if ( v69 > v73 )
        v73 = -v73;
      if ( v73 > v62 )
        v62 = v73;
      *(double *)((char *)v65 + v224 - (char *)v225) = *v233;
      v74 = v72 + *(double *)((char *)v65 + a3 - (unsigned long)v225) * *(double *)((char *)v65 + a3 - (unsigned long)v225);
      v75 = v65[1];
      if ( v69 > v75 )
        v75 = -v75;
      if ( v75 > v62 )
        v62 = v75;
      *(double *)&v224[(unsigned long)v67 - a3] = *v227;
      v76 = v74 + *v67 * *v67;
      v77 = v65[2];
      if ( v69 > v77 )
        v77 = -v77;
      if ( v77 > v62 )
        v62 = v77;
      v247 = (double *)((char *)v247 + v66);
      *(double *)&v224[8 * v63 + 24] = *v213;
      v233 = (double *)((char *)v233 + v66);
      v227 = (double *)((char *)v227 + v66);
      v213 = (double *)((char *)v213 + v66);
      v63 += 4;
      v65 += 4;
      v78 = v69;
      v64 = v76 + v67[1] * v67[1];
      i = v78;
      v67 += 4;
    }
    while ( v63 < Src - 3 );
    v210 = v64;
    v79 = v64;
    v80 = v62;
    v81 = v79;
    v204 = v80;
  }
  if ( v63 >= Src )
  {
    v91 = v80;
  }
  else
  {
    v82 = (double *)((char *)Srca + v63 * (8 * Src + 8));
    v83 = &v225[v63];
    v84 = (char *)(Src - v63);
    while ( 1 )
    {
      v86 = v80;
      v87 = i;
      v88 = v86;
      v89 = *v83;
      if ( v87 > v89 )
        v89 = -v89;
      if ( v89 > v88 )
        v88 = v89;
      *(double *)((char *)v83 + v224 - (char *)v225) = *v82;
      v82 += Src + 1;
      v90 = *(double *)((char *)v83 + a3 - (unsigned long)v225) * *(double *)((char *)v83 + a3 - (unsigned long)v225);
      ++v83;
      --v84;
      v81 = v81 + v90;
      if ( !v84 )
        break;
      v85 = v87;
      v80 = v88;
      i = v85;
    }
    v210 = v81;
    v91 = v88;
    i = v87;
    v204 = v91;
  }
  if ( v191 < v91 )
  {
    if ( v206 )
    {
      v96 = v207;
    }
    else
    {
      v92 = -1.797693134862316e308;
      v93 = 0;
      if ( Src >= 4 )
      {
        v94 = ((unsigned int)(Src - 4) >> 2) + 1;
        v95 = (double *)(v224 + 16);
        v93 = 4 * v94;
        do
        {
          if ( v92 < *(v95 - 2) )
            v92 = *(v95 - 2);
          if ( v92 < *(v95 - 1) )
            v92 = *(v95 - 1);
          if ( v92 < *v95 )
            v92 = *v95;
          if ( v92 < v95[1] )
            v92 = v95[1];
          v95 += 4;
          --v94;
        }
        while ( v94 );
      }
      for ( ; v93 < Src; ++v93 )
      {
        if ( v92 < *(double *)&v224[8 * v93] )
          v92 = *(double *)&v224[8 * v93];
      }
      v96 = v92 * v187;
      v207 = v96;
    }
    v195 = sub_402D90;
    while ( 1 )
    {
      v97 = 0;
      if ( Src >= 4 )
      {
        v98 = (double *)(v199 + 8 * v198);
        v234 = &Srca[3 * Src + 3];
        v248 = (int)&Srca[Src + 1];
        v99 = 32 * (Src + 1);
        v100 = &Srca[2 * Src + 2];
        v101 = ((unsigned int)(Src - 4) >> 2) + 1;
        v240 = 4 * v101;
        do
        {
          v102 = (double *)v248;
          v248 += v99;
          *v98 = v96 + *v98;
          v98 = (double *)((char *)v98 + v99);
          *v102 = *v102 + v96;
          v103 = v234;
          v234 = (double *)((char *)v234 + v99);
          *v100 = v96 + *v100;
          v100 = (double *)((char *)v100 + v99);
          --v101;
          *v103 = *v103 + v96;
        }
        while ( v101 );
        v97 = v240;
      }
      if ( v97 < Src )
      {
        v104 = (double *)((char *)Srca + v97 * (8 * Src + 8));
        v105 = (char *)(Src - v97);
        do
        {
          *v104 = v96 + *v104;
          v104 += Src + 1;
          --v105;
        }
        while ( v105 );
      }
      v106 = v217;
      ++v196;
      if ( sub_402D90(Srca, v225, v217, Src) )
      {
        v107 = 0.0;
        v108 = 0;
        v203 = 0.0;
        if ( Src >= 4 )
        {
          v109 = v214 + 16;
          v110 = a3 + 8;
          v106 = v217;
          do
          {
            v111 = *(double *)&v217[8 * v108];
            v108 += 4;
            v112 = *(double *)(v110 - 8) + v111;
            v110 += 32;
            v109 += 32;
            *(double *)(v109 - 48) = v112;
            v113 = v107 + v111 * v111;
            v114 = *(double *)&v217[v110 - a3 - 32];
            *(double *)(v214 - a3 + v110 - 32) = v114 + *(double *)(v110 - 32);
            v115 = v113 + v114 * v114;
            v116 = *(double *)(-16 * Src + v109 - 32);
            *(double *)(v109 - 32) = *(double *)(v110 - 24) + v116;
            v117 = v115 + v116 * v116;
            v118 = *(double *)&v217[8 * v108 - 8];
            *(double *)(v109 - 24) = *(double *)(v110 - 16) + v118;
            v107 = v117 + v118 * v118;
          }
          while ( v108 < Src - 3 );
          v203 = v107;
        }
        if ( v108 < Src )
        {
          v119 = a3 + 8 * v108;
          v120 = (char *)(Src - v108);
          do
          {
            v121 = *(double *)&v106[v119 - a3];
            v119 += 8;
            --v120;
            *(double *)(v214 - a3 + v119 - 8) = v121 + *(double *)(v119 - 8);
            v107 = v107 + v121 * v121;
          }
          while ( v120 );
          v203 = v107;
        }
        if ( v190 * v210 >= v107 )
        {
          v221 = 2;
          v144 = v207;
          goto LABEL_175;
        }
        if ( (v210 + v188) / 9.999999999999999e-25 <= v107 )
        {
          v144 = v207;
          v221 = 4;
          goto LABEL_175;
        }
        a1(v214, (double *)v215, Src, a6, a12);
        ++v197;
        v200 = sub_402A70(v215, a4, v215, a6);
        if ( !finite(v200) )
        {
          v96 = v207;
          v221 = 7;
          goto LABEL_174;
        }
        v122 = 0;
        v123 = 0.0;
        if ( Src >= 4 )
        {
          v124 = v225 + 3;
          v125 = ((unsigned int)(Src - 4) >> 2) + 1;
          v241 = 4 * v125;
          v126 = v106 + 8;
          do
          {
            v127 = *((double *)v126 - 1);
            v126 += 32;
            v124 += 4;
            --v125;
            v123 = v123
                 + (v127 * v207 + *(v124 - 7)) * *((double *)v126 - 5)
                 + (*((double *)v126 - 4) * v207 + *(double *)&v126[(char *)v225 - v106 - 32]) * *((double *)v126 - 4)
                 + (*((double *)v126 - 3) * v207 + *(v124 - 5)) * *((double *)v126 - 3)
                 + (*((double *)v126 - 2) * v207 + *(v124 - 4)) * *((double *)v126 - 2);
          }
          while ( v125 );
          v122 = v241;
        }
        if ( v122 < Src )
        {
          v128 = (double *)&v106[8 * v122];
          v129 = (char *)(Src - v122);
          do
          {
            v130 = *v128++;
            --v129;
            v123 = v123 + (v130 * v207 + *(double *)((char *)v128 + (char *)v225 - v106 - 8)) * *(v128 - 1);
          }
          while ( v129 );
        }
        v131 = X - v200;
        if ( v123 > 0.0 && v131 > 0.0 )
        {
          v145 = 1.0 - ((v131 + v131) / v123 - 1.0) * (((v131 + v131) / v123 - 1.0) * ((v131 + v131) / v123 - 1.0));
          if ( v145 < 0.3333333334 )
            v145 = 0.3333333334;
          v146 = 0;
          v147 = v145 * v207;
          v219 = 2;
          v207 = v147;
          if ( Src >= 4 )
          {
            v148 = a3 + 8;
            v149 = v214 + 24;
            v150 = ((unsigned int)(Src - 4) >> 2) + 1;
            v146 = 4 * v150;
            do
            {
              v148 += 32;
              *(double *)(v148 - 40) = *(double *)(v149 - 24);
              v149 += 32;
              --v150;
              *(double *)(v148 - 32) = *(double *)(v214 - a3 + v148 - 32);
              *(double *)(v148 - 24) = *(double *)(v149 - 40);
              *(double *)(v148 - 16) = *(double *)(v149 - 32);
            }
            while ( v150 );
          }
          if ( v146 < Src )
          {
            v151 = a3 + 8 * v146;
            v152 = (char *)(Src - v146);
            do
            {
              v153 = *(double *)(v214 - a3 + v151);
              v151 += 8;
              --v152;
              *(double *)(v151 - 8) = v153;
            }
            while ( v152 );
          }
          v154 = a6;
          v155 = 0;
          if ( a6 >= 4 )
          {
            v156 = v215 + 24;
            v157 = ((unsigned int)(a6 - 4) >> 2) + 1;
            v158 = Block + 1;
            v155 = 4 * v157;
            do
            {
              v158 += 4;
              *(v158 - 5) = *(double *)(v156 - 24);
              v156 += 32;
              --v157;
              *(v158 - 4) = v158[a6 - 4];
              *(v158 - 3) = *(double *)(v156 - 40);
              *(v158 - 2) = *(double *)(v156 - 32);
            }
            while ( v157 );
            v154 = a6;
          }
          if ( v155 < v154 )
          {
            v159 = &Block[v155];
            v160 = v154 - v155;
            do
            {
              v161 = v159[a6];
              ++v159;
              --v160;
              *(v159 - 1) = v161;
            }
            while ( v160 );
          }
          v96 = v147;
          X = v200;
LABEL_174:
          v144 = v96;
          v107 = v203;
LABEL_175:
          if ( ++v206 >= a7 )
          {
            v162 = v107;
            v18 = v144;
            v163 = v162;
            v164 = v204;
            v19 = v163;
            goto LABEL_183;
          }
          v20 = v144;
          v19 = v107;
          v18 = v20;
          goto LABEL_19;
        }
        v132 = v207;
      }
      else
      {
        v132 = v207;
      }
      v96 = v132 * (double)v219;
      v207 = v96;
      if ( 2 * v219 <= v219 )
      {
        v221 = 5;
        goto LABEL_174;
      }
      v219 *= 2;
      v133 = 0;
      if ( Src >= 4 )
      {
        v228 = &Srca[3 * Src + 3];
        v249 = (double *)(v199 + 8 * v198);
        v134 = &Srca[2 * Src + 2];
        v235 = (int)&Srca[Src + 1];
        v135 = 32 * (Src + 1);
        v136 = (double *)(v224 + 16);
        v137 = ((unsigned int)(Src - 4) >> 2) + 1;
        v242 = 4 * v137;
        do
        {
          v138 = v249;
          v249 = (double *)((char *)v249 + v135);
          *v138 = *(v136 - 2);
          v139 = (double *)v235;
          v235 += v135;
          *v139 = *(v136 - 1);
          v140 = v228;
          v228 = (double *)((char *)v228 + v135);
          *v134 = *v136;
          v141 = v136[1];
          v134 = (double *)((char *)v134 + v135);
          v136 += 4;
          *v140 = v141;
          --v137;
        }
        while ( v137 );
        v133 = v242;
      }
      if ( v133 < Src )
      {
        v142 = (double *)((char *)Srca + v133 * (8 * Src + 8));
        do
        {
          v143 = *(double *)&v224[8 * v133++];
          *v142 = v143;
          v142 += Src + 1;
        }
        while ( v133 < Src );
      }
    }
  }
  v221 = 1;
  v165 = i;
  v18 = v207;
  v166 = v165;
  v164 = v91;
  v19 = v166;
LABEL_180:
  if ( v206 >= a7 )
LABEL_183:
    v221 = 3;
  v167 = 0;
  if ( Src >= 4 )
  {
    v236 = &Srca[3 * Src + 3];
    v216 = (double *)(v199 + 8 * v198);
    v168 = &Srca[2 * Src + 2];
    v250 = (int)&Srca[Src + 1];
    v169 = 32 * (Src + 1);
    v170 = (double *)(v224 + 16);
    v171 = ((unsigned int)(Src - 4) >> 2) + 1;
    v243 = 4 * v171;
    do
    {
      v172 = v216;
      v216 = (double *)((char *)v216 + v169);
      *v172 = *(v170 - 2);
      v173 = (double *)v250;
      v250 += v169;
      *v173 = *(v170 - 1);
      v174 = v236;
      v236 = (double *)((char *)v236 + v169);
      *v168 = *v170;
      v175 = v170[1];
      v168 = (double *)((char *)v168 + v169);
      v170 += 4;
      *v174 = v175;
      --v171;
    }
    while ( v171 );
    v167 = v243;
  }
  v176 = v199 + 8 * v198;
  if ( v167 < Src )
  {
    v177 = (double *)((char *)Srca + v167 * (8 * Src + 8));
    do
    {
      v178 = *(double *)&v224[8 * v167++];
      *v177 = v178;
      v177 += Src + 1;
    }
    while ( v167 < Src );
  }
  if ( a9 )
  {
    v244 = 0;
    *a9 = v186;
    a9[1] = X;
    a9[2] = v164;
    a9[3] = v19;
    v179 = -1.797693134862316e308;
    if ( Src >= 4 )
    {
      v218 = &Srca[3 * Src + 3];
      v180 = 32 * (Src + 1);
      v181 = &Srca[2 * Src + 2];
      v182 = ((unsigned int)(Src - 4) >> 2) + 1;
      v220 = &Srca[Src + 1];
      v244 = 4 * v182;
      do
      {
        if ( v179 < *Srca )
          v179 = *Srca;
        if ( v179 < *v220 )
          v179 = *v220;
        if ( v179 < *v181 )
          v179 = *v181;
        if ( v179 < *v218 )
          v179 = *v218;
        Srca = (double *)((char *)Srca + v180);
        v220 = (double *)((char *)v220 + v180);
        v218 = (double *)((char *)v218 + v180);
        v181 = (double *)((char *)v181 + v180);
        --v182;
      }
      while ( v182 );
    }
    if ( v244 < Src )
    {
      v183 = (double *)(v176 + v244 * (8 * Src + 8));
      v184 = (char *)(Src - v244);
      do
      {
        if ( v179 < *v183 )
          v179 = *v183;
        v183 += Src + 1;
        --v184;
      }
      while ( v184 );
    }
    a9[4] = v18 / v179;
    a9[5] = (double)v206;
    a9[6] = (double)v221;
    a9[7] = (double)v197;
    a9[8] = (double)v202;
    a9[9] = (double)v196;
  }
  if ( a11 )
    sub_4029D0(v176, a11, X, Src, a6);
  if ( v193 )
    free(Block);
  if ( v195 )
    v195(0, 0, 0, 0);
  if ( v221 == 4 || v221 == 7 )
    return -1;
  return v206;
}


int  sub_4020A0(int a1@<esi>, int a2, double *a3)
{
  int v3; 
  double *v4; 
  double *v5; 
  FILE *v6; 
  int v8; 
  int v9; 
  double *v10; 
  bool v11; 
  double *v12; 
  int v13; 
  double v14; 
  double v15; 
  int v16; 
  double v17; 
  double *v18; 
  unsigned int v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double *v28; 
  int v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  int v35; 
  int v36; 
  double v37; 
  int v38; 
  double *v39; 
  int v40; 
  unsigned int v41; 
  double v42; 
  double *v43; 
  double v44; 
  double v45; 
  double *v46; 
  double v47; 
  double v48; 
  double *v49; 
  double *v50; 
  int v51; 
  FILE *v52; 
  double v53; 
  int v54; 
  double v55; 
  long double v56; 
  int v57; 
  double *v58; 
  int v59; 
  unsigned int v60; 
  double v61; 
  double *v62; 
  long double v63; 
  double v64; 
  double *v65; 
  long double v66; 
  double v67; 
  double *v68; 
  int v69; 
  double *v70; 
  int v71; 
  double *i; 
  double v73; 
  long double v74; 
  int v75; 
  signed int v76; 
  double *v77; 
  unsigned int v78; 
  int v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  int v84; 
  double *v85; 
  unsigned int v86; 
  double *v87; 
  double v88; 
  double v89; 
  double v90; 
  int v91; 
  int v92; 
  unsigned int v93; 
  double *v94; 
  double v95; 
  double *v96; 
  double v97; 
  double *v98; 
  double v99; 
  double *v100; 
  double v101; 
  double *v102; 
  int v103; 
  double *v104; 
  int v105; 
  int v106; 
  int v107; 
  double v108; 
  int v109; 
  int v110; 
  unsigned int v111; 
  int v112; 
  double v113; 
  double v114; 
  double *v115; 
  double v116; 
  double v117; 
  int v118; 
  double *v119; 
  int v120; 
  double v121; 
  int v122; 
  int v123; 
  unsigned int v124; 
  double v125; 
  double v126; 
  double v127; 
  double v128; 
  int v129; 
  int v130; 
  double *v131; 
  unsigned int v132; 
  double *v133; 
  double *v134; 
  double *v135; 
  double *v136; 
  double *v137; 
  int v138; 
  char *v139; 
  double *v140; 
  double *v141; 
  double *v142; 
  unsigned int v143; 
  int v144; 
  int v145; 
  double *v146; 
  int v147; 
  double *v148; 
  double *v149; 
  double *v150; 
  double *v151; 
  int v152; 
  double *v153; 
  double *v154; 
  double *v155; 
  double *v156; 
  double *v157; 
  double *v158; 
  double *v159; 
  double *v160; 
  double *v161; 
  double *v162; 
  double *v163; 
  double *v164; 
  int v165; 
  double *v166; 
  double *v167; 
  int v168; 
  int v169; 
  int v170; 
  int v171; 
  double *v172; 
  double *v173; 
  double *v174; 
  double *v175; 
  double *v176; 
  double *v177; 
  long double *v178; 
  double *v179; 
  double *v180; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  double *v185; 
  double *v186; 
  int v187; 
  int v188; 
  unsigned int v189; 
  int v190; 
  int v191; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  int v198; 

  v3 = a1 * a1;
  v184 = -1;
  v4 = (double *)malloc(4 * (a1 + 2 * (a1 * a1 + 2 * a1)));
  v5 = v4;
  v140 = v4;
  if ( v4 )
  {
    v186 = &v4[v3];
    v8 = 0;
    v176 = &v186[a1];
    v139 = (char *)&v176[a1];
    if ( v3 >= 4 )
    {
      v9 = a2 + 24;
      v147 = a2 - (unsigned long)v4;
      v143 = ((unsigned int)(v3 - 4) >> 2) + 1;
      v10 = v4 + 1;
      v191 = 4 * v143;
      do
      {
        *(v10 - 1) = *(double *)(v9 - 24);
        v10 += 4;
        v9 += 32;
        v11 = v143-- == 1;
        *(v10 - 4) = *(double *)((char *)v10 + v147 - 32);
        *(v10 - 3) = *(double *)(v9 - 40);
        *(v10 - 2) = *(double *)(v9 - 32);
      }
      while ( !v11 );
      v8 = v191;
    }
    if ( v8 < v3 )
    {
      v12 = &v5[v8];
      v13 = v3 - v8;
      do
      {
        v14 = *(double *)((char *)v12++ + a2 - (unsigned long)v5);
        --v13;
        *(v12 - 1) = v14;
      }
      while ( v13 );
    }
    v15 = 0.0;
    v192 = 0;
    if ( a1 <= 0 )
    {
LABEL_40:
      v35 = 0;
      if ( a1 > 0 )
      {
        v144 = a1 - 1;
        v175 = &v5[a1];
        v182 = 0;
        v180 = v5;
        v185 = v5;
        v169 = 3 * a1;
        v173 = v5;
        v138 = (char *)v176 - (char *)v5;
        do
        {
          v36 = 0;
          v193 = 0;
          if ( v35 > 0 )
          {
            v152 = 0;
            v148 = v5;
            v177 = v185;
            do
            {
              v37 = *v177;
              v38 = 0;
              if ( v36 >= 4 )
              {
                v166 = v185;
                v39 = v148;
                v156 = &v5[3 * a1 + v35];
                v161 = &v5[2 * a1 + v35];
                v164 = v175;
                v40 = 32 * a1;
                v41 = ((unsigned int)(v193 - 4) >> 2) + 1;
                v187 = 4 * v41;
                do
                {
                  v42 = *v39 * *v166;
                  v43 = v164;
                  v166 = (double *)((char *)v166 + v40);
                  v164 = (double *)((char *)v164 + v40);
                  v44 = v37 - v42;
                  v39 += 4;
                  v45 = *(v39 - 3) * *v43;
                  v46 = v161;
                  v161 = (double *)((char *)v161 + v40);
                  v47 = v44 - v45;
                  v48 = *(v39 - 2) * *v46;
                  v49 = v156;
                  v156 = (double *)((char *)v156 + v40);
                  --v41;
                  v37 = v47 - v48 - *(v39 - 1) * *v49;
                }
                while ( v41 );
                v36 = v193;
                v38 = v187;
                v5 = v140;
              }
              if ( v38 < v36 )
              {
                v50 = &v5[v38 + v152];
                v157 = &v5[v35 + a1 * v38];
                v51 = v193 - v38;
                while ( 1 )
                {
                  v53 = *v50 * *v157;
                  v157 += a1;
                  --v51;
                  v37 = v37 - v53;
                  if ( !v51 )
                    break;
                  ++v50;
                }
                v36 = v193;
              }
              v152 += a1;
              *v177 = v37;
              v148 += a1;
              v177 += a1;
              v193 = ++v36;
            }
            while ( v36 < v35 );
          }
          v54 = v35;
          v55 = v15;
          v194 = v35;
          if ( v35 < a1 )
          {
            v165 = v182;
            v178 = v180;
            v167 = v173 + 2;
            do
            {
              v56 = *v178;
              v57 = 0;
              v188 = 0;
              if ( v35 >= 4 )
              {
                v58 = v167;
                v149 = v185;
                v162 = &v5[3 * a1 + v35];
                v158 = &v5[2 * a1 + v35];
                v153 = v175;
                v59 = 32 * a1;
                v60 = ((unsigned int)(v35 - 4) >> 2) + 1;
                v188 = 4 * v60;
                do
                {
                  v61 = *(v58 - 2) * *v149;
                  v62 = v153;
                  v149 = (double *)((char *)v149 + v59);
                  v153 = (double *)((char *)v153 + v59);
                  v63 = v56 - v61;
                  v58 += 4;
                  v64 = *(v58 - 5) * *v62;
                  v65 = v158;
                  v158 = (double *)((char *)v158 + v59);
                  v66 = v63 - v64;
                  v67 = *v65;
                  v68 = v162;
                  v162 = (double *)((char *)v162 + v59);
                  --v60;
                  v56 = v66 - v67 * *(v58 - 4) - *(v58 - 3) * *v68;
                }
                while ( v60 );
                v54 = v194;
                v5 = v140;
                v57 = v188;
              }
              if ( v57 < v35 )
              {
                v69 = v57 + v165;
                v70 = &v5[v35 + a1 * v57];
                v71 = v35 - v188;
                for ( i = &v5[v69]; ; ++i )
                {
                  v73 = *i * *v70;
                  v70 += a1;
                  --v71;
                  v56 = v56 - v73;
                  if ( !v71 )
                    break;
                }
                v54 = v194;
              }
              *v178 = v56;
              v74 = fabs(v56) * v176[v54];
              if ( v74 >= v55 )
              {
                v55 = v74;
                v184 = v54;
              }
              v165 += a1;
              v167 += a1;
              v178 += a1;
              v194 = ++v54;
            }
            while ( v54 < a1 );
          }
          v75 = v184;
          if ( v35 != v184 )
          {
            v76 = 0;
            v189 = 0;
            if ( a1 >= 4 )
            {
              v77 = v173;
              v189 = 4 * (((unsigned int)(a1 - 4) >> 2) + 1);
              v78 = ((unsigned int)(a1 - 4) >> 2) + 1;
              v79 = (int)&v5[a1 * v184 + 2];
              do
              {
                v80 = *(double *)(v79 - 16);
                v77 += 4;
                v79 += 32;
                --v78;
                *(double *)(v79 - 48) = *(v77 - 4);
                *(v77 - 4) = v80;
                v81 = *(double *)(v79 - 40);
                *(double *)(v79 - 40) = *(v77 - 3);
                *(v77 - 3) = v81;
                v82 = *(double *)(v79 - 32);
                *(double *)(v79 - 32) = *(v77 - 2);
                *(v77 - 2) = v82;
                v83 = *(double *)(v79 - 24);
                *(double *)(v79 - 24) = *(v77 - 1);
                *(v77 - 1) = v83;
              }
              while ( v78 );
              v76 = 4 * (((unsigned int)(a1 - 4) >> 2) + 1);
            }
            if ( v76 < a1 )
            {
              v84 = v76 + v182;
              v85 = &v5[v76 + a1 * v184];
              v86 = a1 - v189;
              v87 = &v5[v84];
              do
              {
                v88 = *v85++;
                v89 = *v87++;
                --v86;
                *(v85 - 1) = v89;
                *(v87 - 1) = v88;
              }
              while ( v86 );
            }
            v75 = v184;
            v176[v184] = *(double *)((char *)v185 + v138);
          }
          *(unsigned long *)&v139[4 * v35] = v75;
          if ( v15 == *v180 )
            *v180 = 2.220446049250313e-16;
          if ( v35 != a1 - 1 )
          {
            v90 = 1.0 / *v180;
            v91 = v35 + 1;
            if ( v35 + 1 < a1 )
            {
              if ( v144 >= 4 )
              {
                v179 = &v5[v35 + a1 + v182];
                v159 = &v5[a1 + v35 + v169];
                v154 = &v5[v35 + v169];
                v150 = &v5[a1 + v35 + a1 + v182];
                v92 = 32 * a1;
                v93 = ((unsigned int)(a1 - v91 - 4) >> 2) + 1;
                v195 = v91 + 4 * v93;
                do
                {
                  v94 = v179;
                  v95 = *v179;
                  v179 = (double *)((char *)v179 + v92);
                  *v94 = v95 * v90;
                  v96 = v150;
                  v97 = *v150;
                  v150 = (double *)((char *)v150 + v92);
                  *v96 = v97 * v90;
                  v98 = v154;
                  v99 = *v154;
                  v154 = (double *)((char *)v154 + v92);
                  *v98 = v99 * v90;
                  v100 = v159;
                  v101 = *v159;
                  v159 = (double *)((char *)v159 + v92);
                  --v93;
                  *v100 = v101 * v90;
                }
                while ( v93 );
                v91 = v195;
              }
              if ( v91 < a1 )
              {
                v102 = &v5[v35 + a1 * v91];
                v103 = a1 - v91;
                do
                {
                  *v102 = *v102 * v90;
                  v102 += a1;
                  --v103;
                }
                while ( v103 );
              }
            }
          }
          --v144;
          v182 += a1;
          v169 += a1;
          v173 += a1;
          v180 += a1 + 1;
          ++v175;
          ++v185;
          ++v35;
        }
        while ( v35 < a1 );
      }
      v183 = 0;
      if ( a1 > 0 )
      {
        v163 = &a3[a1];
        v174 = a3;
        do
        {
          v104 = v186;
          memset(v186, 0, 4 * ((unsigned int)(8 * a1) >> 2));
          *(double *)((char *)v174 + (char *)v186 - (char *)a3) = 1.0;
          v105 = 0;
          v106 = 0;
          v190 = 0;
          v196 = 0;
          v170 = 0;
          while ( 1 )
          {
            v107 = *(unsigned long *)&v139[4 * v105];
            v108 = v104[v107];
            v104[v107] = v104[v105];
            if ( v106 )
            {
              v109 = v106 - 1;
              if ( v106 - 1 < v105 )
              {
                if ( v105 - v109 >= 4 )
                {
                  v110 = (int)&v104[v109 + 2];
                  v111 = ((unsigned int)(v105 - v109 - 4) >> 2) + 1;
                  v112 = (int)&v5[v109 + 2 + v170];
                  v109 += 4 * v111;
                  do
                  {
                    v113 = *(double *)(v110 - 16);
                    v110 += 32;
                    v114 = v113 * *(double *)(v112 - 16);
                    v112 += 32;
                    --v111;
                    v108 = v108
                         - v114
                         - *(double *)(v110 - 40) * *(double *)(v112 - 40)
                         - *(double *)(v112 - 32) * *(double *)(v110 - 32)
                         - *(double *)(v110 - 24) * *(double *)(v112 - 24);
                  }
                  while ( v111 );
                  v105 = v196;
                  v104 = v186;
                }
                if ( v109 < v105 )
                {
                  v115 = &v5[v109 + v170];
                  do
                  {
                    v116 = v104[v109++];
                    v117 = v116 * *v115++;
                    v108 = v108 - v117;
                  }
                  while ( v109 < v105 );
                }
              }
            }
            else if ( v15 != v108 )
            {
              v190 = v105 + 1;
            }
            v170 += a1;
            v104[v105++] = v108;
            v196 = v105;
            if ( v105 >= a1 )
              break;
            v106 = v190;
          }
          v118 = a1 - 1;
          v197 = a1 - 1;
          if ( a1 - 1 >= 0 )
          {
            v171 = a1 * v118;
            v181 = a1;
            v119 = (double *)((char *)v5 + v118 * (8 * a1 + 8));
            v141 = v119;
            v145 = 0;
            do
            {
              v120 = v181;
              v121 = v186[v118];
              if ( v181 < a1 )
              {
                if ( v145 >= 4 )
                {
                  v122 = (int)&v186[v118 + 3];
                  v123 = (int)&v5[v181 + 2 + v171];
                  v124 = ((unsigned int)(a1 - v181 - 4) >> 2) + 1;
                  v120 = v181 + 4 * v124;
                  do
                  {
                    v125 = *(double *)(v122 - 16);
                    v122 += 32;
                    v126 = v125 * *(double *)(v123 - 16);
                    v123 += 32;
                    --v124;
                    v121 = v121
                         - v126
                         - *(double *)(v122 - 40) * *(double *)(v123 - 40)
                         - *(double *)(v123 - 32) * *(double *)(v122 - 32)
                         - *(double *)(v122 - 24) * *(double *)(v123 - 24);
                  }
                  while ( v124 );
                  v118 = v197;
                  v119 = v141;
                }
                if ( v120 < a1 )
                {
                  v142 = &v5[v120 + v171];
                  do
                  {
                    v127 = v186[v120++] * *v142++;
                    v121 = v121 - v127;
                  }
                  while ( v120 < a1 );
                }
              }
              v128 = v121 / *v119;
              v119 = (double *)((char *)v119 - 8 - 8 * a1);
              v141 = v119;
              v186[v118] = v128;
              ++v145;
              --v181;
              --v118;
              v171 -= a1;
              v197 = v118;
            }
            while ( v118 >= 0 );
          }
          v129 = 0;
          if ( a1 >= 4 )
          {
            v146 = v174;
            v160 = &a3[2 * a1 + a1 + v183];
            v155 = &a3[2 * a1 + v183];
            v151 = v163;
            v130 = 32 * a1;
            v131 = v186 + 2;
            v132 = ((unsigned int)(a1 - 4) >> 2) + 1;
            v198 = 4 * v132;
            do
            {
              v133 = v146;
              v146 = (double *)((char *)v146 + v130);
              *v133 = *(v131 - 2);
              v134 = v151;
              v151 = (double *)((char *)v151 + v130);
              *v134 = *(v131 - 1);
              v135 = v155;
              v155 = (double *)((char *)v155 + v130);
              *v135 = *v131;
              v136 = v160;
              v160 = (double *)((char *)v160 + v130);
              *v136 = v131[1];
              v131 += 4;
              --v132;
            }
            while ( v132 );
            v129 = v198;
          }
          if ( v129 < a1 )
          {
            v137 = &a3[v183 + a1 * v129];
            do
            {
              *v137 = v186[v129++];
              v137 += a1;
            }
            while ( v129 < a1 );
          }
          ++v174;
          ++v163;
          ++v183;
        }
        while ( v183 < a1 );
      }
      free(v5);
      return 1;
    }
    else
    {
      v168 = 0;
      v172 = v5;
      while ( 1 )
      {
        v16 = 0;
        v17 = v15;
        if ( a1 >= 4 )
        {
          v18 = v172;
          v19 = ((unsigned int)(a1 - 4) >> 2) + 1;
          v16 = 4 * v19;
          do
          {
            v20 = v17;
            v21 = v15;
            v22 = v20;
            v23 = *v18;
            if ( v21 > v23 )
              v23 = -v23;
            if ( v23 > v22 )
              v22 = v23;
            v24 = v18[1];
            if ( v21 > v24 )
              v24 = -v24;
            if ( v24 > v22 )
              v22 = v24;
            v25 = v18[2];
            if ( v21 > v25 )
              v25 = -v25;
            if ( v25 > v22 )
              v22 = v25;
            v26 = v18[3];
            if ( v21 > v26 )
              v26 = -v26;
            if ( v26 > v22 )
              v22 = v26;
            v18 += 4;
            v27 = v21;
            v17 = v22;
            v15 = v27;
            --v19;
          }
          while ( v19 );
        }
        if ( v16 < a1 )
        {
          v28 = &v5[v16 + v168];
          v29 = a1 - v16;
          do
          {
            v30 = v17;
            v31 = v15;
            v32 = v30;
            v33 = *v28;
            if ( v31 > v33 )
              v33 = -v33;
            if ( v33 > v32 )
              v32 = v33;
            ++v28;
            v34 = v31;
            v17 = v32;
            v15 = v34;
            --v29;
          }
          while ( v29 );
        }
        if ( v15 == v17 )
          break;
        v168 += a1;
        v172 += a1;
        v176[v192++] = 1.0 / v17;
        if ( v192 >= a1 )
          goto LABEL_40;
      }
      v52 = _iob_func();
      printf(v52 + 2, "Singular matrix A in dlevmar_LUinverse_noLapack()!\n");
      free(v5);
      return 0;
    }
  }
  else
  {
    v6 = _iob_func();
    printf(v6 + 2, "memory allocation in dlevmar_LUinverse_noLapack() failed!\n");
    return 0;
  }
}

int  sub_4029D0(int a1, double *a2, double a3, int a4, int a5)
{
  int result; 
  int v6; 
  int v7; 
  double v8; 
  unsigned int v9; 
  double *v10; 
  double v11; 
  double v12; 

  result = sub_4020A0(a4, a1, a2);
  if ( result )
  {
    v6 = a4 * a4;
    v7 = 0;
    v8 = a3 / (double)(a5 - a4);
    if ( a4 * a4 >= 4 )
    {
      v9 = ((unsigned int)(v6 - 4) >> 2) + 1;
      v10 = a2 + 2;
      v7 = 4 * v9;
      do
      {
        v11 = *(v10 - 2);
        v10 += 4;
        --v9;
        *(v10 - 6) = v11 * v8;
        *(v10 - 5) = *(v10 - 5) * v8;
        *(v10 - 4) = *(v10 - 4) * v8;
        *(v10 - 3) = *(v10 - 3) * v8;
      }
      while ( v9 );
    }
    for ( ; v7 < v6; a2[v7 - 1] = v12 * v8 )
      v12 = a2[v7++];
    return a4;
  }
  return result;
}

double  sub_402A70(int a1, int a2, int a3, signed int a4)
{
  signed int v4; 
  double v5; 
  double v6; 
  int v7; 
  double v8; 
  double v9; 
  signed int v10; 
  int v11; 
  signed int v12; 
  double *v13; 
  double *v14; 
  double *v15; 
  unsigned int v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  signed int v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double result; 
  int v38; 
  double *v39; 
  double *v40; 
  unsigned int v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  unsigned int v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 

  v4 = a4;
  v5 = 0.0;
  v6 = 0.0;
  v7 = a2;
  v8 = 0.0;
  v9 = 0.0;
  v10 = a4 & 0xFFFFFFF8;
  v11 = a3;
  v12 = (a4 & 0xFFFFFFF8) - 1;
  if ( !a2 )
  {
    v38 = a1;
    if ( v12 > 0 )
    {
      v39 = (double *)(a1 + 8 * v12 - 8);
      v40 = (double *)(a3 + 8 * v12 - 24);
      v41 = (((a4 & 0xFFFFFFF8) - 2) >> 3) + 1;
      do
      {
        v39 -= 8;
        v42 = -v40[3];
        v40 -= 8;
        --v41;
        v39[9] = v42;
        v43 = v6 + v42 * v42;
        v44 = -*(double *)((char *)v39 + a3 - a1 + 64);
        v39[8] = v44;
        v45 = v8 + v44 * v44;
        v46 = -v40[9];
        v39[7] = v46;
        v47 = v9 + v46 * v46;
        v48 = -v40[8];
        v39[6] = v48;
        v49 = v5 + v48 * v48;
        v50 = -v40[7];
        v39[5] = v50;
        v6 = v43 + v50 * v50;
        v51 = -v40[6];
        v39[4] = v51;
        v8 = v45 + v51 * v51;
        v52 = -v40[5];
        v39[3] = v52;
        v9 = v47 + v52 * v52;
        v53 = -v40[4];
        v39[2] = v53;
        v5 = v49 + v53 * v53;
      }
      while ( v41 );
      v4 = a4;
      v38 = a1;
    }
    v54 = a4 & 0xFFFFFFF8;
    if ( v10 < v4 )
    {
      switch ( v4 - v10 )
      {
        case 1:
          goto LABEL_27;
        case 2:
          goto LABEL_26;
        case 3:
          goto LABEL_25;
        case 4:
          goto LABEL_24;
        case 5:
          goto LABEL_23;
        case 6:
          goto LABEL_22;
        case 7:
          v54 = v10 + 1;
          v55 = -*(double *)(a3 + 8 * v10);
          *(double *)(v38 + 8 * v10) = v55;
          v6 = v6 + v55 * v55;
LABEL_22:
          v56 = *(double *)(a3 + 8 * v54++);
          v57 = -v56;
          *(double *)(v38 + 8 * v54 - 8) = v57;
          v8 = v8 + v57 * v57;
LABEL_23:
          v58 = *(double *)(a3 + 8 * v54++);
          v59 = -v58;
          *(double *)(v38 + 8 * v54 - 8) = v59;
          v9 = v9 + v59 * v59;
LABEL_24:
          v60 = *(double *)(a3 + 8 * v54++);
          v61 = -v60;
          *(double *)(v38 + 8 * v54 - 8) = v61;
          v5 = v5 + v61 * v61;
LABEL_25:
          v62 = *(double *)(a3 + 8 * v54++);
          v63 = -v62;
          *(double *)(v38 + 8 * v54 - 8) = v63;
          v6 = v6 + v63 * v63;
LABEL_26:
          v64 = *(double *)(a3 + 8 * v54++);
          v65 = -v64;
          *(double *)(v38 + 8 * v54 - 8) = v65;
          v8 = v8 + v65 * v65;
LABEL_27:
          v66 = -*(double *)(a3 + 8 * v54);
          *(double *)(v38 + 8 * v54) = v66;
          v9 = v9 + v66 * v66;
          break;
        default:
          return v5 + v6 + v8 + v9;
      }
    }
    return v5 + v6 + v8 + v9;
  }
  if ( v12 > 0 )
  {
    v13 = (double *)(a2 + 8 * v12 - 32);
    v14 = (double *)(a1 + 8 * v12 - 16);
    v15 = (double *)(a3 + 8 * v12 - 8);
    v16 = (((a4 & 0xFFFFFFF8) - 2) >> 3) + 1;
    do
    {
      v17 = v13[4] - v15[1];
      v15 -= 8;
      v14 -= 8;
      v13 -= 8;
      --v16;
      v14[10] = v17;
      v18 = v6 + v17 * v17;
      v19 = *(double *)((char *)v15 + a2 - a3 + 64) - v15[8];
      *(double *)((char *)v15 + a1 - a3 + 64) = v19;
      v20 = v8 + v19 * v19;
      v21 = *(double *)((char *)v14 + a2 - a1 + 64) - v15[7];
      v14[8] = v21;
      v22 = v9 + v21 * v21;
      v23 = v13[9] - v15[6];
      v14[7] = v23;
      v24 = v5 + v23 * v23;
      v25 = v13[8] - v15[5];
      v14[6] = v25;
      v6 = v18 + v25 * v25;
      v26 = v13[7] - v15[4];
      v14[5] = v26;
      v8 = v20 + v26 * v26;
      v27 = v13[6] - v15[3];
      v14[4] = v27;
      v9 = v22 + v27 * v27;
      v28 = v13[5] - v15[2];
      v14[3] = v28;
      v5 = v24 + v28 * v28;
    }
    while ( v16 );
    v10 = a4 & 0xFFFFFFF8;
    v7 = a2;
    v11 = a3;
    v4 = a4;
  }
  v29 = v10;
  if ( v10 >= v4 )
    return v5 + v6 + v8 + v9;
  switch ( v4 - v10 )
  {
    case 1:
      goto LABEL_14;
    case 2:
      goto LABEL_13;
    case 3:
      goto LABEL_12;
    case 4:
      goto LABEL_11;
    case 5:
      goto LABEL_10;
    case 6:
      goto LABEL_9;
    case 7:
      v30 = *(double *)(v7 + 8 * v10) - *(double *)(v11 + 8 * v10);
      v29 = v10 + 1;
      *(double *)(a1 + 8 * v10) = v30;
      v6 = v6 + v30 * v30;
LABEL_9:
      v31 = *(double *)(v7 + 8 * v29) - *(double *)(v11 + 8 * v29);
      ++v29;
      *(double *)(a1 + 8 * v29 - 8) = v31;
      v8 = v8 + v31 * v31;
LABEL_10:
      v32 = *(double *)(v7 + 8 * v29) - *(double *)(v11 + 8 * v29);
      ++v29;
      *(double *)(a1 + 8 * v29 - 8) = v32;
      v9 = v9 + v32 * v32;
LABEL_11:
      v33 = *(double *)(v7 + 8 * v29) - *(double *)(v11 + 8 * v29);
      ++v29;
      *(double *)(a1 + 8 * v29 - 8) = v33;
      v5 = v5 + v33 * v33;
LABEL_12:
      v34 = *(double *)(v7 + 8 * v29) - *(double *)(v11 + 8 * v29);
      ++v29;
      *(double *)(a1 + 8 * v29 - 8) = v34;
      v6 = v6 + v34 * v34;
LABEL_13:
      v35 = *(double *)(v7 + 8 * v29) - *(double *)(v11 + 8 * v29);
      ++v29;
      *(double *)(a1 + 8 * v29 - 8) = v35;
      v8 = v8 + v35 * v35;
LABEL_14:
      v36 = *(double *)(v7 + 8 * v29) - *(double *)(v11 + 8 * v29);
      *(double *)(a1 + 8 * v29) = v36;
      result = v5 + v6 + v8 + v9 + v36 * v36;
      break;
    default:
      return v5 + v6 + v8 + v9;
  }
  return result;
}

int  sub_402D90(void *Src, void *a2, char *a3, int a4)
{
  int v5; 
  signed int v6; 
  char *v7; 
  FILE *v8; 
  int v9; 
  double v10; 
  int v11; 
  double v12; 
  double *v13; 
  unsigned int v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double *v23; 
  int v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  int v30; 
  int v31; 
  double v32; 
  int v33; 
  double *v34; 
  int v35; 
  unsigned int v36; 
  double v37; 
  double *v38; 
  double v39; 
  double v40; 
  double *v41; 
  double v42; 
  double v43; 
  double *v44; 
  int v45; 
  char *v46; 
  double *v47; 
  double *i; 
  FILE *v49; 
  double v50; 
  int v51; 
  double v52; 
  long double v53; 
  int v54; 
  char *v55; 
  int v56; 
  unsigned int v57; 
  double v58; 
  double *v59; 
  long double v60; 
  double v61; 
  double *v62; 
  long double v63; 
  double v64; 
  double *v65; 
  int v66; 
  int v67; 
  double *v68; 
  double *j; 
  double v70; 
  long double v71; 
  signed int v72; 
  double *v73; 
  unsigned int v74; 
  int v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  int v80; 
  double *v81; 
  int v82; 
  double *v83; 
  double v84; 
  double v85; 
  double v86; 
  int v87; 
  int v88; 
  unsigned int v89; 
  double *v90; 
  double v91; 
  double *v92; 
  double v93; 
  double *v94; 
  double v95; 
  double *v96; 
  double v97; 
  double *v98; 
  int v99; 
  char *v100; 
  int v101; 
  int v102; 
  int v103; 
  double v104; 
  int v105; 
  unsigned int v106; 
  double v107; 
  double v108; 
  double *v109; 
  double v110; 
  double v111; 
  double *v112; 
  double v113; 
  double v114; 
  int v115; 
  int v116; 
  double v117; 
  int v118; 
  unsigned int v119; 
  double *v120; 
  double v121; 
  double *v122; 
  double v123; 
  double v124; 
  unsigned int v125; 
  int v126; 
  int v127; 
  char *v128; 
  int v129; 
  int v130; 
  double *v131; 
  double *v132; 
  double *v133; 
  double *v134; 
  int v135; 
  double *v136; 
  double *v137; 
  double *v138; 
  double *v139; 
  double *v140; 
  double *v141; 
  double *v142; 
  double *v143; 
  int v144; 
  double *v145; 
  char *v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  double *v151; 
  char *v152; 
  int v153; 
  double *v154; 
  char *v155; 
  double *v156; 
  long double *v157; 
  double *v158; 
  double *v159; 
  double *v160; 
  int v161; 
  double *v162; 
  double *v163; 
  int v164; 
  int v165; 
  int v166; 
  unsigned int v167; 
  int v168; 
  int Srca; 
  char *Srcb; 
  void *Srcc; 
  void *Srcd; 
  void *Srce; 
  void *Srcf; 

  v164 = -1;
  if ( Src )
  {
    v5 = a4 * a4;
    v6 = 4 * (a4 + 2 * (a4 * a4 + a4));
    if ( v6 <= dword_5019A8 )
    {
      v7 = (char *)Block;
    }
    else
    {
      if ( Block )
        free(Block);
      dword_5019A8 = 4 * (a4 + 2 * (a4 * a4 + a4));
      v7 = (char *)malloc(v6);
      Block = v7;
      if ( !v7 )
      {
        v8 = _iob_func();
        printf(v8 + 2, "memory allocation in dAx_eq_b_LU_noLapack() failed!\n");
        exit(1);
      }
    }
    v125 = 8 * v5;
    v155 = &v7[8 * v5];
    v9 = 8 * a4;
    v128 = &v155[8 * a4];
    memcpy(v7, Src, v125);
    memcpy(a3, a2, 8 * a4);
    v10 = 0.0;
    Srca = 0;
    if ( a4 <= 0 )
    {
LABEL_41:
      v30 = 0;
      if ( a4 > 0 )
      {
        v129 = a4 - 1;
        v126 = v9 + 8;
        v161 = 0;
        v159 = (double *)v7;
        v162 = (double *)v7;
        v148 = 3 * a4;
        v152 = v7;
        v154 = (double *)&v7[v9];
        v127 = v155 - v7;
        do
        {
          v31 = 0;
          Srcb = 0;
          if ( v30 > 0 )
          {
            v135 = 0;
            v131 = (double *)v7;
            v156 = v162;
            do
            {
              v32 = *v156;
              v33 = 0;
              if ( v31 >= 4 )
              {
                v34 = v131;
                v145 = v162;
                v138 = (double *)&v7[24 * a4 + 8 * v30];
                v141 = (double *)&v7[16 * a4 + 8 * v30];
                v143 = v154;
                v35 = 32 * a4;
                v36 = ((unsigned int)(Srcb - 4) >> 2) + 1;
                v165 = 4 * v36;
                do
                {
                  v37 = *v34 * *v145;
                  v38 = v143;
                  v145 = (double *)((char *)v145 + v35);
                  v143 = (double *)((char *)v143 + v35);
                  v39 = v32 - v37;
                  v34 += 4;
                  v40 = *(v34 - 3) * *v38;
                  v41 = v141;
                  v141 = (double *)((char *)v141 + v35);
                  v42 = v39 - v40;
                  v43 = *(v34 - 2) * *v41;
                  v44 = v138;
                  v138 = (double *)((char *)v138 + v35);
                  --v36;
                  v32 = v42 - v43 - *(v34 - 1) * *v44;
                }
                while ( v36 );
                v31 = (int)Srcb;
                v7 = (char *)Block;
                v33 = v165;
              }
              if ( v33 < v31 )
              {
                v45 = v33 + v135;
                v46 = &Srcb[-v33];
                v47 = (double *)&v7[8 * v30 + 8 * a4 * v33];
                for ( i = (double *)&v7[8 * v45]; ; ++i )
                {
                  v50 = *i * *v47;
                  v47 += a4;
                  --v46;
                  v32 = v32 - v50;
                  if ( !v46 )
                    break;
                }
                v31 = (int)Srcb;
              }
              v135 += a4;
              *v156 = v32;
              v131 += a4;
              v156 += a4;
              Srcb = (char *)++v31;
            }
            while ( v31 < v30 );
          }
          v51 = v30;
          v52 = v10;
          Srcc = (void *)v30;
          if ( v30 < a4 )
          {
            v144 = v161;
            v157 = v159;
            v146 = v152 + 16;
            do
            {
              v53 = *v157;
              v54 = 0;
              if ( v30 >= 4 )
              {
                v55 = v146;
                v132 = v162;
                v142 = (double *)&v7[24 * a4 + 8 * v30];
                v139 = (double *)&v7[16 * a4 + 8 * v30];
                v136 = v154;
                v56 = 32 * a4;
                v57 = ((unsigned int)(v30 - 4) >> 2) + 1;
                v166 = 4 * v57;
                do
                {
                  v58 = *((double *)v55 - 2) * *v132;
                  v59 = v136;
                  v132 = (double *)((char *)v132 + v56);
                  v136 = (double *)((char *)v136 + v56);
                  v60 = v53 - v58;
                  v55 += 32;
                  v61 = *((double *)v55 - 5) * *v59;
                  v62 = v139;
                  v139 = (double *)((char *)v139 + v56);
                  v63 = v60 - v61;
                  v64 = *v62;
                  v65 = v142;
                  v142 = (double *)((char *)v142 + v56);
                  --v57;
                  v53 = v63 - v64 * *((double *)v55 - 4) - *((double *)v55 - 3) * *v65;
                }
                while ( v57 );
                v51 = (int)Srcc;
                v7 = (char *)Block;
                v54 = v166;
              }
              if ( v54 < v30 )
              {
                v66 = v54 + v144;
                v67 = v30 - v54;
                v68 = (double *)&v7[8 * v30 + 8 * a4 * v54];
                for ( j = (double *)&v7[8 * v66]; ; ++j )
                {
                  v70 = *j * *v68;
                  v68 += a4;
                  --v67;
                  v53 = v53 - v70;
                  if ( !v67 )
                    break;
                }
                v51 = (int)Srcc;
              }
              *v157 = v53;
              v71 = fabs(v53) * *(double *)&v155[8 * v51];
              if ( v71 >= v52 )
              {
                v52 = v71;
                v164 = v51;
              }
              v144 += a4;
              v146 += 8 * a4;
              v157 += a4;
              Srcc = (void *)++v51;
            }
            while ( v51 < a4 );
          }
          if ( v30 != v164 )
          {
            v72 = 0;
            v167 = 0;
            if ( a4 >= 4 )
            {
              v73 = (double *)v152;
              v167 = 4 * (((unsigned int)(a4 - 4) >> 2) + 1);
              v74 = ((unsigned int)(a4 - 4) >> 2) + 1;
              v75 = (int)&v7[8 * a4 * v164 + 16];
              do
              {
                v76 = *(double *)(v75 - 16);
                v73 += 4;
                v75 += 32;
                --v74;
                *(double *)(v75 - 48) = *(v73 - 4);
                *(v73 - 4) = v76;
                v77 = *(double *)(v75 - 40);
                *(double *)(v75 - 40) = *(v73 - 3);
                *(v73 - 3) = v77;
                v78 = *(double *)(v75 - 32);
                *(double *)(v75 - 32) = *(v73 - 2);
                *(v73 - 2) = v78;
                v79 = *(double *)(v75 - 24);
                *(double *)(v75 - 24) = *(v73 - 1);
                *(v73 - 1) = v79;
              }
              while ( v74 );
              v72 = 4 * (((unsigned int)(a4 - 4) >> 2) + 1);
            }
            if ( v72 < a4 )
            {
              v80 = v72 + v161;
              v81 = (double *)&v7[8 * v72 + 8 * a4 * v164];
              v82 = a4 - v167;
              v83 = (double *)&v7[8 * v80];
              do
              {
                v84 = *v81++;
                v85 = *v83++;
                --v82;
                *(v81 - 1) = v85;
                *(v83 - 1) = v84;
              }
              while ( v82 );
            }
            *(double *)&v155[8 * v164] = *(double *)((char *)v162 + v127);
          }
          *(unsigned long *)&v128[4 * v30] = v164;
          if ( v10 == *v159 )
            *v159 = 2.220446049250313e-16;
          if ( v30 != a4 - 1 )
          {
            v86 = 1.0 / *v159;
            v87 = v30 + 1;
            if ( v30 + 1 < a4 )
            {
              if ( v129 >= 4 )
              {
                v158 = (double *)&v7[8 * v30 + 8 * a4 + 8 * v161];
                v140 = (double *)&v7[8 * a4 + 8 * v30 + 8 * v148];
                v137 = (double *)&v7[8 * v30 + 8 * v148];
                v133 = (double *)&v7[8 * a4 + 8 * v30 + 8 * a4 + 8 * v161];
                v88 = 32 * a4;
                v89 = ((unsigned int)(a4 - v87 - 4) >> 2) + 1;
                Srcd = (void *)(v87 + 4 * v89);
                do
                {
                  v90 = v158;
                  v91 = *v158;
                  v158 = (double *)((char *)v158 + v88);
                  *v90 = v91 * v86;
                  v92 = v133;
                  v93 = *v133;
                  v133 = (double *)((char *)v133 + v88);
                  *v92 = v93 * v86;
                  v94 = v137;
                  v95 = *v137;
                  v137 = (double *)((char *)v137 + v88);
                  *v94 = v95 * v86;
                  v96 = v140;
                  v97 = *v140;
                  v140 = (double *)((char *)v140 + v88);
                  --v89;
                  *v96 = v97 * v86;
                }
                while ( v89 );
                v87 = (int)Srcd;
              }
              if ( v87 < a4 )
              {
                v98 = (double *)&v7[8 * v30 + 8 * a4 * v87];
                v99 = a4 - v87;
                do
                {
                  *v98 = *v98 * v86;
                  v98 += a4;
                  --v99;
                }
                while ( v99 );
              }
            }
          }
          --v129;
          v161 += a4;
          v148 += a4;
          v152 += 8 * a4;
          v159 = (double *)((char *)v159 + v126);
          ++v154;
          ++v162;
          ++v30;
        }
        while ( v30 < a4 );
      }
      v100 = a3;
      v101 = 0;
      v102 = 0;
      v168 = 0;
      Srce = 0;
      if ( a4 > 0 )
      {
        v149 = 0;
        while ( 1 )
        {
          v103 = *(unsigned long *)&v128[4 * v101];
          v104 = *(double *)&a3[8 * v103];
          *(double *)&a3[8 * v103] = *(double *)&a3[8 * v101];
          if ( v102 )
          {
            v105 = v102 - 1;
            if ( v102 - 1 < v101 )
            {
              if ( v101 - v105 >= 4 )
              {
                v163 = (double *)&a3[8 * v105 + 16];
                v106 = ((unsigned int)(v101 - v105 - 4) >> 2) + 1;
                v160 = (double *)&v7[8 * v105 + 8 * v149];
                v105 += 4 * v106;
                do
                {
                  v107 = v104 - *(v163 - 2) * *v160 - v160[1] * *(v163 - 1);
                  v108 = v160[2] * *v163;
                  v109 = v160;
                  v160 += 4;
                  v110 = v107 - v108;
                  v111 = v109[3] * v163[1];
                  v163 += 4;
                  --v106;
                  v104 = v110 - v111;
                }
                while ( v106 );
                v101 = (int)Srce;
              }
              if ( v105 < v101 )
              {
                v112 = (double *)&v7[8 * v105 + 8 * v149];
                do
                {
                  v113 = *(double *)&a3[8 * v105++];
                  v114 = v113 * *v112++;
                  v104 = v104 - v114;
                }
                while ( v105 < v101 );
              }
            }
          }
          else if ( v10 != v104 )
          {
            v168 = v101 + 1;
          }
          v149 += a4;
          *(double *)&a3[8 * v101++] = v104;
          Srce = (void *)v101;
          if ( v101 >= a4 )
            break;
          v102 = v168;
        }
      }
      v115 = a4 - 1;
      Srcf = (void *)(a4 - 1);
      if ( a4 - 1 >= 0 )
      {
        v153 = a4 * v115;
        v150 = a4;
        v134 = (double *)&v7[v115 * (8 * a4 + 8)];
        v130 = 0;
        do
        {
          v116 = v150;
          v117 = *(double *)&v100[8 * v115];
          if ( v150 < a4 )
          {
            if ( v130 >= 4 )
            {
              v118 = (int)&v100[8 * v115 + 24];
              v119 = ((unsigned int)(a4 - v150 - 4) >> 2) + 1;
              v120 = (double *)&v7[8 * v150 + 8 * v153];
              v116 = v150 + 4 * v119;
              do
              {
                v120 += 4;
                v121 = *(double *)(v118 - 16) * *(v120 - 4);
                v118 += 32;
                --v119;
                v117 = v117
                     - v121
                     - *(v120 - 3) * *(double *)(v118 - 40)
                     - *(v120 - 2) * *(double *)(v118 - 32)
                     - *(v120 - 1) * *(double *)(v118 - 24);
              }
              while ( v119 );
              v100 = a3;
              v115 = (int)Srcf;
            }
            if ( v116 < a4 )
            {
              v122 = (double *)&v7[8 * v116 + 8 * v153];
              do
              {
                v123 = *(double *)&v100[8 * v116++];
                v124 = v123 * *v122++;
                v117 = v117 - v124;
              }
              while ( v116 < a4 );
            }
          }
          ++v130;
          --v150;
          *(double *)&v100[8 * v115--] = v117 / *v134;
          v153 -= a4;
          v134 = (double *)((char *)v134 - 8 - 8 * a4);
          Srcf = (void *)v115;
        }
        while ( v115 >= 0 );
      }
      return 1;
    }
    else
    {
      v147 = 0;
      v151 = (double *)v7;
      while ( 1 )
      {
        v11 = 0;
        v12 = v10;
        if ( a4 >= 4 )
        {
          v13 = v151;
          v14 = ((unsigned int)(a4 - 4) >> 2) + 1;
          v11 = 4 * v14;
          do
          {
            v15 = v12;
            v16 = v10;
            v17 = v15;
            v18 = *v13;
            if ( v16 > v18 )
              v18 = -v18;
            if ( v18 > v17 )
              v17 = v18;
            v19 = v13[1];
            if ( v16 > v19 )
              v19 = -v19;
            if ( v19 > v17 )
              v17 = v19;
            v20 = v13[2];
            if ( v16 > v20 )
              v20 = -v20;
            if ( v20 > v17 )
              v17 = v20;
            v21 = v13[3];
            if ( v16 > v21 )
              v21 = -v21;
            if ( v21 > v17 )
              v17 = v21;
            v13 += 4;
            v22 = v16;
            v12 = v17;
            v10 = v22;
            --v14;
          }
          while ( v14 );
        }
        if ( v11 < a4 )
        {
          v23 = (double *)&v7[8 * v11 + 8 * v147];
          v24 = a4 - v11;
          do
          {
            v25 = v12;
            v26 = v10;
            v27 = v25;
            v28 = *v23;
            if ( v26 > v28 )
              v28 = -v28;
            if ( v28 > v27 )
              v27 = v28;
            ++v23;
            v29 = v26;
            v12 = v27;
            v10 = v29;
            --v24;
          }
          while ( v24 );
        }
        if ( v10 == v12 )
          break;
        v147 += a4;
        v9 = 8 * a4;
        v151 += a4;
        ++Srca;
        *(double *)&v155[8 * Srca - 8] = 1.0 / v12;
        if ( Srca >= a4 )
          goto LABEL_41;
      }
      v49 = _iob_func();
      printf(v49 + 2, "Singular matrix A in dAx_eq_b_LU_noLapack()!\n");
      return 0;
    }
  }
  else
  {
    if ( Block )
      free(Block);
    Block = 0;
    dword_5019A8 = 0;
    return 1;
  }
}

unsigned long * sub_403610( char a2)
{
  *this = &std::error_category::`vftable`;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

void   sub_403640( int a2, unsigned int Size)
{
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  void *v7; 
  const void *v8; 
  int v9; 
  unsigned char v10[16]; 
  unsigned long *v11; 
  unsigned int v12; 
  unsigned char *v13; 
  int v14; 
  void *v15; 

  v13 = v10;
  v3 = (int)this;
  v11 = this;
  v4 = a2 | 0xF;
  if ( (a2 | 0xF) == -1 )
  {
    v4 = a2;
  }
  else
  {
    v5 = this[5];
    v6 = v5 >> 1;
    if ( v5 >> 1 > v4 / 3 )
    {
      v4 = v6 + v5;
      if ( v5 > -2 - v6 )
        v4 = -2;
    }
  }
  v14 = 0;
  v7 = 0;
  v12 = 0;
  if ( v4 != -1 )
  {
    v7 = operator new(v4 + 1);
    v12 = (unsigned int)v7;
    if ( !v7 )
    {
      std::_Xbad_alloc();
      v12 = a2;
      v13 = v10;
      LOBYTE(v14) = 2;
      v15 = sub_403790(a2 + 1);
      v4 = v12;
      v7 = v15;
      v3 = (int)v11;
      v12 = (unsigned int)v15;
    }
  }
  if ( Size )
  {
    if ( *(unsigned long *)(v3 + 20) < 0x10u )
      v8 = (const void *)v3;
    else
      v8 = *(const void **)v3;
    memcpy(v7, v8, Size);
  }
  if ( *(unsigned long *)(v3 + 20) >= 0x10u )
    operator delete(*(void **)v3);
  v9 = v12;
  *(unsigned char *)v3 = 0;
  *(unsigned long *)v3 = v9;
  *(unsigned long *)(v3 + 20) = v4;
  *(unsigned long *)(v3 + 16) = Size;
  if ( v4 >= 0x10 )
    v3 = v9;
  *(unsigned char *)(v3 + Size) = 0;
}

void * sub_403790(unsigned int a1)
{
  void *v1; 

  v1 = 0;
  if ( a1 )
  {
    v1 = operator new(a1);
    if ( !v1 )
      std::_Xbad_alloc();
  }
  return v1;
}

unsigned long * sub_4037C0( unsigned long *a2, unsigned int a3, unsigned int Size)
{
  unsigned long *v4; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  unsigned long *result; 
  unsigned int v12; 
  void *v13; 

  v4 = a2;
  v6 = a3;
  v7 = a2[4];
  if ( v7 < a3 )
    std::_Xout_of_range("invalid string position");
  v8 = v7 - v6;
  if ( Size < v8 )
    v8 = Size;
  if ( this == a2 )
  {
    v9 = v8 + v6;
    if ( this[4] < v8 + v6 )
      std::_Xout_of_range("invalid string position");
    v10 = this[5] < 0x10u;
    this[4] = v9;
    if ( v10 )
      *((unsigned char *)this + v9) = 0;
    else
      *(unsigned char *)(*this + v9) = 0;
    sub_403AA0(this, 0, v6);
    return this;
  }
  else
  {
    if ( v8 == -1 )
      std::_Xlength_error("string too long");
    v12 = this[5];
    if ( v12 < v8 )
      sub_403640(this, v8, this[4]);
    if ( v8 )
    {
      if ( a2[5] >= 0x10u )
        v4 = (unsigned long *)*a2;
      if ( this[5] < 0x10u )
        v13 = this;
      else
        v13 = (void *)*this;
      memcpy(v13, (char *)v4 + v6, v8);
      v10 = this[5] < 0x10u;
      this[4] = v8;
      if ( v10 )
        *((unsigned char *)this + v8) = 0;
      else
        *(unsigned char *)(*this + v8) = 0;
      return this;
    }
    else
    {
      this[4] = 0;
      if ( v12 < 0x10 )
      {
        result = this;
        *(unsigned char *)this = 0;
      }
      else
      {
        *(unsigned char *)*this = 0;
        return this;
      }
    }
  }
  return result;
}

unsigned long * sub_4038E0( unsigned char *Src, unsigned int Size)
{
  unsigned int v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  unsigned long *result; 
  unsigned int v8; 
  void *v9; 
  bool v10; 

  if ( Src
    && ((v4 = this[5], v4 < 0x10) ? (v5 = this) : (v5 = (unsigned long *)*this),
        Src >= (unsigned char *)v5 && (v4 < 0x10 ? (v6 = this) : (v6 = (unsigned long *)*this), (char *)v6 + this[4] > Src)) )
  {
    if ( v4 < 0x10 )
      return sub_4037C0(this, this, Src - (unsigned char *)this, Size);
    else
      return sub_4037C0(this, this, (unsigned int)&Src[-*this], Size);
  }
  else
  {
    if ( Size == -1 )
      std::_Xlength_error("string too long");
    v8 = this[5];
    if ( v8 < Size )
      sub_403640(this, Size, this[4]);
    if ( Size )
    {
      if ( this[5] < 0x10u )
        v9 = this;
      else
        v9 = (void *)*this;
      memcpy(v9, Src, Size);
      v10 = this[5] < 0x10u;
      this[4] = Size;
      if ( v10 )
        *((unsigned char *)this + Size) = 0;
      else
        *(unsigned char *)(*this + Size) = 0;
      return this;
    }
    else
    {
      this[4] = 0;
      if ( v8 < 0x10 )
      {
        result = this;
        *(unsigned char *)this = 0;
      }
      else
      {
        *(unsigned char *)*this = 0;
        return this;
      }
    }
  }
  return result;
}



bool  sub_403A40( unsigned long *a2, int a3)
{
  return this == (void *)a2[1] && *a2 == a3;
}

bool  sub_403A60( int a2, unsigned long *a3)
{
  unsigned long *v3; 
  char v5[8]; 

  v3 = (unsigned long *)(*(int ( **)(void *, char *, int))(*(unsigned long *)this + 12))(this, v5, a2);
  return v3[1] == a3[1] && *v3 == *a3;
}

unsigned long * sub_403AA0( unsigned int a2, unsigned int a3)
{
  unsigned int v4; 
  unsigned int v5; 
  bool v6; 
  unsigned long *result; 
  unsigned long *v8; 
  unsigned int v9; 

  v4 = a2;
  v5 = this[4];
  if ( v5 < a2 )
    std::_Xout_of_range("invalid string position");
  if ( v5 - v4 > a3 )
  {
    if ( a3 )
    {
      if ( this[5] < 0x10u )
        v8 = this;
      else
        v8 = (unsigned long *)*this;
      v9 = v5 - a3;
      if ( v9 != v4 )
        memmove((char *)v8 + v4, (char *)v8 + v4 + a3, v9 - v4);
      v6 = this[5] < 0x10u;
      this[4] = v9;
      if ( !v6 )
      {
        *(unsigned char *)(*this + v9) = 0;
        return this;
      }
      *((unsigned char *)this + v9) = 0;
    }
    return this;
  }
  else
  {
    v6 = this[5] < 0x10u;
    this[4] = v4;
    if ( v6 )
    {
      result = this;
      *((unsigned char *)this + v4) = 0;
    }
    else
    {
      *(unsigned char *)(*this + v4) = 0;
      return this;
    }
  }
  return result;
}

unsigned long * sub_403B40(unsigned long *a1, int a2)
{
  const char *v2; 
  char *v3; 

  v2 = std::_Syserror_map(a2);
  v3 = "unknown error";
  if ( v2 )
    v3 = (char *)v2;
  a1[5] = 15;
  a1[4] = 0;
  *(unsigned char *)a1 = 0;
  if ( *v3 )
    sub_4038E0(a1, v3, strlen(v3));
  else
    sub_4038E0(a1, v3, 0);
  return a1;
}

unsigned long * sub_403BC0(unsigned long *a1, int a2)
{
  if ( a2 == 1 )
  {
    a1[5] = 15;
    a1[4] = 0;
    *(unsigned char *)a1 = 0;
    sub_4038E0(a1, "iostream stream error", 0x15u);
  }
  else
  {
    sub_403B40(a1, a2);
  }
  return a1;
}

unsigned long * sub_403C10(unsigned long *a1, int a2)
{
  const char *v2; 
  char *v3; 

  v2 = std::_Winerror_map(a2);
  v3 = "unknown error";
  if ( v2 )
    v3 = (char *)v2;
  a1[5] = 15;
  a1[4] = 0;
  *(unsigned char *)a1 = 0;
  if ( *v3 )
    sub_4038E0(a1, v3, strlen(v3));
  else
    sub_4038E0(a1, v3, 0);
  return a1;
}

const char *sub_403C90()
{
  return "generic";
}

const char *sub_403CA0()
{
  return "iostream";
}

const char *sub_403CB0()
{
  return "system";
}

int  sub_403CC0( unsigned int a2)
{
  *(unsigned long *)this = 0;
  *(unsigned long *)(this + 4) = 0;
  *(unsigned long *)(this + 8) = 0;
  if ( sub_403D80((unsigned long *)this, a2) )
  {
    if ( a2 )
      memset(*(void **)this, 0, 4 * a2);
    *(unsigned long *)(this + 4) += 4 * a2;
  }
  return this;
}

int * sub_403D10(unsigned int a2)
{
  unsigned int v3; 
  int i; 

  sub_403CC0((int)this, a2);
  v3 = 0;
  for ( i = *this; v3 < (this[1] - *this) >> 2; i = *this )
    *(unsigned long *)(i + 4 * v3++) = -1;
  return this;
}

void  sub_403D50()
{
  if ( *(unsigned long *)this )
  {
    operator delete(*(void **)this);
    *(unsigned long *)this = 0;
    *(unsigned long *)(this + 4) = 0;
    *(unsigned long *)(this + 8) = 0;
  }
}

char  sub_403D80( unsigned int a2)
{
  char *v4; 

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    std::_Xlength_error("vector<T> too long");
  v4 = (char *)operator new(4 * a2);
  if ( !v4 )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x403DE7);
  }
  *this = v4;
  this[1] = v4;
  this[2] = &v4[4 * a2];
  return 1;
}

int  sub_403DF0( int a2)
{
  int result; 
  int v4; 

  result = a2;
  v4 = *(unsigned long *)(4 * a2 + *this);
  if ( v4 >= 0 )
  {
    result = sub_403DF0(v4);
    *(unsigned long *)(4 * a2 + *this) = result;
  }
  return result;
}

int  sub_403E20(int a2, int a3)
{
  int v3; 
  int *v4; 
  int result; 

  v3 = *(unsigned long *)(*this + 4 * a3);
  v4 = (int *)(*this + 4 * a2);
  result = *v4;
  if ( *v4 <= v3 )
  {
    if ( *v4 == v3 )
      *v4 = result - 1;
    result = *this;
    *(unsigned long *)(*this + 4 * a3) = a2;
  }
  else
  {
    *v4 = a3;
  }
  return result;
}

unsigned long * sub_403E60()
{
  unsigned long *result; 

  *this = &CMyMatrix::`vftable`;
  result = this;
  this[2] = 0;
  return result;
}

int  sub_403E70()
{
  bool v1; 
  unsigned long *v2; 
  int result; 

  v1 = this[2] == 0;
  v2 = this + 2;
  *this = &CMyMatrix::`vftable`;
  if ( !v1 )
  {
    result = cvReleaseMat(this + 2);
    *v2 = 0;
  }
  return result;
}

unsigned long * sub_403EA0( char a2)
{
  bool v3; 
  unsigned long *v4; 

  v3 = this[2] == 0;
  v4 = this + 2;
  *this = &CMyMatrix::`vftable`;
  if ( !v3 )
  {
    cvReleaseMat(this + 2);
    *v4 = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

int  sub_403EE0()
{
  unsigned long *v1; 
  int result; 

  v1 = this + 2;
  if ( this[2] )
  {
    result = cvReleaseMat(this + 2);
    *v1 = 0;
  }
  return result;
}

char * sub_403F00(char *a2)
{
  char *v2; 
  char *v4; 
  char v5; 

  v2 = a2;
  *(unsigned long *)this = &CMyTimer::`vftable`;
  v4 = (char *)(this + 4 - a2);
  do
  {
    v5 = *v2++;
    v2[(unsigned long)v4 - 1] = v5;
  }
  while ( v5 );
  *((unsigned long *)this + 65) = GetTickCount();
  return this;
}

int  sub_403F40()
{
  FILE *v2; 
  double v4; 

  *(unsigned long *)this = &CMyTimer::`vftable`;
  v4 = (double)(GetTickCount() - *((unsigned long *)this + 65)) / 1000.0;
  v2 = _iob_func();
  return printf(v2 + 2, "%s = %lf (sec)\n", this + 4, v4);
}

char * sub_403FA0(char a2)
{
  FILE *v3; 
  double v5; 

  *(unsigned long *)this = &CMyTimer::`vftable`;
  v5 = (double)(GetTickCount() - *((unsigned long *)this + 65)) / 1000.0;
  v3 = _iob_func();
  printf(v3 + 2, "%s = %lf (sec)\n", this + 4, v5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

int  sub_404010(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long *, unsigned long *))
{
  int v5; 
  unsigned char ( *v6)(unsigned long *, unsigned long *); 
  int v7; 
  int v8; 
  bool i; 

  v5 = a3;
  v6 = a5;
  v7 = a2;
  v8 = 2 * a2 + 2;
  for ( i = v8 == a3; v8 < a3; i = v8 == a3 )
  {
    if ( v6((unsigned long *)(a1 + 8 * v8), (unsigned long *)(a1 + 8 * v8 - 8)) )
      --v8;
    v5 = a3;
    v6 = a5;
    *(unsigned long *)(a1 + 8 * v7) = *(unsigned long *)(a1 + 8 * v8);
    *(unsigned long *)(a1 + 8 * v7 + 4) = *(unsigned long *)(a1 + 8 * v8 + 4);
    v7 = v8;
    v8 = 2 * v8 + 2;
  }
  if ( i )
  {
    *(unsigned long *)(a1 + 8 * v7) = *(unsigned long *)(a1 + 8 * v5 - 8);
    *(unsigned long *)(a1 + 8 * v7 + 4) = *(unsigned long *)(a1 + 8 * v5 - 4);
    v7 = v5 - 1;
  }
  return sub_404490(a1, v7, a2, a4, v6);
}

int * sub_404090(const int *a1, const int *a2, int *a3)
{
  const int *v3; 
  int *result; 
  long long v5; 

  v3 = a1;
  for ( result = a3; v3 != a2; result = (int *)((char *)result + 40) )
  {
    *result = _mm_loadu_si128(v3);
    result[1] = _mm_loadu_si128(v3 + 1);
    v5 = v3[2].m128i_i64[0];
    v3 = (const int *)((char *)v3 + 40);
    result[2].m128i_i64[0] = v5;
  }
  return result;
}

int  sub_4040D0(const int **a1, const int **a2, int a3)
{
  int v3; 
  const int **v4; 
  const int *v5; 

  if ( a1 == a2 )
    return a3;
  v3 = a3;
  v4 = a1 + 5;
  do
  {
    *(unsigned long long *)v3 = *(unsigned long long *)(v4 - 5);
    sub_404AC0(v3 + 8, v4 - 3);
    v5 = *v4;
    v4 += 8;
    *(unsigned long *)(v3 + 20) = v5;
    *(unsigned long long *)(v3 + 24) = *(unsigned long long *)(v4 - 7);
    v3 += 32;
  }
  while ( v4 - 5 != a2 );
  return v3;
}

void  sub_404130(int a1, int a2)
{
  int v2; 
  void *v3; 

  if ( a1 != a2 )
  {
    v2 = a1 + 8;
    do
    {
      v3 = *(void **)v2;
      *(unsigned long *)(v2 + 4) = *(unsigned long *)v2;
      if ( v3 )
      {
        operator delete(v3);
        *(unsigned long *)v2 = 0;
        *(unsigned long *)(v2 + 4) = 0;
        *(unsigned long *)(v2 + 8) = 0;
      }
      v2 += 32;
    }
    while ( v2 - 8 != a2 );
  }
}

void  sub_404180(int *a1, int *a2, unsigned char ( *a3)(int *, int *))
{
  unsigned char ( *v3)(int *, int *); 
  int *v4; 
  int *v5; 
  int *v6; 
  int *v7; 
  unsigned long *v8; 
  int v9; 
  int *v10; 
  int *v11; 
  int *v12; 
  int v13; 
  int v14; 

  v3 = a3;
  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = a1 + 2;
    v11 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v6 = a1;
      v12 = a1;
      do
      {
        v7 = v5;
        v8 = v6 + 3;
        v13 = *v5;
        v14 = v6[3];
        if ( v3(&v13, v4) )
        {
          if ( v4 != v11 )
          {
            do
            {
              v9 = *(v8 - 3);
              v8 -= 2;
              v8[1] = v9;
              v8[2] = *v8;
            }
            while ( v8 - 1 != v4 );
          }
          *v4 = v13;
          v4[1] = v14;
        }
        else
        {
          v10 = v12;
          if ( a3(&v13, v12) )
          {
            do
            {
              *v7 = *v10;
              v7[1] = v10[1];
              v7 = v10;
              v10 -= 2;
            }
            while ( a3(&v13, v10) );
            v4 = a1;
          }
          *v7 = v13;
          v7[1] = v14;
        }
        v5 = v11 + 2;
        v3 = a3;
        v6 = v12 + 2;
        v11 = v5;
        v12 += 2;
      }
      while ( v5 != a2 );
    }
  }
}

int  sub_404280(int a1, int a2, unsigned char ( *a3)(unsigned long *, unsigned long *))
{
  int v3; 
  int result; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14[2]; 

  v3 = (a2 - a1) >> 3;
  result = v3 - (v3 >> 31);
  v5 = v3 / 2;
  if ( v3 / 2 > 0 )
  {
    v6 = 2 * v5 + 2;
    do
    {
      v7 = *(unsigned long *)(a1 + 8 * v5-- - 8);
      v8 = v6 - 2;
      v14[0] = v7;
      v9 = v5;
      v12 = v8;
      v14[1] = *(unsigned long *)(a1 + 8 * v5 + 4);
      v13 = v5;
      if ( v8 < v3 )
      {
        do
        {
          if ( a3((unsigned long *)(a1 + 8 * v8), (unsigned long *)(a1 + 8 * v8 - 8)) )
            --v8;
          v10 = v13;
          v9 = v8;
          v13 = v8;
          *(unsigned long *)(a1 + 8 * v10) = *(unsigned long *)(a1 + 8 * v8);
          v11 = *(unsigned long *)(a1 + 8 * v8 + 4);
          v8 = 2 * v8 + 2;
          *(unsigned long *)(a1 + 8 * v10 + 4) = v11;
        }
        while ( v8 < (a2 - a1) >> 3 );
        v3 = (a2 - a1) >> 3;
      }
      if ( v8 == v3 )
      {
        *(unsigned long *)(a1 + 8 * v9) = *(unsigned long *)(a1 + 8 * v3 - 8);
        *(unsigned long *)(a1 + 8 * v9 + 4) = *(unsigned long *)(a1 + 8 * v3 - 4);
        v9 = v3 - 1;
      }
      result = sub_404490(a1, v9, v5, v14, a3);
      v3 = (a2 - a1) >> 3;
      v6 = v12;
    }
    while ( v5 > 0 );
  }
  return result;
}

int  sub_404370(int *a1, int *a2, int *a3, unsigned char ( *a4)(int *, int *))
{
  int v4; 
  int v5; 
  int result; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 

  if ( a4(a2, a1) && a2 != a1 )
  {
    v4 = *a2;
    *a2 = *a1;
    *a1 = v4;
    v5 = a2[1];
    a2[1] = a1[1];
    a1[1] = v5;
  }
  result = ((int ( *)(int *, int *))a4)(a3, a2);
  if ( (unsigned char)result )
  {
    if ( a3 != a2 )
    {
      v7 = *a3;
      *a3 = *a2;
      *a2 = v7;
      v8 = a3[1];
      a3[1] = a2[1];
      a2[1] = v8;
    }
    result = ((int ( *)(int *, int *))a4)(a2, a1);
    if ( (unsigned char)result )
    {
      if ( a2 != a1 )
      {
        v9 = *a2;
        *a2 = *a1;
        *a1 = v9;
        v10 = a2[1];
        result = a1[1];
        a2[1] = result;
        a1[1] = v10;
      }
    }
  }
  return result;
}

int  sub_4043F0(int *a1, int *a2, int *a3, unsigned char ( *a4)(int *, int *))
{
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int *v9; 
  int v11; 

  v5 = ((char *)a3 - (char *)a1) >> 3;
  if ( v5 <= 40 )
    return sub_404370(a1, a2, a3, a4);
  v6 = (v5 + 1) / 8;
  v7 = 16 * v6;
  v8 = 8 * v6;
  v9 = &a1[4 * v6];
  v11 = v7;
  sub_404370(a1, &a1[v8 / 4u], v9, a4);
  sub_404370(&a2[v8 / 0xFFFFFFFC], a2, &a2[v8 / 4u], a4);
  sub_404370((int *)((char *)a3 - v11), &a3[v8 / 0xFFFFFFFC], a3, a4);
  return sub_404370(&a1[v8 / 4u], a2, &a3[v8 / 0xFFFFFFFC], a4);
}

int  sub_404490(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long *, unsigned long *))
{
  int v5; 
  int v6; 
  unsigned long *v7; 
  int v8; 
  int v9; 
  int result; 

  v5 = a2;
  v6 = (a2 - 1) / 2;
  if ( a3 < a2 )
  {
    while ( 1 )
    {
      v7 = (unsigned long *)(a1 + 8 * v6);
      if ( !a5(v7, a4) )
        break;
      *(unsigned long *)(a1 + 8 * a2) = *v7;
      v8 = v7[1];
      v9 = v6;
      *(unsigned long *)(a1 + 8 * a2 + 4) = v8;
      a2 = v6;
      v6 = (v6 - 1) / 2;
      if ( a3 >= a2 )
      {
        *(unsigned long *)(a1 + 8 * v9) = *a4;
        result = a4[1];
        *(unsigned long *)(a1 + 8 * v9 + 4) = result;
        return result;
      }
    }
    v5 = a2;
  }
  *(unsigned long *)(a1 + 8 * v5) = *a4;
  result = a4[1];
  *(unsigned long *)(a1 + 8 * v5 + 4) = result;
  return result;
}

void  sub_404510(int *a1, int *a2, int a3, unsigned char ( *a4)(int *, int *))
{
  unsigned char ( *v4)(int *, int *); 
  int *v5; 
  int *v6; 
  int v7; 
  int *v9; 
  int *v10; 

  v4 = a4;
  v5 = a2;
  v6 = a1;
  v7 = ((char *)a2 - (char *)a1) >> 3;
  if ( v7 <= 32 )
  {
LABEL_7:
    if ( v7 > 1 )
      sub_404180(v6, v5, v4);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_4046E0(&v9, v6, v5, v4);
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)(((char *)v9 - (char *)v6) & 0xFFFFFFF8) >= (int)(((char *)v5 - (char *)v10) & 0xFFFFFFF8) )
      {
        sub_404510(v10, v5, a3, a4);
        v5 = v9;
      }
      else
      {
        sub_404510(v6, v9, a3, a4);
        v6 = v10;
      }
      v4 = a4;
      v7 = ((char *)v5 - (char *)v6) >> 3;
      if ( v7 <= 32 )
        goto LABEL_7;
    }
    if ( (int)(((char *)v5 - (char *)v6) & 0xFFFFFFF8) > 8 )
    {
      sub_404280((int)v6, (int)v5, v4);
      v4 = a4;
    }
    sub_4045F0(v6, (int)v5, v4);
  }
}

signed int  sub_4045F0(int *a1, int a2, unsigned char ( *a3)(unsigned long *, unsigned long *))
{
  unsigned char ( *v3)(unsigned long *, unsigned long *); 
  signed int result; 
  int *v5; 
  int v6[2]; 

  v3 = a3;
  result = (a2 - (unsigned long)a1) & 0xFFFFFFF8;
  if ( result > 8 )
  {
    v5 = (int *)(a2 - 4);
    do
    {
      v6[0] = *(v5 - 1);
      v6[1] = *v5;
      *(v5 - 1) = *a1;
      *v5 = a1[1];
      sub_404010((int)a1, 0, ((int)v5 - 4 - (int)a1) >> 3, v6, v3);
      v5 -= 2;
      v3 = a3;
      result = ((unsigned int)v5 + 4 - (unsigned long)a1) & 0xFFFFFFF8;
    }
    while ( result > 8 );
  }
  return result;
}

int * sub_404680(const int *a1, const int *a2, int *a3)
{
  return sub_404940(a1, a2, a3);
}

int  sub_4046B0(int a1, int a2, int a3)
{
  return sub_426AB0(a1, a2, a3);
}

int ** sub_4046E0(int **a1, int *a2, int *a3, unsigned char ( *a4)(int *, int *))
{
  int *v4; 
  int *v5; 
  int *v6; 
  int *v7; 
  unsigned int v8; 
  int *v9; 
  int *v10; 
  int v11; 
  int v12; 
  bool v13; 
  int *v14; 
  int *v15; 
  int v16; 
  int v17; 
  int *v18; 
  int v19; 
  int v20; 
  int *v21; 
  int *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int **result; 
  int *v32; 
  int *v33; 
  int *v34; 
  int *v35; 
  int *v36; 
  int *v37; 
  int *v38; 

  v4 = &a2[2 * ((((char *)a3 - (char *)a2) >> 3) / 2)];
  sub_4043F0(a2, v4, a3 - 2, a4);
  v5 = v4 + 2;
  v37 = v4 + 2;
  if ( a2 < v4 )
  {
    do
    {
      v33 = v4 - 2;
      if ( a4(v4 - 2, v4) )
        break;
      if ( a4(v4, v33) )
        break;
      v4 -= 2;
    }
    while ( a2 < v33 );
    v5 = v37;
  }
  if ( v5 < a3 )
  {
    do
    {
      if ( a4(v5, v4) )
        break;
      if ( a4(v4, v5) )
        break;
      v5 += 2;
    }
    while ( v5 < a3 );
    v37 = v5;
  }
  v6 = v5;
  v7 = v4;
  v36 = v5;
  v38 = v4;
  while ( 2 )
  {
    while ( 2 )
    {
      v8 = (unsigned int)a3;
LABEL_13:
      if ( (unsigned int)v6 < v8 )
      {
        v34 = v5 - 2;
        do
        {
          if ( !a4(v4, v6) )
          {
            if ( a4(v6, v4) )
              break;
            v9 = v5;
            v10 = v34 + 2;
            v5 += 2;
            v34 += 2;
            if ( v9 != v6 && v10 != v6 )
            {
              v11 = *v10;
              *v10 = *v6;
              *v6 = v11;
              v12 = v10[1];
              v10[1] = v6[1];
              v6[1] = v12;
            }
          }
          v6 += 2;
        }
        while ( v6 < a3 );
        v7 = v38;
        v37 = v5;
        v36 = v6;
      }
      v13 = v7 == a2;
      if ( v7 <= a2 )
        goto LABEL_32;
      v14 = v38;
      v15 = v38 - 2;
      while ( a4(v15, v4) )
      {
LABEL_28:
        v18 = a2;
        v14 -= 2;
        v15 -= 2;
        if ( a2 >= v14 )
          goto LABEL_31;
      }
      if ( !a4(v4, v15) )
      {
        v4 -= 2;
        if ( v4 != v15 )
        {
          v16 = *v4;
          *v4 = *v15;
          *v15 = v16;
          v17 = v4[1];
          v4[1] = v15[1];
          v15[1] = v17;
        }
        goto LABEL_28;
      }
      v18 = a2;
LABEL_31:
      v5 = v37;
      v38 = v14;
      v7 = v14;
      v13 = v14 == v18;
      v6 = v36;
LABEL_32:
      if ( !v13 )
      {
        v8 = (unsigned int)a3;
        v7 -= 2;
        v38 = v7;
        if ( v6 == a3 )
        {
          v4 -= 2;
          if ( v7 != v4 )
          {
            v25 = *v7;
            *v7 = *v4;
            *v4 = v25;
            v26 = v7[1];
            v7[1] = v4[1];
            v8 = (unsigned int)a3;
            v4[1] = v26;
          }
          v5 -= 2;
          v37 = v5;
          if ( v4 != v5 )
          {
            v27 = *v4;
            *v4 = *v5;
            *v5 = v27;
            v28 = v4[1];
            v4[1] = v5[1];
            v5[1] = v28;
            continue;
          }
        }
        else
        {
          if ( v6 != v7 )
          {
            v29 = *v6;
            *v6 = *v7;
            *v7 = v29;
            v30 = v6[1];
            v6[1] = v7[1];
            v8 = (unsigned int)a3;
            v7[1] = v30;
          }
          v6 += 2;
          v36 = v6;
        }
        goto LABEL_13;
      }
      break;
    }
    if ( v6 != a3 )
    {
      if ( v5 != v6 && v4 != v5 )
      {
        v19 = *v4;
        *v4 = *v5;
        *v5 = v19;
        v20 = v4[1];
        v4[1] = v5[1];
        v5[1] = v20;
      }
      v21 = v6;
      v22 = v4;
      v5 += 2;
      v32 = v6;
      v6 += 2;
      v37 = v5;
      v4 += 2;
      v35 = v22;
      v36 = v6;
      if ( v22 != v32 )
      {
        v23 = *v22;
        *v35 = *v21;
        *v32 = v23;
        v24 = v35[1];
        v35[1] = v32[1];
        v7 = v38;
        v32[1] = v24;
      }
      continue;
    }
    break;
  }
  result = a1;
  *a1 = v4;
  a1[1] = v5;
  return result;
}

int * sub_404940(const int *a1, const int *a2, int *a3)
{
  const int *v3; 
  int *result; 

  v3 = a1;
  for ( result = a3; v3 != a2; result = (int *)((char *)result + 40) )
  {
    if ( result )
    {
      *result = _mm_loadu_si128(v3);
      result[1] = _mm_loadu_si128(v3 + 1);
      result[2].m128i_i64[0] = v3[2].m128i_i64[0];
    }
    v3 = (const int *)((char *)v3 + 40);
  }
  return result;
}

unsigned long * sub_404980(unsigned long *a1, unsigned long *a2, unsigned long *a3)
{
  unsigned long *v3; 
  unsigned long *v4; 

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    if ( v4 )
    {
      *v4 = *v3;
      v4[1] = v3[1];
    }
    v3 += 2;
    v4 += 2;
  }
  while ( v3 != a2 );
  return v4;
}

void  sub_4049C0(unsigned long *a1)
{
  void *v1; 

  v1 = (void *)a1[2];
  a1[3] = v1;
  if ( v1 )
  {
    operator delete(v1);
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
  }
}

int  sub_404A00( const int **a2)
{
  int v3; 
  unsigned long v5[10]; 

  v5[6] = v5;
  *(unsigned long *)this = 0;
  *(unsigned long *)(this + 4) = 0;
  *(unsigned long *)(this + 8) = 0;
  v3 = (unsigned long long)(1717986919i64 * ((char *)a2[1] - (char *)*a2)) >> 32;
  v5[4] = this;
  if ( sub_405320((unsigned long *)this, (v3 >> 4) + ((unsigned int)v3 >> 31)) )
  {
    v5[9] = 0;
    *(unsigned long *)(this + 4) = sub_404940(*a2, a2[1], *(int **)this);
  }
  return this;
}

int  sub_404AC0( const int **a2)
{
  const int *v3; 
  int *v4; 
  int *v6; 
  int v7; 
  int v8; 
  const int *v9; 
  int *v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  int *v15; 
  int v16; 

  v15 = &v11;
  v13 = this;
  if ( (const int **)this != a2 )
  {
    v3 = a2[1];
    if ( *a2 == v3 )
    {
      v4 = *(int **)this;
LABEL_4:
      *(unsigned long *)(this + 4) = v4;
      return this;
    }
    v6 = *(int **)this;
    v7 = (unsigned long long)(1717986919i64 * ((char *)v3 - (char *)*a2)) >> 32;
    v8 = *(unsigned long *)(this + 4) - *(unsigned long *)this;
    v14 = (v7 >> 4) + ((unsigned int)v7 >> 31);
    v12 = v8 / 40;
    if ( v14 <= v8 / 40 )
    {
      sub_404090(*a2, a2[1], v6);
      v4 = (int *)(*(unsigned long *)this + 40 * (((char *)a2[1] - (char *)*a2) / 40));
      goto LABEL_4;
    }
    if ( v14 <= (*(unsigned long *)(this + 8) - (int)v6) / 40 )
    {
      v9 = (const int *)((char *)*a2 + 40 * v12);
      sub_404090(*a2, v9, *(int **)this);
      v4 = sub_404940(v9, a2[1], *(int **)(this + 4));
      goto LABEL_4;
    }
    if ( v6 )
      operator delete(v6);
    if ( sub_405320((unsigned long *)this, ((char *)a2[1] - (char *)*a2) / 40) )
    {
      v10 = *(int **)this;
      v16 = 0;
      v4 = sub_404680(*a2, a2[1], v10);
      goto LABEL_4;
    }
  }
  return this;
}

int * sub_404C30(const int ***a2)
{
  const int **v3; 
  const int **v4; 
  unsigned int v5; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  const int **v11; 
  int v12; 
  unsigned long v13[10]; 

  v13[6] = v13;
  v13[4] = this;
  if ( this != (int *)a2 )
  {
    v3 = *a2;
    v4 = a2[1];
    if ( *a2 == v4 )
    {
      sub_404130(*this, this[1]);
      v5 = *this;
LABEL_4:
      this[1] = v5;
      return this;
    }
    v7 = *this;
    v8 = ((char *)v4 - (char *)v3) >> 5;
    v9 = (this[1] - *this) >> 5;
    if ( v8 <= v9 )
    {
      v10 = sub_4040D0(v3, a2[1], v7);
      sub_404130(v10, this[1]);
      v5 = *this + (((char *)a2[1] - (char *)*a2) & 0xFFFFFFE0);
      goto LABEL_4;
    }
    if ( v8 <= (this[2] - v7) >> 5 )
    {
      v11 = &(*a2)[8 * v9];
      sub_4040D0(*a2, v11, v7);
      v5 = sub_426AB0((int)v11, (int)a2[1], this[1]);
      goto LABEL_4;
    }
    if ( v7 )
    {
      sub_404130(v7, this[1]);
      operator delete((void *)*this);
    }
    if ( sub_405390(this, ((char *)a2[1] - (char *)*a2) >> 5) )
    {
      v12 = *this;
      v13[9] = 0;
      v5 = sub_4046B0((int)*a2, (int)a2[1], v12);
      goto LABEL_4;
    }
  }
  return this;
}

int  sub_404D80(unsigned long *a1, unsigned long *a2)
{
  int v2; 
  unsigned long *v3; 
  int v4; 
  int v5; 
  int result; 
  unsigned int v7; 

  v2 = 0;
  v3 = a2;
  a1[49] = a1[48];
  v7 = 0;
  v4 = *a2;
  if ( (v3[1] - *v3) / 40 )
  {
    v5 = 0;
    do
    {
      sub_4214D0(a1 + 48, (const int *)(v5 + v4));
      v4 = *a2;
      if ( *(unsigned char *)(v5 + *a2 + 32) == 1 )
        ++v2;
      v5 += 40;
      ++v7;
    }
    while ( v7 < (a2[1] - v4) / 40 );
    v3 = a2;
  }
  result = (v3[1] - *v3) / 40;
  a1[7] = v2;
  a1[6] = result;
  return result;
}

double  sub_404E30()
{
  double v1; 
  int v2; 
  int v3; 
  unsigned long *v4; 
  int v5; 
  int v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  double v16; 

  v1 = 0.0;
  v2 = 0;
  v3 = (this[3] - this[2]) >> 5;
  v13 = v3;
  v16 = 0.0;
  if ( v3 > 0 )
  {
    v14 = this[2];
    v4 = (unsigned long *)(v14 + 8);
    v11 = 0;
    v12 = v14 + 8;
    do
    {
      v5 = 0;
      if ( (v4[1] - *v4) / 40 > 0 )
      {
        v6 = *(unsigned long *)(v11 + v14 + 8);
        v15 = (*(unsigned long *)(v11 + v14 + 12) - v6) / 40;
        do
        {
          ++v2;
          ++v5;
          v6 += 40;
          v1 = (double)(int)*(double *)libm_sse2_sqrt_precise(v8, v9, v10, v11).m128_u64 + v16;
          v16 = v1;
        }
        while ( v5 < v15 );
        v3 = v13;
      }
      v11 += 32;
      v4 = (unsigned long *)(v12 + 32);
      --v3;
      v12 += 32;
      v13 = v3;
    }
    while ( v3 );
  }
  return v1 / (double)v2;
}

int  sub_404F30()
{
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v9; 

  v1 = 0;
  v2 = 0;
  v3 = this[3] - this[2];
  if ( v3 >= 0 && (v3 & 0xFFFFFFE0) != 0 )
  {
    v4 = this[2];
    v5 = (this[3] - v4) >> 5;
    v6 = v4 + 8;
    v9 = v5;
    do
    {
      v7 = *(unsigned long *)(v6 + 4);
      v6 += 32;
      ++v2;
      v1 += (v7 - *(unsigned long *)(v6 - 32)) / 40;
    }
    while ( v2 < v9 );
  }
  return v1;
}

void  sub_404F90( unsigned long *a2)
{
  int v2; 
  int v3; 
  int *v4; 
  int *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int *v11; 
  int v12; 
  int v14[2]; 
  int v15; 
  int v16; 
  long long v17; 
  int *v18; 
  int v19; 

  v2 = this[3] - this[2];
  a2[1] = *a2;
  v3 = v2 / 56;
  v16 = v3;
  sub_405750(a2, v3);
  v4 = 0;
  v5 = 0;
  v17 = 0i64;
  v18 = 0;
  v6 = 0;
  v19 = 0;
  if ( v3 > 0 )
  {
    v7 = 0;
    v15 = 0;
    do
    {
      v14[1] = v6;
      v8 = (*(unsigned long *)(v7 + this[2] + 12) - *(unsigned long *)(v15 + this[2] + 8)) >> 5;
      v14[0] = v8;
      if ( v14 >= v5 || v4 > v14 )
      {
        if ( v5 == v18 )
        {
          sub_4055E0((int)&v17, 1u);
          v5 = (int *)HIDWORD(v17);
          v4 = (int *)v17;
        }
        if ( v5 )
        {
          *v5 = v8;
          v5[1] = v6;
        }
      }
      else
      {
        v9 = ((char *)v14 - (char *)v4) >> 3;
        if ( v5 == v18 )
        {
          sub_4055E0((int)&v17, 1u);
          v5 = (int *)HIDWORD(v17);
          v4 = (int *)v17;
        }
        if ( v5 )
        {
          *v5 = v4[2 * v9];
          v5[1] = v4[2 * v9 + 1];
        }
      }
      v5 += 2;
      ++v6;
      HIDWORD(v17) = v5;
      v7 = v15 + 56;
      v15 += 56;
    }
    while ( v6 < v16 );
    v3 = v16;
  }
  sub_404510(v4, v5, ((char *)v5 - (char *)v4) >> 3, (unsigned char ( *)(int *, int *))sub_4056B0);
  v10 = 0;
  if ( v3 > 0 )
  {
    v11 = v4 + 1;
    v12 = v16;
    do
    {
      v11 += 2;
      *(unsigned long *)(*a2 + 4 * v10++) = *(v11 - 2);
    }
    while ( v10 < v12 );
    v4 = (int *)v17;
  }
  if ( v4 )
    operator delete(v4);
}

int  sub_405120( unsigned long *a2, unsigned long **a3)
{
  int v4; 
  int v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned long *v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  int *v22; 
  unsigned int v23; 
  int result; 
  unsigned long *v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 

  v4 = 0;
  v25 = this;
  v27 = 0;
  a2[25] = a2[24];
  v5 = 0;
  v6 = *a3;
  v28 = 0;
  if ( *a3 != a3[1] )
  {
    do
    {
      v26 = 0;
      v7 = (unsigned long *)(this[2] + 8 + 56 * *v6);
      if ( (v7[1] - *v7) >> 5 )
      {
        v8 = 0;
        v29 = 0;
        do
        {
          v9 = a2[25];
          v10 = v8 + *v7;
          v30 = v10;
          if ( (unsigned int)&v30 >= v9 || (v11 = a2[24], v11 > (unsigned int)&v30) )
          {
            v18 = a2[26];
            if ( v9 == v18 && !((int)(v18 - v9) >> 2) )
            {
              v19 = (int)(v9 - a2[24]) >> 2;
              if ( v19 == 0x3FFFFFFF )
LABEL_33:
                std::_Xlength_error("vector<T> too long");
              v20 = (v18 - a2[24]) >> 2;
              if ( 0x3FFFFFFF - (v20 >> 1) >= v20 )
                v21 = (v20 >> 1) + v20;
              else
                v21 = 0;
              if ( v21 < v19 + 1 )
                v21 = v19 + 1;
              sub_405400((int)(a2 + 24), v21);
            }
            v22 = (int *)a2[25];
            if ( v22 )
              *v22 = v10;
          }
          else
          {
            v12 = a2[26];
            v13 = (int)((int)&v30 - v11) >> 2;
            if ( v9 == v12 && !((int)(v12 - v9) >> 2) )
            {
              v14 = (int)(v9 - a2[24]) >> 2;
              if ( v14 == 0x3FFFFFFF )
                goto LABEL_33;
              v15 = (v12 - a2[24]) >> 2;
              if ( 0x3FFFFFFF - (v15 >> 1) >= v15 )
                v16 = (v15 >> 1) + v15;
              else
                v16 = 0;
              if ( v16 < v14 + 1 )
                v16 = v14 + 1;
              sub_405400((int)(a2 + 24), v16);
            }
            v17 = (unsigned long *)a2[25];
            if ( v17 )
              *v17 = *(unsigned long *)(a2[24] + 4 * v13);
          }
          a2[25] += 4;
          ++v27;
          v7 = (unsigned long *)(v25[2] + 8 + 56 * *v6);
          v23 = (int)((unsigned long long)(1717986919i64 * (*(unsigned long *)(v29 + *v7 + 12) - *(unsigned long *)(v29 + *v7 + 8))) >> 32) >> 4;
          v8 = v29 + 32;
          v29 += 32;
          v28 += v23 + (v23 >> 31);
          ++v26;
        }
        while ( v26 < (v7[1] - *v7) >> 5 );
        this = v25;
      }
      ++v6;
    }
    while ( v6 != a3[1] );
    v5 = v28;
    v4 = v27;
  }
  a2[4] = v5;
  a2[2] = v4;
  result = (this[3] - this[2]) / 56;
  a2[3] = result;
  return result;
}

char  sub_405320( unsigned int a2)
{
  char *v4; 

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x6666666 )
    std::_Xlength_error("vector<T> too long");
  v4 = (char *)operator new(40 * a2);
  if ( !v4 )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x405386);
  }
  *this = v4;
  this[1] = v4;
  this[2] = &v4[40 * a2];
  return 1;
}

char  sub_405390( unsigned int a2)
{
  char *v4; 

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x7FFFFFF )
    std::_Xlength_error("vector<T> too long");
  v4 = (char *)operator new(32 * a2);
  if ( !v4 )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x4053F5);
  }
  *this = v4;
  this[1] = v4;
  this[2] = &v4[32 * a2];
  return 1;
}

char * sub_405400( unsigned int a2)
{
  char *v2; 
  char *result; 
  int v5; 

  v2 = 0;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFF || (v2 = (char *)operator new(4 * a2)) == 0 )
      std::_Xbad_alloc();
  }
  memmove(v2, *(const void **)this, (*(unsigned long *)(this + 4) - *(unsigned long *)this) & 0xFFFFFFFC);
  v5 = (*(unsigned long *)(this + 4) - *(unsigned long *)this) >> 2;
  if ( *(unsigned long *)this )
    operator delete(*(void **)this);
  *(unsigned long *)this = v2;
  *(unsigned long *)(this + 8) = &v2[4 * a2];
  result = &v2[4 * v5];
  *(unsigned long *)(this + 4) = result;
  return result;
}

char * sub_405480( unsigned int a2)
{
  char *v3; 
  unsigned long *v4; 
  char *result; 
  int v6; 
  void *v7; 
  int *v8; 
  int v9; 

  v8 = &v6;
  v3 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF || (v3 = (char *)operator new(8 * a2), (v7 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v9 = 0;
  sub_404980(*this, this[1], v3);
  v4 = *this;
  v7 = (void *)(((char *)this[1] - (char *)*this) >> 3);
  if ( v4 )
    operator delete(v4);
  *this = v3;
  this[2] = &v3[8 * a2];
  result = &v3[8 * (unsigned long)v7];
  this[1] = result;
  return result;
}

unsigned int  sub_405560( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v2 = this[1];
  result = (this[2] - v2) >> 2;
  if ( result < a2 )
  {
    v4 = (v2 - *this) >> 2;
    if ( 0x3FFFFFFF - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = a2 + v4;
    v6 = (this[2] - *this) >> 2;
    if ( 0x3FFFFFFF - (v6 >> 1) >= v6 )
    {
      v7 = (v6 >> 1) + v6;
      if ( v7 < v5 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = v5;
    }
    return (unsigned int)sub_405400((int)this, v7);
  }
  return result;
}

unsigned int  sub_4055E0( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v2 = *(unsigned long *)(this + 4);
  result = (*(unsigned long *)(this + 8) - v2) >> 3;
  if ( result < a2 )
  {
    v4 = (v2 - *(unsigned long *)this) >> 3;
    if ( 0x1FFFFFFF - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = a2 + v4;
    v6 = (*(unsigned long *)(this + 8) - *(unsigned long *)this) >> 3;
    if ( 0x1FFFFFFF - (v6 >> 1) >= v6 )
    {
      v7 = (v6 >> 1) + v6;
      if ( v7 < v5 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = v5;
    }
    return (unsigned int)sub_405480((unsigned long **)this, v7);
  }
  return result;
}

void  sub_405660()
{
  if ( *this )
  {
    sub_404130(*this, this[1]);
    operator delete((void *)*this);
    *this = 0;
    this[1] = 0;
    this[2] = 0;
  }
}

bool  sub_4056B0(unsigned long *a1, unsigned long *a2)
{
  return *a1 > *a2;
}

unsigned int  sub_4056D0(unsigned unsigned long *a2)
{
  unsigned int result; 
  int v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  unsigned long *v7; 

  result = this[1];
  if ( (unsigned int)a2 >= result || *this > (unsigned int)a2 )
  {
    if ( result == this[2] )
      result = sub_4055E0((int)this, 1u);
    v7 = (unsigned long *)this[1];
    if ( v7 )
    {
      *v7 = *a2;
      result = a2[1];
      v7[1] = result;
    }
  }
  else
  {
    v4 = (int)((int)a2 - *this) >> 3;
    if ( result == this[2] )
      sub_4055E0((int)this, 1u);
    result = *this;
    v5 = (unsigned long *)this[1];
    v6 = (unsigned long *)(*this + 8 * v4);
    if ( v5 )
    {
      *v5 = *v6;
      result = v6[1];
      v5[1] = result;
      this[1] += 8;
      return result;
    }
  }
  this[1] += 8;
  return result;
}

int  sub_405750( unsigned int a2)
{
  int result; 
  unsigned int v4; 
  int v5; 

  result = this[1];
  v4 = (result - *this) >> 2;
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      sub_405560(this, a2 - v4);
      v5 = (this[1] - *this) >> 2;
      if ( a2 != v5 )
        memset((void *)this[1], 0, 4 * (a2 - v5));
      result = this[1] + 4 * (a2 - ((this[1] - *this) >> 2));
      this[1] = result;
    }
  }
  else
  {
    result += 4 * (a2 - v4);
    this[1] = result;
  }
  return result;
}

char  sub_4057B0()
{
  unsigned long *v1; 
  int v2; 
  unsigned long *v3; 
  int v4; 
  int v5; 
  unsigned long long *v6; 
  int v7; 
  unsigned long long *v8; 
  int v9; 
  unsigned long *v10; 
  unsigned long *v11; 
  void *v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned long long *v18; 
  char *v19; 
  unsigned long long *v20; 
  int v21; 
  int v22; 
  unsigned long *v23; 
  unsigned long *v24; 
  void *v25; 
  int v26; 
  unsigned long *v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  void ( ***v43)(unsigned long, unsigned long); 
  void ( ***v44)(unsigned long, unsigned long); 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  void ( ***v59)(unsigned long, unsigned long); 
  void ( ***v60)(unsigned long, unsigned long); 
  unsigned int v61; 
  unsigned int v62; 
  int v63; 
  int v64; 
  unsigned long *v65; 
  double v66; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  unsigned int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  unsigned int v81; 
  int v82; 
  int v83; 

  v1 = this;
  v81 = 0;
  if ( (this[3] - this[2]) / 56 )
  {
    v2 = 0;
    v76 = 0;
    do
    {
      v3 = (unsigned long *)(v2 + v1[2]);
      if ( sub_404F30(v3) >= 5000 )
      {
        v4 = v3[3] - v3[2];
        if ( v4 >= 0 && (v4 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v5 = v1[2];
            v78 = v5;
            v6 = (unsigned long long *)(*(unsigned long *)(v2 + v5 + 8) + 32);
            if ( v6 != *(unsigned long long **)(v2 + v5 + 12) )
            {
              v7 = *(unsigned long *)(v2 + v5 + 8) + 20;
              v8 = *(unsigned long long **)(v2 + v5 + 12);
              do
              {
                *(unsigned long long *)(v7 - 20) = *v6;
                sub_404AC0(v7 - 12, (const int **)(v7 + 20));
                v9 = *(unsigned long *)(v7 + 32);
                v7 += 32;
                *(unsigned long *)(v7 - 32) = v9;
                v6 += 4;
                *(unsigned long long *)(v7 - 28) = *(unsigned long long *)(v7 + 4);
              }
              while ( v6 != v8 );
              v2 = v76;
              v5 = v78;
            }
            v10 = *(unsigned long **)(v2 + v5 + 12);
            v11 = v10 - 8;
            if ( v10 - 8 != v10 )
            {
              do
              {
                v12 = (void *)v11[2];
                v11[3] = v12;
                if ( v12 )
                {
                  operator delete(v12);
                  v11[2] = 0;
                  v11[3] = 0;
                  v11[4] = 0;
                }
                v11 += 8;
              }
              while ( v11 != v10 );
              v5 = v78;
            }
            v1 = this;
            *(unsigned long *)(v2 + v5 + 12) -= 32;
            v13 = *(unsigned long *)(v2 + v1[2] + 12) - *(unsigned long *)(v2 + v1[2] + 8);
          }
          while ( v13 >= 0 && (v13 & 0xFFFFFFE0) != 0 );
        }
      }
      v2 += 56;
      v76 = v2;
      ++v81;
    }
    while ( v81 < (v1[3] - v1[2]) / 56 );
  }
  v14 = 0;
  v74 = 0;
  if ( (v1[3] - v1[2]) / 56 )
  {
    v15 = 0;
    v71 = 0;
    do
    {
      v82 = 0;
      v16 = *(unsigned long *)(v15 + v1[2] + 12) - *(unsigned long *)(v15 + v1[2] + 8);
      if ( v16 >= 0 && (v16 & 0xFFFFFFE0) != 0 )
      {
        v17 = 0;
        v77 = 0;
        do
        {
          v79 = v1[2];
          v70 = *(unsigned long *)(v15 + v79 + 8);
          if ( (*(unsigned long *)(v70 + v17 + 12) - *(unsigned long *)(v70 + v17 + 8)) / 40 > 5 )
          {
            v26 = v82;
          }
          else
          {
            v18 = (unsigned long long *)(v17 + v70 + 32);
            if ( v18 != *(unsigned long long **)(v15 + v79 + 12) )
            {
              v19 = (char *)v18 - 12;
              v20 = *(unsigned long long **)(v15 + v79 + 12);
              do
              {
                *(unsigned long long *)(v19 - 20) = *v18;
                sub_404AC0((int)(v19 - 12), (const int **)v19 + 5);
                v21 = *((unsigned long *)v19 + 8);
                v19 += 32;
                *((unsigned long *)v19 - 8) = v21;
                v18 += 4;
                *(unsigned long long *)(v19 - 28) = *(unsigned long long *)(v19 + 4);
              }
              while ( v18 != v20 );
              v15 = v71;
            }
            v22 = v79;
            v23 = *(unsigned long **)(v15 + v79 + 12);
            v24 = v23 - 8;
            if ( v23 - 8 != v23 )
            {
              do
              {
                v25 = (void *)v24[2];
                v24[3] = v25;
                if ( v25 )
                {
                  operator delete(v25);
                  v24[2] = 0;
                  v24[3] = 0;
                  v24[4] = 0;
                }
                v24 += 8;
              }
              while ( v24 != v23 );
              v22 = v79;
            }
            v26 = v82 - 1;
            *(unsigned long *)(v15 + v22 + 12) -= 32;
            v17 = v77 - 32;
            v1 = this;
          }
          v17 += 32;
          v82 = v26 + 1;
          v77 = v17;
        }
        while ( v26 + 1 < (*(unsigned long *)(v15 + v1[2] + 12) - *(unsigned long *)(v15 + v1[2] + 8)) >> 5 );
        v14 = v74;
      }
      ++v14;
      v15 += 56;
      v74 = v14;
      v71 = v15;
    }
    while ( v14 < (v1[3] - v1[2]) / 56 );
  }
  v80 = 0;
  if ( (v1[3] - v1[2]) / 56 )
  {
    v27 = this;
    v28 = 0;
    v83 = 0;
    while ( 1 )
    {
      v29 = v27[2];
      v75 = v29;
      if ( (int)((*(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8)) & 0xFFFFFFE0) > 64 )
        goto LABEL_52;
      v30 = 0;
      v31 = *(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8);
      v72 = 0;
      if ( v31 >= 0 && (v31 & 0xFFFFFFE0) != 0 )
      {
        v32 = *(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8);
        v33 = *(unsigned long *)(v28 + v29 + 8);
        v34 = 0;
        v35 = v33 + 8;
        do
        {
          v36 = *(unsigned long *)(v35 + 4);
          v35 += 32;
          ++v34;
          v30 = (v36 - *(unsigned long *)(v35 - 32)) / 40 + v72;
          v72 = v30;
        }
        while ( v34 < v32 >> 5 );
        v28 = v83;
        v27 = this;
        v29 = v75;
      }
      if ( (double)v30 / (double)((*(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8)) >> 5) >= 15.0 )
      {
LABEL_52:
        v46 = 0;
        v47 = *(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8);
        v73 = 0;
        if ( v47 >= 0 && (v47 & 0xFFFFFFE0) != 0 )
        {
          v48 = *(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8);
          v49 = *(unsigned long *)(v28 + v29 + 8);
          v50 = 0;
          v51 = v49 + 8;
          do
          {
            v52 = *(unsigned long *)(v51 + 4);
            v51 += 32;
            ++v50;
            v46 = (v52 - *(unsigned long *)(v51 - 32)) / 40 + v73;
            v73 = v46;
          }
          while ( v50 < v48 >> 5 );
          v28 = v83;
          v27 = this;
          v29 = v75;
        }
        if ( (double)v46 / (double)((*(unsigned long *)(v28 + v29 + 12) - *(unsigned long *)(v28 + v29 + 8)) >> 5) >= 10.0 )
        {
          v45 = v80;
          goto LABEL_66;
        }
        v53 = v27[3];
        v54 = v28 + v29 + 56;
        if ( v54 != v53 )
        {
          v55 = v28 + v29 + 56;
          v56 = v53;
          v57 = v54 - 32;
          do
          {
            sub_404C30((int *)(v57 - 16), (const int ***)(v57 + 40));
            v58 = _mm_loadu_si128((const int *)(v57 + 56));
            v55 += 56;
            v57 += 56;
            *(int *)(v57 - 56) = v58;
            *(int *)(v57 - 40) = _mm_loadu_si128((const int *)(v57 + 16));
          }
          while ( v55 != v56 );
          v28 = v83;
          v27 = this;
        }
        v69 = v27[3];
        v59 = (void ( ***)(unsigned long, unsigned long))(v69 - 56);
        if ( v69 - 56 != v69 )
        {
          v60 = (void ( ***)(unsigned long, unsigned long))v27[3];
          do
          {
            (**v59)(v59, 0);
            v59 += 14;
          }
          while ( v59 != v60 );
          v27 = this;
          v45 = v80 - 1;
          this[3] -= 56;
          v28 -= 56;
          goto LABEL_66;
        }
      }
      else
      {
        v37 = v27[3];
        v38 = v28 + v29 + 56;
        if ( v38 != v37 )
        {
          v39 = v28 + v29 + 56;
          v40 = v37;
          v41 = v38 - 32;
          do
          {
            sub_404C30((int *)(v41 - 16), (const int ***)(v41 + 40));
            v42 = _mm_loadu_si128((const int *)(v41 + 56));
            v39 += 56;
            v41 += 56;
            *(int *)(v41 - 56) = v42;
            *(int *)(v41 - 40) = _mm_loadu_si128((const int *)(v41 + 16));
          }
          while ( v39 != v40 );
          v28 = v83;
          v27 = this;
        }
        v68 = v27[3];
        v43 = (void ( ***)(unsigned long, unsigned long))(v68 - 56);
        if ( v68 - 56 != v68 )
        {
          v44 = (void ( ***)(unsigned long, unsigned long))v27[3];
          do
          {
            (**v43)(v43, 0);
            v43 += 14;
          }
          while ( v43 != v44 );
          v27 = this;
        }
      }
      v27[3] -= 56;
      v45 = v80 - 1;
      v28 -= 56;
LABEL_66:
      v28 += 56;
      v80 = v45 + 1;
      v83 = v28;
      if ( v45 + 1 >= (unsigned int)((v27[3] - v27[2]) / 56) )
      {
        v1 = this;
        break;
      }
    }
  }
  v61 = 0;
  v62 = (v1[3] - v1[2]) / 56;
  if ( v62 )
  {
    v63 = 0;
    do
    {
      sub_425400(v62, v63 + v1[2], v61++);
      v63 += 56;
      v62 = (v1[3] - v1[2]) / 56;
    }
    while ( v61 < v62 );
  }
  *((unsigned long long *)v1 + 3) = 0i64;
  v64 = 0;
  if ( (v1[3] - v1[2]) / 56 > 0 )
  {
    v65 = (unsigned long *)v1[2];
    do
    {
      v66 = sub_404E30(v65);
      if ( v66 >= *((double *)v1 + 3) )
        *((double *)v1 + 3) = v66;
      ++v64;
      v65 += 14;
    }
    while ( v64 < (v1[3] - v1[2]) / 56 );
  }
  return 1;
}

void  sub_405DC0(unsigned long long *a1, int a2)
{
  int i; 

  for ( i = a2; i; --i )
  {
    if ( a1 )
      *a1 = 0i64;
    ++a1;
  }
}

unsigned long long * sub_405DE0(unsigned long long *a1, unsigned long long *a2, unsigned long long *a3)
{
  unsigned long long *v3; 
  unsigned long long *result; 

  v3 = a1;
  for ( result = a3; v3 != a2; result += 2 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
    }
    v3 += 2;
  }
  return result;
}

int  sub_405E20( int a2, int a3, long long a4)
{
  *(unsigned long *)(this + 16) = 0;
  *(unsigned long *)(this + 20) = 0;
  *(unsigned long *)(this + 24) = 0;
  *(unsigned long *)(this + 28) = 0;
  *(unsigned long *)(this + 32) = 0;
  *(unsigned long *)(this + 36) = 0;
  *(unsigned long *)(this + 40) = 0;
  *(unsigned long *)(this + 44) = 0;
  *(unsigned long *)(this + 48) = 0;
  *(unsigned long long *)(this + 8) = a4;
  *(unsigned long *)(this + 52) = 0;
  *(unsigned long *)(this + 56) = 0;
  *(unsigned long *)(this + 60) = 0;
  sub_405EB0(this + 64, a2, a3, a4);
  return this;
}

int  sub_405EB0( int a2, int a3, long long a4)
{
  int v4; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  long long v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  double v19; 
  int v20; 
  int v21; 
  int v22; 
  double v23; 
  int v25; 
  int v26; 

  v4 = a2;
  v7 = 0;
  v25 = 0;
  *(unsigned long *)(this + 160) = a2;
  *(unsigned long long *)(this + 168) = a4;
  if ( a2 >= 0 )
  {
    v8 = a3;
    if ( a2 + 1 >= 4 )
    {
      v9 = a3 + 24;
      v10 = this + 8;
      v11 = (unsigned int)(a2 + 1) >> 2;
      v25 = 4 * v11;
      v8 = a3;
      do
      {
        v10 += 32;
        *(unsigned long long *)(v10 - 40) = *(unsigned long long *)(v9 - 24);
        v9 += 32;
        *(unsigned long long *)(v10 - 32) = *(unsigned long long *)(a3 - this + v10 - 32);
        *(unsigned long long *)(v10 - 24) = *(unsigned long long *)(v9 - 40);
        *(unsigned long long *)(v10 - 16) = *(unsigned long long *)(v9 - 32);
        --v11;
      }
      while ( v11 );
      v4 = a2;
      v7 = v25;
    }
    if ( v7 <= v4 )
    {
      v12 = this + 8 * v7;
      v13 = v4 - v25 + 1;
      do
      {
        v14 = *(unsigned long long *)(v12 + v8 - this);
        v12 += 8;
        *(unsigned long long *)(v12 - 8) = v14;
        --v13;
      }
      while ( v13 );
    }
  }
  v15 = 1;
  if ( v4 >= 4 )
  {
    v16 = this + 88;
    v26 = v4 - 3;
    v17 = 3;
    v18 = a3 + 24;
    do
    {
      v19 = (double)v15;
      v15 += 4;
      v16 += 32;
      v18 += 32;
      *(double *)(v16 - 40) = v19 * *(double *)(v18 - 48);
      v20 = v17 + 1;
      *(double *)(v16 - 32) = (double)(int)(v17 - 1) * *(double *)(v18 - 40);
      v21 = _mm_cvtsi32_si128(v17);
      v17 += 4;
      *(double *)(v16 - 24) = _mm_cvtepi32_pd(v21).m128d_f64[0] * *(double *)(v18 - 32);
      *(double *)(v16 - 16) = (double)v20 * *(double *)(v18 - 24);
    }
    while ( v15 <= v26 );
    v4 = a2;
  }
  if ( v15 <= v4 )
  {
    v22 = this + 8 * (v15 + 9);
    do
    {
      v22 += 8;
      v23 = (double)v15 * *(double *)(a3 + 8 * v15);
      ++v15;
      *(double *)(v22 - 8) = v23;
    }
    while ( v15 <= v4 );
  }
  return this;
}

void  sub_406030()
{
  if ( *(unsigned long *)(this + 52) )
  {
    operator delete(*(void **)(this + 52));
    *(unsigned long *)(this + 52) = 0;
    *(unsigned long *)(this + 56) = 0;
    *(unsigned long *)(this + 60) = 0;
  }
  if ( *(unsigned long *)(this + 40) )
  {
    operator delete(*(void **)(this + 40));
    *(unsigned long *)(this + 40) = 0;
    *(unsigned long *)(this + 44) = 0;
    *(unsigned long *)(this + 48) = 0;
  }
  if ( *(unsigned long *)(this + 28) )
  {
    operator delete(*(void **)(this + 28));
    *(unsigned long *)(this + 28) = 0;
    *(unsigned long *)(this + 32) = 0;
    *(unsigned long *)(this + 36) = 0;
  }
  if ( *(unsigned long *)(this + 16) )
  {
    operator delete(*(void **)(this + 16));
    *(unsigned long *)(this + 16) = 0;
    *(unsigned long *)(this + 20) = 0;
    *(unsigned long *)(this + 24) = 0;
  }
}

double  sub_4060D0( double a2)
{
  double v3; 
  int v4; 
  int v5; 
  double *v6; 
  double *v7; 
  double v9; 

  v3 = 0.0;
  v9 = 0.0;
  v4 = this[40] - 1;
  if ( v4 >= 0 )
  {
    if ( (int)this[40] >= 4 )
    {
      v5 = this[40] >> 2;
      v6 = (double *)&this[2 * v4 + 18];
      v4 -= 4 * v5;
      do
      {
        v3 = (((v3 * a2 + v6[1]) * a2 + *v6) * a2 + *(v6 - 1)) * a2 + *(v6 - 2);
        v6 -= 4;
        --v5;
      }
      while ( v5 );
      v9 = v3;
    }
    if ( v4 >= 0 )
    {
      v7 = (double *)&this[2 * v4 + 20];
      do
      {
        v3 = v3 * a2 + *v7--;
        --v4;
      }
      while ( v4 >= 0 );
      return v3;
    }
  }
  return v9;
}

char  sub_406170( double a2, double *a3)
{
  int v3; 
  double v4; 
  int v6; 
  double v7; 
  double v8; 
  double v9; 
  int v10; 
  double v11; 

  v3 = *this - 2;
  if ( a2 < 0.0 )
  {
    v4 = -a2 / 0.1;
    if ( v3 >= (int)v4 )
    {
      v6 = this[7];
      v8 = *(double *)(v6 + 16 * (int)v4) - a2;
      if ( (*(double *)(v6 + 16 * (int)v4 + 16) - a2) * v8 <= 0.0 )
      {
        v7 = *(double *)(v6 + 16 * (int)v4 + 16);
        *a3 = -((*(double *)(v6 + 16 * (int)v4 + 8) * (a2 - v7) + *(double *)(v6 + 16 * (int)v4 + 24) * v8)
              / (a2 - v7 + v8));
        return 1;
      }
    }
    return 0;
  }
  v9 = a2 / 0.1;
  if ( v3 < (int)(a2 / 0.1) )
    return 0;
  v10 = this[4];
  v11 = *(double *)(v10 + 16 * (int)v9 + 16) - a2;
  if ( (*(double *)(v10 + 16 * (int)v9) - a2) * v11 > 0.0 )
    return 0;
  *a3 = (*(double *)(v10 + 16 * (int)v9 + 8) * v11
       + *(double *)(v10 + 16 * (int)v9 + 24) * (a2 - *(double *)(v10 + 16 * (int)v9)))
      / (v11 + a2 - *(double *)(v10 + 16 * (int)v9));
  return 1;
}

char  sub_406280( double a2, double *a3)
{
  double v3; 
  int v4; 
  int v5; 
  unsigned int v6; 
  int v8; 
  double v9; 

  v3 = a2;
  if ( a2 >= 0.0 )
  {
    v4 = this[10];
    v5 = this[11];
  }
  else
  {
    v3 = -a2;
    v4 = this[13];
    v5 = this[14];
  }
  v6 = (int)(v3 / 0.1);
  if ( ((v5 - v4) >> 4) - 2 < v6 )
    return 0;
  v8 = 2 * v6;
  v9 = *(double *)(v4 + 8 * v8 + 16) - a2;
  *a3 = (*(double *)(v4 + 8 * v8 + 8) * v9 + *(double *)(v4 + 8 * v8 + 24) * (a2 - *(double *)(v4 + 8 * v8)))
      / (v9 + a2 - *(double *)(v4 + 8 * v8));
  return 1;
}

unsigned long long * sub_406310(int a1, int a2, int a3@<esi>)
{
  unsigned long long **v3; 
  signed int v4; 
  unsigned long *v5; 
  double v6; 
  int v7; 
  int v8; 
  unsigned long long *v9; 
  unsigned long long *v10; 
  bool v11; 
  double v12; 
  double v13; 
  int *v14; 
  double v15; 
  int v16; 
  double v17; 
  unsigned long long *result; 
  int v19; 
  int v20; 
  double *i; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  int v26; 
  int v27; 
  unsigned long long *v28; 
  double *j; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  double *v55; 
  int v56; 
  int v57; 
  int v58; 
  unsigned long *v60; 
  unsigned long long **v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  unsigned long *v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 

  v40 = a3;
  v34 = a2;
  v3 = (unsigned long long **)(a1 + 16);
  v60 = (unsigned long *)(a1 + 16);
  v4 = (int)(3.0 / *(double *)(a1 + 8) / 0.1 + 1.0);
  *(unsigned long *)a1 = v4;
  sub_4069A0((unsigned long *)(a1 + 16), v4);
  v61 = (unsigned long long **)(a1 + 28);
  sub_4069A0((unsigned long *)(a1 + 28), v4);
  v5 = v61;
  v6 = 0.0;
  **v3 = 0i64;
  **v61 = 0i64;
  if ( v4 > 1 )
  {
    v7 = a1 + 64;
    v8 = 16;
    v52 = a1 + 64;
    v62 = 1;
    v64 = v4 - 1;
    do
    {
      v6 = v6 + 0.1;
      *(double *)(v8 + *v60) = v6;
      sub_4060D0((unsigned long *)v7, *(double *)(v7 + 168) * v6);
      sub_4060D0((unsigned long *)v7, *(double *)(v7 + 168) * (v6 + 0.05));
      sub_4060D0((unsigned long *)v7, *(double *)(v7 + 168) * (v6 + 0.1));
      v9 = (unsigned long long *)*v60;
      v68 = *(double *)libm_sse2_sqrt_precise(v34, v40, v46, v52).m128_u64 * 4.0;
      v69 = v68 + *(double *)libm_sse2_sqrt_precise(v35, v41, v47, v53).m128_u64;
      *((double *)&v9[v62] + 1) = (v69 + *(double *)libm_sse2_sqrt_precise(v36, v42, v48, v54).m128_u64)
                                * 0.01666666666666667
                                + *((double *)&v9[v62 - 1] + 1);
      *(double *)&(*v61)[v62] = -v6;
      sub_4060D0(v55, -(v55[21] * v6));
      sub_4060D0(v55, -(v55[21] * (v6 + 0.05)));
      sub_4060D0(v55, -((v6 + 0.1) * v55[21]));
      v10 = *v61;
      v70 = *(double *)libm_sse2_sqrt_precise(v37, v43, v49, v55).m128_u64 * 4.0;
      v71 = v70 + *(double *)libm_sse2_sqrt_precise(v38, v44, v50, v56).m128_u64;
      *((double *)&v10[v62] + 1) = (v71 + *(double *)libm_sse2_sqrt_precise(v39, v45, v51, v57).m128_u64)
                                 * 0.01666666666666667
                                 + *((double *)&v10[v62 - 1] + 1);
      v8 = v62 * 16 + 16;
      v11 = v64-- == 1;
      v7 = v52;
      ++v62;
    }
    while ( !v11 );
    v3 = (unsigned long long **)v60;
    v5 = (unsigned long *)(a1 + 28);
  }
  v12 = *((double *)&(*v3)[v4 - 1] + 1) / 0.1 + 1.0;
  v13 = (double)(2 * v4);
  if ( v12 > v13 )
    v12 = (double)(2 * v4);
  v58 = (int)v12;
  if ( *(double *)(*v5 + 16 * v4 - 8) / 0.1 + 1.0 <= v13 )
    v13 = *(double *)(*v5 + 16 * v4 - 8) / 0.1 + 1.0;
  v63 = (int)v13;
  sub_4069A0((unsigned long *)(a1 + 40), (int)v12);
  v67 = (unsigned long *)(a1 + 52);
  sub_4069A0((unsigned long *)(a1 + 52), (int)v13);
  v14 = v60;
  v15 = 0.0;
  v16 = 1;
  v17 = 0.0;
  v65 = 1;
  *(unsigned long long *)*v60 = 0i64;
  result = *(unsigned long long **)(a1 + 28);
  *result = 0i64;
  if ( v58 > 1 )
  {
    v19 = 16;
    do
    {
      if ( v16 >= v4 )
        break;
      v20 = *v14;
      v17 = v17 + 0.1;
      for ( i = (double *)(v20 + 16 * v16 + 8); v17 > *i; ++v16 )
      {
        if ( v16 >= v4 )
          break;
        i += 2;
      }
      v22 = v17 - *(double *)(v20 + 16 * v16 - 8);
      v23 = *(double *)(v20 + 16 * v16 + 8);
      v24 = *(double *)(v20 + 16 * v16);
      v25 = *(double *)(v20 + 16 * v16 - 16);
      *(double *)(v19 + *(unsigned long *)(a1 + 40)) = v17;
      v14 = v60;
      *(double *)(v19 + *(unsigned long *)(a1 + 40) + 8) = (v22 * v24 + (v23 - v17) * v25) / (v23 - v17 + v22);
      v19 += 16;
      result = (unsigned long long *)(v65 + 1);
      v65 = (int)result;
    }
    while ( (int)result < v58 );
    v15 = 0.0;
  }
  v26 = 1;
  v66 = 1;
  if ( v63 > 1 )
  {
    v27 = 16;
    do
    {
      if ( v26 >= v4 )
        break;
      v15 = v15 + 0.1;
      v28 = *v61;
      for ( j = (double *)&(*v61)[v26] + 1; v15 > *j; ++v26 )
      {
        if ( v26 >= v4 )
          break;
        j += 2;
      }
      v30 = v15 - *((double *)&v28[v26 - 1] + 1);
      v31 = *(double *)&v28[v26 - 1];
      v32 = *(double *)&v28[v26];
      v33 = *((double *)&v28[v26] + 1);
      *(double *)(v27 + *v67) = -v15;
      *(double *)(*v67 + v27 + 8) = (v30 * v32 + (v33 - v15) * v31) / (v33 - v15 + v30);
      v27 += 16;
      result = (unsigned long long *)(v66 + 1);
      v66 = (int)result;
    }
    while ( (int)result < v63 );
  }
  return result;
}

unsigned long * sub_406840( unsigned int a2)
{
  char *v3; 
  unsigned long long *v4; 
  int v5; 
  unsigned long *result; 
  int v7; 
  unsigned long long **v8; 
  void *v9; 
  int *v10; 
  int v11; 

  v10 = &v7;
  v8 = this;
  v3 = 0;
  v9 = 0;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFF || (v3 = (char *)operator new(16 * a2), (v9 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v11 = 0;
  sub_405DE0(*this, this[1], v3);
  v4 = *this;
  v5 = (char *)this[1] - (char *)*this;
  if ( v4 )
    operator delete(v4);
  result = v8;
  v8[2] = &v3[16 * a2];
  result[1] = &v3[v5 & 0xFFFFFFF0];
  *result = v3;
  return result;
}

unsigned int  sub_406920( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v2 = *(unsigned long *)(this + 4);
  result = (*(unsigned long *)(this + 8) - v2) >> 4;
  if ( result < a2 )
  {
    v4 = (v2 - *(unsigned long *)this) >> 4;
    if ( 0xFFFFFFF - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = a2 + v4;
    v6 = (*(unsigned long *)(this + 8) - *(unsigned long *)this) >> 4;
    if ( 0xFFFFFFF - (v6 >> 1) >= v6 )
    {
      v7 = (v6 >> 1) + v6;
      if ( v7 < v5 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = v5;
    }
    return (unsigned int)sub_406840((unsigned long long **)this, v7);
  }
  return result;
}

int  sub_4069A0( unsigned int a2)
{
  int result; 
  unsigned int v4; 
  unsigned long long *v5; 
  unsigned long v6[9]; 

  v6[5] = v6;
  v6[4] = this;
  result = this[1];
  v4 = (result - *this) >> 4;
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      sub_406920((int)this, a2 - v4);
      v5 = (unsigned long long *)this[1];
      v6[8] = 0;
      sub_405DC0(v5, a2 - (((int)v5 - *this) >> 4));
      result = (this[1] - *this) >> 4;
      this[1] += 16 * (a2 - result);
    }
  }
  else
  {
    this[1] = result + 16 * (a2 - v4);
  }
  return result;
}

double  sub_406A70(
        
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  int v14; 
  double v15; 
  int v16; 
  double v17; 
  unsigned int v18; 
  double *v19; 
  double v20; 
  double v21; 
  double v22; 
  double v24; 
  double v25; 
  int v26; 

  v9 = a8;
  v10 = a7;
  v11 = a6;
  v12 = a4;
  v14 = 1;
  v26 = 1;
  v15 = *(double *)(this + 168);
  v24 = v15;
  while ( 1 )
  {
    v16 = *(unsigned long *)(this + 160);
    v17 = 0.0;
    if ( v16 >= 0 )
    {
      if ( v16 + 1 >= 4 )
      {
        v18 = (unsigned int)(v16 + 1) >> 2;
        v19 = (double *)(this - 16 + 8 * v16);
        v16 -= 4 * v18;
        do
        {
          v20 = (v12 * v11 - v10) * *(double *)(this + 168);
          v17 = (((v17 * v20 + v19[2]) * v20 + v19[1]) * v20 + *v19) * v20 + *(v19 - 1);
          v19 -= 4;
          --v18;
        }
        while ( v18 );
      }
      for ( ; v16 >= 0; --v16 )
        v17 = v17 * ((v12 * v11 - v10) * *(double *)(this + 168)) + *(double *)(this + 8 * v16);
      v14 = v26;
    }
    v25 = v17 / v15 - (v12 * v9 - a9);
    v21 = sub_4060D0((unsigned long *)this, (v12 * v11 - v10) * v15);
    v11 = a6;
    v9 = a8;
    v22 = v25 / (v21 * a6 - a8);
    a4 = a4 - v22;
    v12 = a4;
    if ( (a2 - a4) * (a4 - a3) < 0.0 )
      break;
    if ( a5 <= fabs(v22) )
    {
      v10 = a7;
      ++v14;
      v15 = v24;
      v26 = v14;
      if ( v14 <= 4000 )
        continue;
    }
    return a4;
  }
  return -50.0;
}

double * sub_406E50(double *a1, double *a2, double *a3)
{
  double *result; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  double v16; 
  int v17; 
  double v18; 
  double v19; 
  double v20; 

  v20 = a3[1] * a3[1];
  v19 = a3[2] * a3[2];
  v16 = *(double *)libm_sse2_sqrt_precise(v11, v13, v15, v17).m128_u64;
  if ( v16 >= 0.001 )
  {
    v18 = *(double *)libm_sse2_sin_precise().m128_u64;
    v6 = *(double *)libm_sse2_cos_precise(v12, v14).m128_u64;
    v7 = *a3;
    result = a2;
    v8 = (1.0 - v6) / (v16 * v16);
    v9 = (v6 * v7 - v18 * v7 / v16) / (v16 * v16);
    v10 = (v18 * v7 * v16 - (1.0 - v6) * 2.0 * v7) / (v16 * v16 * v16 * v16);
    *a2 = -((v19 + v20) * v10);
    a2[1] = a3[1] * v8 - v9 * a3[2] + a3[1] * *a3 * v10;
    a2[2] = a3[2] * v8 + v9 * a3[1] + a3[2] * *a3 * v10;
    a2[3] = a3[1] * v8 + v9 * a3[2] + a3[1] * *a3 * v10;
    a2[4] = *a3 * -2.0 * v8 - (a3[2] * a3[2] + *a3 * *a3) * v10;
    a2[5] = a3[2] * a3[1] * v10 - (*a3 * v9 + v18 / v16);
    a2[6] = a3[2] * v8 - v9 * a3[1] + a3[2] * *a3 * v10;
    a2[7] = *a3 * v9 + v18 / v16 + a3[2] * a3[1] * v10;
    a2[8] = *a3 * -2.0 * v8 - (a3[1] * a3[1] + *a3 * *a3) * v10;
  }
  else
  {
    result = a1;
    *a2 = 0.0;
    a2[1] = a1[2];
    v4 = -a1[1];
    a2[3] = 0.0;
    a2[2] = v4;
    a2[4] = a1[5];
    v5 = -a1[4];
    a2[6] = 0.0;
    a2[5] = v5;
    a2[7] = a1[8];
    a2[8] = -a1[7];
  }
  return result;
}

double * sub_407120(double *a1, double *a2, double *a3)
{
  double *result; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  double v16; 
  int v17; 
  double v18; 
  double v19; 
  double v20; 

  v19 = a3[1];
  v20 = a3[2] * a3[2];
  v16 = *(double *)libm_sse2_sqrt_precise(v11, v13, v15, v17).m128_u64;
  if ( v16 >= 0.001 )
  {
    v18 = *(double *)libm_sse2_sin_precise().m128_u64;
    v7 = *(double *)libm_sse2_cos_precise(v12, v14).m128_u64;
    result = a2;
    v8 = (1.0 - v7) / (v16 * v16);
    v9 = (v7 * v19 - v18 * v19 / v16) / (v16 * v16);
    v10 = (v18 * v19 * v16 - (1.0 - v7) * 2.0 * v19) / (v16 * v16 * v16 * v16);
    *a2 = v19 * -2.0 * v8 - (v20 + v19 * v19) * v10;
    a2[1] = *a3 * v8 - v9 * a3[2] + *a3 * a3[1] * v10;
    a2[2] = *a3 * a3[2] * v10 + v9 * a3[1] + v18 / v16;
    a2[3] = *a3 * v8 + v9 * a3[2] + *a3 * a3[1] * v10;
    a2[4] = -((*a3 * *a3 + a3[2] * a3[2]) * v10);
    a2[5] = a3[2] * v8 - *a3 * v9 + a3[2] * a3[1] * v10;
    a2[6] = *a3 * a3[2] * v10 - (v9 * a3[1] + v18 / v16);
    a2[7] = a3[2] * v8 + *a3 * v9 + a3[2] * a3[1] * v10;
    a2[8] = a3[1] * -2.0 * v8 - (*a3 * *a3 + a3[1] * a3[1]) * v10;
  }
  else
  {
    result = a2;
    v4 = -a1[2];
    a2[1] = 0.0;
    *a2 = v4;
    a2[2] = *a1;
    v5 = -a1[5];
    a2[4] = 0.0;
    a2[3] = v5;
    a2[5] = a1[3];
    v6 = -a1[8];
    a2[7] = 0.0;
    a2[6] = v6;
    a2[8] = a1[6];
  }
  return result;
}

double * sub_407400(double *a1, double *a2, double *a3)
{
  double *result; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  double v16; 
  int v17; 
  double v18; 
  double v19; 
  double v20; 

  v20 = a3[1] * a3[1];
  v19 = a3[2];
  v16 = *(double *)libm_sse2_sqrt_precise(v11, v13, v15, v17).m128_u64;
  if ( v16 >= 0.001 )
  {
    v18 = *(double *)libm_sse2_sin_precise().m128_u64;
    v7 = *(double *)libm_sse2_cos_precise(v12, v14).m128_u64;
    result = a2;
    v8 = (1.0 - v7) / (v16 * v16);
    v9 = (v7 * v19 - v18 * v19 / v16) / (v16 * v16);
    v10 = (v18 * v19 * v16 - (1.0 - v7) * 2.0 * v19) / (v16 * v16 * v16 * v16);
    *a2 = v19 * -2.0 * v8 - (v19 * v19 + v20) * v10;
    a2[1] = *a3 * a3[1] * v10 - (v9 * a3[2] + v18 / v16);
    a2[2] = *a3 * v8 + v9 * a3[1] + *a3 * a3[2] * v10;
    a2[3] = *a3 * a3[1] * v10 + v9 * a3[2] + v18 / v16;
    a2[4] = a3[2] * -2.0 * v8 - (*a3 * *a3 + a3[2] * a3[2]) * v10;
    a2[5] = a3[1] * v8 - *a3 * v9 + a3[1] * a3[2] * v10;
    a2[6] = *a3 * v8 - v9 * a3[1] + *a3 * a3[2] * v10;
    a2[7] = a3[1] * v8 + *a3 * v9 + a3[1] * a3[2] * v10;
    a2[8] = -((*a3 * *a3 + a3[1] * a3[1]) * v10);
  }
  else
  {
    result = a1;
    *a2 = a1[1];
    v4 = -*a1;
    a2[2] = 0.0;
    a2[1] = v4;
    a2[3] = a1[4];
    v5 = -a1[3];
    a2[5] = 0.0;
    a2[4] = v5;
    a2[6] = a1[7];
    v6 = -a1[6];
    a2[8] = 0.0;
    a2[7] = v6;
  }
  return result;
}

char * sub_4076E0( unsigned int a2)
{
  char *v2; 
  char *result; 
  int v5; 

  v2 = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF || (v2 = (char *)operator new(8 * a2)) == 0 )
      std::_Xbad_alloc();
  }
  memmove(v2, *(const void **)this, (*(unsigned long *)(this + 4) - *(unsigned long *)this) & 0xFFFFFFF8);
  v5 = (*(unsigned long *)(this + 4) - *(unsigned long *)this) >> 3;
  if ( *(unsigned long *)this )
    operator delete(*(void **)this);
  *(unsigned long *)this = v2;
  *(unsigned long *)(this + 8) = &v2[8 * a2];
  result = &v2[8 * v5];
  *(unsigned long *)(this + 4) = result;
  return result;
}

unsigned int  sub_407760( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v2 = this[1];
  result = (this[2] - v2) >> 3;
  if ( result < a2 )
  {
    v4 = (v2 - *this) >> 3;
    if ( 0x1FFFFFFF - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = a2 + v4;
    v6 = (this[2] - *this) >> 3;
    if ( 0x1FFFFFFF - (v6 >> 1) >= v6 )
    {
      v7 = (v6 >> 1) + v6;
      if ( v7 < v5 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = v5;
    }
    return (unsigned int)sub_4076E0((int)this, v7);
  }
  return result;
}

int  sub_4077E0( unsigned int a2)
{
  int result; 
  unsigned int v4; 
  int v5; 

  result = this[1];
  v4 = (result - *this) >> 3;
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      sub_407760(this, a2 - v4);
      v5 = (this[1] - *this) >> 3;
      if ( a2 != v5 )
        memset((void *)this[1], 0, 8 * (a2 - v5));
      result = this[1] + 8 * (a2 - ((this[1] - *this) >> 3));
      this[1] = result;
    }
  }
  else
  {
    result += 8 * (a2 - v4);
    this[1] = result;
  }
  return result;
}

unsigned long * sub_407850( int a2, int a3, int a4)
{
  void *v5; 

  this[8] = a4;
  this[6] = a2;
  *this = &CLevmarForGCM_LineGap_LS::`vftable`;
  this[7] = a3;
  this[1] = operator new[](8 * a2);
  v5 = operator new[](8 * a3);
  this[2] = v5;
  memset(v5, 0, 8 * a3);
  return this;
}

void  sub_4078C0()
{
  void *v2; 

  v2 = (void *)*((unsigned long *)this + 1);
  *(unsigned long *)this = &CLevmarForGCM_LineGap_LS::`vftable`;
  operator delete[](v2);
  operator delete[](*((void **)this + 2));
}

void * sub_4078E0( char a2)
{
  void *v4; 

  v4 = (void *)*((unsigned long *)this + 1);
  *(unsigned long *)this = &CLevmarForGCM_LineGap_LS::`vftable`;
  operator delete[](v4);
  operator delete[](*((void **)this + 2));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

int  sub_407920(int a1, int a2@<esi>, int a3, int a4, int a5, int a6, int a7)
{
  int v7; 
  int v8; 
  double v9; 
  double v10; 
  int *v11; 
  double v12; 
  double v13; 
  int v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double *v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  int v25; 
  int v26; 
  double *v27; 
  double v28; 
  double v29; 
  int v30; 
  int v31; 
  int v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  int v38; 
  double *v39; 
  double v40; 
  double v41; 
  double v42; 
  long long v43; 
  double v44; 
  int v45; 
  double *v46; 
  long long v47; 
  long long v48; 
  unsigned int v49; 
  double v50; 
  long long v51; 
  double v52; 
  int v53; 
  unsigned int v54; 
  double v55; 
  double v56; 
  long long v57; 
  double v58; 
  long long v59; 
  double v60; 
  unsigned int v61; 
  double v62; 
  long long v63; 
  double v64; 
  long long v65; 
  double v66; 
  double v67; 
  int v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  long long v77; 
  int v78; 
  double *v79; 
  long long v80; 
  long long v81; 
  unsigned int v82; 
  double v83; 
  long long v84; 
  double v85; 
  int v86; 
  unsigned int v87; 
  double v88; 
  double v89; 
  long long v90; 
  double v91; 
  long long v92; 
  double v93; 
  unsigned int v94; 
  double v95; 
  long long v96; 
  double v97; 
  long long v98; 
  double v99; 
  double v100; 
  double *v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  double v110; 
  int v111; 
  long long v112; 
  double *v113; 
  unsigned int v114; 
  double v115; 
  long long v116; 
  double v117; 
  long long v118; 
  int v119; 
  unsigned int v120; 
  double v121; 
  double v122; 
  long long v123; 
  double v124; 
  long long v125; 
  unsigned int v126; 
  double v127; 
  long long v128; 
  double v129; 
  double v130; 
  double v131; 
  int v132; 
  int v133; 
  double v134; 
  double v135; 
  double *v136; 
  double *v137; 
  double v138; 
  int result; 
  double v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  unsigned int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  int v180; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  int v185; 
  int v186; 
  double v187; 
  double v188; 
  double v189; 
  int v190; 
  double v191; 
  int v192; 
  int v193; 
  int v194; 
  double v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  int v206; 
  double v207; 
  double v208; 
  double v209; 
  double v210; 
  double v211; 
  double v212; 
  double v213; 
  double v214; 
  double v215; 
  double v216; 
  double v217; 
  int v218; 
  double v219; 
  double v220; 
  double v221; 
  double v222; 
  double v223; 
  double *v224; 
  double v225; 
  double v226; 
  double v227; 
  double v228; 
  double v229; 
  double v230; 
  double v231; 
  double v232; 
  double v233; 
  double v234; 
  double v235; 
  char v236[180]; 

  v151 = a2;
  v141 = a1;
  *(unsigned long long *)(a3 + 24) = 0i64;
  v206 = *(unsigned long *)(a7 + 32);
  sub_405EB0((int)v236, v206, a3 + 24, qword_43E0E8);
  v7 = *(unsigned long *)(a7 + 20);
  v192 = v7;
  v212 = *(double *)(v7 + 56);
  v8 = a3 + 8 * *(unsigned long *)(v7 + 204);
  v174 = v8;
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v225);
  v9 = v233;
  v10 = v227;
  v11 = (int *)(v7 + 48);
  v224 = (double *)(a3 + 64);
  if ( *(unsigned long *)(v7 + 48) < *(unsigned long *)(v7 + 52) )
    v11 = (int *)(v7 + 52);
  v161 = 0;
  v218 = *(unsigned long *)(v7 + 24);
  v12 = (double)*v11 * *(double *)(a3 + 64);
  v190 = *(unsigned long *)(v7 + 16);
  if ( v190 <= 0 )
  {
    v21 = v212;
  }
  else
  {
    v13 = -v12;
    v14 = 0;
    v15 = -v12 * v227;
    v193 = 0;
    v16 = v233 * -v12;
    v17 = v233 * v12;
    v18 = v227 * v12;
    v220 = v15;
    v204 = v16;
    v216 = v233 * v12;
    v222 = v227 * v12;
    v191 = v230 * v12;
    do
    {
      v19 = (double *)(v14 + *(unsigned long *)(v7 + 108));
      v19[2] = v13;
      v20 = sub_406A70(
              (int)v236,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              *v19 * v225 + v19[1] * v226 + v15,
              v18,
              *v19 * v231 + v19[1] * v232 + v16,
              v17);
      v21 = v212;
      v15 = v220;
      v16 = v204;
      v22 = *v19 * v228 + v19[1] * v229;
      v17 = v216;
      v23 = v19[2] * v230;
      v7 = v192;
      v18 = v222;
      v24 = (v22 + v23) * v20 - v191 - *(double *)(v8 + 8 * *(unsigned long *)(*(unsigned long *)(v192 + 120) + 4 * v161)) * v212;
      v13 = -v12;
      *(double *)(a4 + 8 * v161) = v24;
      v14 = v193 + 32;
      ++v161;
      v193 += 32;
    }
    while ( v161 < v190 );
    v9 = v233;
    v10 = v227;
  }
  v25 = *(unsigned long *)(v7 + 132);
  v162 = 0;
  if ( (*(unsigned long *)(v7 + 136) - v25) / 24 )
  {
    v26 = 0;
    v27 = (double *)(a4 + 8 * v190);
    do
    {
      ++v162;
      v28 = *(double *)(v174 + 8 * *(unsigned long *)(v26 + v25))
          - *(double *)(v174 + 8 * *(unsigned long *)(v26 + v25 + 4)) * 2.0
          + *(double *)(v174 + 8 * *(unsigned long *)(v26 + v25 + 8));
      *v27 = v28;
      v29 = *(double *)(v26 + *(unsigned long *)(v192 + 132) + 16);
      v26 += 24;
      *v27 = v29 * v21 * v28;
      v25 = *(unsigned long *)(v192 + 132);
      ++v27;
    }
    while ( v162 < (*(unsigned long *)(v192 + 136) - v25) / 24 );
    v7 = v192;
  }
  v30 = v190;
  v31 = 0;
  v175 = 0;
  v32 = v190 + v218 + (*(unsigned long *)(v7 + 136) - *(unsigned long *)(v7 + 132)) / 24;
  v163 = v32;
  if ( v218 > 0 )
  {
    v33 = v9;
    v34 = -v12;
    v35 = v9 * v12;
    v36 = -v12 * v10;
    v37 = v10 * v12;
    v219 = v33 * -v12;
    v215 = -v12;
    v213 = v36;
    v221 = v35;
    v214 = v10 * v12;
    v223 = v230 * v12;
    do
    {
      v194 = v31 + v30 + 2 * v31;
      v38 = 32 * v194;
      v39 = (double *)(32 * v194 + *(unsigned long *)(v7 + 108));
      v40 = *v39;
      v39[2] = v34;
      v41 = sub_406A70(
              (int)v236,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              v40 * v225 + v39[1] * v226 + v36,
              v37,
              v40 * v231 + v39[1] * v232 + v219,
              v35);
      v42 = 0.0;
      v43 = *(unsigned long long *)v39;
      v198 = 0.0;
      *(double *)&v43 = (*(double *)&v43 * v225 + v39[1] * v226 + v39[2] * v227) * v41 - v214;
      v202 = *(double *)&v43;
      v217 = (v228 * *v39 + v229 * v39[1] + v230 * v39[2]) * v41 - v223;
      v44 = 0.0;
      if ( v206 >= 1 )
      {
        v45 = 0;
        v47 = (unsigned long long)qword_43E0E8;
        *(double *)&v43 = *(double *)&v43 * *(double *)&qword_43E0E8;
        v46 = (double *)(a3 + 32);
        *(double *)&v47 = *(double *)&qword_43E0E8 * 0.0;
        do
        {
          v48 = v47;
          v49 = v45;
          if ( v45 < 0 )
            v49 = -v45;
          v50 = 1.0;
          while ( 1 )
          {
            if ( (v49 & 1) != 0 )
              v50 = v50 * *(double *)&v48;
            v49 >>= 1;
            if ( !v49 )
              break;
            *((unsigned long long *)&v51 + 1) = *((unsigned long long *)&v48 + 1);
            *(double *)&v51 = *(double *)&v48 * *(double *)&v48;
            v48 = v51;
          }
          if ( v45 >= 0 )
            v52 = v50;
          else
            v52 = 1.0 / v50;
          v53 = v45 + 1;
          v54 = v45;
          v55 = (double)(v45 + 1) * *v46;
          v56 = v55 * v52;
          v57 = COERCE_UNSIGNED_INT64(*(double *)&v43 * 0.5);
          v198 = v56 + v198;
          if ( v45 < 0 )
            v54 = -v45;
          v58 = 1.0;
          while ( 1 )
          {
            if ( (v54 & 1) != 0 )
              v58 = v58 * *(double *)&v57;
            v54 >>= 1;
            if ( !v54 )
              break;
            *((unsigned long long *)&v59 + 1) = *((unsigned long long *)&v57 + 1);
            *(double *)&v59 = *(double *)&v57 * *(double *)&v57;
            v57 = v59;
          }
          if ( v45 >= 0 )
            v60 = v58;
          else
            v60 = 1.0 / v58;
          v61 = v45;
          v62 = v55 * v60;
          v63 = v43;
          v42 = v62 + v42;
          if ( v45 < 0 )
            v61 = -v45;
          v64 = 1.0;
          while ( 1 )
          {
            if ( (v61 & 1) != 0 )
              v64 = v64 * *(double *)&v63;
            v61 >>= 1;
            if ( !v61 )
              break;
            *((unsigned long long *)&v65 + 1) = *((unsigned long long *)&v63 + 1);
            *(double *)&v65 = *(double *)&v63 * *(double *)&v63;
            v63 = v65;
          }
          if ( v45 >= 0 )
            v66 = v64;
          else
            v66 = 1.0 / v64;
          v47 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v45;
          ++v46;
          v44 = v55 * v66 + v44;
        }
        while ( v53 + 1 <= v206 );
      }
      v209 = *(double *)libm_sse2_sqrt_precise(v141, v151, v163, v175).m128_u64 * 4.0;
      v210 = v209 + *(double *)libm_sse2_sqrt_precise(v142, v152, v164, v176).m128_u64;
      v67 = *(double *)libm_sse2_sqrt_precise(v143, v153, v165, v177).m128_u64;
      v68 = *(unsigned long *)(v192 + 108);
      v69 = *(double *)(v38 + v68 + 32);
      v70 = v69 * v231;
      v71 = v69 * v225;
      *(double *)(v38 + v68 + 48) = v215;
      v211 = (v210 + v67) * (v202 / 6.0);
      v72 = sub_406A70(
              (int)v236,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              v71 + *(double *)(v38 + v68 + 40) * v226 + v213,
              v214,
              v70 + *(double *)(v38 + v68 + 40) * v232 + v219,
              v221);
      v73 = *(double *)(v38 + v68 + 48);
      v203 = 0.0;
      v74 = 0.0;
      v75 = 0.0;
      v76 = (*(double *)(v38 + v68 + 32) * v225 + *(double *)(v38 + v68 + 40) * v226 + v73 * v227) * v72 - v214;
      v207 = v76;
      v205 = (*(double *)(v38 + v68 + 32) * v228 + *(double *)(v38 + v68 + 40) * v229 + v73 * v230) * v72 - v223;
      if ( v206 >= 1 )
      {
        *((unsigned long long *)&v77 + 1) = 0i64;
        v80 = (unsigned long long)qword_43E0E8;
        *(double *)&v77 = v76 * *(double *)&qword_43E0E8;
        v78 = 0;
        v79 = (double *)(a3 + 32);
        *(double *)&v80 = *(double *)&qword_43E0E8 * 0.0;
        v187 = v76 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v81 = v80;
          v82 = v78;
          if ( v78 < 0 )
            v82 = -v78;
          v83 = 1.0;
          while ( 1 )
          {
            if ( (v82 & 1) != 0 )
              v83 = v83 * *(double *)&v81;
            v82 >>= 1;
            if ( !v82 )
              break;
            *((unsigned long long *)&v84 + 1) = *((unsigned long long *)&v81 + 1);
            *(double *)&v84 = *(double *)&v81 * *(double *)&v81;
            v81 = v84;
          }
          if ( v78 >= 0 )
            v85 = v83;
          else
            v85 = 1.0 / v83;
          v86 = v78 + 1;
          v87 = v78;
          v88 = (double)(v78 + 1) * *v79;
          v89 = v88 * v85;
          v90 = *(unsigned long long *)&v187;
          v203 = v89 + v203;
          if ( v78 < 0 )
            v87 = -v78;
          v91 = 1.0;
          while ( 1 )
          {
            if ( (v87 & 1) != 0 )
              v91 = v91 * *(double *)&v90;
            v87 >>= 1;
            if ( !v87 )
              break;
            *((unsigned long long *)&v92 + 1) = *((unsigned long long *)&v90 + 1);
            *(double *)&v92 = *(double *)&v90 * *(double *)&v90;
            v90 = v92;
          }
          if ( v78 >= 0 )
            v93 = v91;
          else
            v93 = 1.0 / v91;
          v94 = v78;
          v95 = v88 * v93;
          v96 = v77;
          v74 = v95 + v74;
          if ( v78 < 0 )
            v94 = -v78;
          v97 = 1.0;
          while ( 1 )
          {
            if ( (v94 & 1) != 0 )
              v97 = v97 * *(double *)&v96;
            v94 >>= 1;
            if ( !v94 )
              break;
            *((unsigned long long *)&v98 + 1) = *((unsigned long long *)&v96 + 1);
            *(double *)&v98 = *(double *)&v96 * *(double *)&v96;
            v96 = v98;
          }
          if ( v78 >= 0 )
            v99 = v97;
          else
            v99 = 1.0 / v97;
          v80 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v78;
          ++v79;
          v75 = v88 * v99 + v75;
        }
        while ( v86 + 1 <= v206 );
      }
      v199 = *(double *)libm_sse2_sqrt_precise(v144, v154, v166, v178).m128_u64 * 4.0;
      v200 = v199 + *(double *)libm_sse2_sqrt_precise(v145, v155, v167, v179).m128_u64;
      v100 = *(double *)libm_sse2_sqrt_precise(v146, v156, v168, v180).m128_u64;
      v101 = (double *)(*(unsigned long *)(v192 + 108) + 32 * (v194 + 2));
      v102 = *v101 * v231;
      v103 = *v101 * v225;
      v101[2] = v215;
      v201 = (v200 + v100) * (v207 / 6.0);
      v104 = sub_406A70(
               (int)v236,
               -4.0,
               0.0,
               -1.0,
               1.0e-10,
               v103 + v101[1] * v226 + v213,
               v214,
               v102 + v101[1] * v232 + v219,
               v221);
      v105 = v101[2];
      v106 = *v101 * v228 + v101[1] * v229;
      v107 = (*v101 * v225 + v101[1] * v226 + v105 * v227) * v104 - v214;
      v234 = v107;
      v235 = (v106 + v105 * v230) * v104 - v223;
      v108 = 0.0;
      v109 = 0.0;
      v110 = 0.0;
      if ( v206 >= 1 )
      {
        v111 = 0;
        v112 = (unsigned long long)qword_43E0E8;
        *(double *)&v112 = *(double *)&qword_43E0E8 * 0.0;
        v113 = (double *)(a3 + 32);
        v188 = v107 * *(double *)&qword_43E0E8;
        v208 = v107 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v114 = v111;
          if ( v111 < 0 )
            v114 = -v111;
          v115 = 1.0;
          while ( 1 )
          {
            if ( (v114 & 1) != 0 )
              v115 = v115 * *(double *)&v112;
            v114 >>= 1;
            if ( !v114 )
              break;
            *((unsigned long long *)&v116 + 1) = *((unsigned long long *)&v112 + 1);
            *(double *)&v116 = *(double *)&v112 * *(double *)&v112;
            v112 = v116;
          }
          if ( v111 >= 0 )
            v117 = v115;
          else
            v117 = 1.0 / v115;
          v118 = *(unsigned long long *)&v208;
          v119 = v111 + 1;
          v120 = v111;
          v121 = (double)(v111 + 1) * *v113;
          v109 = v117 * v121 + v109;
          if ( v111 < 0 )
            v120 = -v111;
          v122 = 1.0;
          while ( 1 )
          {
            if ( (v120 & 1) != 0 )
              v122 = v122 * *(double *)&v118;
            v120 >>= 1;
            if ( !v120 )
              break;
            *((unsigned long long *)&v123 + 1) = *((unsigned long long *)&v118 + 1);
            *(double *)&v123 = *(double *)&v118 * *(double *)&v118;
            v118 = v123;
          }
          if ( v111 >= 0 )
            v124 = v122;
          else
            v124 = 1.0 / v122;
          v125 = *(unsigned long long *)&v188;
          v126 = v111;
          v110 = v124 * v121 + v110;
          if ( v111 < 0 )
            v126 = -v111;
          v127 = 1.0;
          while ( 1 )
          {
            if ( (v126 & 1) != 0 )
              v127 = v127 * *(double *)&v125;
            v126 >>= 1;
            if ( !v126 )
              break;
            *((unsigned long long *)&v128 + 1) = *((unsigned long long *)&v125 + 1);
            *(double *)&v128 = *(double *)&v125 * *(double *)&v125;
            v125 = v128;
          }
          if ( v111 >= 0 )
            v129 = v127;
          else
            v129 = 1.0 / v127;
          v112 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v111;
          ++v113;
          v108 = v129 * v121 + v108;
        }
        while ( v119 + 1 <= v206 );
      }
      v195 = *(double *)libm_sse2_sqrt_precise(v147, v157, v169, v181).m128_u64 * 4.0;
      v196 = v195 + *(double *)libm_sse2_sqrt_precise(v148, v158, v170, v182).m128_u64;
      v130 = *(double *)libm_sse2_sqrt_precise(v149, v159, v171, v183).m128_u64;
      v197 = (v196 + v130) * (v234 / 6.0) * (v205 - v217) + (v211 - v201) * v235 + v201 * v217 - v205 * v211;
      v131 = *(double *)libm_sse2_sqrt_precise(v150, v160, v172, v184).m128_u64;
      v7 = v192;
      *(double *)(a4 + 8 * (v190 + v185 + (*(unsigned long *)(v192 + 136) - *(unsigned long *)(v192 + 132)) / 24)) = v197 / v131;
      v132 = v185;
      v133 = v190 + v185 + (*(unsigned long *)(v7 + 136) - *(unsigned long *)(v7 + 132)) / 24;
      *(double *)(a4 + 8 * v133) = *(double *)(a4 + 8 * v133) * *(double *)(v192 + 80);
      if ( *(unsigned char *)(*(unsigned long *)(v192 + 192) + 40 * v185 + 32) == 1 )
      {
        if ( fabs(v211 - v201) <= fabs(v217 - v205) )
          v134 = v211 - v201;
        else
          v134 = v217 - v205;
        v189 = v134;
        v135 = *(double *)libm_sse2_sqrt_precise(v141, v151, v163, v185).m128_u64;
        v132 = v186;
        *(double *)(a4 + 8 * v173) = v189 / v135;
        *(double *)(a4 + 8 * v173) = *(double *)(v192 + 72) * (v189 / v135);
        v32 = v173 + 1;
        v163 = v173 + 1;
      }
      else
      {
        v32 = v163;
      }
      v35 = v221;
      v31 = v132 + 1;
      v37 = v214;
      v34 = v215;
      v36 = v213;
      v30 = v190;
      v175 = v31;
    }
    while ( v31 < v218 );
  }
  v136 = &v235;
  v137 = &v234;
  v235 = 1.0;
  v234 = 1.0;
  if ( *v224 > 1.0 )
    v136 = (double *)(a3 + 64);
  if ( *v224 < 1.0 )
    v137 = (double *)(a3 + 64);
  v138 = *v136 / *v137;
  result = a4;
  v140 = v138 - 1.0;
  *(double *)(a4 + 8 * v32) = v140;
  *(double *)(a4 + 8 * v32) = *(double *)(v7 + 88) * v140;
  return result;
}

void  sub_4089A0(int a2, unsigned long **a3, unsigned long *a4, double a5, double a6)
{
  unsigned long *v7; 
  char *v8; 
  unsigned long *v9; 
  int v10; 
  unsigned long *v11; 
  unsigned long *v12; 
  int v13; 
  unsigned int v14; 
  unsigned long *v15; 
  int v16; 
  double v17; 
  const int *v18; 
  const int *v19; 
  int v20; 
  long long v21; 
  double *v22; 
  int v23; 
  int v24; 
  int v25; 
  double v26; 
  unsigned int v27; 
  int v28; 
  int v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  int v34; 
  int v35; 
  void *v36[2]; 
  int v37; 
  int v38; 

  v7 = (unsigned long *)a2;
  v36[0] = 0;
  v36[1] = 0;
  v37 = 0;
  v27 = this[7];
  v38 = 0;
  sub_4077E0(v36, v27);
  v8 = (char *)v36[0];
  sub_407920(a2, (int)this, this[1], (int)v36[0], this[6], this[7], (int)this);
  v9 = (unsigned long *)this[5];
  v33 = 0;
  v30 = v9[4];
  v10 = v9[6];
  v28 = (v9[34] - v9[33]) / 24;
  v34 = v10;
  v11 = *a3;
  if ( *a3 != a3[1] )
  {
    do
    {
      v31 = 0;
      v12 = (unsigned long *)(v7[2] + 8 + 56 * *v11);
      if ( (v12[1] - *v12) >> 5 )
      {
        v13 = 0;
        v35 = 0;
        do
        {
          v14 = 0;
          v15 = (unsigned long *)(v13 + *v12 + 8);
          v32 = 0;
          if ( (v15[1] - *v15) / 40 )
          {
            v16 = 0;
            do
            {
              v17 = *((double *)v36[0] + v33) * *((double *)v36[0] + v33);
              ++v33;
              if ( v17 > a5 )
              {
                v18 = (const int *)v15[1];
                v19 = (const int *)(v16 + *v15 + 40);
                if ( v19 != v18 )
                {
                  v20 = v16 + *v15;
                  do
                  {
                    v20 += 40;
                    *(int *)(v20 - 40) = _mm_loadu_si128(v19);
                    *(int *)(v20 - 24) = _mm_loadu_si128(v19 + 1);
                    v21 = v19[2].m128i_i64[0];
                    v19 = (const int *)((char *)v19 + 40);
                    *(unsigned long long *)(v20 - 8) = v21;
                  }
                  while ( v19 != v18 );
                }
                v15[1] -= 40;
                v14 = v32 - 1;
                v16 -= 40;
              }
              ++v14;
              v16 += 40;
              v32 = v14;
              v15 = (unsigned long *)(*(unsigned long *)(*(unsigned long *)(a2 + 8) + 56 * *v11 + 8) + v35 + 8);
            }
            while ( v14 < (v15[1] - *v15) / 40 );
            v13 = v35;
          }
          v13 += 32;
          v7 = (unsigned long *)a2;
          v35 = v13;
          ++v31;
          v12 = (unsigned long *)(*(unsigned long *)(a2 + 8) + 8 + 56 * *v11);
        }
        while ( v31 < (v12[1] - *v12) >> 5 );
      }
      ++v11;
    }
    while ( v11 != a3[1] );
    v8 = (char *)v36[0];
    v10 = v34;
  }
  if ( v10 > 0 )
  {
    v22 = (double *)&v8[8 * v30 + 8 * v10 + 8 * v28];
    v23 = v34;
    v24 = 0;
    do
    {
      v25 = this[5];
      if ( *(unsigned char *)(*(unsigned long *)(v25 + 192) + v24 + 32) == 1 )
      {
        v26 = *v22++;
        if ( v26 / *(double *)(v25 + 72) * (v26 / *(double *)(v25 + 72)) > a6 )
          *(unsigned char *)(v24 + *a4 + 32) = 0;
      }
      v24 += 40;
      --v23;
    }
    while ( v23 );
    v8 = (char *)v36[0];
    v7 = (unsigned long *)a2;
  }
  sub_4057B0(v7);
  if ( v8 )
    operator delete(v8);
}

char * sub_408C60(int a1, int a2@<esi>, int a3, char *a4, int a5, int a6, int a7)
{
  int v7; 
  int *v8; 
  int v9; 
  double v10; 
  double v11; 
  int v12; 
  double *v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double *v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  int v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double *v48; 
  long long v49; 
  long long v50; 
  unsigned int v51; 
  double v52; 
  long long v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  int v59; 
  int v60; 
  double v61; 
  int v62; 
  double v63; 
  double v64; 
  int v65; 
  int v66; 
  int v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  int v74; 
  double *v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  int v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  int v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  long long v103; 
  long long v104; 
  int v105; 
  double *v106; 
  long long v107; 
  long long v108; 
  unsigned int v109; 
  double v110; 
  long long v111; 
  double v112; 
  long long v113; 
  int v114; 
  unsigned int v115; 
  double v116; 
  double v117; 
  long long v118; 
  double v119; 
  long long v120; 
  unsigned int v121; 
  double v122; 
  long long v123; 
  double v124; 
  double v125; 
  double v126; 
  double v127; 
  int v128; 
  double *v129; 
  double v130; 
  unsigned int v131; 
  double v132; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  int v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  int v149; 
  long long v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  long long v155; 
  int v156; 
  double *v157; 
  long long v158; 
  long long v159; 
  unsigned int v160; 
  double v161; 
  long long v162; 
  double v163; 
  long long v164; 
  int v165; 
  unsigned int v166; 
  double v167; 
  double v168; 
  long long v169; 
  double v170; 
  long long v171; 
  unsigned int v172; 
  double v173; 
  long long v174; 
  double v175; 
  double v176; 
  int v177; 
  double *v178; 
  double v179; 
  unsigned int v180; 
  double v181; 
  double v182; 
  double v183; 
  double v184; 
  double *v185; 
  double v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  double v193; 
  double v194; 
  int v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  double v208; 
  double v209; 
  double v210; 
  long long v211; 
  double v212; 
  double v213; 
  double v214; 
  int v215; 
  double *v216; 
  long long v217; 
  long long v218; 
  unsigned int v219; 
  double v220; 
  long long v221; 
  double v222; 
  long long v223; 
  int v224; 
  unsigned int v225; 
  double v226; 
  double v227; 
  long long v228; 
  double v229; 
  long long v230; 
  unsigned int v231; 
  double v232; 
  long long v233; 
  double v234; 
  double v235; 
  double v236; 
  int v237; 
  double *v238; 
  double v239; 
  unsigned int v240; 
  double v241; 
  double v242; 
  double v243; 
  double v244; 
  double v245; 
  double v246; 
  double v247; 
  double v248; 
  double v249; 
  char *v250; 
  int v251; 
  double v252; 
  double v253; 
  double v254; 
  double v255; 
  double v256; 
  int v257; 
  double v258; 
  double v259; 
  double v260; 
  double v261; 
  double *v262; 
  unsigned int v263; 
  long long v264; 
  long long v265; 
  double v266; 
  long long v267; 
  double v268; 
  unsigned int v269; 
  double v270; 
  double v271; 
  long long v272; 
  double v273; 
  unsigned int v274; 
  double v275; 
  double v276; 
  double v277; 
  double v278; 
  double v279; 
  unsigned int v280; 
  double v281; 
  double v282; 
  double v283; 
  unsigned int v284; 
  double v285; 
  double v286; 
  double v287; 
  double v288; 
  double v289; 
  double v290; 
  unsigned int v291; 
  double v292; 
  double v293; 
  double v294; 
  double v295; 
  double v296; 
  double v297; 
  double v298; 
  double v299; 
  int v300; 
  double v301; 
  double v302; 
  double v303; 
  int v304; 
  char *v305; 
  double v306; 
  int v307; 
  double *v308; 
  unsigned int v309; 
  double v310; 
  double v311; 
  double v312; 
  double v313; 
  unsigned int v314; 
  double v315; 
  double v316; 
  double v317; 
  unsigned int v318; 
  double v319; 
  double v320; 
  double v321; 
  double v322; 
  double v323; 
  double v324; 
  unsigned int v325; 
  double v326; 
  double v327; 
  double v328; 
  double v329; 
  double v330; 
  double v331; 
  double v332; 
  double v333; 
  double v334; 
  double v335; 
  char *result; 
  int v337; 
  int v338; 
  int v339; 
  int v340; 
  int v341; 
  int v342; 
  int v343; 
  int v344; 
  int v345; 
  int v346; 
  int v347; 
  int v348; 
  int v349; 
  int v350; 
  int v351; 
  int v352; 
  int v353; 
  int v354; 
  int v355; 
  int v356; 
  int v357; 
  int v358; 
  int v359; 
  int v360; 
  int v361; 
  int v362; 
  double v363; 
  int v364; 
  int v365; 
  int v366; 
  double v367; 
  int v368; 
  int v369; 
  int v370; 
  double v371; 
  int v372; 
  int v373; 
  int v374; 
  int v375; 
  double v376; 
  int v377; 
  int v378; 
  int v379; 
  int v380; 
  int v381; 
  int v382; 
  int v383; 
  int v384; 
  int v385; 
  int v386; 
  int v387; 
  double v388; 
  double v389; 
  double v390; 
  int v391; 
  unsigned int v392; 
  int v393; 
  unsigned long long v394; 
  double v395; 
  double v396; 
  double v397; 
  double v398; 
  double v399; 
  double v400; 
  double v401; 
  double v402; 
  double v403; 
  double v404; 
  double v405; 
  double v406; 
  double v407; 
  double v408; 
  double v409; 
  double v410; 
  double v411; 
  double v412; 
  double v413; 
  double v414; 
  double v415; 
  double v416; 
  int v417; 
  double v418; 
  double v419; 
  double v420; 
  double v421; 
  double v422; 
  double v423; 
  double v424; 
  double v425; 
  double v426; 
  double v427; 
  double v428; 
  double v429; 
  double v430; 
  double v431; 
  double v432; 
  double v433; 
  int v434; 
  double v435; 
  double v436; 
  double v437; 
  double v438; 
  long long v439; 
  int v440; 
  int v441; 
  double v442; 
  double v443; 
  double v444; 
  double v445; 
  double v446; 
  double v447; 
  double v448; 
  double v449; 
  double v450; 
  double v451; 
  double v452; 
  int v453; 
  int v454; 
  double v455; 
  double v456; 
  double v457; 
  double v458; 
  double v459; 
  double v460; 
  double v461; 
  double v462; 
  double v463; 
  double v464; 
  double v465; 
  double v466; 
  double v467; 
  double v468; 
  double v469; 
  double v470; 
  double v471; 
  double v472; 
  double v473; 
  double v474; 
  double v475; 
  double v476; 
  double v477; 
  double v478; 
  double v479; 
  double v480; 
  double v481; 
  int v482; 
  double *v483; 
  double v484; 
  double v485; 
  double v486; 
  double v487; 
  double v488; 
  double v489; 
  double v490; 
  double v491; 
  double v492; 
  double v493; 
  double v494; 
  double v495; 
  double v496; 
  double v497; 
  double v498; 
  double v499; 
  double v500; 
  double v501; 
  double v502; 
  double v503; 
  double v504; 
  double v505; 
  double v506; 
  double v507; 
  double v508; 
  double v509; 
  double v510; 
  double v511; 
  double v512; 
  double v513; 
  double v514; 
  double v515; 
  double v516; 
  int v517; 
  double v518; 
  double v519; 
  int v520; 
  double v521; 
  unsigned long long v522; 
  double v523; 
  double v524; 
  double v525; 
  double v526; 
  double v527; 
  double v528; 
  double v529; 
  double v530; 
  double v531; 
  double v532; 
  double v533; 
  double v534; 
  double v535; 
  double v536; 
  double v537; 
  double v538; 
  double v539; 
  double v540; 
  double v541; 
  double v542; 
  double v543; 
  double v544; 
  double v545; 
  double v546; 
  double v547; 
  double v548; 
  double v549; 
  double v550; 
  double v551; 
  double v552; 
  double v553; 
  double v554; 
  double v555; 
  double v556; 
  double v557; 
  double v558; 
  double v559; 
  double v560; 
  double v561; 
  double v562; 
  double v563; 
  double v564; 
  double v565; 
  double v566; 
  double v567; 
  double v568; 
  double v569; 
  double v570; 
  unsigned long v571[40]; 
  int v572; 
  double v573; 

  v350 = a2;
  v337 = a1;
  *(unsigned long long *)(a3 + 24) = 0i64;
  v391 = *(unsigned long *)(a7 + 32);
  sub_405EB0((int)v571, v391, a3 + 24, qword_43E0E8);
  v7 = *(unsigned long *)(a7 + 20);
  v434 = v7;
  v489 = *(double *)(v7 + 56);
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v492);
  v8 = (int *)(v7 + 48);
  if ( *(unsigned long *)(v7 + 48) < *(unsigned long *)(v7 + 52) )
    v8 = (int *)(v7 + 52);
  v416 = (double)*v8;
  v510 = *(double *)(a3 + 64) * v416;
  sub_406E50(&v492, &v527, (double *)a3);
  sub_407120(&v492, &v545, (double *)a3);
  sub_407400(&v492, &v536, (double *)a3);
  memset(a4, 0, 8 * a6 * a5);
  v9 = *(unsigned long *)(v7 + 24);
  v482 = *(unsigned long *)(v7 + 204);
  v387 = 0;
  v520 = *(unsigned long *)(v7 + 16);
  v517 = v9;
  v440 = 0;
  v10 = v494;
  if ( v520 > 0 )
  {
    v11 = -v510;
    v12 = 0;
    v13 = (double *)(a4 + 16);
    v14 = v494 * v510;
    v453 = 0;
    v15 = v494 * -v510;
    v410 = v553 * v510;
    v16 = v500 * v510;
    v17 = v500 * -v510;
    v412 = v547 * v510;
    v402 = -v510;
    v477 = v15;
    v514 = v494 * v510;
    v509 = v544 * v510;
    v519 = v17;
    v518 = v500 * v510;
    v422 = v538 * v510;
    v427 = v500 * v416;
    v448 = v494 * v416;
    v435 = v535 * v510;
    v456 = v529 * v510;
    v505 = v532 * v510;
    v506 = v550 * v510;
    v523 = v541 * v510;
    v419 = v497 * v416;
    do
    {
      v18 = (double *)(v12 + *(unsigned long *)(v7 + 108));
      v19 = v493 * v18[1];
      v20 = v492 * *v18;
      v18[2] = v11;
      v21 = v20 + v19;
      v22 = v499 * v18[1];
      v23 = v21 + v15;
      v24 = v498 * *v18;
      v501 = v23;
      v444 = v24 + v22 + v17;
      v388 = sub_406A70((int)v571, -4.0, 0.0, -1.0, 1.0e-10, v23, v14, v444, v16);
      v502 = v388 * v501 - v514;
      v25 = sub_4060D0(v571, v573 * v502);
      v26 = v18[1];
      v27 = *v18;
      v28 = v18[2];
      v445 = v444 - v25 * v501;
      v29 = -(((v551 * v27 + v552 * v26 + v553 * v28) * v388
             - v410
             - ((v545 * v27 + v546 * v26 + v547 * v28) * v388 - v412) * v25)
            / v445);
      v406 = -(((v542 * v27 + v543 * v26 + v544 * v28) * v388
              - v509
              - ((v536 * v27 + v537 * v26 + v538 * v28) * v388 - v422) * v25)
             / v445);
      v501 = -((-(v500 * v388 * v416) - v427 - (-(v494 * v388 * v416) - v448) * v25) / v445);
      v30 = -(((v533 * v27 + v534 * v26 + v535 * v28) * v388
             - v435
             - ((v527 * v27 + v528 * v26 + v529 * v28) * v388 - v456) * v25)
            / v445);
      v31 = v495 * v27 + v496 * v26 + v497 * v28;
      v32 = v531 * v26;
      v33 = v388;
      v34 = v30 * v31;
      v35 = v530 * v27 + v32;
      v36 = v532 * v28;
      v37 = v495;
      *(v13 - 2) = v34 + (v35 + v36) * v388 - v505;
      v38 = 1;
      v39 = (v37 * *v18 + v496 * v18[1] + v497 * v18[2]) * v29;
      v40 = v497;
      v41 = v496;
      v42 = v539;
      *(v13 - 1) = v39 + (v548 * *v18 + v549 * v18[1] + v550 * v18[2]) * v388 - v506;
      v43 = v18[2];
      v44 = (v495 * *v18 + v41 * v18[1] + v40 * v43) * v406;
      v45 = v42 * *v18 + v540 * v18[1] + v541 * v43;
      v13[1] = 0.0;
      v46 = v496;
      *v13 = v44 + v45 * v388 - v523;
      v47 = v495 * *v18 + v46 * v18[1] + v18[2] * v40;
      if ( v391 >= 1 )
      {
        v48 = v13 + 2;
        v49 = *(unsigned long long *)&v502;
        do
        {
          *((unsigned long long *)&v50 + 1) = *((unsigned long long *)&v49 + 1);
          *(double *)&v50 = *(double *)&v49 * *(double *)&qword_43E0E8;
          v51 = v38;
          if ( v38 < 0 )
            v51 = -v38;
          v52 = 1.0;
          while ( 1 )
          {
            if ( (v51 & 1) != 0 )
              v52 = v52 * *(double *)&v50;
            v51 >>= 1;
            if ( !v51 )
              break;
            *((unsigned long long *)&v53 + 1) = *((unsigned long long *)&v50 + 1);
            *(double *)&v53 = *(double *)&v50 * *(double *)&v50;
            v50 = v53;
          }
          if ( v38 >= 0 )
            v54 = v52;
          else
            v54 = 1.0 / v52;
          ++v38;
          *v48++ = v54 / *(double *)&qword_43E0E8 / v445 * v47;
        }
        while ( v38 <= v391 );
        v33 = v388;
      }
      v14 = v514;
      v15 = v477;
      v55 = v495 * *v18 + v496 * v18[1];
      v56 = v18[2] * v40;
      v7 = v434;
      v57 = v55 + v56;
      v58 = v40 * v33;
      v17 = v519;
      v16 = v518;
      v13[6] = v57 * v501 - v58 * v416 - v419;
      v11 = v402;
      v59 = *(unsigned long *)(*(unsigned long *)(v434 + 120) + 4 * v440++);
      *(double *)&a4[8 * v387 + 8 * v482 + 8 * v59] = v489 * -1.0;
      v387 += a5;
      v13 += a5;
      v12 = v453 + 32;
      v453 += 32;
    }
    while ( v440 < v520 );
    v10 = v494;
  }
  v60 = *(unsigned long *)(v7 + 132);
  v392 = 0;
  if ( (*(unsigned long *)(v7 + 136) - v60) / 24 )
  {
    v61 = v489;
    v62 = 0;
    do
    {
      v63 = *(double *)(v60 + v62 + 16);
      v62 += 24;
      v64 = v63 * v61;
      ++v392;
      *(double *)&a4[8 * v387 + 8 * v482 + 8 * *(unsigned long *)(v60 + v62 - 24)] = v63 * v61;
      *(double *)&a4[8 * v387 + 8 * v482 + 8 * *(unsigned long *)(v62 + *(unsigned long *)(v434 + 132) - 20)] = v489 * -2.0 * v63;
      v61 = v489;
      v65 = v387 + v482 + *(unsigned long *)(v62 + *(unsigned long *)(v434 + 132) - 16);
      v387 += a5;
      *(double *)&a4[8 * v65] = v64;
      v60 = *(unsigned long *)(v434 + 132);
    }
    while ( v392 < (*(unsigned long *)(v434 + 136) - v60) / 24 );
    v7 = v434;
  }
  v66 = 0;
  v441 = 0;
  v67 = v387 + a5 * v517;
  v393 = v67;
  if ( v517 > 0 )
  {
    v68 = v510;
    v69 = -v510;
    v70 = v10 * -v510;
    v71 = v10 * v510;
    v72 = v500 * v510;
    v73 = v500 * -v510;
    v510 = v69;
    v554 = v72;
    v514 = v70;
    v486 = v71;
    v501 = v500 * v69;
    v508 = v529 * v68;
    v558 = v535 * v68;
    v507 = v547 * v68;
    v557 = v553 * v68;
    v513 = v538 * v68;
    v559 = v544 * v68;
    v515 = v494 * v416;
    v561 = v500 * v416;
    v556 = v532 * v68;
    v555 = v550 * v68;
    v560 = v541 * v68;
    v518 = v497 * v416;
    v519 = v497 * v68;
    do
    {
      v74 = v66 + v520 + 2 * v66;
      v75 = (double *)(32 * v74 + *(unsigned long *)(v7 + 108));
      v454 = 32 * v74;
      v483 = v75;
      v76 = *v75;
      v77 = v75[1] * v493;
      v78 = v75[1] * v499;
      v75[2] = v69;
      v420 = v76 * v492 + v77 + v70;
      v490 = v76 * v498 + v78 + v73;
      v79 = sub_406A70((int)v571, -4.0, 0.0, -1.0, 1.0e-10, v420, v71, v490, v554);
      v80 = v75[1];
      v81 = *v75;
      v82 = v75[2];
      v502 = v80;
      v423 = (v527 * v81 + v528 * v80 + v529 * v82) * v79;
      v83 = (v81 * v533 + v80 * v534 + v82 * v535) * v79 - v558;
      v428 = (v545 * v81 + v546 * v80 + v547 * v82) * v79;
      v84 = v572 - 1;
      v85 = (v81 * v551 + v80 * v552 + v82 * v553) * v79 - v557;
      v449 = (v536 * v81 + v537 * v80 + v538 * v82) * v79;
      v86 = v81;
      v87 = 0.0;
      v88 = (v86 * v542 + v80 * v543 + v82 * v544) * v79 - v559;
      v509 = -(v494 * v79 * v416) - v515;
      v89 = v79 * v420 - v486;
      *(double *)&v522 = v89;
      if ( v572 - 1 >= 0 )
      {
        if ( v572 >= 4 )
        {
          do
          {
            v87 = (((v87 * (v573 * *(double *)&v522) + *(double *)&v571[2 * v84 + 20]) * (v573 * *(double *)&v522)
                  + *(double *)&v571[2 * v84 + 18])
                 * (v573
                  * *(double *)&v522)
                 + *(double *)&v571[2 * v84 + 16])
                * (v573
                 * *(double *)&v522)
                + *(double *)&v571[2 * v84 + 14];
            v84 -= 4;
          }
          while ( v84 >= 3 );
          v89 = *(double *)&v522;
        }
        for ( ; v84 >= 0; --v84 )
          v87 = v87 * (v573 * v89) + *(double *)&v571[2 * v84 + 20];
        v80 = v502;
      }
      v491 = v490 - v87 * v420;
      v90 = -((v83 - v87 * (v423 - v508)) / v491);
      v91 = -((v85 - v87 * (v428 - v507)) / v491);
      v92 = -((v88 - v87 * (v449 - v513)) / v491);
      v93 = -((-(v500 * v79 * v416) - v561 - v87 * v509) / v491);
      *(double *)&v394 = *v75 * v492 + v80 * v493 + v75[2] * v494;
      v413 = *(double *)&v394 * v90 + v423 - v508;
      v424 = *(double *)&v394 * v91 + v428 - v507;
      v94 = *(double *)&v394 * v92 + v449 - v513;
      v450 = *(double *)&v394 * v93 - v494 * v79 * v416 - v515;
      v429 = v94;
      v399 = v495 * *v75 + v496 * v80 + v497 * v75[2];
      v465 = (v530 * *v75 + v531 * v80 + v532 * v75[2]) * v79 + v399 * v90 - v556;
      v442 = (v548 * *v75 + v549 * v80 + v550 * v75[2]) * v79 + v399 * v91 - v555;
      v95 = v399 * v93;
      v96 = v539 * *v75 + v540 * v75[1];
      v97 = v541 * v75[2];
      v98 = v391;
      v99 = (v96 + v97) * v79 + v399 * v92;
      v400 = v399 * v79 - v519;
      v446 = v99 - v560;
      v363 = 0.0;
      v103 = v394;
      v100 = 0.0;
      v101 = 0.0;
      v102 = 0.0;
      *(double *)&v103 = *(double *)&v394 * v79 - v486;
      v502 = v95 - v497 * v79 * v416 - v518;
      v395 = *(double *)&v103;
      if ( v391 >= 1 )
      {
        *((unsigned long long *)&v104 + 1) = *((unsigned long long *)&v103 + 1);
        *(double *)&v104 = *(double *)&v103 * *(double *)&qword_43E0E8;
        *((unsigned long long *)&v107 + 1) = 0i64;
        v105 = 0;
        v106 = (double *)(a3 + 32);
        *(double *)&v107 = *(double *)&qword_43E0E8 * 0.0;
        v407 = *(double *)&v103 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v108 = v107;
          v109 = v105;
          if ( v105 < 0 )
            v109 = -v105;
          v110 = 1.0;
          while ( 1 )
          {
            if ( (v109 & 1) != 0 )
              v110 = v110 * *(double *)&v108;
            v109 >>= 1;
            if ( !v109 )
              break;
            *((unsigned long long *)&v111 + 1) = *((unsigned long long *)&v108 + 1);
            *(double *)&v111 = *(double *)&v108 * *(double *)&v108;
            v108 = v111;
          }
          if ( v105 >= 0 )
            v112 = v110;
          else
            v112 = 1.0 / v110;
          v113 = *(unsigned long long *)&v407;
          v114 = v105 + 1;
          v115 = v105;
          v116 = (double)(v105 + 1) * *v106;
          v101 = v112 * v116 + v101;
          if ( v105 < 0 )
            v115 = -v105;
          v117 = 1.0;
          while ( 1 )
          {
            if ( (v115 & 1) != 0 )
              v117 = v117 * *(double *)&v113;
            v115 >>= 1;
            if ( !v115 )
              break;
            *((unsigned long long *)&v118 + 1) = *((unsigned long long *)&v113 + 1);
            *(double *)&v118 = *(double *)&v113 * *(double *)&v113;
            v113 = v118;
          }
          if ( v105 >= 0 )
            v119 = v117;
          else
            v119 = 1.0 / v117;
          v120 = v104;
          v121 = v105;
          v100 = v119 * v116 + v100;
          if ( v105 < 0 )
            v121 = -v105;
          v122 = 1.0;
          while ( 1 )
          {
            if ( (v121 & 1) != 0 )
              v122 = v122 * *(double *)&v120;
            v121 >>= 1;
            if ( !v121 )
              break;
            *((unsigned long long *)&v123 + 1) = *((unsigned long long *)&v120 + 1);
            *(double *)&v123 = *(double *)&v120 * *(double *)&v120;
            v120 = v123;
          }
          if ( v105 >= 0 )
            v124 = v122;
          else
            v124 = 1.0 / v122;
          v107 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v105;
          ++v106;
          v125 = v124 * v116 + v102;
          v102 = v125;
        }
        while ( v114 + 1 <= v391 );
        v98 = v391;
        v363 = v125;
      }
      v462 = *(double *)libm_sse2_sqrt_precise(v337, v350, LODWORD(v363), HIDWORD(v363)).m128_u64 * 4.0;
      v463 = v462 + *(double *)libm_sse2_sqrt_precise(v338, v351, v364, v377).m128_u64;
      v126 = 0.0;
      v464 = (v463 + *(double *)libm_sse2_sqrt_precise(v339, v352, v365, v378).m128_u64) * (v395 / 6.0);
      if ( v98 >= 1 )
      {
        v127 = v395 * *(double *)&qword_43E0E8;
        v128 = 0;
        v129 = (double *)(a3 + 32);
        v396 = v395 * *(double *)&qword_43E0E8;
        do
        {
          v130 = v127;
          v131 = v128;
          if ( v128 < 0 )
            v131 = -v128;
          v132 = 1.0;
          while ( 1 )
          {
            if ( (v131 & 1) != 0 )
              v132 = v132 * v130;
            v131 >>= 1;
            if ( !v131 )
              break;
            v130 = v130 * v130;
          }
          if ( v128 >= 0 )
            v133 = v132;
          else
            v133 = 1.0 / v132;
          v127 = v396;
          v134 = (double)++v128 * *v129++;
          v126 = v126 + v134 * v133;
        }
        while ( v128 + 1 <= v98 );
      }
      v509 = *(double *)libm_sse2_sqrt_precise(v340, v353, v366, v379).m128_u64;
      v417 = *(unsigned long *)(v434 + 108);
      v523 = v509 * v413;
      v135 = *(double *)(v454 + v417 + 32);
      v136 = v135 * v498;
      v506 = v509 * v424;
      v137 = v135 * v492;
      v505 = v509 * v429;
      v138 = *(double *)(v454 + v417 + 40);
      v451 = v509 * v450;
      *(double *)(v454 + v417 + 48) = v510;
      v403 = v137 + v138 * v493 + v514;
      v397 = v136 + v138 * v499 + v501;
      v460 = sub_406A70((int)v571, -4.0, 0.0, -1.0, 1.0e-10, v403, v486, v397, v554);
      v139 = *(double *)(v454 + v417 + 40);
      v140 = *(double *)(v454 + v417 + 48);
      v389 = *(double *)(v454 + v417 + 32);
      v478 = (v389 * v527 + v139 * v528 + v140 * v529) * v460;
      v141 = v572 - 1;
      v430 = (v389 * v545 + v139 * v546 + v140 * v547) * v460;
      v436 = (v389 * v536 + v139 * v537 + v140 * v538) * v460;
      v142 = 0.0;
      v143 = v460 * v403 - v486;
      v421 = v143;
      if ( v572 - 1 >= 0 )
      {
        if ( v572 >= 4 )
        {
          do
          {
            v142 = (((v142 * (v573 * v143) + *(double *)&v571[2 * v141 + 20]) * (v573 * v143)
                   + *(double *)&v571[2 * v141 + 18])
                  * (v573
                   * v143)
                  + *(double *)&v571[2 * v141 + 16])
                 * (v573
                  * v143)
                 + *(double *)&v571[2 * v141 + 14];
            v141 -= 4;
          }
          while ( v141 >= 3 );
          v143 = v460 * v403 - v486;
        }
        for ( ; v141 >= 0; --v141 )
          v142 = v142 * (v573 * v143) + *(double *)&v571[2 * v141 + 20];
      }
      v398 = v397 - v142 * v403;
      v144 = -(((v389 * v533 + v139 * v534 + v140 * v535) * v460 - v558 - v142 * (v478 - v508)) / v398);
      v145 = -(((v389 * v551 + v139 * v552 + v140 * v553) * v460 - v557 - v142 * (v430 - v507)) / v398);
      v146 = -(((v389 * v542 + v139 * v543 + v140 * v544) * v460 - v559 - v142 * (v436 - v513)) / v398);
      v147 = -(v500 * v460 * v416) - v561 - v142 * (-(v494 * v460 * v416) - v515);
      v150 = *(unsigned long long *)&v389;
      v487 = -(v147 / v398);
      v425 = (v389 * v492 + v139 * v493 + v140 * v494) * v144 + v478 - v508;
      v431 = (v389 * v492 + v139 * v493 + v140 * v494) * v145 + v430 - v507;
      v437 = (v389 * v492 + v139 * v493 + v140 * v494) * v146 + v436 - v513;
      v457 = (v389 * v492 + v139 * v493 + v140 * v494) * v487 - v494 * v460 * v416 - v515;
      v148 = v389 * v495 + v139 * v496 + v140 * v497;
      v149 = v391;
      v504 = (v389 * v530 + v139 * v531 + v140 * v532) * v460 + v144 * v148 - v556;
      v521 = v389 * v548 + v139 * v549 + v140 * v550;
      *(double *)&v150 = (v389 * v492 + v139 * v493 + v140 * v494) * v460 - v486;
      v414 = *(double *)&v150;
      v521 = v521 * v460 + v145 * v148 - v555;
      v390 = (v389 * v539 + v139 * v540 + v140 * v541) * v460 + v146 * v148 - v560;
      v151 = v460 * v497 * v416;
      v461 = v460 * v148 - v519;
      v152 = 0.0;
      v153 = 0.0;
      v367 = 0.0;
      v488 = v487 * v148 - v151 - v518;
      v154 = 0.0;
      if ( v391 >= 1 )
      {
        *((unsigned long long *)&v155 + 1) = *((unsigned long long *)&v150 + 1);
        *(double *)&v155 = *(double *)&v150 * *(double *)&qword_43E0E8;
        *((unsigned long long *)&v158 + 1) = 0i64;
        v156 = 0;
        v157 = (double *)(a3 + 32);
        *(double *)&v158 = *(double *)&qword_43E0E8 * 0.0;
        v408 = *(double *)&v150 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v159 = v158;
          v160 = v156;
          if ( v156 < 0 )
            v160 = -v156;
          v161 = 1.0;
          while ( 1 )
          {
            if ( (v160 & 1) != 0 )
              v161 = v161 * *(double *)&v159;
            v160 >>= 1;
            if ( !v160 )
              break;
            *((unsigned long long *)&v162 + 1) = *((unsigned long long *)&v159 + 1);
            *(double *)&v162 = *(double *)&v159 * *(double *)&v159;
            v159 = v162;
          }
          if ( v156 >= 0 )
            v163 = v161;
          else
            v163 = 1.0 / v161;
          v164 = *(unsigned long long *)&v408;
          v165 = v156 + 1;
          v166 = v156;
          v167 = (double)(v156 + 1) * *v157;
          v152 = v163 * v167 + v152;
          if ( v156 < 0 )
            v166 = -v156;
          v168 = 1.0;
          while ( 1 )
          {
            if ( (v166 & 1) != 0 )
              v168 = v168 * *(double *)&v164;
            v166 >>= 1;
            if ( !v166 )
              break;
            *((unsigned long long *)&v169 + 1) = *((unsigned long long *)&v164 + 1);
            *(double *)&v169 = *(double *)&v164 * *(double *)&v164;
            v164 = v169;
          }
          if ( v156 >= 0 )
            v170 = v168;
          else
            v170 = 1.0 / v168;
          v171 = v155;
          v172 = v156;
          v153 = v170 * v167 + v153;
          if ( v156 < 0 )
            v172 = -v156;
          v173 = 1.0;
          while ( 1 )
          {
            if ( (v172 & 1) != 0 )
              v173 = v173 * *(double *)&v171;
            v172 >>= 1;
            if ( !v172 )
              break;
            *((unsigned long long *)&v174 + 1) = *((unsigned long long *)&v171 + 1);
            *(double *)&v174 = *(double *)&v171 * *(double *)&v171;
            v171 = v174;
          }
          if ( v156 >= 0 )
            v175 = v173;
          else
            v175 = 1.0 / v173;
          ++v156;
          ++v157;
          v154 = v154 + v175 * v167;
          v158 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
        }
        while ( v165 + 1 <= v391 );
        v149 = v391;
        v367 = v152;
      }
      v470 = *(double *)libm_sse2_sqrt_precise(v341, v354, LODWORD(v367), HIDWORD(v367)).m128_u64 * 4.0;
      v471 = v470 + *(double *)libm_sse2_sqrt_precise(v342, v355, v368, v380).m128_u64;
      v176 = 0.0;
      v472 = (v471 + *(double *)libm_sse2_sqrt_precise(v343, v356, v369, v381).m128_u64) * (v414 / 6.0);
      if ( v149 >= 1 )
      {
        v177 = 0;
        v178 = (double *)(a3 + 32);
        do
        {
          v179 = v414 * *(double *)&qword_43E0E8;
          v180 = v177;
          if ( v177 < 0 )
            v180 = -v177;
          v181 = 1.0;
          while ( 1 )
          {
            if ( (v180 & 1) != 0 )
              v181 = v181 * v179;
            v180 >>= 1;
            if ( !v180 )
              break;
            v179 = v179 * v179;
          }
          if ( v177 >= 0 )
            v182 = v181;
          else
            v182 = 1.0 / v181;
          v183 = (double)++v177 * *v178++;
          v176 = v176 + v183 * v182;
        }
        while ( v177 + 1 <= v149 );
      }
      v184 = *(double *)libm_sse2_sqrt_precise(v344, v357, v370, v382).m128_u64;
      v185 = (double *)(*(unsigned long *)(v434 + 108) + 32 * (v74 + 2));
      v409 = v184;
      v564 = v184 * v425;
      v186 = v492 * *v185;
      v187 = v498 * *v185;
      v563 = v184 * v431;
      v188 = v184 * v437;
      v516 = v184 * v457;
      v185[2] = v510;
      v189 = v493 * v185[1];
      v565 = v188;
      v404 = v186 + v189 + v514;
      v503 = v187 + v499 * v185[1] + v501;
      v190 = sub_406A70((int)v571, -4.0, 0.0, -1.0, 1.0e-10, v404, v486, v503, v554);
      v191 = v185[1];
      v192 = *v185;
      v193 = v185[2];
      v432 = (v527 * *v185 + v528 * v191 + v529 * v193) * v190;
      v194 = (v533 * *v185 + v534 * v191 + v535 * v193) * v190 - v558;
      v195 = v572 - 1;
      v479 = (v546 * v191 + v545 * *v185 + v547 * v193) * v190;
      v196 = (v551 * *v185 + v552 * v191 + v553 * v193) * v190 - v557;
      v473 = (v536 * *v185 + v537 * v191 + v538 * v193) * v190;
      v197 = (v542 * *v185 + v543 * v191 + v544 * v193) * v190 - v559;
      v198 = v190 * v404 - v486;
      v511 = v190 * v494 * v416;
      v199 = -v511 - v515;
      v512 = -(v190 * v500 * v416) - v561;
      v200 = 0.0;
      v458 = v198;
      if ( v572 - 1 >= 0 )
      {
        v201 = v573;
        if ( v572 >= 4 )
        {
          v202 = v198 * v573;
          do
          {
            v200 = (((v200 * v202 + *(double *)&v571[2 * v195 + 20]) * v202 + *(double *)&v571[2 * v195 + 18]) * v202
                  + *(double *)&v571[2 * v195 + 16])
                 * v202
                 + *(double *)&v571[2 * v195 + 14];
            v195 -= 4;
          }
          while ( v195 >= 3 );
          v201 = v573;
          v198 = v190 * v404 - v486;
        }
        if ( v195 >= 0 )
        {
          v203 = v198 * v201;
          do
            v200 = v200 * v203 + *(double *)&v571[2 * v195-- + 20];
          while ( v195 >= 0 );
        }
        v199 = -(v190 * v494 * v416) - v515;
      }
      v503 = v503 - v404 * v200;
      v204 = -((v194 - (v432 - v508) * v200) / v503);
      v205 = v185[2];
      v206 = -((v196 - (v479 - v507) * v200) / v503);
      v512 = -((v512 - v199 * v200) / v503);
      v207 = -((v197 - (v473 - v513) * v200) / v503);
      v208 = v185[1];
      v209 = v492 * v192 + v493 * v208 + v494 * v205;
      v438 = v209;
      v567 = v204 * v209 + v432 - v508;
      v562 = v206 * v209 + v479 - v507;
      v566 = v207 * v209 + v473 - v513;
      v480 = v512 * v209 - v511 - v515;
      v526 = v495 * v192 + v496 * v208 + v497 * v205;
      v569 = (v530 * v192 + v531 * v208 + v532 * v205) * v190 + v204 * v526 - v556;
      v568 = (v548 * v192 + v549 * v208 + v550 * v205) * v190 + v206 * v526 - v555;
      v210 = v539 * v192;
      v211 = *(unsigned long long *)&v190;
      v485 = v190 * v526 - v519;
      v570 = (v210 + v540 * v208 + v541 * v205) * v190 + v207 * v526 - v560;
      v512 = v512 * v526 - v190 * v497 * v416 - v518;
      v212 = 0.0;
      v371 = 0.0;
      v213 = 0.0;
      v214 = 0.0;
      if ( v391 >= 1 )
      {
        *((unsigned long long *)&v217 + 1) = 0i64;
        *(double *)&v211 = (v190 * v438 - v486) * *(double *)&qword_43E0E8;
        v215 = 0;
        v216 = (double *)(a3 + 32);
        *(double *)&v217 = *(double *)&qword_43E0E8 * 0.0;
        do
        {
          v218 = v217;
          v219 = v215;
          if ( v215 < 0 )
            v219 = -v215;
          v220 = 1.0;
          while ( 1 )
          {
            if ( (v219 & 1) != 0 )
              v220 = v220 * *(double *)&v218;
            v219 >>= 1;
            if ( !v219 )
              break;
            *((unsigned long long *)&v221 + 1) = *((unsigned long long *)&v218 + 1);
            *(double *)&v221 = *(double *)&v218 * *(double *)&v218;
            v218 = v221;
          }
          if ( v215 >= 0 )
            v222 = v220;
          else
            v222 = 1.0 / v220;
          v223 = COERCE_UNSIGNED_INT64(*(double *)&v211 * 0.5);
          v224 = v215 + 1;
          v225 = v215;
          v226 = (double)(v215 + 1) * *v216;
          v212 = v222 * v226 + v212;
          if ( v215 < 0 )
            v225 = -v215;
          v227 = 1.0;
          while ( 1 )
          {
            if ( (v225 & 1) != 0 )
              v227 = v227 * *(double *)&v223;
            v225 >>= 1;
            if ( !v225 )
              break;
            *((unsigned long long *)&v228 + 1) = *((unsigned long long *)&v223 + 1);
            *(double *)&v228 = *(double *)&v223 * *(double *)&v223;
            v223 = v228;
          }
          if ( v215 >= 0 )
            v229 = v227;
          else
            v229 = 1.0 / v227;
          v230 = v211;
          v231 = v215;
          v213 = v229 * v226 + v213;
          if ( v215 < 0 )
            v231 = -v215;
          v232 = 1.0;
          while ( 1 )
          {
            if ( (v231 & 1) != 0 )
              v232 = v232 * *(double *)&v230;
            v231 >>= 1;
            if ( !v231 )
              break;
            *((unsigned long long *)&v233 + 1) = *((unsigned long long *)&v230 + 1);
            *(double *)&v233 = *(double *)&v230 * *(double *)&v230;
            v230 = v233;
          }
          if ( v215 >= 0 )
            v234 = v232;
          else
            v234 = 1.0 / v232;
          ++v215;
          ++v216;
          v214 = v214 + v234 * v226;
          v217 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
        }
        while ( v224 + 1 <= v391 );
        v371 = v212;
      }
      v467 = *(double *)libm_sse2_sqrt_precise(v345, v358, LODWORD(v371), HIDWORD(v371)).m128_u64 * 4.0;
      v468 = v467 + *(double *)libm_sse2_sqrt_precise(v346, v359, v372, v383).m128_u64;
      v235 = 0.0;
      v474 = v190 * v438 - v486;
      v469 = (v468 + *(double *)libm_sse2_sqrt_precise(v347, v360, v373, v384).m128_u64) * (v474 / 6.0);
      if ( v391 >= 1 )
      {
        v236 = v474 * *(double *)&qword_43E0E8;
        v237 = 0;
        v238 = (double *)(a3 + 32);
        v475 = v474 * *(double *)&qword_43E0E8;
        do
        {
          v239 = v236;
          v240 = v237;
          if ( v237 < 0 )
            v240 = -v237;
          v241 = 1.0;
          while ( 1 )
          {
            if ( (v240 & 1) != 0 )
              v241 = v241 * v239;
            v240 >>= 1;
            if ( !v240 )
              break;
            v239 = v239 * v239;
          }
          if ( v237 >= 0 )
            v242 = v241;
          else
            v242 = 1.0 / v241;
          v236 = v475;
          v243 = (double)++v237 * *v238++;
          v235 = v235 + v243 * v242;
        }
        while ( v237 + 1 <= v391 );
      }
      v244 = *(double *)libm_sse2_sqrt_precise(v348, v361, v374, v385).m128_u64;
      v245 = *v483 * v492;
      v525 = v244;
      v481 = v480 * v244;
      v433 = v245 + v483[1] * v493 + v483[2] * v494;
      v246 = *(double *)(v454 + v417 + 32);
      v247 = *(double *)(v454 + v417 + 48);
      v426 = v495 * *v483 + v496 * v483[1] + v497 * v483[2];
      v415 = v246 * v492 + *(double *)(v454 + v417 + 40) * v493 + v247 * v494;
      v411 = v246 * v495 + *(double *)(v454 + v417 + 40) * v496 + v247 * v497;
      v524 = v461 - v400;
      v418 = v464 - v472;
      v511 = v472 * v400 - v461 * v464 + (v461 - v400) * v469 + (v464 - v472) * v485;
      v455 = *(double *)libm_sse2_sqrt_precise(v349, v362, v375, v386).m128_u64;
      v476 = v523 - v564;
      v248 = v565;
      v7 = v434;
      v249 = v521 - v442;
      v405 = v506 - v563;
      v250 = a4;
      v251 = v387;
      v252 = v563 * v400;
      v376 = v505 - v565;
      v484 = v455 * v455;
      v253 = v524;
      v254 = v562 * v525 * v524 + (v521 - v442) * v469;
      *(double *)&a4[8 * v387] = ((v567 * v525 * v524
                                 + (v504 - v465) * v469
                                 + (v523 - v564) * v485
                                 + v569 * (v464 - v472)
                                 + v564 * v400
                                 + v472 * v465
                                 - v461 * v523
                                 - v504 * v464)
                                * v455
                                - ((v523 - v564) * (v464 - v472) + (v504 - v465) * v524) / v455 * v511)
                               * *(double *)(v434 + 80)
                               / (v455
                                * v455);
      v255 = v254 + v405 * v485 + v568 * (v464 - v472) + v252 + v472 * v442 - v461 * v506 - v521 * v464;
      v256 = v455;
      v257 = 1;
      v258 = v511;
      *(double *)&a4[8 * v387 + 8] = (v255 * v455 - (v405 * (v464 - v472) + v249 * v253) / v455 * v511)
                                   * *(double *)(v434 + 80)
                                   / (v455
                                    * v455);
      v259 = v566 * v525 * v253
           + (v390 - v446) * v469
           + v376 * v485
           + v570 * (v464 - v472)
           + v248 * v400
           + v472 * v446
           - v461 * v505
           - v390 * v464;
      v260 = v464 - v472;
      v261 = (v259 * v256 - (v376 * (v464 - v472) + (v390 - v446) * v253) / v256 * v258) * *(double *)(v434 + 80);
      *(unsigned long long *)&a4[8 * v387 + 24] = 0i64;
      *(double *)&a4[8 * v387 + 16] = v261 / (v455 * v455);
      if ( v391 >= 1 )
      {
        v262 = (double *)&a4[8 * v387 + 32];
        do
        {
          v264 = v522;
          v263 = v257;
          *(double *)&v264 = *(double *)&v522 * *(double *)&qword_43E0E8;
          v265 = v264;
          if ( v257 < 0 )
            v263 = -v257;
          v266 = 1.0;
          while ( 1 )
          {
            if ( (v263 & 1) != 0 )
              v266 = v266 * *(double *)&v265;
            v263 >>= 1;
            if ( !v263 )
              break;
            *((unsigned long long *)&v267 + 1) = *((unsigned long long *)&v265 + 1);
            *(double *)&v267 = *(double *)&v265 * *(double *)&v265;
            v265 = v267;
          }
          if ( v257 >= 0 )
            v268 = v266;
          else
            v268 = 1.0 / v266;
          v269 = v257;
          v270 = v268 / *(double *)&qword_43E0E8 / v491 * v433;
          if ( v257 < 0 )
            v269 = -v257;
          v271 = 1.0;
          while ( 1 )
          {
            if ( (v269 & 1) != 0 )
              v271 = v271 * *(double *)&v264;
            v269 >>= 1;
            if ( !v269 )
              break;
            *((unsigned long long *)&v272 + 1) = *((unsigned long long *)&v264 + 1);
            *(double *)&v272 = *(double *)&v264 * *(double *)&v264;
            v264 = v272;
          }
          if ( v257 >= 0 )
            v273 = v271;
          else
            v273 = 1.0 / v271;
          v274 = v257;
          v275 = v421 * *(double *)&qword_43E0E8;
          v505 = v273 / *(double *)&qword_43E0E8 / v491 * v426;
          v276 = v509 * v270;
          v277 = v421 * *(double *)&qword_43E0E8;
          v506 = v276;
          if ( v257 < 0 )
            v274 = -v257;
          v278 = 1.0;
          while ( 1 )
          {
            if ( (v274 & 1) != 0 )
              v278 = v278 * v277;
            v274 >>= 1;
            if ( !v274 )
              break;
            v277 = v277 * v277;
          }
          if ( v257 >= 0 )
            v279 = v278;
          else
            v279 = 1.0 / v278;
          v280 = v257;
          v281 = v279 / *(double *)&qword_43E0E8 / v398 * v415;
          if ( v257 < 0 )
            v280 = -v257;
          v282 = 1.0;
          while ( 1 )
          {
            if ( (v280 & 1) != 0 )
              v282 = v282 * v275;
            v280 >>= 1;
            if ( !v280 )
              break;
            v275 = v275 * v275;
          }
          if ( v257 >= 0 )
            v283 = v282;
          else
            v283 = 1.0 / v282;
          v284 = v257;
          v285 = v458 * *(double *)&qword_43E0E8;
          v286 = v409 * v281;
          v287 = v458 * *(double *)&qword_43E0E8;
          v288 = v283 / *(double *)&qword_43E0E8 / v398 * v411;
          if ( v257 < 0 )
            v284 = -v257;
          v289 = 1.0;
          while ( 1 )
          {
            if ( (v284 & 1) != 0 )
              v289 = v289 * v287;
            v284 >>= 1;
            if ( !v284 )
              break;
            v287 = v287 * v287;
          }
          if ( v257 >= 0 )
            v290 = v289;
          else
            v290 = 1.0 / v289;
          v291 = v257;
          v292 = v290 / *(double *)&qword_43E0E8 / v503 * v438;
          if ( v257 < 0 )
            v291 = -v257;
          v293 = 1.0;
          while ( 1 )
          {
            if ( (v291 & 1) != 0 )
              v293 = v293 * v285;
            v291 >>= 1;
            if ( !v291 )
              break;
            v285 = v285 * v285;
          }
          if ( v257 >= 0 )
            v294 = v293;
          else
            v294 = 1.0 / v293;
          ++v257;
          v295 = v506 - v286;
          v296 = v400 * v286;
          v260 = v464 - v472;
          v297 = v292 * v525 * v524
               + (v288 - v505) * v469
               + v295 * v485
               + v294 / *(double *)&qword_43E0E8 / v503 * v526 * v418;
          v253 = v524;
          v298 = (v288 - v505) * v524;
          v299 = v464 * v288;
          v256 = v455;
          *v262++ = ((v297 + v296 + v472 * v505 - v461 * v506 - v299) * v455 - (v295 * v418 + v298) / v455 * v511)
                  * *(double *)(v434 + 80)
                  / v484;
        }
        while ( v257 <= v391 );
        v258 = v511;
        v250 = a4;
        v251 = v387;
      }
      v459 = v451 - v516;
      v516 = v516 * v400 + v472 * v502 - v461 * v451 - v488 * v464;
      v516 = v516 + (v488 - v502) * v469 + v253 * v481 + v459 * v485 + v512 * v260;
      *(double *)&v250[8 * v251 + 64] = (v516 * v256 - (v459 * v260 + (v488 - v502) * v253) / v256 * v258)
                                      * *(double *)(v434 + 80)
                                      / v484;
      v300 = v441;
      v387 = a5 + v251;
      if ( *(unsigned char *)(*(unsigned long *)(v434 + 192) + 40 * v441 + 32) == 1 )
      {
        v466 = v465 - v504;
        v452 = fabs(v260);
        v401 = v400 - v461;
        v443 = v442 - v521;
        v447 = v446 - v390;
        v439 = *(unsigned long long *)&v401 & 0x7FFFFFFFFFFFFFFFi64;
        if ( v452 <= COERCE_DOUBLE(*(unsigned long long *)&v401 & 0x7FFFFFFFFFFFFFFFi64) )
        {
          v303 = v401;
          v302 = *(double *)libm_sse2_pow_precise().m128_u64;
          v301 = v464 - v472;
          v304 = v393;
          v305 = a4;
          *(double *)&a4[8 * v393] = (v476 * v401 - v466 * v418) * (v401 * *(double *)(v434 + 72)) / v302;
          *(double *)&a4[8 * v393 + 8] = (v405 * v401 - v443 * v418) * (v401 * *(double *)(v434 + 72)) / v302;
          v306 = (v376 * v303 - v447 * v418) * (v303 * *(double *)(v434 + 72));
        }
        else
        {
          v301 = v464 - v472;
          v302 = *(double *)libm_sse2_pow_precise().m128_u64;
          v303 = v401;
          v304 = v393;
          v305 = a4;
          *(double *)&a4[8 * v393] = (v476 * v401 - v466 * v418) * (v418 * *(double *)(v434 + 72)) * -1.0 / v302;
          *(double *)&a4[8 * v393 + 8] = (v405 * v401 - v443 * v418) * (v418 * *(double *)(v434 + 72)) * -1.0 / v302;
          v306 = (v376 * v401 - v447 * v418) * (v418 * *(double *)(v434 + 72)) * -1.0;
        }
        v307 = 1;
        *(double *)&v305[8 * v304 + 16] = v306 / v302;
        *(unsigned long long *)&v305[8 * v304 + 24] = 0i64;
        if ( v391 >= 1 )
        {
          v308 = (double *)&v305[8 * v304 + 32];
          do
          {
            v309 = v307;
            v310 = *(double *)&v522 * *(double *)&qword_43E0E8;
            v311 = *(double *)&v522 * *(double *)&qword_43E0E8;
            if ( v307 < 0 )
              v309 = -v307;
            v312 = 1.0;
            while ( 1 )
            {
              if ( (v309 & 1) != 0 )
                v312 = v312 * v311;
              v309 >>= 1;
              if ( !v309 )
                break;
              v311 = v311 * v311;
            }
            if ( v307 >= 0 )
              v313 = v312;
            else
              v313 = 1.0 / v312;
            v314 = v307;
            v315 = v313 / *(double *)&qword_43E0E8 / v491 * v433;
            if ( v307 < 0 )
              v314 = -v307;
            v316 = 1.0;
            while ( 1 )
            {
              if ( (v314 & 1) != 0 )
                v316 = v316 * v310;
              v314 >>= 1;
              if ( !v314 )
                break;
              v310 = v310 * v310;
            }
            if ( v307 >= 0 )
              v317 = v316;
            else
              v317 = 1.0 / v316;
            v318 = v307;
            v319 = v509 * v315;
            v320 = v421 * *(double *)&qword_43E0E8;
            v321 = v421 * *(double *)&qword_43E0E8;
            v322 = v317 / *(double *)&qword_43E0E8 / v491 * v426;
            if ( v307 < 0 )
              v318 = -v307;
            v323 = 1.0;
            while ( 1 )
            {
              if ( (v318 & 1) != 0 )
                v323 = v323 * v321;
              v318 >>= 1;
              if ( !v318 )
                break;
              v321 = v321 * v321;
            }
            if ( v307 >= 0 )
              v324 = v323;
            else
              v324 = 1.0 / v323;
            v325 = v307;
            v326 = v324 / *(double *)&qword_43E0E8 / v398 * v415;
            if ( v307 < 0 )
              v325 = -v307;
            v327 = 1.0;
            while ( 1 )
            {
              if ( (v325 & 1) != 0 )
                v327 = v327 * v320;
              v325 >>= 1;
              if ( !v325 )
                break;
              v320 = v320 * v320;
            }
            if ( v307 >= 0 )
              v328 = v327;
            else
              v328 = 1.0 / v327;
            v329 = v409 * v326;
            v301 = v464 - v472;
            v330 = (v319 - v329) * v401 - (v322 - v328 / *(double *)&qword_43E0E8 / v398 * v411) * v418;
            v303 = v401;
            if ( v452 <= *(double *)&v439 )
              v331 = v330 * (v401 * *(double *)(v434 + 72));
            else
              v331 = v330 * (v418 * *(double *)(v434 + 72)) * -1.0;
            ++v307;
            *v308++ = v331 / v302;
          }
          while ( v307 <= v391 );
          v304 = v393;
          v305 = a4;
        }
        v332 = v459 * v303 - (v502 - v488) * v301;
        if ( v452 <= *(double *)&v439 )
          v333 = v332 * (v303 * *(double *)(v434 + 72));
        else
          v333 = v332 * (v301 * *(double *)(v434 + 72)) * -1.0;
        *(double *)&v305[8 * v304 + 64] = v333 / v302;
        v67 = a5 + v304;
        v300 = v441;
        v393 = v67;
      }
      else
      {
        v67 = v393;
      }
      v71 = v486;
      v66 = v300 + 1;
      v69 = v510;
      v70 = v514;
      v73 = v501;
      v441 = v66;
    }
    while ( v66 < v517 );
  }
  v334 = 1.0;
  v335 = *(double *)(a3 + 64);
  result = a4;
  if ( v335 <= 1.0 )
  {
    if ( v335 >= 1.0 )
    {
      *(unsigned long long *)&a4[8 * v67 + 64] = 0i64;
      goto LABEL_316;
    }
    v334 = -1.0 / (v335 * v335);
  }
  *(double *)&a4[8 * v67 + 64] = v334;
LABEL_316:
  *(double *)&a4[8 * v67 + 64] = *(double *)(v7 + 88) * *(double *)&a4[8 * v67 + 64];
  return result;
}

double  sub_40C4E0()
{
  int v2; 
  unsigned int v3; 
  double *v4; 
  int v5; 
  int i; 
  double v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  double v13; 
  double v14; 
  void *v15[2]; 
  int v16; 
  int v17[26]; 

  v2 = this[6];
  v3 = this[7];
  v15[0] = 0;
  v15[1] = 0;
  v16 = 0;
  v17[25] = 0;
  sub_4077E0(v15, v3);
  sub_407920(v2, v3, this[1], (int)v15[0], this[6], this[7], (int)this);
  v13 = 0.0;
  sub_401000(
    (void ( *)(int, double *, int, int, int))sub_407920,
    (void ( *)(int, int, int, int, int))sub_408C60,
    this[1],
    this[2],
    v2,
    v3,
    1000,
    0,
    (double *)v17,
    0,
    0,
    (int)this);
  v4 = (double *)v15[0];
  sub_407920(v2, (int)v15[0], this[1], (int)v15[0], this[6], this[7], (int)this);
  v5 = this[7];
  for ( i = 0; i < v5; v13 = v7 * v7 + v13 )
    v7 = v4[i++];
  *(unsigned long long *)&v14 = libm_sse2_sqrt_precise(v9, v10, v11, v12).m128_u64[0];
  if ( v4 )
    operator delete(v4);
  return v14;
}

unsigned long * sub_40C640( int a2, int a3, int a4)
{
  void *v5; 
  unsigned int v7; 

  this[8] = a4;
  this[6] = a2;
  this[7] = a3;
  *this = &CLevmarForGCM_LS::`vftable`;
  this[1] = operator new[](8 * a2);
  v5 = operator new[](8 * this[7]);
  v7 = 8 * this[7];
  this[2] = v5;
  memset(v5, 0, v7);
  return this;
}

void  sub_40C6B0()
{
  void *v2; 

  v2 = (void *)*((unsigned long *)this + 1);
  *(unsigned long *)this = &CLevmarForGCM_LS::`vftable`;
  operator delete[](v2);
  operator delete[](*((void **)this + 2));
}

void * sub_40C6D0( char a2)
{
  void *v4; 

  v4 = (void *)*((unsigned long *)this + 1);
  *(unsigned long *)this = &CLevmarForGCM_LS::`vftable`;
  operator delete[](v4);
  operator delete[](*((void **)this + 2));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

int  sub_40C710(int a1, int a2@<esi>, int a3, int a4, int a5, int a6, int a7)
{
  int v7; 
  double v8; 
  double v9; 
  double v10; 
  unsigned int *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  double v16; 
  int v17; 
  double v18; 
  double v19; 
  int v20; 
  double v21; 
  double v22; 
  double v23; 
  double *v24; 
  double v25; 
  int v26; 
  int v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  int v33; 
  int v34; 
  double *v35; 
  double v36; 
  double v37; 
  double v38; 
  long long v39; 
  double v40; 
  int v41; 
  double *v42; 
  long long v43; 
  long long v44; 
  unsigned int v45; 
  double v46; 
  long long v47; 
  double v48; 
  int v49; 
  unsigned int v50; 
  double v51; 
  double v52; 
  long long v53; 
  double v54; 
  long long v55; 
  double v56; 
  unsigned int v57; 
  double v58; 
  long long v59; 
  double v60; 
  long long v61; 
  double v62; 
  double v63; 
  int v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  long long v73; 
  int v74; 
  double *v75; 
  long long v76; 
  long long v77; 
  unsigned int v78; 
  double v79; 
  long long v80; 
  double v81; 
  int v82; 
  unsigned int v83; 
  double v84; 
  double v85; 
  long long v86; 
  double v87; 
  long long v88; 
  double v89; 
  unsigned int v90; 
  double v91; 
  long long v92; 
  double v93; 
  long long v94; 
  double v95; 
  double v96; 
  double *v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  int v107; 
  long long v108; 
  double *v109; 
  unsigned int v110; 
  double v111; 
  long long v112; 
  double v113; 
  int v114; 
  unsigned int v115; 
  double v116; 
  double v117; 
  long long v118; 
  double v119; 
  long long v120; 
  double v121; 
  unsigned int v122; 
  double v123; 
  long long v124; 
  double v125; 
  long long v126; 
  double v127; 
  double v128; 
  double v129; 
  int v130; 
  double v131; 
  double v132; 
  double *v133; 
  double *v134; 
  double v135; 
  int result; 
  double v137; 
  int v138; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  double v158; 
  int v159; 
  int v160; 
  double v161; 
  int v162; 
  int v163; 
  double v164; 
  int v165; 
  int v166; 
  double v167; 
  double v168; 
  double v169; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  double v179; 
  double v180; 
  double v181; 
  double v182; 
  double v183; 
  int v184; 
  int v185; 
  int v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  int v193; 
  double v194; 
  double v195; 
  double v196; 
  int v197; 
  double v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  double v208; 
  double v209; 
  double v210; 
  double v211; 
  int v212; 
  double v213; 
  double v214; 
  double v215; 
  double v216; 
  double v217; 
  double v218; 
  double v219; 
  double v220; 
  double v221; 
  double v222; 
  double *v223; 
  double v224; 
  char v225[180]; 

  v148 = a2;
  v138 = a1;
  *(unsigned long long *)(a3 + 24) = 0i64;
  v197 = *(unsigned long *)(a7 + 32);
  sub_405EB0((int)v225, v197, a3 + 24, qword_43E0E8);
  v7 = *(unsigned long *)(a7 + 20);
  v178 = v7;
  v210 = *(double *)(v7 + 56);
  v184 = a3 + 8 * *(unsigned long *)(v7 + 204);
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v213);
  v8 = v221;
  v9 = v218;
  v10 = v215;
  v11 = (unsigned int *)(v7 + 48);
  v223 = (double *)(a3 + 64);
  if ( *(unsigned long *)(v7 + 48) < *(unsigned long *)(v7 + 52) )
    v11 = (unsigned int *)(v7 + 52);
  v12 = _mm_cvtsi32_si128(*v11);
  v13 = v7;
  v14 = *(unsigned long *)(v7 + 16);
  v15 = *(unsigned long *)(v7 + 24);
  v186 = v14;
  v212 = v15;
  v16 = _mm_cvtepi32_pd(v12).m128d_f64[0] * *(double *)(a3 + 64);
  v17 = 0;
  if ( v14 > 0 )
  {
    v18 = -v16;
    v19 = v215 * v16;
    v20 = 0;
    v21 = v215 * -v16;
    v176 = 0;
    v22 = v221 * -v16;
    v23 = v221 * v16;
    v202 = v21;
    v189 = v22;
    v207 = v221 * v16;
    v204 = v215 * v16;
    v179 = v218 * v16;
    do
    {
      v24 = (double *)(v20 + *(unsigned long *)(v13 + 108));
      v24[2] = v18;
      v25 = sub_406A70(
              (int)v225,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              *v24 * v213 + v24[1] * v214 + v21,
              v19,
              *v24 * v219 + v24[1] * v220 + v22,
              v23);
      v13 = v178;
      v9 = v218;
      v21 = v202;
      v22 = v189;
      v23 = v207;
      v19 = v204;
      *(double *)(a4 + 8 * v17) = (v24[1] * v217 + *v24 * v216 + v218 * v24[2]) * v25
                                - v179
                                - *(double *)(v184 + 8 * *(unsigned long *)(*(unsigned long *)(v178 + 120) + 4 * v17)) * v210;
      ++v17;
      v18 = -v16;
      v20 = v176 + 32;
      v176 += 32;
    }
    while ( v17 < v186 );
    v8 = v221;
    v10 = v215;
    v14 = v186;
    v15 = v212;
  }
  v26 = 0;
  v27 = v15 + v14;
  v177 = v15 + v14;
  v185 = 0;
  if ( v15 > 0 )
  {
    v28 = -v16;
    v29 = v10 * -v16;
    v30 = v8 * -v16;
    v31 = v8 * v16;
    v32 = v10 * v16;
    v206 = v30;
    v209 = -v16;
    v211 = v29;
    v203 = v31;
    v198 = v10 * v16;
    v205 = v9 * v16;
    do
    {
      v33 = v26 + v14 + 2 * v26;
      v34 = 32 * v33;
      v35 = (double *)(32 * v33 + *(unsigned long *)(v13 + 108));
      v193 = v33;
      v36 = *v35;
      v35[2] = v28;
      v37 = sub_406A70(
              (int)v225,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              v36 * v213 + v35[1] * v214 + v29,
              v32,
              v36 * v219 + v35[1] * v220 + v206,
              v31);
      v38 = 0.0;
      v39 = *(unsigned long long *)v35;
      v180 = 0.0;
      v158 = v37;
      *(double *)&v39 = (*(double *)&v39 * v213 + v35[1] * v214 + v35[2] * v215) * v37 - v198;
      v187 = *(double *)&v39;
      v208 = (v216 * *v35 + v217 * v35[1] + v218 * v35[2]) * v37 - v205;
      v40 = 0.0;
      if ( v197 >= 1 )
      {
        v41 = 0;
        v43 = (unsigned long long)qword_43E0E8;
        *(double *)&v39 = *(double *)&v39 * *(double *)&qword_43E0E8;
        v42 = (double *)(a3 + 32);
        *(double *)&v43 = *(double *)&qword_43E0E8 * 0.0;
        v158 = *(double *)&v39 * 0.5;
        do
        {
          v44 = v43;
          v45 = v41;
          if ( v41 < 0 )
            v45 = -v41;
          v46 = 1.0;
          while ( 1 )
          {
            if ( (v45 & 1) != 0 )
              v46 = v46 * *(double *)&v44;
            v45 >>= 1;
            if ( !v45 )
              break;
            *((unsigned long long *)&v47 + 1) = *((unsigned long long *)&v44 + 1);
            *(double *)&v47 = *(double *)&v44 * *(double *)&v44;
            v44 = v47;
          }
          if ( v41 >= 0 )
            v48 = v46;
          else
            v48 = 1.0 / v46;
          v49 = v41 + 1;
          v50 = v41;
          v51 = (double)(v41 + 1) * *v42;
          v52 = v51 * v48;
          v53 = *(unsigned long long *)&v158;
          v180 = v52 + v180;
          if ( v41 < 0 )
            v50 = -v41;
          v54 = 1.0;
          while ( 1 )
          {
            if ( (v50 & 1) != 0 )
              v54 = v54 * *(double *)&v53;
            v50 >>= 1;
            if ( !v50 )
              break;
            *((unsigned long long *)&v55 + 1) = *((unsigned long long *)&v53 + 1);
            *(double *)&v55 = *(double *)&v53 * *(double *)&v53;
            v53 = v55;
          }
          if ( v41 >= 0 )
            v56 = v54;
          else
            v56 = 1.0 / v54;
          v57 = v41;
          v58 = v51 * v56;
          v59 = v39;
          v38 = v58 + v38;
          if ( v41 < 0 )
            v57 = -v41;
          v60 = 1.0;
          while ( 1 )
          {
            if ( (v57 & 1) != 0 )
              v60 = v60 * *(double *)&v59;
            v57 >>= 1;
            if ( !v57 )
              break;
            *((unsigned long long *)&v61 + 1) = *((unsigned long long *)&v59 + 1);
            *(double *)&v61 = *(double *)&v59 * *(double *)&v59;
            v59 = v61;
          }
          if ( v41 >= 0 )
            v62 = v60;
          else
            v62 = 1.0 / v60;
          v43 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v41;
          ++v42;
          v40 = v51 * v62 + v40;
        }
        while ( v49 + 1 <= v197 );
      }
      v199 = *(double *)libm_sse2_sqrt_precise(v138, v148, LODWORD(v158), HIDWORD(v158)).m128_u64 * 4.0;
      v200 = v199 + *(double *)libm_sse2_sqrt_precise(v139, v149, v159, v170).m128_u64;
      v63 = *(double *)libm_sse2_sqrt_precise(v140, v150, v160, v171).m128_u64;
      v64 = *(unsigned long *)(v178 + 108);
      v65 = *(double *)(v34 + v64 + 32);
      v66 = v65 * v219;
      v67 = v65 * v213;
      *(double *)(v34 + v64 + 48) = v209;
      v201 = (v200 + v63) * (v187 / 6.0);
      v68 = sub_406A70(
              (int)v225,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              v67 + *(double *)(v34 + v64 + 40) * v214 + v211,
              v198,
              v66 + *(double *)(v34 + v64 + 40) * v220 + v206,
              v203);
      v69 = *(double *)(v34 + v64 + 48);
      v161 = v68;
      v188 = 0.0;
      v70 = 0.0;
      v71 = 0.0;
      v72 = (*(double *)(v34 + v64 + 32) * v213 + *(double *)(v34 + v64 + 40) * v214 + v69 * v215) * v68 - v198;
      v191 = v72;
      v190 = (*(double *)(v34 + v64 + 32) * v216 + *(double *)(v34 + v64 + 40) * v217 + v69 * v218) * v68 - v205;
      if ( v197 >= 1 )
      {
        *((unsigned long long *)&v73 + 1) = 0i64;
        v76 = (unsigned long long)qword_43E0E8;
        *(double *)&v73 = v72 * *(double *)&qword_43E0E8;
        v74 = 0;
        v75 = (double *)(a3 + 32);
        *(double *)&v76 = *(double *)&qword_43E0E8 * 0.0;
        v161 = v72 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v77 = v76;
          v78 = v74;
          if ( v74 < 0 )
            v78 = -v74;
          v79 = 1.0;
          while ( 1 )
          {
            if ( (v78 & 1) != 0 )
              v79 = v79 * *(double *)&v77;
            v78 >>= 1;
            if ( !v78 )
              break;
            *((unsigned long long *)&v80 + 1) = *((unsigned long long *)&v77 + 1);
            *(double *)&v80 = *(double *)&v77 * *(double *)&v77;
            v77 = v80;
          }
          if ( v74 >= 0 )
            v81 = v79;
          else
            v81 = 1.0 / v79;
          v82 = v74 + 1;
          v83 = v74;
          v84 = (double)(v74 + 1) * *v75;
          v85 = v84 * v81;
          v86 = *(unsigned long long *)&v161;
          v188 = v85 + v188;
          if ( v74 < 0 )
            v83 = -v74;
          v87 = 1.0;
          while ( 1 )
          {
            if ( (v83 & 1) != 0 )
              v87 = v87 * *(double *)&v86;
            v83 >>= 1;
            if ( !v83 )
              break;
            *((unsigned long long *)&v88 + 1) = *((unsigned long long *)&v86 + 1);
            *(double *)&v88 = *(double *)&v86 * *(double *)&v86;
            v86 = v88;
          }
          if ( v74 >= 0 )
            v89 = v87;
          else
            v89 = 1.0 / v87;
          v90 = v74;
          v91 = v84 * v89;
          v92 = v73;
          v70 = v91 + v70;
          if ( v74 < 0 )
            v90 = -v74;
          v93 = 1.0;
          while ( 1 )
          {
            if ( (v90 & 1) != 0 )
              v93 = v93 * *(double *)&v92;
            v90 >>= 1;
            if ( !v90 )
              break;
            *((unsigned long long *)&v94 + 1) = *((unsigned long long *)&v92 + 1);
            *(double *)&v94 = *(double *)&v92 * *(double *)&v92;
            v92 = v94;
          }
          if ( v74 >= 0 )
            v95 = v93;
          else
            v95 = 1.0 / v93;
          v76 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v74;
          ++v75;
          v71 = v84 * v95 + v71;
        }
        while ( v82 + 1 <= v197 );
      }
      v181 = *(double *)libm_sse2_sqrt_precise(v141, v151, LODWORD(v161), HIDWORD(v161)).m128_u64 * 4.0;
      v182 = v181 + *(double *)libm_sse2_sqrt_precise(v142, v152, v162, v172).m128_u64;
      v96 = *(double *)libm_sse2_sqrt_precise(v143, v153, v163, v173).m128_u64;
      v97 = (double *)(*(unsigned long *)(v178 + 108) + 32 * (v193 + 2));
      v98 = *v97 * v219;
      v99 = *v97 * v213;
      v97[2] = v209;
      v183 = (v182 + v96) * (v191 / 6.0);
      v100 = sub_406A70(
               (int)v225,
               -4.0,
               0.0,
               -1.0,
               1.0e-10,
               v99 + v97[1] * v214 + v211,
               v198,
               v98 + v97[1] * v220 + v206,
               v203);
      v101 = v97[2];
      v102 = *v97 * v216 + v97[1] * v217;
      v103 = (*v97 * v213 + v97[1] * v214 + v101 * v215) * v100 - v198;
      v222 = v103;
      v224 = (v102 + v101 * v218) * v100 - v205;
      v104 = 0.0;
      v105 = 0.0;
      v106 = 0.0;
      if ( v197 >= 1 )
      {
        v107 = 0;
        v108 = (unsigned long long)qword_43E0E8;
        *(double *)&v108 = *(double *)&qword_43E0E8 * 0.0;
        v109 = (double *)(a3 + 32);
        v164 = v103 * *(double *)&qword_43E0E8;
        v192 = v103 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v110 = v107;
          if ( v107 < 0 )
            v110 = -v107;
          v111 = 1.0;
          while ( 1 )
          {
            if ( (v110 & 1) != 0 )
              v111 = v111 * *(double *)&v108;
            v110 >>= 1;
            if ( !v110 )
              break;
            *((unsigned long long *)&v112 + 1) = *((unsigned long long *)&v108 + 1);
            *(double *)&v112 = *(double *)&v108 * *(double *)&v108;
            v108 = v112;
          }
          if ( v107 >= 0 )
            v113 = v111;
          else
            v113 = 1.0 / v111;
          v114 = v107 + 1;
          v115 = v107;
          v116 = (double)(v107 + 1) * *v109;
          v117 = v116 * v113;
          v118 = *(unsigned long long *)&v192;
          v105 = v117 + v105;
          if ( v107 < 0 )
            v115 = -v107;
          v119 = 1.0;
          while ( 1 )
          {
            if ( (v115 & 1) != 0 )
              v119 = v119 * *(double *)&v118;
            v115 >>= 1;
            if ( !v115 )
              break;
            *((unsigned long long *)&v120 + 1) = *((unsigned long long *)&v118 + 1);
            *(double *)&v120 = *(double *)&v118 * *(double *)&v118;
            v118 = v120;
          }
          if ( v107 >= 0 )
            v121 = v119;
          else
            v121 = 1.0 / v119;
          v122 = v107;
          v123 = v116 * v121;
          v124 = *(unsigned long long *)&v164;
          v106 = v123 + v106;
          if ( v107 < 0 )
            v122 = -v107;
          v125 = 1.0;
          while ( 1 )
          {
            if ( (v122 & 1) != 0 )
              v125 = v125 * *(double *)&v124;
            v122 >>= 1;
            if ( !v122 )
              break;
            *((unsigned long long *)&v126 + 1) = *((unsigned long long *)&v124 + 1);
            *(double *)&v126 = *(double *)&v124 * *(double *)&v124;
            v124 = v126;
          }
          if ( v107 >= 0 )
            v127 = v125;
          else
            v127 = 1.0 / v125;
          v108 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v107;
          ++v109;
          v104 = v104 + v116 * v127;
        }
        while ( v114 + 1 <= v197 );
      }
      v194 = *(double *)libm_sse2_sqrt_precise(
                          v144,
                          v154,
                          COERCE_UNSIGNED_INT64(v201 - v183),
                          HIDWORD(COERCE_UNSIGNED_INT64(v201 - v183))).m128_u64
           * 4.0;
      v195 = v194 + *(double *)libm_sse2_sqrt_precise(v145, v155, v165, v174).m128_u64;
      v128 = *(double *)libm_sse2_sqrt_precise(v146, v156, v166, v175).m128_u64;
      v196 = (v195 + v128) * (v222 / 6.0) * (v190 - v208) + v167 * v224 + v183 * v208 - v190 * v201;
      v129 = *(double *)libm_sse2_sqrt_precise(v147, v157, LODWORD(v167), HIDWORD(v167)).m128_u64;
      v130 = v185 + v186;
      v13 = v178;
      *(double *)(a4 + 8 * v130) = v196 / v129;
      *(double *)(a4 + 8 * v130) = *(double *)(v178 + 80) * (v196 / v129);
      if ( *(unsigned char *)(*(unsigned long *)(v178 + 192) + 40 * v185 + 32) == 1 )
      {
        if ( fabs(v168) <= fabs(v208 - v190) )
          v131 = v168;
        else
          v131 = v208 - v190;
        v132 = *(double *)libm_sse2_sqrt_precise(v138, v148, LODWORD(v131), HIDWORD(v131)).m128_u64;
        v13 = v178;
        *(double *)(a4 + 8 * v177) = v169 / v132;
        *(double *)(a4 + 8 * v177) = *(double *)(v178 + 72) * (v169 / v132);
        v27 = ++v177;
      }
      else
      {
        v27 = v177;
      }
      v31 = v203;
      v26 = v185 + 1;
      v32 = v198;
      v28 = v209;
      v29 = v211;
      v14 = v186;
      v185 = v26;
    }
    while ( v26 < v212 );
  }
  v133 = &v224;
  v134 = &v222;
  v224 = 1.0;
  v222 = 1.0;
  if ( *v223 > 1.0 )
    v133 = v223;
  if ( *v223 < 1.0 )
    v134 = v223;
  v135 = *v133 / *v134;
  result = a4;
  v137 = v135 - 1.0;
  *(double *)(a4 + 8 * v27) = v137;
  *(double *)(a4 + 8 * v27) = *(double *)(v13 + 88) * v137;
  return result;
}

int * sub_40D630( char *a2, int a3)
{
  int v4; 
  int *result; 
  double *v6; 
  int v7; 

  memcpy(a2, *(const void **)(this + 4), 8 * *(unsigned long *)(this + 24));
  v4 = *(unsigned long *)(this + 20);
  result = *(int **)(v4 + 96);
  if ( result != *(int **)(v4 + 100) )
  {
    v6 = (double *)&a2[8 * a3];
    do
    {
      ++v6;
      v7 = *result++;
      *(double *)(v7 + 24) = *(double *)(v4 + 56) * *(v6 - 1);
      v4 = *(unsigned long *)(this + 20);
    }
    while ( result != *(int **)(v4 + 100) );
  }
  return result;
}

char * sub_40D690(int a1, int a2@<esi>, int a3, char *a4, int a5, int a6, int a7)
{
  int v7; 
  int *v8; 
  int v9; 
  int v10; 
  int v11; 
  double v12; 
  double v13; 
  double v14; 
  int v15; 
  double *v16; 
  double v17; 
  double v18; 
  double v19; 
  double *v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  int v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double *v50; 
  long long v51; 
  unsigned int v52; 
  double v53; 
  long long v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  int v60; 
  int v61; 
  int v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  int v69; 
  double *v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  int v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  int v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  long long v95; 
  long long v96; 
  int v97; 
  double *v98; 
  long long v99; 
  long long v100; 
  unsigned int v101; 
  double v102; 
  long long v103; 
  double v104; 
  long long v105; 
  int v106; 
  unsigned int v107; 
  double v108; 
  double v109; 
  long long v110; 
  double v111; 
  long long v112; 
  unsigned int v113; 
  double v114; 
  long long v115; 
  double v116; 
  double v117; 
  double v118; 
  int v119; 
  double *v120; 
  double v121; 
  unsigned int v122; 
  double v123; 
  double v124; 
  double v125; 
  double v126; 
  double v127; 
  double v128; 
  double v129; 
  double v130; 
  double v131; 
  int v132; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  int v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  long long v147; 
  long long v148; 
  int v149; 
  double *v150; 
  long long v151; 
  long long v152; 
  unsigned int v153; 
  double v154; 
  long long v155; 
  double v156; 
  int v157; 
  unsigned int v158; 
  double v159; 
  double v160; 
  long long v161; 
  double v162; 
  long long v163; 
  double v164; 
  unsigned int v165; 
  double v166; 
  long long v167; 
  double v168; 
  long long v169; 
  double v170; 
  double v171; 
  double v172; 
  double v173; 
  int v174; 
  double *v175; 
  double v176; 
  unsigned int v177; 
  double v178; 
  double v179; 
  double v180; 
  double v181; 
  double *v182; 
  double v183; 
  double v184; 
  double v185; 
  double v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  int v192; 
  double v193; 
  double v194; 
  double v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  long long v208; 
  double v209; 
  double v210; 
  double v211; 
  int v212; 
  double *v213; 
  long long v214; 
  long long v215; 
  unsigned int v216; 
  double v217; 
  long long v218; 
  double v219; 
  long long v220; 
  int v221; 
  unsigned int v222; 
  double v223; 
  double v224; 
  long long v225; 
  double v226; 
  long long v227; 
  unsigned int v228; 
  double v229; 
  long long v230; 
  double v231; 
  double v232; 
  double v233; 
  int v234; 
  double *v235; 
  double v236; 
  unsigned int v237; 
  double v238; 
  double v239; 
  double v240; 
  double v241; 
  double v242; 
  double v243; 
  double v244; 
  double v245; 
  double v246; 
  char *v247; 
  int v248; 
  double v249; 
  double v250; 
  double v251; 
  double v252; 
  double v253; 
  double v254; 
  int v255; 
  double v256; 
  double v257; 
  double v258; 
  double v259; 
  double *v260; 
  unsigned int v261; 
  long long v262; 
  long long v263; 
  double v264; 
  long long v265; 
  double v266; 
  unsigned int v267; 
  double v268; 
  double v269; 
  long long v270; 
  double v271; 
  unsigned int v272; 
  double v273; 
  double v274; 
  double v275; 
  double v276; 
  double v277; 
  unsigned int v278; 
  double v279; 
  double v280; 
  double v281; 
  unsigned int v282; 
  double v283; 
  double v284; 
  double v285; 
  double v286; 
  double v287; 
  double v288; 
  unsigned int v289; 
  double v290; 
  double v291; 
  double v292; 
  double v293; 
  double v294; 
  double v295; 
  double v296; 
  double v297; 
  int v298; 
  double v299; 
  double v300; 
  double v301; 
  int v302; 
  char *v303; 
  double v304; 
  double v305; 
  double v306; 
  int v307; 
  double *v308; 
  unsigned int v309; 
  double v310; 
  double v311; 
  double v312; 
  double v313; 
  unsigned int v314; 
  double v315; 
  double v316; 
  double v317; 
  unsigned int v318; 
  double v319; 
  double v320; 
  double v321; 
  double v322; 
  double v323; 
  double v324; 
  unsigned int v325; 
  double v326; 
  double v327; 
  double v328; 
  double v329; 
  double v330; 
  double v331; 
  double v332; 
  double v333; 
  double v334; 
  double v335; 
  double v336; 
  double v337; 
  double v338; 
  char *result; 
  int v340; 
  int v341; 
  int v342; 
  int v343; 
  int v344; 
  int v345; 
  int v346; 
  int v347; 
  int v348; 
  int v349; 
  int v350; 
  int v351; 
  int v352; 
  int v353; 
  int v354; 
  int v355; 
  int v356; 
  int v357; 
  int v358; 
  int v359; 
  int v360; 
  int v361; 
  int v362; 
  int v363; 
  int v364; 
  int v365; 
  double v366; 
  double v367; 
  int v368; 
  int v369; 
  int v370; 
  int v371; 
  int v372; 
  int v373; 
  int v374; 
  int v375; 
  int v376; 
  int v377; 
  int v378; 
  int v379; 
  double v380; 
  double v381; 
  int v382; 
  int v383; 
  int v384; 
  int v385; 
  int v386; 
  int v387; 
  int v388; 
  int v389; 
  int v390; 
  int v391; 
  int v392; 
  int v393; 
  double v394; 
  double v395; 
  double v396; 
  int v397; 
  unsigned long long v398; 
  double v399; 
  double v400; 
  double v401; 
  unsigned long long v402; 
  double v403; 
  double v404; 
  double v405; 
  double v406; 
  double v407; 
  double v408; 
  double v409; 
  double v410; 
  double v411; 
  double v412; 
  double v413; 
  double v414; 
  double v415; 
  double v416; 
  double v417; 
  double v418; 
  double v419; 
  int v420; 
  int v421; 
  double v422; 
  double v423; 
  double v424; 
  double v425; 
  double v426; 
  double v427; 
  double v428; 
  double v429; 
  double v430; 
  double v431; 
  double v432; 
  double v433; 
  double v434; 
  int v435; 
  double v436; 
  double v437; 
  double v438; 
  double v439; 
  double v440; 
  double v441; 
  double v442; 
  double v443; 
  double v444; 
  double v445; 
  double v446; 
  int v447; 
  double v448; 
  double v449; 
  double v450; 
  double v451; 
  long long v452; 
  int v453; 
  int v454; 
  double v455; 
  double v456; 
  double v457; 
  double v458; 
  double v459; 
  double v460; 
  double v461; 
  double v462; 
  double v463; 
  double v464; 
  double v465; 
  int v466; 
  int v467; 
  int v468; 
  double v469; 
  double v470; 
  double v471; 
  double v472; 
  double v473; 
  double v474; 
  double v475; 
  double v476; 
  double v477; 
  double v478; 
  double v479; 
  double v480; 
  double v481; 
  double v482; 
  double v483; 
  double v484; 
  double v485; 
  double v486; 
  double v487; 
  double v488; 
  double v489; 
  double v490; 
  double v491; 
  double v492; 
  double v493; 
  double v494; 
  double v495; 
  double v496; 
  double v497; 
  double v498; 
  double v499; 
  double v500; 
  double v501; 
  double v502; 
  double v503; 
  int v504; 
  double v505; 
  int v506; 
  double v507; 
  double v508; 
  double v509; 
  double v510; 
  double v511; 
  double v512; 
  double v513; 
  double v514; 
  double v515; 
  double v516; 
  double v517; 
  double v518; 
  double v519; 
  double v520; 
  double v521; 
  double v522; 
  double v523; 
  double v524; 
  unsigned long long v525; 
  double v526; 
  double v527; 
  double v528; 
  double v529; 
  double v530; 
  double v531; 
  double v532; 
  double v533; 
  double v534; 
  double v535; 
  double v536; 
  double v537; 
  double v538; 
  double v539; 
  double v540; 
  double v541; 
  double v542; 
  double v543; 
  double v544; 
  double v545; 
  double v546; 
  double v547; 
  double v548; 
  double v549; 
  double v550; 
  double v551; 
  double v552; 
  double v553; 
  double v554; 
  double v555; 
  double v556; 
  double v557; 
  double v558; 
  double v559; 
  double v560; 
  double v561; 
  double v562; 
  double v563; 
  double v564; 
  double v565; 
  double v566; 
  double v567; 
  double v568; 
  double v569; 
  double v570; 
  double v571; 
  double v572; 
  double v573; 
  unsigned long v574[40]; 
  int v575; 
  double v576; 

  v353 = a2;
  v340 = a1;
  *(unsigned long long *)(a3 + 24) = 0i64;
  v397 = *(unsigned long *)(a7 + 32);
  sub_405EB0((int)v574, v397, a3 + 24, qword_43E0E8);
  v7 = *(unsigned long *)(a7 + 20);
  v466 = v7;
  v502 = *(double *)(v7 + 56);
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v492);
  v8 = (int *)(v7 + 48);
  if ( *(unsigned long *)(v7 + 48) < *(unsigned long *)(v7 + 52) )
    v8 = (int *)(v7 + 52);
  v437 = (double)*v8;
  v519 = *(double *)(a3 + 64) * v437;
  sub_406E50(&v492, &v537, (double *)a3);
  sub_407120(&v492, &v546, (double *)a3);
  sub_407400(&v492, &v528, (double *)a3);
  memset(a4, 0, 8 * a6 * a5);
  v9 = 0;
  v10 = *(unsigned long *)(v7 + 24);
  v420 = *(unsigned long *)(v7 + 204);
  v504 = *(unsigned long *)(v7 + 16);
  v11 = v504;
  v506 = v10;
  v447 = 0;
  v453 = 0;
  v12 = v494;
  if ( v504 > 0 )
  {
    v13 = -v519;
    v14 = v494 * v519;
    v15 = 0;
    v16 = (double *)(a4 + 16);
    v467 = 0;
    v17 = v500 * v519;
    v18 = v494 * -v519;
    v414 = v554 * v519;
    v19 = v500 * -v519;
    v464 = -v519;
    v410 = v548 * v519;
    v394 = v18;
    v512 = v494 * v519;
    v416 = v19;
    v514 = v536 * v519;
    v488 = v500 * v519;
    v430 = v530 * v519;
    v438 = v500 * v437;
    v459 = v494 * v437;
    v448 = v545 * v519;
    v484 = v539 * v519;
    v509 = v542 * v519;
    v507 = v551 * v519;
    v526 = v533 * v519;
    v501 = v497 * v437;
    v502 = v502 * -1.0;
    do
    {
      v20 = (double *)(v15 + *(unsigned long *)(v7 + 108));
      v21 = v493 * v20[1];
      v22 = v492 * *v20;
      v20[2] = v13;
      v23 = v22 + v21;
      v24 = v499 * v20[1];
      v25 = v23 + v18;
      v26 = v498 * *v20;
      v503 = v25;
      v455 = v26 + v24 + v19;
      v366 = sub_406A70((int)v574, -4.0, 0.0, -1.0, 1.0e-10, v25, v14, v455, v17);
      v445 = v366 * v503 - v512;
      v27 = sub_4060D0(v574, v576 * v445);
      v28 = v20[1];
      v29 = *v20;
      v30 = v20[2];
      v456 = v455 - v27 * v503;
      v31 = -(((v552 * v29 + v553 * v28 + v554 * v30) * v366
             - v414
             - ((v546 * v29 + v547 * v28 + v548 * v30) * v366 - v410) * v27)
            / v456);
      v422 = -(((v534 * v29 + v535 * v28 + v536 * v30) * v366
              - v514
              - ((v528 * v29 + v529 * v28 + v530 * v30) * v366 - v430) * v27)
             / v456);
      v503 = -((-(v500 * v366 * v437) - v438 - (-(v494 * v366 * v437) - v459) * v27) / v456);
      v32 = -(((v543 * v29 + v544 * v28 + v545 * v30) * v366
             - v448
             - ((v537 * v29 + v538 * v28 + v539 * v30) * v366 - v484) * v27)
            / v456);
      v33 = v495 * v29 + v496 * v28 + v497 * v30;
      v34 = v541 * v28;
      v35 = v366;
      v36 = v32 * v33;
      v37 = v540 * v29 + v34;
      v38 = v542 * v30;
      v39 = v495;
      *(v16 - 2) = v36 + (v37 + v38) * v366 - v509;
      v40 = 1;
      v41 = (v39 * *v20 + v496 * v20[1] + v497 * v20[2]) * v31;
      v42 = v497;
      v43 = v496;
      v44 = v531;
      *(v16 - 1) = v41 + (v549 * *v20 + v550 * v20[1] + v551 * v20[2]) * v366 - v507;
      v45 = v20[2];
      v46 = (v495 * *v20 + v43 * v20[1] + v42 * v45) * v422;
      v47 = v44 * *v20 + v532 * v20[1] + v533 * v45;
      v16[1] = 0.0;
      v48 = v496;
      *v16 = v46 + v47 * v366 - v526;
      v49 = v495 * *v20 + v48 * v20[1] + v20[2] * v42;
      if ( v397 >= 1 )
      {
        v50 = v16 + 2;
        do
        {
          *((unsigned long long *)&v51 + 1) = 0i64;
          *(double *)&v51 = v445 * *(double *)&qword_43E0E8;
          v52 = v40;
          if ( v40 < 0 )
            v52 = -v40;
          v53 = 1.0;
          while ( 1 )
          {
            if ( (v52 & 1) != 0 )
              v53 = v53 * *(double *)&v51;
            v52 >>= 1;
            if ( !v52 )
              break;
            *((unsigned long long *)&v54 + 1) = *((unsigned long long *)&v51 + 1);
            *(double *)&v54 = *(double *)&v51 * *(double *)&v51;
            v51 = v54;
          }
          if ( v40 >= 0 )
            v55 = v53;
          else
            v55 = 1.0 / v53;
          ++v40;
          *v50++ = v55 / *(double *)&qword_43E0E8 / v456 * v49;
        }
        while ( v40 <= v397 );
        v35 = v366;
      }
      v14 = v512;
      v18 = v394;
      v56 = v495 * *v20 + v496 * v20[1] + v20[2] * v42;
      v57 = v42 * v35;
      v19 = v416;
      v17 = v488;
      v58 = v56 * v503 - v57 * v437;
      v59 = v502;
      v16[6] = v58 - v501;
      v13 = v464;
      v60 = *(unsigned long *)(*(unsigned long *)(v466 + 120) + 4 * v453++);
      *(double *)&a4[8 * v420 + 8 * v447 + 8 * v60] = v59;
      v16 += a5;
      v9 = a5 + v447;
      v15 = v467 + 32;
      v7 = v466;
      v447 += a5;
      v467 += 32;
    }
    while ( v453 < v504 );
    v12 = v494;
    v11 = v504;
    v10 = v506;
  }
  v61 = v9 + a5 * v10;
  v62 = 0;
  v421 = v61;
  v454 = 0;
  if ( v506 > 0 )
  {
    v63 = v519;
    v64 = v12 * v519;
    v65 = -v519;
    v66 = v12 * -v519;
    v559 = v500 * v519;
    v67 = v500 * -v519;
    v513 = v539 * v519;
    v68 = v545 * v519;
    v519 = v65;
    v512 = v66;
    v483 = v64;
    v555 = v68;
    v503 = v500 * v65;
    v518 = v548 * v63;
    v563 = v554 * v63;
    v511 = v530 * v63;
    v556 = v536 * v63;
    v517 = v494 * v437;
    v560 = v500 * v437;
    v562 = v542 * v63;
    v564 = v551 * v63;
    v557 = v533 * v63;
    v558 = v497 * v437;
    v561 = v497 * v63;
    do
    {
      v69 = v62 + v11 + 2 * v62;
      v70 = (double *)(32 * v69 + *(unsigned long *)(v7 + 108));
      v468 = 32 * v69;
      LODWORD(v505) = v70;
      v71 = v70[1];
      v70[2] = v65;
      v72 = *v70;
      v501 = *v70 * v492 + v71 * v493 + v66;
      v502 = v72 * v498 + v71 * v499 + v67;
      v73 = sub_406A70((int)v574, -4.0, 0.0, -1.0, 1.0e-10, v501, v64, v502, v559);
      v74 = v70[1];
      v75 = v70[2];
      v431 = (v537 * *v70 + v538 * v74 + v539 * v75) * v73;
      v76 = (*v70 * v543 + v74 * v544 + v75 * v545) * v73 - v555;
      v439 = (v546 * *v70 + v547 * v74 + v548 * v75) * v73;
      v77 = v575 - 1;
      v78 = (*v70 * v552 + v74 * v553 + v75 * v554) * v73 - v563;
      v460 = (v528 * *v70 + v529 * v74 + v530 * v75) * v73;
      v79 = 0.0;
      v80 = (*v70 * v534 + v74 * v535 + v75 * v536) * v73 - v556;
      v514 = -(v494 * v73 * v437) - v517;
      v81 = v73 * v501 - v483;
      *(double *)&v525 = v81;
      if ( v575 - 1 >= 0 )
      {
        if ( v575 >= 4 )
        {
          do
          {
            v79 = (((v79 * (v576 * *(double *)&v525) + *(double *)&v574[2 * v77 + 20]) * (v576 * *(double *)&v525)
                  + *(double *)&v574[2 * v77 + 18])
                 * (v576
                  * *(double *)&v525)
                 + *(double *)&v574[2 * v77 + 16])
                * (v576
                 * *(double *)&v525)
                + *(double *)&v574[2 * v77 + 14];
            v77 -= 4;
          }
          while ( v77 >= 3 );
          v81 = *(double *)&v525;
        }
        for ( ; v77 >= 0; --v77 )
          v79 = v79 * (v576 * v81) + *(double *)&v574[2 * v77 + 20];
      }
      v502 = v502 - v79 * v501;
      v82 = -((v76 - v79 * (v431 - v513)) / v502);
      v83 = -((v78 - v79 * (v439 - v518)) / v502);
      v84 = -((v80 - v79 * (v460 - v511)) / v502);
      v85 = -((-(v500 * v73 * v437) - v560 - v79 * v514) / v502);
      *(double *)&v402 = *v70 * v492 + v74 * v493 + v70[2] * v494;
      v411 = *(double *)&v402 * v82 + v431 - v513;
      v432 = *(double *)&v402 * v83 + v439 - v518;
      v86 = *(double *)&v402 * v84 + v460 - v511;
      v461 = *(double *)&v402 * v85 - v494 * v73 * v437 - v517;
      v440 = v86;
      v407 = v495 * *v70 + v496 * v74 + v497 * v70[2];
      v478 = (v540 * *v70 + v541 * v74 + v542 * v70[2]) * v73 + v407 * v82 - v562;
      v367 = (v549 * *v70 + v550 * v74 + v551 * v70[2]) * v73 + v407 * v83 - v564;
      v87 = v407 * v85;
      v88 = v531 * *v70 + v532 * v70[1];
      v89 = v533 * v70[2];
      v90 = v397;
      v91 = (v88 + v89) * v73 + v407 * v84;
      v408 = v407 * v73 - v561;
      v516 = v91 - v557;
      v95 = v402;
      v92 = 0.0;
      v93 = 0.0;
      v94 = 0.0;
      *(double *)&v95 = *(double *)&v402 * v73 - v483;
      v501 = v87 - v497 * v73 * v437 - v558;
      v403 = *(double *)&v95;
      if ( v397 >= 1 )
      {
        *((unsigned long long *)&v96 + 1) = *((unsigned long long *)&v95 + 1);
        *(double *)&v96 = *(double *)&v95 * *(double *)&qword_43E0E8;
        *((unsigned long long *)&v99 + 1) = 0i64;
        v97 = 0;
        v98 = (double *)(a3 + 32);
        *(double *)&v99 = *(double *)&qword_43E0E8 * 0.0;
        v423 = *(double *)&v95 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v100 = v99;
          v101 = v97;
          if ( v97 < 0 )
            v101 = -v97;
          v102 = 1.0;
          while ( 1 )
          {
            if ( (v101 & 1) != 0 )
              v102 = v102 * *(double *)&v100;
            v101 >>= 1;
            if ( !v101 )
              break;
            *((unsigned long long *)&v103 + 1) = *((unsigned long long *)&v100 + 1);
            *(double *)&v103 = *(double *)&v100 * *(double *)&v100;
            v100 = v103;
          }
          if ( v97 >= 0 )
            v104 = v102;
          else
            v104 = 1.0 / v102;
          v105 = *(unsigned long long *)&v423;
          v106 = v97 + 1;
          v107 = v97;
          v108 = (double)(v97 + 1) * *v98;
          v93 = v104 * v108 + v93;
          if ( v97 < 0 )
            v107 = -v97;
          v109 = 1.0;
          while ( 1 )
          {
            if ( (v107 & 1) != 0 )
              v109 = v109 * *(double *)&v105;
            v107 >>= 1;
            if ( !v107 )
              break;
            *((unsigned long long *)&v110 + 1) = *((unsigned long long *)&v105 + 1);
            *(double *)&v110 = *(double *)&v105 * *(double *)&v105;
            v105 = v110;
          }
          if ( v97 >= 0 )
            v111 = v109;
          else
            v111 = 1.0 / v109;
          v112 = v96;
          v113 = v97;
          v92 = v111 * v108 + v92;
          if ( v97 < 0 )
            v113 = -v97;
          v114 = 1.0;
          while ( 1 )
          {
            if ( (v113 & 1) != 0 )
              v114 = v114 * *(double *)&v112;
            v113 >>= 1;
            if ( !v113 )
              break;
            *((unsigned long long *)&v115 + 1) = *((unsigned long long *)&v112 + 1);
            *(double *)&v115 = *(double *)&v112 * *(double *)&v112;
            v112 = v115;
          }
          if ( v97 >= 0 )
            v116 = v114;
          else
            v116 = 1.0 / v114;
          v99 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v97;
          ++v98;
          v94 = v116 * v108 + v94;
        }
        while ( v106 + 1 <= v397 );
        v90 = v397;
      }
      v472 = *(double *)libm_sse2_sqrt_precise(v340, v353, LODWORD(v367), HIDWORD(v367)).m128_u64 * 4.0;
      v473 = v472 + *(double *)libm_sse2_sqrt_precise(v341, v354, v368, v382).m128_u64;
      v117 = 0.0;
      v474 = (v473 + *(double *)libm_sse2_sqrt_precise(v342, v355, v369, v383).m128_u64) * (v403 / 6.0);
      if ( v90 >= 1 )
      {
        v118 = v403 * *(double *)&qword_43E0E8;
        v119 = 0;
        v120 = (double *)(a3 + 32);
        v404 = v403 * *(double *)&qword_43E0E8;
        do
        {
          v121 = v118;
          v122 = v119;
          if ( v119 < 0 )
            v122 = -v119;
          v123 = 1.0;
          while ( 1 )
          {
            if ( (v122 & 1) != 0 )
              v123 = v123 * v121;
            v122 >>= 1;
            if ( !v122 )
              break;
            v121 = v121 * v121;
          }
          if ( v119 >= 0 )
            v124 = v123;
          else
            v124 = 1.0 / v123;
          v118 = v404;
          v125 = (double)++v119 * *v120++;
          v117 = v117 + v125 * v124;
        }
        while ( v119 + 1 <= v90 );
      }
      v514 = *(double *)libm_sse2_sqrt_precise(v343, v356, v370, v384).m128_u64;
      v435 = *(unsigned long *)(v466 + 108);
      v526 = v514 * v411;
      v126 = *(double *)(v468 + v435 + 32);
      v127 = v126 * v498;
      v507 = v514 * v432;
      v128 = v126 * v492;
      v509 = v514 * v440;
      v129 = *(double *)(v468 + v435 + 40);
      v462 = v514 * v461;
      *(double *)(v468 + v435 + 48) = v519;
      v395 = v128 + v129 * v493 + v512;
      v457 = v127 + v129 * v499 + v503;
      v130 = sub_406A70((int)v574, -4.0, 0.0, -1.0, 1.0e-10, v395, v483, v457, v559);
      v131 = *(double *)(v468 + v435 + 40);
      v405 = *(double *)(v468 + v435 + 32);
      v441 = *(double *)(v468 + v435 + 48);
      v449 = (v405 * v537 + v131 * v538 + v441 * v539) * v130;
      v132 = v575 - 1;
      v485 = (v405 * v546 + v131 * v547 + v441 * v548) * v130;
      v417 = (v405 * v528 + v131 * v529 + v441 * v530) * v130;
      v133 = 0.0;
      v134 = v130 * v395 - v483;
      v465 = v134;
      if ( v575 - 1 >= 0 )
      {
        if ( v575 >= 4 )
        {
          do
          {
            v133 = (((v133 * (v576 * v134) + *(double *)&v574[2 * v132 + 20]) * (v576 * v134)
                   + *(double *)&v574[2 * v132 + 18])
                  * (v576
                   * v134)
                  + *(double *)&v574[2 * v132 + 16])
                 * (v576
                  * v134)
                 + *(double *)&v574[2 * v132 + 14];
            v132 -= 4;
          }
          while ( v132 >= 3 );
          v134 = v130 * v395 - v483;
        }
        for ( ; v132 >= 0; --v132 )
          v133 = v133 * (v576 * v134) + *(double *)&v574[2 * v132 + 20];
      }
      v458 = v457 - v133 * v395;
      v135 = -(((v405 * v543 + v131 * v544 + v441 * v545) * v130 - v555 - v133 * (v449 - v513)) / v458);
      v136 = -(((v405 * v552 + v131 * v553 + v441 * v554) * v130 - v563 - v133 * (v485 - v518)) / v458);
      v137 = -(((v405 * v534 + v131 * v535 + v441 * v536) * v130 - v556 - v133 * (v417 - v511)) / v458);
      v138 = -((-(v500 * v130 * v437) - v560 - v133 * (-(v494 * v130 * v437) - v517)) / v458);
      v139 = *(double *)(v468 + v435 + 48);
      *(double *)&v398 = v405 * v492 + v131 * v493 + v441 * v494;
      v412 = *(double *)&v398 * v135 + v449 - v513;
      v433 = *(double *)&v398 * v136 + v485 - v518;
      v450 = *(double *)&v398 * v138 - v494 * v130 * v437 - v517;
      v442 = *(double *)&v398 * v137 + v417 - v511;
      v470 = v405 * v495 + v131 * v496 + v139 * v497;
      v140 = v397;
      v510 = (v405 * v540 + v131 * v541 + v139 * v542) * v130 + v470 * v135 - v562;
      v522 = (v405 * v549 + v131 * v550 + v139 * v551) * v130;
      v141 = v470 * v137;
      v522 = v522 + v470 * v136 - v564;
      v142 = 0.0;
      v143 = v405 * v531 + v131 * v532 + v139 * v533;
      v144 = v470 * v138;
      v471 = v470 * v130 - v561;
      v145 = 0.0;
      v406 = v143 * v130 + v141 - v557;
      v146 = 0.0;
      v446 = v144 - v130 * v497 * v437 - v558;
      v147 = v398;
      *(double *)&v147 = *(double *)&v398 * v130 - v483;
      v399 = *(double *)&v147;
      if ( v397 >= 1 )
      {
        *((unsigned long long *)&v148 + 1) = *((unsigned long long *)&v147 + 1);
        *(double *)&v148 = *(double *)&v147 * *(double *)&qword_43E0E8;
        *((unsigned long long *)&v151 + 1) = 0i64;
        v149 = 0;
        v150 = (double *)(a3 + 32);
        *(double *)&v151 = *(double *)&qword_43E0E8 * 0.0;
        v424 = *(double *)&v147 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v152 = v151;
          v153 = v149;
          if ( v149 < 0 )
            v153 = -v149;
          v154 = 1.0;
          while ( 1 )
          {
            if ( (v153 & 1) != 0 )
              v154 = v154 * *(double *)&v152;
            v153 >>= 1;
            if ( !v153 )
              break;
            *((unsigned long long *)&v155 + 1) = *((unsigned long long *)&v152 + 1);
            *(double *)&v155 = *(double *)&v152 * *(double *)&v152;
            v152 = v155;
          }
          if ( v149 >= 0 )
            v156 = v154;
          else
            v156 = 1.0 / v154;
          v157 = v149 + 1;
          v158 = v149;
          v159 = (double)(v149 + 1) * *v150;
          v160 = v159 * v156;
          v161 = *(unsigned long long *)&v424;
          v142 = v160 + v142;
          if ( v149 < 0 )
            v158 = -v149;
          v162 = 1.0;
          while ( 1 )
          {
            if ( (v158 & 1) != 0 )
              v162 = v162 * *(double *)&v161;
            v158 >>= 1;
            if ( !v158 )
              break;
            *((unsigned long long *)&v163 + 1) = *((unsigned long long *)&v161 + 1);
            *(double *)&v163 = *(double *)&v161 * *(double *)&v161;
            v161 = v163;
          }
          if ( v149 >= 0 )
            v164 = v162;
          else
            v164 = 1.0 / v162;
          v165 = v149;
          v166 = v159 * v164;
          v167 = v148;
          v146 = v166 + v146;
          if ( v149 < 0 )
            v165 = -v149;
          v168 = 1.0;
          while ( 1 )
          {
            if ( (v165 & 1) != 0 )
              v168 = v168 * *(double *)&v167;
            v165 >>= 1;
            if ( !v165 )
              break;
            *((unsigned long long *)&v169 + 1) = *((unsigned long long *)&v167 + 1);
            *(double *)&v169 = *(double *)&v167 * *(double *)&v167;
            v167 = v169;
          }
          if ( v149 >= 0 )
            v170 = v168;
          else
            v170 = 1.0 / v168;
          ++v149;
          v171 = v159 * v170;
          ++v150;
          v151 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          v145 = v145 + v171;
        }
        while ( v157 + 1 <= v397 );
        v140 = v397;
      }
      v480 = *(double *)libm_sse2_sqrt_precise(v344, v357, v371, v385).m128_u64 * 4.0;
      v481 = v480 + *(double *)libm_sse2_sqrt_precise(v345, v358, v372, v386).m128_u64;
      v172 = 0.0;
      v482 = (v481 + *(double *)libm_sse2_sqrt_precise(v346, v359, v373, v387).m128_u64) * (v399 / 6.0);
      if ( v140 >= 1 )
      {
        v173 = v399 * *(double *)&qword_43E0E8;
        v174 = 0;
        v175 = (double *)(a3 + 32);
        v400 = v399 * *(double *)&qword_43E0E8;
        do
        {
          v176 = v173;
          v177 = v174;
          if ( v174 < 0 )
            v177 = -v174;
          v178 = 1.0;
          while ( 1 )
          {
            if ( (v177 & 1) != 0 )
              v178 = v178 * v176;
            v177 >>= 1;
            if ( !v177 )
              break;
            v176 = v176 * v176;
          }
          if ( v174 >= 0 )
            v179 = v178;
          else
            v179 = 1.0 / v178;
          v173 = v400;
          v180 = (double)++v174 * *v175++;
          v172 = v172 + v180 * v179;
        }
        while ( v174 + 1 <= v140 );
      }
      v181 = *(double *)libm_sse2_sqrt_precise(v347, v360, v374, v388).m128_u64;
      v182 = (double *)(*(unsigned long *)(v466 + 108) + 32 * (v69 + 2));
      v425 = v181;
      v572 = v181 * v412;
      v183 = v492 * *v182;
      v184 = v498 * *v182;
      v566 = v181 * v433;
      v185 = v181 * v442;
      v521 = v181 * v450;
      v182[2] = v519;
      v186 = v493 * v182[1];
      v568 = v185;
      v418 = v183 + v186 + v512;
      v508 = v184 + v499 * v182[1] + v503;
      v187 = sub_406A70((int)v574, -4.0, 0.0, -1.0, 1.0e-10, v418, v483, v508, v559);
      v188 = v182[1];
      v189 = *v182;
      v190 = v182[2];
      v443 = (v537 * *v182 + v538 * v188 + v539 * v190) * v187;
      v191 = (v543 * *v182 + v544 * v188 + v545 * v190) * v187 - v555;
      v192 = v575 - 1;
      v489 = (v546 * *v182 + v547 * v188 + v548 * v190) * v187;
      v193 = (v552 * *v182 + v553 * v188 + v554 * v190) * v187 - v563;
      v426 = (v528 * *v182 + v529 * v188 + v530 * v190) * v187;
      v194 = (v534 * *v182 + v535 * v188 + v536 * v190) * v187 - v556;
      v195 = v187 * v418 - v483;
      v520 = v187 * v494 * v437;
      v196 = -v520 - v517;
      v515 = -(v187 * v500 * v437) - v560;
      v197 = 0.0;
      v486 = v195;
      if ( v575 - 1 >= 0 )
      {
        v198 = v576;
        if ( v575 >= 4 )
        {
          v199 = v195 * v576;
          do
          {
            v197 = (((v197 * v199 + *(double *)&v574[2 * v192 + 20]) * v199 + *(double *)&v574[2 * v192 + 18]) * v199
                  + *(double *)&v574[2 * v192 + 16])
                 * v199
                 + *(double *)&v574[2 * v192 + 14];
            v192 -= 4;
          }
          while ( v192 >= 3 );
          v198 = v576;
          v195 = v187 * v418 - v483;
        }
        if ( v192 >= 0 )
        {
          v200 = v195 * v198;
          do
            v197 = v197 * v200 + *(double *)&v574[2 * v192-- + 20];
          while ( v192 >= 0 );
        }
        v196 = -(v187 * v494 * v437) - v517;
      }
      v508 = v508 - v418 * v197;
      v201 = -((v191 - (v443 - v513) * v197) / v508);
      v202 = v182[2];
      v203 = -((v193 - (v489 - v518) * v197) / v508);
      v515 = -((v515 - v196 * v197) / v508);
      v204 = -((v194 - (v426 - v511) * v197) / v508);
      v205 = v182[1];
      v206 = v492 * v189 + v493 * v205 + v494 * v202;
      v451 = v206;
      v570 = v201 * v206 + v443 - v513;
      v567 = v203 * v206 + v489 - v518;
      v569 = v204 * v206 + v426 - v511;
      v490 = v515 * v206 - v520 - v517;
      v527 = v495 * v189 + v496 * v205 + v497 * v202;
      v565 = (v540 * v189 + v541 * v205 + v542 * v202) * v187 + v201 * v527 - v562;
      v571 = (v549 * v189 + v550 * v205 + v551 * v202) * v187 + v203 * v527 - v564;
      v207 = v531 * v189;
      v208 = *(unsigned long long *)&v187;
      v401 = v187 * v527 - v561;
      v573 = (v207 + v532 * v205 + v533 * v202) * v187 + v204 * v527 - v557;
      v515 = v515 * v527 - v187 * v497 * v437 - v558;
      v209 = 0.0;
      v210 = 0.0;
      v211 = 0.0;
      if ( v397 >= 1 )
      {
        *((unsigned long long *)&v214 + 1) = 0i64;
        *(double *)&v208 = (v187 * v451 - v483) * *(double *)&qword_43E0E8;
        v212 = 0;
        v213 = (double *)(a3 + 32);
        *(double *)&v214 = *(double *)&qword_43E0E8 * 0.0;
        do
        {
          v215 = v214;
          v216 = v212;
          if ( v212 < 0 )
            v216 = -v212;
          v217 = 1.0;
          while ( 1 )
          {
            if ( (v216 & 1) != 0 )
              v217 = v217 * *(double *)&v215;
            v216 >>= 1;
            if ( !v216 )
              break;
            *((unsigned long long *)&v218 + 1) = *((unsigned long long *)&v215 + 1);
            *(double *)&v218 = *(double *)&v215 * *(double *)&v215;
            v215 = v218;
          }
          if ( v212 >= 0 )
            v219 = v217;
          else
            v219 = 1.0 / v217;
          v220 = COERCE_UNSIGNED_INT64(*(double *)&v208 * 0.5);
          v221 = v212 + 1;
          v222 = v212;
          v223 = (double)(v212 + 1) * *v213;
          v209 = v219 * v223 + v209;
          if ( v212 < 0 )
            v222 = -v212;
          v224 = 1.0;
          while ( 1 )
          {
            if ( (v222 & 1) != 0 )
              v224 = v224 * *(double *)&v220;
            v222 >>= 1;
            if ( !v222 )
              break;
            *((unsigned long long *)&v225 + 1) = *((unsigned long long *)&v220 + 1);
            *(double *)&v225 = *(double *)&v220 * *(double *)&v220;
            v220 = v225;
          }
          if ( v212 >= 0 )
            v226 = v224;
          else
            v226 = 1.0 / v224;
          v227 = v208;
          v228 = v212;
          v210 = v226 * v223 + v210;
          if ( v212 < 0 )
            v228 = -v212;
          v229 = 1.0;
          while ( 1 )
          {
            if ( (v228 & 1) != 0 )
              v229 = v229 * *(double *)&v227;
            v228 >>= 1;
            if ( !v228 )
              break;
            *((unsigned long long *)&v230 + 1) = *((unsigned long long *)&v227 + 1);
            *(double *)&v230 = *(double *)&v227 * *(double *)&v227;
            v227 = v230;
          }
          if ( v212 >= 0 )
            v231 = v229;
          else
            v231 = 1.0 / v229;
          ++v212;
          ++v213;
          v211 = v211 + v231 * v223;
          v214 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
        }
        while ( v221 + 1 <= v397 );
      }
      v475 = *(double *)libm_sse2_sqrt_precise(v348, v361, v375, v389).m128_u64 * 4.0;
      v476 = v475 + *(double *)libm_sse2_sqrt_precise(v349, v362, v376, v390).m128_u64;
      v232 = 0.0;
      v427 = v187 * v451 - v483;
      v477 = (v476 + *(double *)libm_sse2_sqrt_precise(v350, v363, v377, v391).m128_u64) * (v427 / 6.0);
      if ( v397 >= 1 )
      {
        v233 = v427 * *(double *)&qword_43E0E8;
        v234 = 0;
        v235 = (double *)(a3 + 32);
        v428 = v427 * *(double *)&qword_43E0E8;
        do
        {
          v236 = v233;
          v237 = v234;
          if ( v234 < 0 )
            v237 = -v234;
          v238 = 1.0;
          while ( 1 )
          {
            if ( (v237 & 1) != 0 )
              v238 = v238 * v236;
            v237 >>= 1;
            if ( !v237 )
              break;
            v236 = v236 * v236;
          }
          if ( v234 >= 0 )
            v239 = v238;
          else
            v239 = 1.0 / v238;
          v233 = v428;
          v240 = (double)++v234 * *v235++;
          v232 = v232 + v240 * v239;
        }
        while ( v234 + 1 <= v397 );
      }
      v241 = *(double *)libm_sse2_sqrt_precise(v351, v364, v378, v392).m128_u64;
      v242 = *(double *)LODWORD(v505) * v492;
      v523 = v241;
      v491 = v490 * v241;
      v444 = v242 + *(double *)(LODWORD(v505) + 8) * v493 + *(double *)(LODWORD(v505) + 16) * v494;
      v243 = *(double *)(v468 + v435 + 32);
      v244 = *(double *)(v468 + v435 + 48);
      v434 = v495 * *(double *)LODWORD(v505)
           + v496 * *(double *)(LODWORD(v505) + 8)
           + v497 * *(double *)(LODWORD(v505) + 16);
      v413 = v243 * v492 + *(double *)(v468 + v435 + 40) * v493 + v244 * v494;
      v415 = v243 * v495 + *(double *)(v468 + v435 + 40) * v496 + v244 * v497;
      v524 = v471 - v408;
      v436 = v474 - v482;
      v520 = v482 * v408 - v471 * v474 + (v471 - v408) * v477 + v401 * (v474 - v482);
      v469 = *(double *)libm_sse2_sqrt_precise(v352, v365, v379, v393).m128_u64;
      v429 = v526 - v572;
      v245 = v568;
      v7 = v466;
      v246 = v522 - v380;
      v419 = v507 - v566;
      v247 = a4;
      v248 = v447;
      v249 = v566 * v408;
      v396 = v509 - v568;
      v505 = v469 * v469;
      v250 = v406 - v516;
      v251 = v524;
      v252 = v567 * v523 * v524 + (v522 - v380) * v477;
      *(double *)&a4[8 * v447] = ((v570 * v523 * v524
                                 + (v510 - v478) * v477
                                 + v401 * (v526 - v572)
                                 + v565 * (v474 - v482)
                                 + v572 * v408
                                 + v482 * v478
                                 - v471 * v526
                                 - v510 * v474)
                                * v469
                                - ((v526 - v572) * (v474 - v482) + (v510 - v478) * v524) / v469 * v520)
                               * *(double *)(v466 + 80)
                               / (v469
                                * v469);
      v253 = v252 + v401 * v419 + v571 * (v474 - v482) + v249 + v482 * v380 - v471 * v507 - v522 * v474;
      v254 = v469;
      v255 = 1;
      v256 = v520;
      *(double *)&a4[8 * v447 + 8] = (v253 * v469 - (v419 * (v474 - v482) + v246 * v251) / v469 * v520)
                                   * *(double *)(v466 + 80)
                                   / v505;
      v257 = v569 * v523 * v251
           + v250 * v477
           + v401 * v396
           + v573 * (v474 - v482)
           + v245 * v408
           + v482 * v516
           - v471 * v509
           - v406 * v474;
      v258 = v474 - v482;
      v259 = (v257 * v254 - (v396 * (v474 - v482) + v250 * v251) / v254 * v256) * *(double *)(v466 + 80);
      *(unsigned long long *)&a4[8 * v447 + 24] = 0i64;
      *(double *)&a4[8 * v447 + 16] = v259 / v505;
      if ( v397 >= 1 )
      {
        v260 = (double *)&a4[8 * v447 + 32];
        do
        {
          v262 = v525;
          v261 = v255;
          *(double *)&v262 = *(double *)&v525 * *(double *)&qword_43E0E8;
          v263 = v262;
          if ( v255 < 0 )
            v261 = -v255;
          v264 = 1.0;
          while ( 1 )
          {
            if ( (v261 & 1) != 0 )
              v264 = v264 * *(double *)&v263;
            v261 >>= 1;
            if ( !v261 )
              break;
            *((unsigned long long *)&v265 + 1) = *((unsigned long long *)&v263 + 1);
            *(double *)&v265 = *(double *)&v263 * *(double *)&v263;
            v263 = v265;
          }
          if ( v255 >= 0 )
            v266 = v264;
          else
            v266 = 1.0 / v264;
          v267 = v255;
          v268 = v266 / *(double *)&qword_43E0E8 / v502 * v444;
          if ( v255 < 0 )
            v267 = -v255;
          v269 = 1.0;
          while ( 1 )
          {
            if ( (v267 & 1) != 0 )
              v269 = v269 * *(double *)&v262;
            v267 >>= 1;
            if ( !v267 )
              break;
            *((unsigned long long *)&v270 + 1) = *((unsigned long long *)&v262 + 1);
            *(double *)&v270 = *(double *)&v262 * *(double *)&v262;
            v262 = v270;
          }
          if ( v255 >= 0 )
            v271 = v269;
          else
            v271 = 1.0 / v269;
          v272 = v255;
          v273 = v465 * *(double *)&qword_43E0E8;
          v509 = v271 / *(double *)&qword_43E0E8 / v502 * v434;
          v274 = v514 * v268;
          v275 = v465 * *(double *)&qword_43E0E8;
          v507 = v274;
          if ( v255 < 0 )
            v272 = -v255;
          v276 = 1.0;
          while ( 1 )
          {
            if ( (v272 & 1) != 0 )
              v276 = v276 * v275;
            v272 >>= 1;
            if ( !v272 )
              break;
            v275 = v275 * v275;
          }
          if ( v255 >= 0 )
            v277 = v276;
          else
            v277 = 1.0 / v276;
          v278 = v255;
          v279 = v277 / *(double *)&qword_43E0E8 / v458 * v413;
          if ( v255 < 0 )
            v278 = -v255;
          v280 = 1.0;
          while ( 1 )
          {
            if ( (v278 & 1) != 0 )
              v280 = v280 * v273;
            v278 >>= 1;
            if ( !v278 )
              break;
            v273 = v273 * v273;
          }
          if ( v255 >= 0 )
            v281 = v280;
          else
            v281 = 1.0 / v280;
          v282 = v255;
          v283 = v486 * *(double *)&qword_43E0E8;
          v284 = v425 * v279;
          v285 = v486 * *(double *)&qword_43E0E8;
          v286 = v281 / *(double *)&qword_43E0E8 / v458 * v415;
          if ( v255 < 0 )
            v282 = -v255;
          v287 = 1.0;
          while ( 1 )
          {
            if ( (v282 & 1) != 0 )
              v287 = v287 * v285;
            v282 >>= 1;
            if ( !v282 )
              break;
            v285 = v285 * v285;
          }
          if ( v255 >= 0 )
            v288 = v287;
          else
            v288 = 1.0 / v287;
          v289 = v255;
          v290 = v288 / *(double *)&qword_43E0E8 / v508 * v451;
          if ( v255 < 0 )
            v289 = -v255;
          v291 = 1.0;
          while ( 1 )
          {
            if ( (v289 & 1) != 0 )
              v291 = v291 * v283;
            v289 >>= 1;
            if ( !v289 )
              break;
            v283 = v283 * v283;
          }
          if ( v255 >= 0 )
            v292 = v291;
          else
            v292 = 1.0 / v291;
          ++v255;
          v293 = v507 - v284;
          v294 = v408 * v284;
          v258 = v474 - v482;
          v295 = v290 * v523 * v524
               + (v286 - v509) * v477
               + v401 * v293
               + v292 / *(double *)&qword_43E0E8 / v508 * v527 * v436;
          v251 = v524;
          v296 = (v286 - v509) * v524;
          v297 = v474 * v286;
          v254 = v469;
          *v260++ = ((v295 + v294 + v482 * v509 - v471 * v507 - v297) * v469 - (v293 * v436 + v296) / v469 * v520)
                  * *(double *)(v466 + 80)
                  / v505;
        }
        while ( v255 <= v397 );
        v256 = v520;
        v247 = a4;
        v248 = v447;
      }
      v487 = v462 - v521;
      v521 = v521 * v408 + v482 * v501 - v471 * v462 - v446 * v474;
      v521 = v521 + (v446 - v501) * v477 + v251 * v491 + v401 * v487 + v515 * v258;
      *(double *)&v247[8 * v248 + 64] = (v521 * v254 - (v487 * v258 + (v446 - v501) * v251) / v254 * v256)
                                      * *(double *)(v466 + 80)
                                      / v505;
      v298 = v454;
      v447 = a5 + v248;
      if ( *(unsigned char *)(*(unsigned long *)(v466 + 192) + 40 * v454 + 32) == 1 )
      {
        v479 = v478 - v510;
        v463 = fabs(v258);
        v409 = v408 - v471;
        v381 = v380 - v522;
        v516 = v516 - v406;
        v452 = *(unsigned long long *)&v409 & 0x7FFFFFFFFFFFFFFFi64;
        if ( v463 <= COERCE_DOUBLE(*(unsigned long long *)&v409 & 0x7FFFFFFFFFFFFFFFi64) )
        {
          v301 = v409;
          v300 = *(double *)libm_sse2_pow_precise().m128_u64;
          v299 = v474 - v482;
          v302 = v421;
          v303 = a4;
          *(double *)&a4[8 * v421] = (v429 * v409 - v479 * v436) * (*(double *)(v466 + 72) * v409) / v300;
          v306 = v516 * v436;
          *(double *)&a4[8 * v421 + 8] = (v419 * v409 - v381 * v436) * (*(double *)(v466 + 72) * v409) / v300;
          v305 = (v396 * v301 - v306) * (*(double *)(v466 + 72) * v301);
        }
        else
        {
          v299 = v474 - v482;
          v300 = *(double *)libm_sse2_pow_precise().m128_u64;
          v301 = v409;
          v302 = v421;
          v303 = a4;
          *(double *)&a4[8 * v421] = (v429 * v409 - v479 * v436) * (*(double *)(v466 + 72) * v436) * -1.0 / v300;
          v304 = v516 * v436;
          *(double *)&a4[8 * v421 + 8] = (v419 * v409 - v381 * v436) * (*(double *)(v466 + 72) * v436) * -1.0 / v300;
          v305 = (v396 * v409 - v304) * (*(double *)(v466 + 72) * v436) * -1.0;
        }
        v307 = 1;
        *(double *)&v303[8 * v302 + 16] = v305 / v300;
        *(unsigned long long *)&v303[8 * v302 + 24] = 0i64;
        if ( v397 >= 1 )
        {
          v308 = (double *)&v303[8 * v302 + 32];
          do
          {
            v309 = v307;
            v310 = *(double *)&v525 * *(double *)&qword_43E0E8;
            v311 = *(double *)&v525 * *(double *)&qword_43E0E8;
            if ( v307 < 0 )
              v309 = -v307;
            v312 = 1.0;
            while ( 1 )
            {
              if ( (v309 & 1) != 0 )
                v312 = v312 * v311;
              v309 >>= 1;
              if ( !v309 )
                break;
              v311 = v311 * v311;
            }
            if ( v307 >= 0 )
              v313 = v312;
            else
              v313 = 1.0 / v312;
            v314 = v307;
            v315 = v313 / *(double *)&qword_43E0E8 / v502 * v444;
            if ( v307 < 0 )
              v314 = -v307;
            v316 = 1.0;
            while ( 1 )
            {
              if ( (v314 & 1) != 0 )
                v316 = v316 * v310;
              v314 >>= 1;
              if ( !v314 )
                break;
              v310 = v310 * v310;
            }
            if ( v307 >= 0 )
              v317 = v316;
            else
              v317 = 1.0 / v316;
            v318 = v307;
            v319 = v514 * v315;
            v320 = v465 * *(double *)&qword_43E0E8;
            v321 = v465 * *(double *)&qword_43E0E8;
            v322 = v317 / *(double *)&qword_43E0E8 / v502 * v434;
            if ( v307 < 0 )
              v318 = -v307;
            v323 = 1.0;
            while ( 1 )
            {
              if ( (v318 & 1) != 0 )
                v323 = v323 * v321;
              v318 >>= 1;
              if ( !v318 )
                break;
              v321 = v321 * v321;
            }
            if ( v307 >= 0 )
              v324 = v323;
            else
              v324 = 1.0 / v323;
            v325 = v307;
            v326 = v324 / *(double *)&qword_43E0E8 / v458 * v413;
            if ( v307 < 0 )
              v325 = -v307;
            v327 = 1.0;
            while ( 1 )
            {
              if ( (v325 & 1) != 0 )
                v327 = v327 * v320;
              v325 >>= 1;
              if ( !v325 )
                break;
              v320 = v320 * v320;
            }
            if ( v307 >= 0 )
              v328 = v327;
            else
              v328 = 1.0 / v327;
            v329 = v425 * v326;
            v299 = v474 - v482;
            v330 = v319 - v329;
            v331 = *(double *)(v466 + 72);
            v332 = v330 * v409 - (v322 - v328 / *(double *)&qword_43E0E8 / v458 * v415) * v436;
            v301 = v409;
            if ( v463 <= *(double *)&v452 )
              v333 = v332 * (v331 * v409);
            else
              v333 = v332 * (v331 * v436) * -1.0;
            ++v307;
            *v308++ = v333 / v300;
          }
          while ( v307 <= v397 );
          v302 = v421;
          v303 = a4;
        }
        v334 = *(double *)(v466 + 72);
        v335 = v487 * v301 - (v501 - v446) * v299;
        if ( v463 <= *(double *)&v452 )
          v336 = v335 * (v334 * v301);
        else
          v336 = v335 * (v334 * v299) * -1.0;
        *(double *)&v303[8 * v302 + 64] = v336 / v300;
        v61 = a5 + v302;
        v298 = v454;
        v421 = v61;
      }
      else
      {
        v61 = v421;
      }
      v64 = v483;
      v62 = v298 + 1;
      v65 = v519;
      v66 = v512;
      v67 = v503;
      v11 = v504;
      v454 = v62;
    }
    while ( v62 < v506 );
  }
  v337 = 1.0;
  v338 = *(double *)(a3 + 64);
  result = a4;
  if ( v338 <= 1.0 )
  {
    if ( v338 >= 1.0 )
    {
      *(unsigned long long *)&a4[8 * v61 + 64] = 0i64;
      goto LABEL_310;
    }
    v337 = -1.0 / (v338 * v338);
  }
  *(double *)&a4[8 * v61 + 64] = v337;
LABEL_310:
  *(double *)&a4[8 * v61 + 64] = *(double *)(v7 + 88) * *(double *)&a4[8 * v61 + 64];
  return result;
}

double  sub_410E70()

{
  int v2; 
  unsigned int v3; 
  double *v4; 
  int v5; 
  int i; 
  double v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  double v13; 
  double v14; 
  void *v15[2]; 
  int v16; 
  int v17[4]; 
  long long v18; 
  long long v19; 
  int v20[26]; 

  v2 = this[6];
  v3 = this[7];
  *(unsigned long long *)v17 = xmmword_439410;
  v18 = xmmword_439410;
  v16 = 0;
  v19 = 0x3EB0C6F7A0B5ED8Di64;
  v15[0] = 0;
  v15[1] = 0;
  v20[25] = 0;
  sub_4077E0(v15, v3);
  sub_40C710(v2, v3, this[1], (int)v15[0], this[6], this[7], (int)this);
  v13 = 0.0;
  sub_401000(
    (void ( *)(int, double *, int, int, int))sub_40C710,
    (void ( *)(int, int, int, int, int))sub_40D690,
    this[1],
    this[2],
    v2,
    v3,
    1000,
    (double *)v17,
    (double *)v20,
    0,
    0,
    (int)this);
  v4 = (double *)v15[0];
  sub_40C710(v2, (int)v15[0], this[1], (int)v15[0], this[6], this[7], (int)this);
  v5 = this[7];
  for ( i = 0; i < v5; v13 = v7 * v7 + v13 )
    v7 = v4[i++];
  *(unsigned long long *)&v14 = libm_sse2_sqrt_precise(v9, v10, v11, v12).m128_u64[0];
  if ( v4 )
    operator delete(v4);
  return v14;
}


int  sub_4110D0(int a1, int a2@<esi>, int a3, int a4, int a5, int a6, int a7)
{
  int v7; 
  double v8; 
  double v9; 
  int *v10; 
  double v11; 
  int v12; 
  double v13; 
  double v14; 
  int v15; 
  double v16; 
  double v17; 
  double *v18; 
  double v19; 
  double v20; 
  double v21; 
  int v22; 
  double v23; 
  double v24; 
  double v25; 
  int v26; 
  int v27; 
  int v28; 
  unsigned int v29; 
  double v30; 
  int v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  int v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  int v47; 
  double *v48; 
  double v49; 
  double v50; 
  double v51; 
  long long v52; 
  double v53; 
  int v54; 
  double *v55; 
  long long v56; 
  long long v57; 
  unsigned int v58; 
  double v59; 
  long long v60; 
  double v61; 
  int v62; 
  unsigned int v63; 
  double v64; 
  double v65; 
  long long v66; 
  double v67; 
  long long v68; 
  double v69; 
  unsigned int v70; 
  double v71; 
  long long v72; 
  double v73; 
  long long v74; 
  double v75; 
  double v76; 
  int v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  long long v87; 
  int v88; 
  double *v89; 
  long long v90; 
  long long v91; 
  unsigned int v92; 
  double v93; 
  long long v94; 
  double v95; 
  long long v96; 
  int v97; 
  unsigned int v98; 
  double v99; 
  double v100; 
  long long v101; 
  double v102; 
  long long v103; 
  unsigned int v104; 
  double v105; 
  long long v106; 
  double v107; 
  double v108; 
  double *v109; 
  double v110; 
  double v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  double v116; 
  double v117; 
  double v118; 
  int v119; 
  long long v120; 
  double *v121; 
  unsigned int v122; 
  double v123; 
  long long v124; 
  double v125; 
  long long v126; 
  int v127; 
  unsigned int v128; 
  double v129; 
  double v130; 
  long long v131; 
  double v132; 
  long long v133; 
  unsigned int v134; 
  double v135; 
  long long v136; 
  double v137; 
  double v138; 
  double v139; 
  int v140; 
  int v141; 
  double v142; 
  double v143; 
  double *v144; 
  double *v145; 
  double v146; 
  int result; 
  double v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  int v180; 
  int v181; 
  int v182; 
  int v183; 
  double *v184; 
  int v185; 
  int v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  int v191; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  int v201; 
  unsigned int v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  int v207; 
  int v208; 
  int v209; 
  double v210; 
  double v211; 
  double v212; 
  double v213; 
  double v214; 
  double v215; 
  double v216; 
  double v217; 
  unsigned long *v218; 
  double v219; 
  double v220; 
  double v221; 
  double v222; 
  double v223; 
  double v224; 
  double v225; 
  double v226; 
  double v227; 
  double v228; 
  double v229; 
  double v230; 
  double v231; 
  double v232; 
  int v233; 
  double v234; 
  double v235; 
  int v236; 
  double v237; 
  double v238; 
  double v239; 
  double v240; 
  int v241; 
  double v242; 
  double v243; 
  double v244; 
  double v245; 
  double v246; 
  double v247; 
  double v248; 
  double v249; 
  double v250; 
  double v251; 
  double v252; 
  double v253; 
  double *v254; 
  char v255[180]; 

  v159 = a2;
  v149 = a1;
  *(unsigned long long *)(a3 + 24) = 0i64;
  v236 = *(unsigned long *)(a7 + 32);
  sub_405EB0((int)v255, v236, a3 + 24, qword_43E0E8);
  v7 = *(unsigned long *)(a7 + 20);
  v201 = v7;
  v237 = *(double *)(v7 + 56);
  v183 = a3 + 8 * *(unsigned long *)(v7 + 204);
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v242);
  v8 = v250;
  v9 = v244;
  v10 = (int *)(v7 + 48);
  v254 = (double *)(a3 + 64);
  if ( *(unsigned long *)(v7 + 48) < *(unsigned long *)(v7 + 52) )
    v10 = (int *)(v7 + 52);
  v241 = *(unsigned long *)(v7 + 24);
  v233 = *(unsigned long *)(v7 + 16);
  v11 = (double)*v10 * *(double *)(a3 + 64);
  v12 = 0;
  v213 = v11;
  if ( v233 <= 0 )
  {
    v22 = v183;
  }
  else
  {
    v13 = -v11;
    v14 = v244 * -v11;
    v15 = 0;
    v169 = 0;
    v16 = v250 * -v11;
    v17 = v250 * v11;
    v196 = v244 * v11;
    v230 = -v11;
    v227 = v14;
    v215 = v16;
    v239 = v250 * v11;
    v224 = v247 * v11;
    do
    {
      v18 = (double *)(v15 + *(unsigned long *)(v7 + 108));
      v19 = v242 * *v18;
      v20 = v248 * *v18;
      v18[2] = v13;
      v21 = sub_406A70(
              (int)v255,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              v19 + v243 * v18[1] + v14,
              v196,
              v20 + v249 * v18[1] + v16,
              v17);
      v22 = v183;
      v14 = v227;
      v16 = v215;
      v17 = v239;
      v23 = v246 * v18[1] + v245 * *v18;
      v24 = v247 * v18[2];
      v7 = v201;
      v25 = (v23 + v24) * v21 - v224 - *(double *)(v183 + 8 * *(unsigned long *)(*(unsigned long *)(v201 + 120) + 4 * v12)) * v237;
      v13 = v230;
      *(double *)(a4 + 8 * v12++) = v25;
      v15 = v169 + 32;
      v169 += 32;
    }
    while ( v12 < v233 );
    v11 = v213;
    v8 = v250;
    v9 = v244;
  }
  v26 = v233;
  v207 = v233;
  v202 = 0;
  v184 = (double *)(v22 + 8 * *(unsigned long *)(v7 + 8));
  if ( (*(unsigned long *)(v7 + 160) - *(unsigned long *)(v7 + 156)) / 12 )
  {
    v27 = *(unsigned long *)(v7 + 156);
    v28 = 0;
    v208 = v27;
    v170 = 0;
    do
    {
      v218 = (unsigned long *)(v28 + v27);
      v29 = 0;
      if ( (*(unsigned long *)(v27 + v28 + 4) - *(unsigned long *)(v28 + v27)) / 40 )
      {
        v30 = v8 * v11;
        v31 = 0;
        v32 = v8 * -v11;
        v33 = v9 * -v11;
        v34 = v9 * v11;
        v216 = v8 * v11;
        v231 = v32;
        v228 = v33;
        v225 = v9 * v11;
        do
        {
          v35 = *(double *)(*v218 + v31 + 8) - *(double *)(v201 + 32);
          v36 = *(double *)(*v218 + v31 + 16) - *(double *)(v201 + 40);
          v197 = v243 * v36 + v242 * v35 + v33;
          v37 = sub_406A70((int)v255, -4.0, 0.0, -1.0, 1.0e-10, v197, v34, v249 * v36 + v248 * v35 + v32, v30);
          ++v29;
          v31 += 40;
          v34 = v225;
          v32 = v231;
          v30 = v216;
          v38 = v197 * v37 - v225 - *v184 * v237;
          *(double *)(a4 + 8 * v207) = v38;
          v39 = *(double *)(v201 + 64) * v38;
          v33 = v228;
          *(double *)(a4 + 8 * v207++) = v39;
          v208 = *(unsigned long *)(v201 + 156);
          v218 = (unsigned long *)(v208 + v170);
        }
        while ( v29 < (*(unsigned long *)(v208 + v170 + 4) - *(unsigned long *)(v208 + v170)) / 40 );
        v28 = v170;
      }
      v28 += 12;
      ++v184;
      v11 = v213;
      v8 = v250;
      v9 = v244;
      ++v202;
      v170 = v28;
      v27 = v208;
    }
    while ( v202 < (*(unsigned long *)(v201 + 160) - *(unsigned long *)(v201 + 156)) / 12 );
    v7 = v201;
    v26 = v207;
  }
  v40 = 0;
  v171 = 0;
  v185 = v26 + v241;
  if ( v241 <= 0 )
  {
    v140 = a4;
  }
  else
  {
    v41 = -v213;
    v42 = v244 * -v213;
    v43 = v250 * -v213;
    v44 = v250 * v213;
    v45 = v244 * v213;
    v46 = v247 * v213;
    v232 = -v213;
    v226 = v42;
    v238 = v43;
    v229 = v250 * v213;
    v214 = v244 * v213;
    v253 = v46;
    do
    {
      v209 = v40 + v233 + 2 * v40;
      v47 = 32 * v209;
      v48 = (double *)(32 * v209 + *(unsigned long *)(v7 + 108));
      v49 = v48[1];
      v48[2] = v41;
      v50 = sub_406A70(
              (int)v255,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              *v48 * v242 + v49 * v243 + v42,
              v45,
              *v48 * v248 + v49 * v249 + v43,
              v44);
      v51 = 0.0;
      v52 = *(unsigned long long *)v48;
      v203 = 0.0;
      *(double *)&v52 = (*(double *)&v52 * v242 + v48[1] * v243 + v48[2] * v244) * v50 - v214;
      v222 = *(double *)&v52;
      v240 = (v245 * *v48 + v246 * v48[1] + v247 * v48[2]) * v50 - v253;
      v53 = 0.0;
      if ( v236 >= 1 )
      {
        v54 = 0;
        v56 = (unsigned long long)qword_43E0E8;
        *(double *)&v52 = *(double *)&v52 * *(double *)&qword_43E0E8;
        v55 = (double *)(a3 + 32);
        *(double *)&v56 = *(double *)&qword_43E0E8 * 0.0;
        do
        {
          v57 = v56;
          v58 = v54;
          if ( v54 < 0 )
            v58 = -v54;
          v59 = 1.0;
          while ( 1 )
          {
            if ( (v58 & 1) != 0 )
              v59 = v59 * *(double *)&v57;
            v58 >>= 1;
            if ( !v58 )
              break;
            *((unsigned long long *)&v60 + 1) = *((unsigned long long *)&v57 + 1);
            *(double *)&v60 = *(double *)&v57 * *(double *)&v57;
            v57 = v60;
          }
          if ( v54 >= 0 )
            v61 = v59;
          else
            v61 = 1.0 / v59;
          v62 = v54 + 1;
          v63 = v54;
          v64 = (double)(v54 + 1) * *v55;
          v65 = v64 * v61;
          v66 = COERCE_UNSIGNED_INT64(*(double *)&v52 * 0.5);
          v203 = v65 + v203;
          if ( v54 < 0 )
            v63 = -v54;
          v67 = 1.0;
          while ( 1 )
          {
            if ( (v63 & 1) != 0 )
              v67 = v67 * *(double *)&v66;
            v63 >>= 1;
            if ( !v63 )
              break;
            *((unsigned long long *)&v68 + 1) = *((unsigned long long *)&v66 + 1);
            *(double *)&v68 = *(double *)&v66 * *(double *)&v66;
            v66 = v68;
          }
          if ( v54 >= 0 )
            v69 = v67;
          else
            v69 = 1.0 / v67;
          v70 = v54;
          v71 = v64 * v69;
          v72 = v52;
          v51 = v71 + v51;
          if ( v54 < 0 )
            v70 = -v54;
          v73 = 1.0;
          while ( 1 )
          {
            if ( (v70 & 1) != 0 )
              v73 = v73 * *(double *)&v72;
            v70 >>= 1;
            if ( !v70 )
              break;
            *((unsigned long long *)&v74 + 1) = *((unsigned long long *)&v72 + 1);
            *(double *)&v74 = *(double *)&v72 * *(double *)&v72;
            v72 = v74;
          }
          if ( v54 >= 0 )
            v75 = v73;
          else
            v75 = 1.0 / v73;
          v56 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v54;
          ++v55;
          v53 = v64 * v75 + v53;
        }
        while ( v62 + 1 <= v236 );
      }
      v219 = *(double *)libm_sse2_sqrt_precise(v149, v159, v171, v185).m128_u64 * 4.0;
      v220 = v219 + *(double *)libm_sse2_sqrt_precise(v150, v160, v172, v186).m128_u64;
      v76 = *(double *)libm_sse2_sqrt_precise(v151, v161, v173, v187).m128_u64;
      v77 = *(unsigned long *)(v201 + 108);
      v78 = *(double *)(v47 + v77 + 32);
      v79 = v78 * v248;
      v80 = v78 * v242;
      *(double *)(v47 + v77 + 48) = v232;
      v221 = (v220 + v76) * (v222 / 6.0);
      v81 = sub_406A70(
              (int)v255,
              -4.0,
              0.0,
              -1.0,
              1.0e-10,
              v80 + *(double *)(v47 + v77 + 40) * v243 + v226,
              v214,
              v79 + *(double *)(v47 + v77 + 40) * v249 + v238,
              v229);
      v82 = *(double *)(v47 + v77 + 40);
      v83 = *(double *)(v47 + v77 + 48);
      v223 = 0.0;
      v84 = 0.0;
      v85 = (*(double *)(v47 + v77 + 32) * v242 + v82 * v243 + v83 * v244) * v81 - v214;
      v234 = v85;
      v217 = (*(double *)(v47 + v77 + 32) * v245 + v82 * v246 + v83 * v247) * v81 - v253;
      v86 = 0.0;
      if ( v236 >= 1 )
      {
        *((unsigned long long *)&v87 + 1) = 0i64;
        v90 = (unsigned long long)qword_43E0E8;
        *(double *)&v87 = v85 * *(double *)&qword_43E0E8;
        v88 = 0;
        v89 = (double *)(a3 + 32);
        *(double *)&v90 = *(double *)&qword_43E0E8 * 0.0;
        v198 = v85 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v91 = v90;
          v92 = v88;
          if ( v88 < 0 )
            v92 = -v88;
          v93 = 1.0;
          while ( 1 )
          {
            if ( (v92 & 1) != 0 )
              v93 = v93 * *(double *)&v91;
            v92 >>= 1;
            if ( !v92 )
              break;
            *((unsigned long long *)&v94 + 1) = *((unsigned long long *)&v91 + 1);
            *(double *)&v94 = *(double *)&v91 * *(double *)&v91;
            v91 = v94;
          }
          if ( v88 >= 0 )
            v95 = v93;
          else
            v95 = 1.0 / v93;
          v96 = *(unsigned long long *)&v198;
          v97 = v88 + 1;
          v98 = v88;
          v99 = (double)(v88 + 1) * *v89;
          v223 = v95 * v99 + v223;
          if ( v88 < 0 )
            v98 = -v88;
          v100 = 1.0;
          while ( 1 )
          {
            if ( (v98 & 1) != 0 )
              v100 = v100 * *(double *)&v96;
            v98 >>= 1;
            if ( !v98 )
              break;
            *((unsigned long long *)&v101 + 1) = *((unsigned long long *)&v96 + 1);
            *(double *)&v101 = *(double *)&v96 * *(double *)&v96;
            v96 = v101;
          }
          if ( v88 >= 0 )
            v102 = v100;
          else
            v102 = 1.0 / v100;
          v103 = v87;
          v104 = v88;
          v84 = v102 * v99 + v84;
          if ( v88 < 0 )
            v104 = -v88;
          v105 = 1.0;
          while ( 1 )
          {
            if ( (v104 & 1) != 0 )
              v105 = v105 * *(double *)&v103;
            v104 >>= 1;
            if ( !v104 )
              break;
            *((unsigned long long *)&v106 + 1) = *((unsigned long long *)&v103 + 1);
            *(double *)&v106 = *(double *)&v103 * *(double *)&v103;
            v103 = v106;
          }
          if ( v88 >= 0 )
            v107 = v105;
          else
            v107 = 1.0 / v105;
          v90 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v88;
          ++v89;
          v86 = v107 * v99 + v86;
        }
        while ( v97 + 1 <= v236 );
      }
      v204 = *(double *)libm_sse2_sqrt_precise(v152, v162, v174, v188).m128_u64 * 4.0;
      v205 = v204 + *(double *)libm_sse2_sqrt_precise(v153, v163, v175, v189).m128_u64;
      v108 = *(double *)libm_sse2_sqrt_precise(v154, v164, v176, v190).m128_u64;
      v109 = (double *)(*(unsigned long *)(v201 + 108) + 32 * (v209 + 2));
      v110 = *v109 * v248;
      v111 = *v109 * v242;
      v109[2] = v232;
      v206 = (v205 + v108) * (v234 / 6.0);
      v112 = sub_406A70(
               (int)v255,
               -4.0,
               0.0,
               -1.0,
               1.0e-10,
               v111 + v109[1] * v243 + v226,
               v214,
               v110 + v109[1] * v249 + v238,
               v229);
      v113 = v109[2];
      v114 = *v109 * v245 + v109[1] * v246;
      v115 = (*v109 * v242 + v109[1] * v243 + v113 * v244) * v112 - v214;
      v251 = v115;
      v252 = (v114 + v113 * v247) * v112 - v253;
      v116 = 0.0;
      v117 = 0.0;
      v118 = 0.0;
      if ( v236 >= 1 )
      {
        v119 = 0;
        v120 = (unsigned long long)qword_43E0E8;
        *(double *)&v120 = *(double *)&qword_43E0E8 * 0.0;
        v121 = (double *)(a3 + 32);
        v199 = v115 * *(double *)&qword_43E0E8;
        v235 = v115 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v122 = v119;
          if ( v119 < 0 )
            v122 = -v119;
          v123 = 1.0;
          while ( 1 )
          {
            if ( (v122 & 1) != 0 )
              v123 = v123 * *(double *)&v120;
            v122 >>= 1;
            if ( !v122 )
              break;
            *((unsigned long long *)&v124 + 1) = *((unsigned long long *)&v120 + 1);
            *(double *)&v124 = *(double *)&v120 * *(double *)&v120;
            v120 = v124;
          }
          if ( v119 >= 0 )
            v125 = v123;
          else
            v125 = 1.0 / v123;
          v126 = *(unsigned long long *)&v235;
          v127 = v119 + 1;
          v128 = v119;
          v129 = (double)(v119 + 1) * *v121;
          v117 = v125 * v129 + v117;
          if ( v119 < 0 )
            v128 = -v119;
          v130 = 1.0;
          while ( 1 )
          {
            if ( (v128 & 1) != 0 )
              v130 = v130 * *(double *)&v126;
            v128 >>= 1;
            if ( !v128 )
              break;
            *((unsigned long long *)&v131 + 1) = *((unsigned long long *)&v126 + 1);
            *(double *)&v131 = *(double *)&v126 * *(double *)&v126;
            v126 = v131;
          }
          if ( v119 >= 0 )
            v132 = v130;
          else
            v132 = 1.0 / v130;
          v133 = *(unsigned long long *)&v199;
          v134 = v119;
          v118 = v132 * v129 + v118;
          if ( v119 < 0 )
            v134 = -v119;
          v135 = 1.0;
          while ( 1 )
          {
            if ( (v134 & 1) != 0 )
              v135 = v135 * *(double *)&v133;
            v134 >>= 1;
            if ( !v134 )
              break;
            *((unsigned long long *)&v136 + 1) = *((unsigned long long *)&v133 + 1);
            *(double *)&v136 = *(double *)&v133 * *(double *)&v133;
            v133 = v136;
          }
          if ( v119 >= 0 )
            v137 = v135;
          else
            v137 = 1.0 / v135;
          v120 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v119;
          ++v121;
          v116 = v137 * v129 + v116;
        }
        while ( v127 + 1 <= v236 );
      }
      v210 = *(double *)libm_sse2_sqrt_precise(v155, v165, v177, v191).m128_u64 * 4.0;
      v211 = v210 + *(double *)libm_sse2_sqrt_precise(v156, v166, v178, v192).m128_u64;
      v138 = *(double *)libm_sse2_sqrt_precise(v157, v167, v179, v193).m128_u64;
      v212 = (v211 + v138) * (v251 / 6.0) * (v217 - v240) + (v221 - v206) * v252 + v206 * v240 - v217 * v221;
      v139 = *(double *)libm_sse2_sqrt_precise(v158, v168, v180, v194).m128_u64;
      v140 = a4;
      v7 = v201;
      v141 = v181;
      *(double *)(a4 + 8 * v207) = v212 / v139;
      *(double *)(a4 + 8 * v207++) = v212 / v139 * *(double *)(v201 + 80);
      if ( *(unsigned char *)(*(unsigned long *)(v201 + 192) + 40 * v181 + 32) == 1 )
      {
        if ( fabs(v221 - v206) <= fabs(v240 - v217) )
          v142 = v221 - v206;
        else
          v142 = v240 - v217;
        v200 = v142;
        v143 = *(double *)libm_sse2_sqrt_precise(v149, v159, v181, v185).m128_u64;
        v141 = v182;
        *(double *)(a4 + 8 * v195) = v200 / v143;
        *(double *)(a4 + 8 * v195) = *(double *)(v201 + 72) * (v200 / v143);
        v185 = v195 + 1;
      }
      v44 = v229;
      v40 = v141 + 1;
      v45 = v214;
      v41 = v232;
      v42 = v226;
      v43 = v238;
      v171 = v40;
    }
    while ( v40 < v241 );
  }
  v144 = &v252;
  v145 = &v251;
  v252 = 1.0;
  v251 = 1.0;
  if ( *v254 > 1.0 )
    v144 = v254;
  if ( *v254 < 1.0 )
    v145 = v254;
  v146 = *v144 / *v145;
  result = v185;
  v148 = v146 - 1.0;
  *(double *)(v140 + 8 * v185) = v148;
  *(double *)(v140 + 8 * v185) = *(double *)(v7 + 88) * v148;
  return result;
}

void  sub_4122B0(int *a1, int a2, unsigned long *a3, unsigned long **a4, unsigned long *a5, double a6, double a7)
{
  int *v7; 
  unsigned long *v8; 
  unsigned long *v9; 
  unsigned long *v10; 
  int v11; 
  unsigned int v12; 
  unsigned long *v13; 
  int v14; 
  double v15; 
  const int *v16; 
  const int *v17; 
  int v18; 
  long long v19; 
  unsigned long *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned long *v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  double *v29; 
  int v30; 
  double v31; 
  unsigned int v32; 
  int v33; 
  int v35; 
  unsigned int v36; 
  int v37; 
  int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  int v42; 
  void *v43[2]; 
  int v44; 
  int v45; 

  v7 = a1;
  v8 = a3;
  v43[0] = 0;
  v43[1] = 0;
  v44 = 0;
  v32 = a1[7];
  v45 = 0;
  sub_4077E0(v43, v32);
  sub_4110D0(a2, (int)v7, v7[1], (int)v43[0], v7[6], v7[7], (int)v7);
  v35 = 0;
  v9 = *a4;
  if ( *a4 != a4[1] )
  {
    do
    {
      v39 = 0;
      v10 = (unsigned long *)(v8[2] + 8 + 56 * *v9);
      if ( (v10[1] - *v10) >> 5 )
      {
        v11 = 0;
        v37 = 0;
        do
        {
          v12 = 0;
          v13 = (unsigned long *)(v11 + *v10 + 8);
          v41 = 0;
          if ( (v13[1] - *v13) / 40 )
          {
            v14 = 0;
            do
            {
              v15 = *((double *)v43[0] + v35) * *((double *)v43[0] + v35);
              ++v35;
              if ( v15 > a6 )
              {
                v16 = (const int *)v13[1];
                v17 = (const int *)(v14 + *v13 + 40);
                if ( v17 != v16 )
                {
                  v18 = v14 + *v13;
                  do
                  {
                    v18 += 40;
                    *(int *)(v18 - 40) = _mm_loadu_si128(v17);
                    *(int *)(v18 - 24) = _mm_loadu_si128(v17 + 1);
                    v19 = v17[2].m128i_i64[0];
                    v17 = (const int *)((char *)v17 + 40);
                    *(unsigned long long *)(v18 - 8) = v19;
                  }
                  while ( v17 != v16 );
                }
                v13[1] -= 40;
                v12 = v41 - 1;
                v14 -= 40;
              }
              ++v12;
              v14 += 40;
              v41 = v12;
              v13 = (unsigned long *)(*(unsigned long *)(a3[2] + 56 * *v9 + 8) + v37 + 8);
            }
            while ( v12 < (v13[1] - *v13) / 40 );
            v11 = v37;
          }
          v11 += 32;
          v37 = v11;
          ++v39;
          v10 = (unsigned long *)(a3[2] + 8 + 56 * *v9);
        }
        while ( v39 < (v10[1] - *v10) >> 5 );
        v8 = a3;
      }
      ++v9;
    }
    while ( v9 != a4[1] );
    v7 = a1;
  }
  v20 = (unsigned long *)v7[5];
  v40 = 0;
  v21 = v20[6];
  v22 = v20[4];
  v33 = v21;
  if ( (v20[40] - v20[39]) / 12 )
  {
    v38 = v20[39];
    v23 = 0;
    v36 = (v20[40] - v38) / 12;
    v24 = v38;
    v25 = (unsigned long *)(v38 + 4);
    v42 = v38 + 4;
    do
    {
      v26 = 0;
      if ( (*v25 - *(unsigned long *)(v24 + v23)) / 40 )
      {
        do
        {
          ++v26;
          ++v22;
        }
        while ( v26 < (*(unsigned long *)(*(unsigned long *)(a1[5] + 156) + v23 + 4) - *(unsigned long *)(*(unsigned long *)(a1[5] + 156) + v23))
                    / 40 );
      }
      v23 += 12;
      v25 = (unsigned long *)(v42 + 12);
      ++v40;
      v24 = v38;
      v42 += 12;
    }
    while ( v40 < v36 );
    v21 = v33;
  }
  v27 = v21 + v22;
  if ( v21 > 0 )
  {
    v28 = 0;
    v29 = (double *)((char *)v43[0] + 8 * v27);
    do
    {
      v30 = a1[5];
      if ( *(unsigned char *)(*(unsigned long *)(v30 + 192) + v28 + 32) == 1 )
      {
        v31 = *v29++;
        if ( v31 / *(double *)(v30 + 72) * (v31 / *(double *)(v30 + 72)) > a7 )
          *(unsigned char *)(*a5 + v28 + 32) = 0;
      }
      v28 += 40;
      --v21;
    }
    while ( v21 );
  }
  sub_4057B0(a3);
  if ( v43[0] )
    operator delete(v43[0]);
}

char * sub_412610(int a1, int a2@<esi>, int a3, char *a4, int a5, int a6, int a7)
{
  int v7; 
  int *v8; 
  int v9; 
  double v10; 
  double v11; 
  int v12; 
  double v13; 
  double *v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double *v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  int v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double *v35; 
  long long v36; 
  unsigned int v37; 
  double v38; 
  long long v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  int v46; 
  unsigned int v47; 
  int v48; 
  unsigned long *v49; 
  double v50; 
  double v51; 
  char *v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  int v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  int v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  long long v73; 
  double *v74; 
  double v75; 
  long long v76; 
  unsigned int v77; 
  double v78; 
  long long v79; 
  double v80; 
  double v81; 
  int v82; 
  int v83; 
  double v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  int v89; 
  double *v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  int v95; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  int v107; 
  double v108; 
  double v109; 
  double v110; 
  double v111; 
  long long v112; 
  long long v113; 
  int v114; 
  double *v115; 
  long long v116; 
  long long v117; 
  unsigned int v118; 
  double v119; 
  long long v120; 
  double v121; 
  int v122; 
  unsigned int v123; 
  double v124; 
  double v125; 
  long long v126; 
  double v127; 
  long long v128; 
  double v129; 
  unsigned int v130; 
  double v131; 
  long long v132; 
  double v133; 
  long long v134; 
  double v135; 
  double v136; 
  double v137; 
  int v138; 
  double *v139; 
  double v140; 
  unsigned int v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  int v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  int v159; 
  long long v160; 
  double v161; 
  double v162; 
  double v163; 
  double v164; 
  long long v165; 
  int v166; 
  double *v167; 
  long long v168; 
  long long v169; 
  unsigned int v170; 
  double v171; 
  long long v172; 
  double v173; 
  int v174; 
  unsigned int v175; 
  double v176; 
  double v177; 
  long long v178; 
  double v179; 
  long long v180; 
  double v181; 
  unsigned int v182; 
  double v183; 
  long long v184; 
  double v185; 
  long long v186; 
  double v187; 
  double v188; 
  double v189; 
  int v190; 
  double *v191; 
  double v192; 
  unsigned int v193; 
  double v194; 
  double v195; 
  double v196; 
  double v197; 
  double *v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  int v208; 
  double v209; 
  double v210; 
  double v211; 
  double v212; 
  double v213; 
  double v214; 
  double v215; 
  double v216; 
  double v217; 
  double v218; 
  double v219; 
  long long v220; 
  double v221; 
  double v222; 
  double v223; 
  double v224; 
  int v225; 
  double *v226; 
  long long v227; 
  long long v228; 
  unsigned int v229; 
  double v230; 
  long long v231; 
  double v232; 
  long long v233; 
  int v234; 
  unsigned int v235; 
  double v236; 
  double v237; 
  long long v238; 
  double v239; 
  long long v240; 
  unsigned int v241; 
  double v242; 
  long long v243; 
  double v244; 
  double v245; 
  double v246; 
  int v247; 
  double *v248; 
  double v249; 
  unsigned int v250; 
  double v251; 
  double v252; 
  double v253; 
  double v254; 
  double v255; 
  double v256; 
  double v257; 
  char *v258; 
  int v259; 
  double v260; 
  double v261; 
  double v262; 
  double v263; 
  int v264; 
  double v265; 
  double *v266; 
  unsigned int v267; 
  long long v268; 
  long long v269; 
  double v270; 
  long long v271; 
  double v272; 
  unsigned int v273; 
  double v274; 
  double v275; 
  long long v276; 
  double v277; 
  unsigned int v278; 
  double v279; 
  double v280; 
  double v281; 
  double v282; 
  double v283; 
  unsigned int v284; 
  double v285; 
  double v286; 
  double v287; 
  unsigned int v288; 
  double v289; 
  double v290; 
  double v291; 
  double v292; 
  double v293; 
  double v294; 
  unsigned int v295; 
  double v296; 
  double v297; 
  double v298; 
  double v299; 
  double v300; 
  double v301; 
  double v302; 
  int v303; 
  double v304; 
  double v305; 
  double v306; 
  int v307; 
  char *v308; 
  double v309; 
  int v310; 
  double *v311; 
  unsigned int v312; 
  double v313; 
  double v314; 
  double v315; 
  double v316; 
  unsigned int v317; 
  double v318; 
  double v319; 
  double v320; 
  unsigned int v321; 
  double v322; 
  double v323; 
  double v324; 
  double v325; 
  double v326; 
  double v327; 
  unsigned int v328; 
  double v329; 
  double v330; 
  double v331; 
  double v332; 
  double v333; 
  double v334; 
  double v335; 
  double v336; 
  double v337; 
  double v338; 
  double v339; 
  double v340; 
  double v341; 
  char *result; 
  int v343; 
  int v344; 
  int v345; 
  int v346; 
  int v347; 
  int v348; 
  int v349; 
  int v350; 
  int v351; 
  int v352; 
  int v353; 
  int v354; 
  int v355; 
  int v356; 
  int v357; 
  int v358; 
  int v359; 
  int v360; 
  int v361; 
  int v362; 
  int v363; 
  int v364; 
  int v365; 
  int v366; 
  int v367; 
  int v368; 
  int v369; 
  int v370; 
  int v371; 
  int v372; 
  int v373; 
  int v374; 
  int v375; 
  int v376; 
  int v377; 
  int v378; 
  int v379; 
  int v380; 
  int v381; 
  char *v382; 
  int v383; 
  int v384; 
  int v385; 
  int v386; 
  int v387; 
  int v388; 
  int v389; 
  int v390; 
  int v391; 
  int v392; 
  int v393; 
  int v394; 
  double v395; 
  double v396; 
  double v397; 
  double v398; 
  int v399; 
  int v400; 
  double v401; 
  double v402; 
  double v403; 
  double v404; 
  double v405; 
  int v406; 
  unsigned int v407; 
  int v408; 
  double v409; 
  double v410; 
  double v411; 
  double v412; 
  double v413; 
  double v414; 
  double v415; 
  double v416; 
  double v417; 
  double v418; 
  unsigned int v419; 
  int v420; 
  double v421; 
  double v422; 
  double v423; 
  double v424; 
  double v425; 
  double v426; 
  double v427; 
  double v428; 
  double v429; 
  double v430; 
  double v431; 
  double v432; 
  double v433; 
  int v434; 
  double *v435; 
  double v436; 
  unsigned long long v437; 
  double v438; 
  double v439; 
  double v440; 
  double v441; 
  double v442; 
  double v443; 
  double v444; 
  double v445; 
  double v446; 
  double v447; 
  double v448; 
  int v449; 
  int v450; 
  int v451; 
  double v452; 
  double v453; 
  double v454; 
  double v455; 
  double v456; 
  double v457; 
  double v458; 
  double v459; 
  double v460; 
  double v461; 
  double v462; 
  double v463; 
  double v464; 
  double v465; 
  double v466; 
  double v467; 
  double v468; 
  double v469; 
  double v470; 
  double v471; 
  double v472; 
  double v473; 
  double v474; 
  long long v475; 
  double v476; 
  double v477; 
  double v478; 
  double v479; 
  double v480; 
  double v481; 
  double v482; 
  double v483; 
  double v484; 
  double v485; 
  double v486; 
  double v487; 
  double v488; 
  double v489; 
  double v490; 
  double v491; 
  double v492; 
  double v493; 
  double v494; 
  double v495; 
  int v496; 
  int v497; 
  double v498; 
  double v499; 
  double v500; 
  double v501; 
  double v502; 
  double v503; 
  double v504; 
  double v505; 
  double v506; 
  double v507; 
  double v508; 
  double v509; 
  double v510; 
  double v511; 
  double v512; 
  double v513; 
  double v514; 
  double v515; 
  double v516; 
  double v517; 
  double v518; 
  double v519; 
  double v520; 
  double v521; 
  double v522; 
  double v523; 
  double v524; 
  double v525; 
  double v526; 
  double v527; 
  double v528; 
  double v529; 
  double v530; 
  double v531; 
  double v532; 
  double v533; 
  unsigned long long v534; 
  double v535; 
  double v536; 
  double v537; 
  double v538; 
  double v539; 
  double v540; 
  double v541; 
  double v542; 
  double v543; 
  double v544; 
  double v545; 
  double v546; 
  double v547; 
  double v548; 
  double v549; 
  double v550; 
  double v551; 
  double v552; 
  double v553; 
  double v554; 
  double v555; 
  double v556; 
  double v557; 
  double v558; 
  int v559; 
  int v560; 
  double v561; 
  double v562; 
  double v563; 
  double v564; 
  double v565; 
  double v566; 
  double v567; 
  double v568; 
  double v569; 
  double v570; 
  double v571; 
  double v572; 
  double v573; 
  double v574; 
  double v575; 
  double v576; 
  double v577; 
  double v578; 
  double v579; 
  double v580; 
  double v581; 
  double v582; 
  double v583; 
  double v584; 
  double v585; 
  double v586; 
  double v587; 
  double v588; 
  double v589; 
  double v590; 
  double v591; 
  double v592; 
  double v593; 
  double v594; 
  double v595; 
  double v596; 
  double v597; 
  double v598; 
  double v599; 
  double v600; 
  unsigned long v601[40]; 
  int v602; 
  double v603; 

  v356 = a2;
  v343 = a1;
  v382 = a4;
  *(unsigned long long *)(a3 + 24) = 0i64;
  v400 = *(unsigned long *)(a7 + 32);
  sub_405EB0((int)v601, v400, a3 + 24, qword_43E0E8);
  v7 = *(unsigned long *)(a7 + 20);
  v369 = v7;
  v552 = *(double *)(v7 + 56);
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v522);
  v8 = (int *)(v7 + 48);
  if ( *(unsigned long *)(v7 + 48) < *(unsigned long *)(v7 + 52) )
    v8 = (int *)(v7 + 52);
  v460 = (double)*v8;
  *(double *)&v534 = *(double *)(a3 + 64) * v460;
  sub_406E50(&v522, &v563, (double *)a3);
  sub_407120(&v522, &v581, (double *)a3);
  sub_407400(&v522, &v572, (double *)a3);
  memset(a4, 0, 8 * a6 * a5);
  v9 = *(unsigned long *)(v7 + 24);
  v10 = v530;
  v496 = *(unsigned long *)(v7 + 204);
  v399 = 0;
  v560 = *(unsigned long *)(v7 + 16);
  v559 = v9;
  v449 = 0;
  v11 = v524;
  if ( v560 > 0 )
  {
    v12 = 0;
    v13 = -*(double *)&v534;
    v406 = 0;
    v14 = (double *)(a4 + 16);
    v15 = -*(double *)&v534 * v524;
    v412 = v589 * *(double *)&v534;
    v16 = -*(double *)&v534 * v530;
    v17 = v524 * *(double *)&v534;
    v421 = v583 * *(double *)&v534;
    v18 = v530 * *(double *)&v534;
    v476 = -*(double *)&v534;
    v536 = v580 * *(double *)&v534;
    v482 = v15;
    v532 = v524 * *(double *)&v534;
    v545 = v16;
    v442 = v574 * *(double *)&v534;
    v543 = v530 * *(double *)&v534;
    v453 = v530 * v460;
    v465 = v524 * v460;
    v471 = v571 * *(double *)&v534;
    v531 = v565 * *(double *)&v534;
    v507 = v568 * *(double *)&v534;
    v537 = v586 * *(double *)&v534;
    v489 = v577 * *(double *)&v534;
    v395 = v527 * v460;
    v415 = v552 * -1.0;
    do
    {
      v19 = (double *)(v12 + *(unsigned long *)(v7 + 108));
      v20 = v523 * v19[1];
      v21 = v522 * *v19;
      v19[2] = v13;
      v492 = v21 + v20 + v15;
      v426 = v528 * *v19 + v529 * v19[1] + v16;
      v409 = sub_406A70((int)v601, -4.0, 0.0, -1.0, 1.0e-10, v492, v17, v426, v18);
      v461 = v409 * v492 - v532;
      v22 = sub_4060D0(v601, v603 * v461);
      v23 = v19[1];
      v24 = *v19;
      v25 = v19[2];
      v427 = v426 - v22 * v492;
      v26 = -(((v587 * v24 + v588 * v23 + v25 * v589) * v409
             - v412
             - ((v581 * v24 + v582 * v23 + v25 * v583) * v409 - v421) * v22)
            / v427);
      v401 = -(((v578 * v24 + v579 * v23 + v25 * v580) * v409
              - v536
              - ((v572 * v24 + v573 * v23 + v25 * v574) * v409 - v442) * v22)
             / v427);
      v493 = -((-(v409 * v530 * v460) - v453 - (-(v409 * v524 * v460) - v465) * v22) / v427);
      *(v14 - 2) = -(((v569 * *v19 + v570 * v23 + v25 * v571) * v409
                    - v471
                    - ((*v19 * v563 + v23 * v564 + v565 * v25) * v409 - v531) * v22)
                   / v427)
                 * (*v19 * v525 + v23 * v526 + v527 * v25)
                 + (*v19 * v566 + v23 * v567 + v568 * v25) * v409
                 - v507;
      v27 = 1;
      v28 = v527;
      v29 = (*v19 * v525 + v19[1] * v526 + v527 * v19[2]) * v26;
      v30 = v526;
      *(v14 - 1) = (*v19 * v584 + v19[1] * v585 + v586 * v19[2]) * v409 + v29 - v537;
      v31 = (*v19 * v575 + v19[1] * v576 + v577 * v19[2]) * v409;
      v32 = v525;
      v33 = *v19 * v525 + v19[1] * v30 + v28 * v19[2];
      v14[1] = 0.0;
      *v14 = v31 + v33 * v401 - v489;
      v34 = v32 * *v19 + v30 * v19[1] + v28 * v19[2];
      if ( v400 >= 1 )
      {
        v35 = v14 + 2;
        do
        {
          *((unsigned long long *)&v36 + 1) = 0i64;
          *(double *)&v36 = v461 * *(double *)&qword_43E0E8;
          v37 = v27;
          if ( v27 < 0 )
            v37 = -v27;
          v38 = 1.0;
          while ( 1 )
          {
            if ( (v37 & 1) != 0 )
              v38 = v38 * *(double *)&v36;
            v37 >>= 1;
            if ( !v37 )
              break;
            *((unsigned long long *)&v39 + 1) = *((unsigned long long *)&v36 + 1);
            *(double *)&v39 = *(double *)&v36 * *(double *)&v36;
            v36 = v39;
          }
          if ( v27 >= 0 )
            v40 = v38;
          else
            v40 = 1.0 / v38;
          ++v27;
          *v35++ = v40 / *(double *)&qword_43E0E8 / v427 * v34;
        }
        while ( v27 <= v400 );
        v28 = v527;
      }
      v41 = v30 * v19[1];
      v17 = v532;
      v15 = v482;
      v18 = v543;
      v42 = v525 * *v19 + v41;
      v43 = v28 * v19[2];
      v7 = v369;
      v44 = v42 + v43;
      v45 = v28 * v409;
      v16 = v545;
      v14[6] = v44 * v493 - v45 * v460 - v395;
      v13 = v476;
      v46 = *(unsigned long *)(*(unsigned long *)(v369 + 120) + 4 * v449++);
      *(double *)&a4[8 * v399 + 8 * v496 + 8 * v46] = v415;
      v399 += a5;
      v14 += a5;
      v12 = v406 + 32;
      v406 += 32;
    }
    while ( v449 < v560 );
    v11 = v524;
    v10 = v530;
  }
  v47 = 0;
  v407 = 0;
  if ( (*(unsigned long *)(v7 + 160) - *(unsigned long *)(v7 + 156)) / 12 )
  {
    v48 = 0;
    v450 = 0;
    while ( 1 )
    {
      v419 = 0;
      v49 = (unsigned long *)(*(unsigned long *)(v369 + 156) + v48);
      if ( (v49[1] - *v49) / 40 )
      {
        v50 = v11;
        v51 = v10 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v434 = 0;
        v536 = v571 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v52 = &a4[8 * v399 + 16];
        v53 = v11 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v54 = v50 * *(double *)&v534;
        v443 = v571 * *(double *)&v534;
        v55 = v10 * *(double *)&v534;
        v477 = v54;
        v466 = v589 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v553 = v51;
        v555 = v55;
        v554 = v53;
        v472 = v589 * *(double *)&v534;
        v508 = v580 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v483 = v580 * *(double *)&v534;
        v545 = v530 * v460;
        v422 = v565 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v532 = v565 * *(double *)&v534;
        v454 = v583 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v537 = v583 * *(double *)&v534;
        v531 = v574 * COERCE_DOUBLE(v534 ^ 0x8000000000000000ui64);
        v416 = v524 * v460;
        v490 = v574 * *(double *)&v534;
        v557 = v552 * -1.0;
        do
        {
          v396 = *(double *)(v369 + 64);
          v413 = *(double *)(*v49 + v434 + 8) - *(double *)(v369 + 32);
          v402 = *(double *)(*v49 + v434 + 16) - *(double *)(v369 + 40);
          v462 = v523 * v402 + v522 * v413 + v53;
          v499 = v529 * v402 + v528 * v413 + v51;
          v494 = sub_406A70((int)v601, -4.0, 0.0, -1.0, 1.0e-10, v462, v54, v499, v55);
          v56 = (v564 * v402 + v563 * v413 + v422) * v494;
          v561 = (v582 * v402 + v581 * v413 + v454) * v494;
          v543 = v561 - v537;
          v57 = v602 - 1;
          v558 = (v573 * v402 + v572 * v413 + v531) * v494;
          v58 = 0.0;
          v556 = v558 - v490;
          v562 = v494 * v524 * v460;
          v59 = (v579 * v402 + v578 * v413 + v508) * v494 - v483;
          v60 = v462;
          v61 = v494 * v462 - v477;
          v538 = v61;
          if ( v602 - 1 >= 0 )
          {
            if ( v602 >= 4 )
            {
              do
              {
                v58 = (((v58 * (v603 * v538) + *(double *)&v601[2 * v57 + 20]) * (v603 * v538)
                      + *(double *)&v601[2 * v57 + 18])
                     * (v603
                      * v538)
                     + *(double *)&v601[2 * v57 + 16])
                    * (v603
                     * v538)
                    + *(double *)&v601[2 * v57 + 14];
                v57 -= 4;
              }
              while ( v57 >= 3 );
              v61 = v538;
            }
            for ( ; v57 >= 0; --v57 )
              v58 = v58 * (v603 * v61) + *(double *)&v601[2 * v57 + 20];
          }
          v62 = 1;
          v63 = v499 - v58 * v462;
          v428 = -((-(v494 * v530 * v460) - v545 - v58 * (-(v494 * v524 * v460) - v416)) / v63);
          v64 = (v570 * v402 + v569 * v413 + v536) * v494 - v443 - v58 * (v56 - v532);
          v65 = v58;
          v66 = v58 * v556;
          v67 = (v588 * v402 + v587 * v413 + v466) * v494 - v472 - v65 * v543;
          *((unsigned long long *)v52 + 1) = 0i64;
          v68 = -(v64 / v63) * v462 + v56;
          v69 = v396;
          v70 = -((v59 - v66) / v63) * v462 + v558;
          v71 = -(v67 / v63) * v462 + v561;
          *((double *)v52 - 2) = (v68 - v532) * v396;
          v72 = (v71 - v537) * v396;
          *(double *)v52 = (v70 - v490) * v396;
          *((double *)v52 - 1) = v72;
          if ( v400 >= 1 )
          {
            v73 = *(unsigned long long *)&v538;
            v74 = (double *)(v52 + 16);
            v75 = v63;
            do
            {
              *((unsigned long long *)&v76 + 1) = *((unsigned long long *)&v73 + 1);
              *(double *)&v76 = *(double *)&v73 * *(double *)&qword_43E0E8;
              v77 = v62;
              if ( v62 < 0 )
                v77 = -v62;
              v78 = 1.0;
              while ( 1 )
              {
                if ( (v77 & 1) != 0 )
                  v78 = v78 * *(double *)&v76;
                v77 >>= 1;
                if ( !v77 )
                  break;
                *((unsigned long long *)&v79 + 1) = *((unsigned long long *)&v76 + 1);
                *(double *)&v79 = *(double *)&v76 * *(double *)&v76;
                v76 = v79;
              }
              if ( v62 >= 0 )
                v80 = v78;
              else
                v80 = 1.0 / v78;
              ++v62;
              *v74++ = v80 / *(double *)&qword_43E0E8 / v75 * (v462 * v396);
            }
            while ( v62 <= v400 );
            v60 = v462;
            v69 = v396;
          }
          v81 = v69 * v557;
          ++v419;
          v54 = v477;
          v53 = v554;
          v434 += 40;
          *((double *)v52 + 6) = v60 * v428 - v562 - v416;
          v51 = v553;
          *(double *)&a4[8 * v399 + 8 * v496 + 8 * v407 + 8 * *(unsigned long *)(v369 + 8)] = v81;
          v49 = (unsigned long *)(*(unsigned long *)(v369 + 156) + v450);
          v399 += a5;
          v55 = v555;
          v52 += 8 * a5;
        }
        while ( v419 < (v49[1] - *v49) / 40 );
        v47 = v407;
      }
      ++v47;
      v48 = v450 + 12;
      v407 = v47;
      v450 += 12;
      if ( v47 >= (*(unsigned long *)(v369 + 160) - *(unsigned long *)(v369 + 156)) / 12 )
        break;
      v11 = v524;
      v10 = v530;
    }
  }
  v82 = 0;
  v408 = 0;
  v83 = v399 + a5 * v559;
  v420 = v83;
  if ( v559 > 0 )
  {
    v84 = -*(double *)&v534;
    v85 = -*(double *)&v534 * v530;
    v86 = -*(double *)&v534 * v524;
    v87 = v524 * *(double *)&v534;
    v547 = v565 * *(double *)&v534;
    v88 = v530 * *(double *)&v534;
    v537 = -*(double *)&v534;
    v555 = v571 * *(double *)&v534;
    v552 = v86;
    v533 = v524 * *(double *)&v534;
    v532 = v85;
    v550 = v583 * *(double *)&v534;
    v495 = v530 * *(double *)&v534;
    v554 = v589 * *(double *)&v534;
    v551 = v574 * *(double *)&v534;
    v553 = v580 * *(double *)&v534;
    v546 = v524 * v460;
    v557 = v530 * v460;
    v562 = v568 * *(double *)&v534;
    v558 = v586 * *(double *)&v534;
    v556 = v577 * *(double *)&v534;
    v561 = v527 * v460;
    v543 = v527 * *(double *)&v534;
    do
    {
      v89 = v82 + v560 + 2 * v82;
      v451 = 32 * v89;
      v90 = (double *)(32 * v89 + *(unsigned long *)(v369 + 108));
      v435 = v90;
      v90[2] = v84;
      v463 = *v90 * v522 + v90[1] * v523 + v86;
      v538 = v528 * *v90 + v529 * v90[1] + v85;
      v91 = sub_406A70((int)v601, -4.0, 0.0, -1.0, 1.0e-10, v463, v87, v538, v88);
      v92 = v90[1];
      v93 = v90[2];
      v444 = (v563 * *v90 + v564 * v92 + v565 * v93) * v91;
      v94 = (v569 * *v90 + v570 * v92 + v571 * v93) * v91 - v555;
      v455 = (v581 * *v90 + v582 * v92 + v583 * v93) * v91;
      v95 = v602 - 1;
      v96 = (v587 * *v90 + v588 * v92 + v589 * v93) * v91 - v554;
      v467 = (v572 * *v90 + v573 * v92 + v574 * v93) * v91;
      v97 = 0.0;
      v98 = (v578 * *v90 + v579 * v92 + v580 * v93) * v91 - v553;
      v536 = -(v91 * v524 * v460) - v546;
      v99 = v91 * v463 - v533;
      *(double *)&v534 = v99;
      if ( v602 - 1 >= 0 )
      {
        if ( v602 >= 4 )
        {
          do
          {
            v97 = (((v97 * (v603 * *(double *)&v534) + *(double *)&v601[2 * v95 + 20]) * (v603 * *(double *)&v534)
                  + *(double *)&v601[2 * v95 + 18])
                 * (v603
                  * *(double *)&v534)
                 + *(double *)&v601[2 * v95 + 16])
                * (v603
                 * *(double *)&v534)
                + *(double *)&v601[2 * v95 + 14];
            v95 -= 4;
          }
          while ( v95 >= 3 );
          v99 = *(double *)&v534;
        }
        for ( ; v95 >= 0; --v95 )
          v97 = v97 * (v603 * v99) + *(double *)&v601[2 * v95 + 20];
      }
      v538 = v538 - v97 * v463;
      v100 = -((v94 - v97 * (v444 - v547)) / v538);
      v101 = -((v96 - v97 * (v455 - v550)) / v538);
      v102 = -((v98 - v97 * (v467 - v551)) / v538);
      v103 = -((-(v91 * v530 * v460) - v557 - v97 * v536) / v538);
      *(double *)&v437 = *v90 * v522 + v92 * v523 + v90[2] * v524;
      v423 = *(double *)&v437 * v100 + v444 - v547;
      v445 = *(double *)&v437 * v101 + v455 - v550;
      v509 = *(double *)&v437 * v103 - v91 * v524 * v460 - v546;
      v456 = *(double *)&v437 * v102 + v467 - v551;
      v431 = v525 * *v90 + v526 * v92 + v527 * v90[2];
      v410 = (v566 * *v90 + v567 * v92 + v568 * v90[2]) * v91 + v431 * v100 - v562;
      v487 = (v584 * *v90 + v585 * v92 + v586 * v90[2]) * v91 + v431 * v101 - v558;
      v104 = v431 * v103;
      v105 = v575 * *v90 + v576 * v90[1];
      v106 = v577 * v90[2];
      v107 = v400;
      v108 = (v105 + v106) * v91 + v431 * v102;
      v432 = v431 * v91 - v543;
      v429 = v108 - v556;
      v112 = v437;
      v109 = 0.0;
      v110 = 0.0;
      v111 = 0.0;
      *(double *)&v112 = *(double *)&v437 * v91 - v533;
      v491 = v104 - v527 * v91 * v460 - v561;
      v438 = *(double *)&v112;
      if ( v400 >= 1 )
      {
        *((unsigned long long *)&v113 + 1) = *((unsigned long long *)&v112 + 1);
        *(double *)&v113 = *(double *)&v112 * *(double *)&qword_43E0E8;
        *((unsigned long long *)&v116 + 1) = 0i64;
        v114 = 0;
        v115 = (double *)(a3 + 32);
        *(double *)&v116 = *(double *)&qword_43E0E8 * 0.0;
        v403 = *(double *)&v112 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v117 = v116;
          v118 = v114;
          if ( v114 < 0 )
            v118 = -v114;
          v119 = 1.0;
          while ( 1 )
          {
            if ( (v118 & 1) != 0 )
              v119 = v119 * *(double *)&v117;
            v118 >>= 1;
            if ( !v118 )
              break;
            *((unsigned long long *)&v120 + 1) = *((unsigned long long *)&v117 + 1);
            *(double *)&v120 = *(double *)&v117 * *(double *)&v117;
            v117 = v120;
          }
          if ( v114 >= 0 )
            v121 = v119;
          else
            v121 = 1.0 / v119;
          v122 = v114 + 1;
          v123 = v114;
          v124 = (double)(v114 + 1) * *v115;
          v125 = v124 * v121;
          v126 = *(unsigned long long *)&v403;
          v110 = v125 + v110;
          if ( v114 < 0 )
            v123 = -v114;
          v127 = 1.0;
          while ( 1 )
          {
            if ( (v123 & 1) != 0 )
              v127 = v127 * *(double *)&v126;
            v123 >>= 1;
            if ( !v123 )
              break;
            *((unsigned long long *)&v128 + 1) = *((unsigned long long *)&v126 + 1);
            *(double *)&v128 = *(double *)&v126 * *(double *)&v126;
            v126 = v128;
          }
          if ( v114 >= 0 )
            v129 = v127;
          else
            v129 = 1.0 / v127;
          v130 = v114;
          v131 = v124 * v129;
          v132 = v113;
          v109 = v131 + v109;
          if ( v114 < 0 )
            v130 = -v114;
          v133 = 1.0;
          while ( 1 )
          {
            if ( (v130 & 1) != 0 )
              v133 = v133 * *(double *)&v132;
            v130 >>= 1;
            if ( !v130 )
              break;
            *((unsigned long long *)&v134 + 1) = *((unsigned long long *)&v132 + 1);
            *(double *)&v134 = *(double *)&v132 * *(double *)&v132;
            v132 = v134;
          }
          if ( v114 >= 0 )
            v135 = v133;
          else
            v135 = 1.0 / v133;
          v116 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          ++v114;
          ++v115;
          v111 = v111 + v124 * v135;
        }
        while ( v122 + 1 <= v400 );
        v107 = v400;
      }
      v502 = *(double *)libm_sse2_sqrt_precise(v343, v356, v369, v382).m128_u64 * 4.0;
      v503 = v502 + *(double *)libm_sse2_sqrt_precise(v344, v357, v370, v383).m128_u64;
      v136 = 0.0;
      v504 = (v503 + *(double *)libm_sse2_sqrt_precise(v345, v358, v371, v384).m128_u64) * (v438 / 6.0);
      if ( v107 >= 1 )
      {
        v137 = v438 * *(double *)&qword_43E0E8;
        v138 = 0;
        v139 = (double *)(a3 + 32);
        v439 = v438 * *(double *)&qword_43E0E8;
        do
        {
          v140 = v137;
          v141 = v138;
          if ( v138 < 0 )
            v141 = -v138;
          v142 = 1.0;
          while ( 1 )
          {
            if ( (v141 & 1) != 0 )
              v142 = v142 * v140;
            v141 >>= 1;
            if ( !v141 )
              break;
            v140 = v140 * v140;
          }
          if ( v138 >= 0 )
            v143 = v142;
          else
            v143 = 1.0 / v142;
          v137 = v439;
          v144 = (double)++v138 * *v139++;
          v136 = v136 + v144 * v143;
        }
        while ( v138 + 1 <= v107 );
      }
      v536 = *(double *)libm_sse2_sqrt_precise(v346, v359, v372, v385).m128_u64;
      v497 = *(unsigned long *)(v373 + 108);
      v531 = v536 * v423;
      v145 = *(double *)(v451 + v497 + 32);
      v146 = v145 * v528;
      v473 = v536 * v445;
      v147 = v145 * v522;
      v468 = v536 * v456;
      v148 = *(double *)(v451 + v497 + 40);
      v594 = v536 * v509;
      *(double *)(v451 + v497 + 48) = v537;
      v397 = v147 + v148 * v523 + v552;
      v541 = v146 + v148 * v529 + v532;
      v505 = sub_406A70((int)v601, -4.0, 0.0, -1.0, 1.0e-10, v397, v533, v541, v495);
      v149 = *(double *)(v451 + v497 + 40);
      v150 = *(double *)(v451 + v497 + 48);
      v440 = *(double *)(v451 + v497 + 32);
      v457 = (v440 * v563 + v149 * v564 + v150 * v565) * v505;
      v151 = v602 - 1;
      v510 = (v440 * v581 + v149 * v582 + v150 * v583) * v505;
      v478 = (v440 * v572 + v149 * v573 + v150 * v574) * v505;
      v152 = v397;
      v539 = -(v505 * v530 * v460) - v557;
      v153 = 0.0;
      v154 = v505 * v397 - v533;
      v464 = v154;
      if ( v602 - 1 >= 0 )
      {
        if ( v602 >= 4 )
        {
          do
          {
            v153 = (((v153 * (v603 * v154) + *(double *)&v601[2 * v151 + 20]) * (v603 * v154)
                   + *(double *)&v601[2 * v151 + 18])
                  * (v603
                   * v154)
                  + *(double *)&v601[2 * v151 + 16])
                 * (v603
                  * v154)
                 + *(double *)&v601[2 * v151 + 14];
            v151 -= 4;
          }
          while ( v151 >= 3 );
          v152 = v397;
          v154 = v505 * v397 - v533;
        }
        for ( ; v151 >= 0; --v151 )
          v153 = v153 * (v603 * v154) + *(double *)&v601[2 * v151 + 20];
      }
      v541 = v541 - v152 * v153;
      v155 = -(((v440 * v569 + v149 * v570 + v150 * v571) * v505 - v555 - (v457 - v547) * v153) / v541);
      v156 = -(((v440 * v587 + v149 * v588 + v589 * v150) * v505 - v554 - (v510 - v550) * v153) / v541);
      v157 = -(((v578 * v440 + v579 * v149 + v580 * v150) * v505 - v553 - (v478 - v551) * v153) / v541);
      v539 = -((v539 - (-(v505 * v524 * v460) - v546) * v153) / v541);
      v160 = *(unsigned long long *)&v440;
      v446 = (v440 * v522 + v149 * v523 + v150 * v524) * v155 + v457 - v547;
      v458 = (v440 * v522 + v149 * v523 + v150 * v524) * v156 + v510 - v550;
      v479 = (v440 * v522 + v149 * v523 + v150 * v524) * v157 + v478 - v551;
      v484 = (v440 * v522 + v149 * v523 + v150 * v524) * v539 - v505 * v524 * v460 - v546;
      v158 = v440 * v525 + v149 * v526 + v150 * v527;
      v159 = v400;
      v540 = (v440 * v566 + v149 * v567 + v150 * v568) * v505 + v155 * v158 - v562;
      *(double *)&v160 = (v440 * v522 + v149 * v523 + v150 * v524) * v505 - v533;
      v424 = *(double *)&v160;
      v500 = (v440 * v584 + v149 * v585 + v150 * v586) * v505 + v156 * v158 - v558;
      v441 = (v440 * v575 + v149 * v576 + v150 * v577) * v505 + v157 * v158 - v556;
      v161 = v527 * v505 * v460;
      v506 = v505 * v158 - v543;
      v162 = 0.0;
      v163 = 0.0;
      v539 = v539 * v158 - v161 - v561;
      v164 = 0.0;
      if ( v400 >= 1 )
      {
        *((unsigned long long *)&v165 + 1) = *((unsigned long long *)&v160 + 1);
        *(double *)&v165 = *(double *)&v160 * *(double *)&qword_43E0E8;
        *((unsigned long long *)&v168 + 1) = 0i64;
        v166 = 0;
        v167 = (double *)(a3 + 32);
        *(double *)&v168 = *(double *)&qword_43E0E8 * 0.0;
        v404 = *(double *)&v160 * *(double *)&qword_43E0E8 * 0.5;
        do
        {
          v169 = v168;
          v170 = v166;
          if ( v166 < 0 )
            v170 = -v166;
          v171 = 1.0;
          while ( 1 )
          {
            if ( (v170 & 1) != 0 )
              v171 = v171 * *(double *)&v169;
            v170 >>= 1;
            if ( !v170 )
              break;
            *((unsigned long long *)&v172 + 1) = *((unsigned long long *)&v169 + 1);
            *(double *)&v172 = *(double *)&v169 * *(double *)&v169;
            v169 = v172;
          }
          if ( v166 >= 0 )
            v173 = v171;
          else
            v173 = 1.0 / v171;
          v174 = v166 + 1;
          v175 = v166;
          v176 = (double)(v166 + 1) * *v167;
          v177 = v176 * v173;
          v178 = *(unsigned long long *)&v404;
          v162 = v177 + v162;
          if ( v166 < 0 )
            v175 = -v166;
          v179 = 1.0;
          while ( 1 )
          {
            if ( (v175 & 1) != 0 )
              v179 = v179 * *(double *)&v178;
            v175 >>= 1;
            if ( !v175 )
              break;
            *((unsigned long long *)&v180 + 1) = *((unsigned long long *)&v178 + 1);
            *(double *)&v180 = *(double *)&v178 * *(double *)&v178;
            v178 = v180;
          }
          if ( v166 >= 0 )
            v181 = v179;
          else
            v181 = 1.0 / v179;
          v182 = v166;
          v183 = v176 * v181;
          v184 = v165;
          v163 = v183 + v163;
          if ( v166 < 0 )
            v182 = -v166;
          v185 = 1.0;
          while ( 1 )
          {
            if ( (v182 & 1) != 0 )
              v185 = v185 * *(double *)&v184;
            v182 >>= 1;
            if ( !v182 )
              break;
            *((unsigned long long *)&v186 + 1) = *((unsigned long long *)&v184 + 1);
            *(double *)&v186 = *(double *)&v184 * *(double *)&v184;
            v184 = v186;
          }
          if ( v166 >= 0 )
            v187 = v185;
          else
            v187 = 1.0 / v185;
          ++v166;
          v188 = v176 * v187;
          ++v167;
          v168 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
          v164 = v164 + v188;
        }
        while ( v174 + 1 <= v400 );
        v159 = v400;
      }
      v512 = *(double *)libm_sse2_sqrt_precise(v347, v360, v373, v386).m128_u64 * 4.0;
      v513 = v512 + *(double *)libm_sse2_sqrt_precise(v348, v361, v374, v387).m128_u64;
      v189 = 0.0;
      v514 = (v513 + *(double *)libm_sse2_sqrt_precise(v349, v362, v375, v388).m128_u64) * (v424 / 6.0);
      if ( v159 >= 1 )
      {
        v190 = 0;
        v191 = (double *)(a3 + 32);
        do
        {
          v192 = v424 * *(double *)&qword_43E0E8;
          v193 = v190;
          if ( v190 < 0 )
            v193 = -v190;
          v194 = 1.0;
          while ( 1 )
          {
            if ( (v193 & 1) != 0 )
              v194 = v194 * v192;
            v193 >>= 1;
            if ( !v193 )
              break;
            v192 = v192 * v192;
          }
          if ( v190 >= 0 )
            v195 = v194;
          else
            v195 = 1.0 / v194;
          v196 = (double)++v190 * *v191++;
          v189 = v189 + v196 * v195;
        }
        while ( v190 + 1 <= v159 );
      }
      v197 = *(double *)libm_sse2_sqrt_precise(v350, v363, v376, v389).m128_u64;
      v198 = (double *)(*(unsigned long *)(v377 + 108) + 32 * (v89 + 2));
      v511 = v197 * v446;
      v199 = v522 * *v198;
      v200 = v528 * *v198;
      v598 = v197 * v484;
      v198[2] = v537;
      v201 = v523 * v198[1];
      v595 = v197 * v458;
      v202 = v199 + v201;
      v405 = v197;
      v203 = v529 * v198[1];
      v592 = v197 * v479;
      v417 = v202 + v552;
      v542 = v200 + v203 + v532;
      v204 = sub_406A70((int)v601, -4.0, 0.0, -1.0, 1.0e-10, v202 + v552, v533, v542, v495);
      v205 = v198[1];
      v206 = v198[2];
      v480 = (v563 * *v198 + v564 * v205 + v565 * v206) * v204;
      v207 = (v569 * *v198 + v570 * v205 + v571 * v206) * v204 - v555;
      v208 = v602 - 1;
      v485 = (v581 * *v198 + v582 * v205 + v583 * v206) * v204;
      v209 = (v587 * *v198 + v588 * v205 + v589 * v206) * v204 - v554;
      v518 = (v573 * v205 + v572 * *v198 + v574 * v206) * v204;
      v210 = (v578 * *v198 + v579 * v205 + v580 * v206) * v204 - v553;
      v549 = v204 * v524 * v460;
      v211 = v417;
      v545 = v204 * v417 - v533;
      v212 = 0.0;
      if ( v602 - 1 >= 0 )
      {
        if ( v602 >= 4 )
        {
          do
          {
            v212 = (((v212 * (v603 * v545) + *(double *)&v601[2 * v208 + 20]) * (v603 * v545)
                   + *(double *)&v601[2 * v208 + 18])
                  * (v603
                   * v545)
                  + *(double *)&v601[2 * v208 + 16])
                 * (v603
                  * v545)
                 + *(double *)&v601[2 * v208 + 14];
            v208 -= 4;
          }
          while ( v208 >= 3 );
          v211 = v417;
        }
        for ( ; v208 >= 0; --v208 )
          v212 = v212 * (v603 * v545) + *(double *)&v601[2 * v208 + 20];
      }
      v542 = v542 - v211 * v212;
      v213 = -((v207 - v212 * (v480 - v547)) / v542);
      v214 = -((v209 - v212 * (v485 - v550)) / v542);
      v215 = -((v210 - v212 * (v518 - v551)) / v542);
      v216 = -((-(v204 * v530 * v460) - v557 - v212 * (-(v204 * v524 * v460) - v546)) / v542);
      v535 = v522 * *v198 + v523 * v205;
      v217 = v198[2];
      v535 = v535 + v524 * v217;
      v593 = v535 * v213 + v480 - v547;
      v591 = v535 * v214 + v485 - v550;
      v599 = v535 * v215 + v518 - v551;
      v447 = v535 * v216 - v549 - v546;
      v548 = v525 * *v198;
      v218 = v566 * *v198;
      v548 = v548 + v526 * v205 + v527 * v217;
      v544 = (v218 + v567 * v205 + v568 * v217) * v204;
      v544 = v544 + v548 * v213 - v562;
      v597 = (v584 * *v198 + v585 * v205 + v586 * v217) * v204 + v548 * v214 - v558;
      v219 = v575 * *v198 + v576 * v205;
      v220 = *(unsigned long long *)&v204;
      v519 = v204 * v535 - v533;
      v600 = (v219 + v577 * v217) * v204 + v548 * v215 - v556;
      v221 = v548 * v216;
      v222 = 0.0;
      v501 = v204 * v548 - v543;
      v223 = 0.0;
      v224 = 0.0;
      v590 = v221 - v527 * v204 * v460 - v561;
      if ( v400 >= 1 )
      {
        *((unsigned long long *)&v227 + 1) = 0i64;
        *(double *)&v220 = (v204 * v535 - v533) * *(double *)&qword_43E0E8;
        v225 = 0;
        v226 = (double *)(a3 + 32);
        *(double *)&v227 = *(double *)&qword_43E0E8 * 0.0;
        do
        {
          v228 = v227;
          v229 = v225;
          if ( v225 < 0 )
            v229 = -v225;
          v230 = 1.0;
          while ( 1 )
          {
            if ( (v229 & 1) != 0 )
              v230 = v230 * *(double *)&v228;
            v229 >>= 1;
            if ( !v229 )
              break;
            *((unsigned long long *)&v231 + 1) = *((unsigned long long *)&v228 + 1);
            *(double *)&v231 = *(double *)&v228 * *(double *)&v228;
            v228 = v231;
          }
          if ( v225 >= 0 )
            v232 = v230;
          else
            v232 = 1.0 / v230;
          v233 = COERCE_UNSIGNED_INT64(*(double *)&v220 * 0.5);
          v234 = v225 + 1;
          v235 = v225;
          v236 = (double)(v225 + 1) * *v226;
          v222 = v232 * v236 + v222;
          if ( v225 < 0 )
            v235 = -v225;
          v237 = 1.0;
          while ( 1 )
          {
            if ( (v235 & 1) != 0 )
              v237 = v237 * *(double *)&v233;
            v235 >>= 1;
            if ( !v235 )
              break;
            *((unsigned long long *)&v238 + 1) = *((unsigned long long *)&v233 + 1);
            *(double *)&v238 = *(double *)&v233 * *(double *)&v233;
            v233 = v238;
          }
          if ( v225 >= 0 )
            v239 = v237;
          else
            v239 = 1.0 / v237;
          v240 = v220;
          v241 = v225;
          v223 = v239 * v236 + v223;
          if ( v225 < 0 )
            v241 = -v225;
          v242 = 1.0;
          while ( 1 )
          {
            if ( (v241 & 1) != 0 )
              v242 = v242 * *(double *)&v240;
            v241 >>= 1;
            if ( !v241 )
              break;
            *((unsigned long long *)&v243 + 1) = *((unsigned long long *)&v240 + 1);
            *(double *)&v243 = *(double *)&v240 * *(double *)&v240;
            v240 = v243;
          }
          if ( v225 >= 0 )
            v244 = v242;
          else
            v244 = 1.0 / v242;
          ++v225;
          ++v226;
          v224 = v224 + v244 * v236;
          v227 = COERCE_UNSIGNED_INT64(*(double *)&qword_43E0E8 * 0.0);
        }
        while ( v234 + 1 <= v400 );
      }
      v515 = *(double *)libm_sse2_sqrt_precise(v351, v364, v377, v390).m128_u64 * 4.0;
      v516 = v515 + *(double *)libm_sse2_sqrt_precise(v352, v365, v378, v391).m128_u64;
      v245 = 0.0;
      v517 = (v516 + *(double *)libm_sse2_sqrt_precise(v353, v366, v379, v392).m128_u64) * (v519 / 6.0);
      if ( v400 >= 1 )
      {
        v246 = v519 * *(double *)&qword_43E0E8;
        v247 = 0;
        v248 = (double *)(a3 + 32);
        v520 = v519 * *(double *)&qword_43E0E8;
        do
        {
          v249 = v246;
          v250 = v247;
          if ( v247 < 0 )
            v250 = -v247;
          v251 = 1.0;
          while ( 1 )
          {
            if ( (v250 & 1) != 0 )
              v251 = v251 * v249;
            v250 >>= 1;
            if ( !v250 )
              break;
            v249 = v249 * v249;
          }
          if ( v247 >= 0 )
            v252 = v251;
          else
            v252 = 1.0 / v251;
          v246 = v520;
          v253 = (double)++v247 * *v248++;
          v245 = v245 + v253 * v252;
        }
        while ( v247 + 1 <= v400 );
      }
      v549 = *(double *)libm_sse2_sqrt_precise(v354, v367, v380, v393).m128_u64;
      v254 = *v435 * v522;
      v596 = v549 * v447;
      v459 = v254 + v435[1] * v523 + v435[2] * v524;
      v255 = *(double *)(v451 + v497 + 32);
      v256 = *(double *)(v451 + v497 + 48);
      v448 = v525 * *v435 + v526 * v435[1] + v527 * v435[2];
      v425 = v255 * v522 + *(double *)(v451 + v497 + 40) * v523 + v256 * v524;
      v414 = v255 * v525 + *(double *)(v451 + v497 + 40) * v526 + v256 * v527;
      v498 = v506 - v432;
      v436 = v504 - v514;
      v521 = v514 * v432 - v506 * v504 + (v506 - v432) * v517 + (v504 - v514) * v501;
      v486 = *(double *)libm_sse2_sqrt_precise(v355, v368, v381, v394).m128_u64;
      v481 = v531 - v511;
      v257 = v592;
      v258 = v382;
      v418 = v473 - v595;
      v259 = v399;
      v260 = v595 * v432;
      v398 = v468 - v592;
      v452 = v486 * v486;
      v261 = v549 * v591 * (v506 - v432) + (v500 - v487) * v517;
      *(double *)&v382[8 * v399] = ((v549 * v593 * (v506 - v432)
                                   + (v540 - v410) * v517
                                   + (v531 - v511) * v501
                                   + (v504 - v514) * v544
                                   + v514 * v410
                                   + v511 * v432
                                   - v506 * v531
                                   - v540 * v504)
                                  * v486
                                  - ((v531 - v511) * (v504 - v514) + (v540 - v410) * (v506 - v432)) / v486 * v521)
                                 * *(double *)(v369 + 80)
                                 / (v486
                                  * v486);
      v262 = v261 + v418 * v501 + (v504 - v514) * v597 + v260 + v514 * v487 - v506 * v473 - v500 * v504;
      v263 = v486;
      v264 = 1;
      *(double *)&v382[8 * v399 + 8] = (v262 * v486
                                      - (v418 * (v504 - v514) + (v500 - v487) * (v506 - v432)) / v486 * v521)
                                     * *(double *)(v369 + 80)
                                     / (v486
                                      * v486);
      v265 = ((v549 * v599 * v498
             + (v441 - v429) * v517
             + v398 * v501
             + v436 * v600
             + v257 * v432
             + v514 * v429
             - v506 * v468
             - v441 * v504)
            * v263
            - (v398 * v436 + (v441 - v429) * v498) / v263 * v521)
           * *(double *)(v369 + 80);
      *(unsigned long long *)&v382[8 * v399 + 24] = 0i64;
      *(double *)&v382[8 * v399 + 16] = v265 / (v486 * v486);
      if ( v400 < 1 )
      {
        v301 = v504 - v514;
      }
      else
      {
        v266 = (double *)&v382[8 * v399 + 32];
        do
        {
          v268 = v534;
          v267 = v264;
          *(double *)&v268 = *(double *)&v534 * *(double *)&qword_43E0E8;
          v269 = v268;
          if ( v264 < 0 )
            v267 = -v264;
          v270 = 1.0;
          while ( 1 )
          {
            if ( (v267 & 1) != 0 )
              v270 = v270 * *(double *)&v269;
            v267 >>= 1;
            if ( !v267 )
              break;
            *((unsigned long long *)&v271 + 1) = *((unsigned long long *)&v269 + 1);
            *(double *)&v271 = *(double *)&v269 * *(double *)&v269;
            v269 = v271;
          }
          if ( v264 >= 0 )
            v272 = v270;
          else
            v272 = 1.0 / v270;
          v273 = v264;
          v274 = v272 / *(double *)&qword_43E0E8 / v538 * v459;
          if ( v264 < 0 )
            v273 = -v264;
          v275 = 1.0;
          while ( 1 )
          {
            if ( (v273 & 1) != 0 )
              v275 = v275 * *(double *)&v268;
            v273 >>= 1;
            if ( !v273 )
              break;
            *((unsigned long long *)&v276 + 1) = *((unsigned long long *)&v268 + 1);
            *(double *)&v276 = *(double *)&v268 * *(double *)&v268;
            v268 = v276;
          }
          if ( v264 >= 0 )
            v277 = v275;
          else
            v277 = 1.0 / v275;
          v278 = v264;
          v279 = v464 * *(double *)&qword_43E0E8;
          v469 = v277 / *(double *)&qword_43E0E8 / v538 * v448;
          v280 = v536 * v274;
          v281 = v464 * *(double *)&qword_43E0E8;
          v474 = v280;
          if ( v264 < 0 )
            v278 = -v264;
          v282 = 1.0;
          while ( 1 )
          {
            if ( (v278 & 1) != 0 )
              v282 = v282 * v281;
            v278 >>= 1;
            if ( !v278 )
              break;
            v281 = v281 * v281;
          }
          if ( v264 >= 0 )
            v283 = v282;
          else
            v283 = 1.0 / v282;
          v284 = v264;
          v285 = v283 / *(double *)&qword_43E0E8 / v541 * v425;
          if ( v264 < 0 )
            v284 = -v264;
          v286 = 1.0;
          while ( 1 )
          {
            if ( (v284 & 1) != 0 )
              v286 = v286 * v279;
            v284 >>= 1;
            if ( !v284 )
              break;
            v279 = v279 * v279;
          }
          if ( v264 >= 0 )
            v287 = v286;
          else
            v287 = 1.0 / v286;
          v288 = v264;
          v289 = v545 * *(double *)&qword_43E0E8;
          v290 = v405 * v285;
          v291 = v545 * *(double *)&qword_43E0E8;
          v292 = v287 / *(double *)&qword_43E0E8 / v541 * v414;
          if ( v264 < 0 )
            v288 = -v264;
          v293 = 1.0;
          while ( 1 )
          {
            if ( (v288 & 1) != 0 )
              v293 = v293 * v291;
            v288 >>= 1;
            if ( !v288 )
              break;
            v291 = v291 * v291;
          }
          if ( v264 >= 0 )
            v294 = v293;
          else
            v294 = 1.0 / v293;
          v295 = v264;
          v296 = v294 / *(double *)&qword_43E0E8 / v542 * v535;
          if ( v264 < 0 )
            v295 = -v264;
          v297 = 1.0;
          while ( 1 )
          {
            if ( (v295 & 1) != 0 )
              v297 = v297 * v289;
            v295 >>= 1;
            if ( !v295 )
              break;
            v289 = v289 * v289;
          }
          if ( v264 >= 0 )
            v298 = v297;
          else
            v298 = 1.0 / v297;
          ++v264;
          v299 = (v292 - v469) * v498;
          v300 = v296 * v549 * v498
               + (v292 - v469) * v517
               + (v280 - v290) * v501
               + v298 / *(double *)&qword_43E0E8 / v542 * v548 * v436;
          v301 = v504 - v514;
          v302 = v504 * v292;
          v263 = v486;
          *v266++ = ((v300 + v514 * v469 + v432 * v290 - v506 * v474 - v302) * v486
                   - ((v474 - v290) * v436 + v299) / v486 * v521)
                  * *(double *)(v369 + 80)
                  / v452;
        }
        while ( v264 <= v400 );
        v258 = v382;
        v259 = v399;
      }
      v531 = v594 - v598;
      v303 = v408;
      *(double *)&v258[8 * v259 + 64] = ((v598 * v432
                                        + v514 * v491
                                        - v506 * v594
                                        - v539 * v504
                                        + (v539 - v491) * v517
                                        + v498 * v596
                                        + (v594 - v598) * v501
                                        + v301 * v590)
                                       * v263
                                       - ((v594 - v598) * v301 + (v539 - v491) * v498) / v263 * v521)
                                      * *(double *)(v369 + 80)
                                      / v452;
      v399 = a5 + v259;
      if ( *(unsigned char *)(*(unsigned long *)(v369 + 192) + 40 * v408 + 32) == 1 )
      {
        v411 = v410 - v540;
        v470 = fabs(v301);
        v433 = v432 - v506;
        v488 = v487 - v500;
        v430 = v429 - v441;
        v475 = *(unsigned long long *)&v433 & 0x7FFFFFFFFFFFFFFFi64;
        if ( v470 <= COERCE_DOUBLE(*(unsigned long long *)&v433 & 0x7FFFFFFFFFFFFFFFi64) )
        {
          v306 = v433;
          v305 = *(double *)libm_sse2_pow_precise().m128_u64;
          v304 = v504 - v514;
          v307 = v420;
          v308 = v382;
          *(double *)&v382[8 * v420] = (v481 * v433 - v411 * v436) * (*(double *)(v369 + 72) * v433) / v305;
          *(double *)&v382[8 * v420 + 8] = (v418 * v433 - v488 * v436) * (*(double *)(v369 + 72) * v433) / v305;
          v309 = (v398 * v306 - v430 * v436) * (*(double *)(v369 + 72) * v306);
        }
        else
        {
          v304 = v504 - v514;
          v305 = *(double *)libm_sse2_pow_precise().m128_u64;
          v306 = v433;
          v307 = v420;
          *(double *)&v382[8 * v420] = (v481 * v433 - v411 * v436) * (*(double *)(v369 + 72) * v436) * -1.0 / v305;
          *(double *)&v382[8 * v420 + 8] = (v418 * v433 - v488 * v436) * (*(double *)(v369 + 72) * v436) * -1.0 / v305;
          v308 = v382;
          v309 = (v398 * v433 - v430 * v436) * (*(double *)(v369 + 72) * v436) * -1.0;
        }
        v310 = 1;
        *(double *)&v308[8 * v307 + 16] = v309 / v305;
        *(unsigned long long *)&v308[8 * v307 + 24] = 0i64;
        if ( v400 >= 1 )
        {
          v311 = (double *)&v308[8 * v307 + 32];
          do
          {
            v312 = v310;
            v313 = *(double *)&v534 * *(double *)&qword_43E0E8;
            v314 = *(double *)&v534 * *(double *)&qword_43E0E8;
            if ( v310 < 0 )
              v312 = -v310;
            v315 = 1.0;
            while ( 1 )
            {
              if ( (v312 & 1) != 0 )
                v315 = v315 * v314;
              v312 >>= 1;
              if ( !v312 )
                break;
              v314 = v314 * v314;
            }
            if ( v310 >= 0 )
              v316 = v315;
            else
              v316 = 1.0 / v315;
            v317 = v310;
            v318 = v316 / *(double *)&qword_43E0E8 / v538 * v459;
            if ( v310 < 0 )
              v317 = -v310;
            v319 = 1.0;
            while ( 1 )
            {
              if ( (v317 & 1) != 0 )
                v319 = v319 * v313;
              v317 >>= 1;
              if ( !v317 )
                break;
              v313 = v313 * v313;
            }
            if ( v310 >= 0 )
              v320 = v319;
            else
              v320 = 1.0 / v319;
            v321 = v310;
            v322 = v536 * v318;
            v323 = v464 * *(double *)&qword_43E0E8;
            v324 = v464 * *(double *)&qword_43E0E8;
            v325 = v320 / *(double *)&qword_43E0E8 / v538 * v448;
            if ( v310 < 0 )
              v321 = -v310;
            v326 = 1.0;
            while ( 1 )
            {
              if ( (v321 & 1) != 0 )
                v326 = v326 * v324;
              v321 >>= 1;
              if ( !v321 )
                break;
              v324 = v324 * v324;
            }
            if ( v310 >= 0 )
              v327 = v326;
            else
              v327 = 1.0 / v326;
            v328 = v310;
            v329 = v327 / *(double *)&qword_43E0E8 / v541 * v425;
            if ( v310 < 0 )
              v328 = -v310;
            v330 = 1.0;
            while ( 1 )
            {
              if ( (v328 & 1) != 0 )
                v330 = v330 * v323;
              v328 >>= 1;
              if ( !v328 )
                break;
              v323 = v323 * v323;
            }
            if ( v310 >= 0 )
              v331 = v330;
            else
              v331 = 1.0 / v330;
            v332 = v405 * v329;
            v304 = v504 - v514;
            v333 = v322 - v332;
            v334 = *(double *)(v369 + 72);
            v335 = v333 * v433 - (v325 - v331 / *(double *)&qword_43E0E8 / v541 * v414) * v436;
            v306 = v433;
            if ( v470 <= *(double *)&v475 )
              v336 = v335 * (v334 * v433);
            else
              v336 = v335 * (v334 * v436) * -1.0;
            ++v310;
            *v311++ = v336 / v305;
          }
          while ( v310 <= v400 );
          v307 = v420;
          v303 = v408;
          v308 = v382;
        }
        v337 = *(double *)(v369 + 72);
        v338 = v531 * v306 - (v491 - v539) * v304;
        if ( v470 <= *(double *)&v475 )
          v339 = v338 * (v337 * v306);
        else
          v339 = v338 * (v337 * v304) * -1.0;
        *(double *)&v308[8 * v307 + 64] = v339 / v305;
        v83 = a5 + v307;
        v420 = v83;
      }
      else
      {
        v83 = v420;
      }
      v87 = v533;
      v82 = v303 + 1;
      v84 = v537;
      v86 = v552;
      v85 = v532;
      v88 = v495;
      v408 = v82;
    }
    while ( v82 < v559 );
  }
  v340 = 1.0;
  v341 = *(double *)(a3 + 64);
  if ( v341 <= 1.0 )
  {
    if ( v341 >= 1.0 )
    {
      *(unsigned long long *)&v382[8 * v83 + 64] = 0i64;
      goto LABEL_336;
    }
    v340 = -1.0 / (v341 * v341);
  }
  *(double *)&v382[8 * v83 + 64] = v340;
LABEL_336:
  result = v382;
  *(double *)&v382[8 * v83 + 64] = *(double *)(v369 + 88) * *(double *)&v382[8 * v83 + 64];
  return result;
}

void * sub_416640( void *Src)
{
  unsigned int v3; 

  v3 = 8 * *(unsigned long *)(this + 24);
  if ( Src )
    return memcpy(*(void **)(this + 4), Src, v3);
  else
    return memset(*(void **)(this + 4), 0, v3);
}

double  sub_416680()
{
  int v2; 
  unsigned int v3; 
  double *v4; 
  int v5; 
  int i; 
  double v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  double v13; 
  double v14; 
  void *v15[2]; 
  int v16; 
  int v17[4]; 
  long long v18; 
  long long v19; 
  int v20[26]; 

  v2 = this[6];
  v3 = this[7];
  *(unsigned long long *)v17 = xmmword_439410;
  v18 = xmmword_439410;
  v16 = 0;
  v19 = 0x3EB0C6F7A0B5ED8Di64;
  v15[0] = 0;
  v15[1] = 0;
  v20[25] = 0;
  sub_4077E0(v15, v3);
  sub_4110D0(v2, v3, this[1], (int)v15[0], this[6], this[7], (int)this);
  v13 = 0.0;
  sub_401000(
    (void ( *)(int, double *, int, int, int))sub_4110D0,
    (void ( *)(int, int, int, int, int))sub_412610,
    this[1],
    this[2],
    v2,
    v3,
    1000,
    (double *)v17,
    (double *)v20,
    0,
    0,
    (int)this);
  v4 = (double *)v15[0];
  sub_4110D0(v2, (int)v15[0], this[1], (int)v15[0], this[6], this[7], (int)this);
  v5 = this[7];
  for ( i = 0; i < v5; v13 = v7 * v7 + v13 )
    v7 = v4[i++];
  *(unsigned long long *)&v14 = libm_sse2_sqrt_precise(v9, v10, v11, v12).m128_u64[0];
  if ( v4 )
    operator delete(v4);
  return v14;
}

void  sub_416820(unsigned long *a1, int a2)
{
  int v2; 
  int v3; 
  int i; 
  int v5; 
  int v6; 

  v2 = 0;
  if ( (int)a1[11] > 0 )
  {
    v3 = a1[10];
    do
    {
      for ( i = 0; i < v3; v3 = a1[10] )
      {
        v5 = i + v2 * a1[18];
        v6 = i + v2 * v3;
        ++i;
        *(double *)(a2 + 8 * v6) = (double)*(unsigned char *)(v5 + a1[17]);
      }
      ++v2;
    }
    while ( v2 < a1[11] );
  }
}

void  sub_416880(double a1@<st0>, int a2, unsigned long *a3, float a4)
{
  void *v4; 
  int v5; 
  int v6; 
  int v7; 
  double *v8; 
  int v9; 
  double v10; 
  double v11; 
  double v12; 
  int v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  float v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  void *v23; 
  int v24; 
  unsigned int v25; 
  unsigned long *Image; 
  int v27; 
  void *v28[2]; 
  int v29; 
  int v30; 
  float v31; 
  float v32; 
  double v33; 
  char v34; 
  int v35; 

  a3[1] = *a3;
  Image = (unsigned long *)cvCreateImage((int)((double)*(int *)(a2 + 40) * 0.5));
  cvResize(a2, Image, 3);
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v35 = 0;
  sub_4077E0(v28, Image[10] * Image[11]);
  v4 = v28[0];
  sub_416820(Image, (int)v28[0]);
  v5 = sub_4233F0(a1, &v27, (int)v4, Image[10], Image[11]);
  v6 = v27;
  v7 = 0;
  v23 = (void *)v5;
  if ( v27 > 0 )
  {
    v8 = (double *)(v5 + 24);
    do
    {
      *(float *)&v9 = *(v8 - 3) * 2.0;
      v10 = (*(v8 - 3) + *(v8 - 1)) * 2.0;
      v24 = v9;
      v11 = *(v8 - 2);
      v12 = v11 + *v8;
      v30.m128i_i32[0] = v24;
      *(float *)&v13 = v11 * 2.0;
      v14 = *(v8 - 1) * 2.0;
      v30.m128i_i32[1] = v13;
      v15 = v14;
      v16 = *v8 * 2.0;
      v31 = v15;
      v17 = v16;
      *(float *)&v16 = v10 * 0.5;
      v25 = LODWORD(v16);
      *(float *)&v16 = v12 * 2.0 * 0.5;
      v32 = v17;
      v30.m128i_i64[1] = __PAIR64__(LODWORD(v16), v25);
      v18 = *(double *)libm_sse2_sqrt_precise(v19, v20, v21, v22).m128_u64;
      v34 = 1;
      v33 = v18;
      if ( v18 > (double)a4 )
      {
        sub_4214D0(a3, &v30);
        v6 = v27;
      }
      ++v7;
      v8 += 7;
    }
    while ( v7 < v6 );
    v4 = v28[0];
  }
  cvReleaseImage(&Image);
  operator delete[](v23);
  if ( v4 )
    operator delete(v4);
}

int  sub_416B30(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long, unsigned long))
{
  int v5; 
  int v6; 
  int v7; 
  bool i; 
  int j; 
  int result; 

  v5 = a3;
  v6 = a2;
  v7 = 2 * a2 + 2;
  for ( i = v7 == a3; v7 < a3; i = v7 == a3 )
  {
    if ( a5(*(unsigned long *)(a1 + 4 * v7), *(unsigned long *)(a1 + 4 * v7 - 4)) )
      --v7;
    v5 = a3;
    *(unsigned long *)(a1 + 4 * v6) = *(unsigned long *)(a1 + 4 * v7);
    v6 = v7;
    v7 = 2 * v7 + 2;
  }
  if ( i )
  {
    *(unsigned long *)(a1 + 4 * v6) = *(unsigned long *)(a1 + 4 * v5 - 4);
    v6 = v5 - 1;
  }
  for ( j = (v6 - 1) / 2; a2 < v6; j = (j - 1) / 2 )
  {
    if ( !a5(*(unsigned long *)(a1 + 4 * j), *a4) )
      break;
    *(unsigned long *)(a1 + 4 * v6) = *(unsigned long *)(a1 + 4 * j);
    v6 = j;
  }
  result = *a4;
  *(unsigned long *)(a1 + 4 * v6) = *a4;
  return result;
}

void * sub_416BD0(char *Src, char *a2, unsigned char ( *a3)(int, int))
{
  void *result; 
  char *v4; 
  char *v5; 
  int v6; 
  char *v7; 
  int v8; 
  char *i; 
  char *v10; 

  result = a2;
  v4 = Src;
  if ( Src != a2 )
  {
    v5 = Src + 4;
    for ( i = Src + 4; v5 != a2; i = v5 )
    {
      v6 = *(unsigned long *)v5;
      v10 = v5;
      if ( a3(*(unsigned long *)v5, *(unsigned long *)v4) )
      {
        result = memmove(&v5[-4 * ((v5 - v4) >> 2) + 4], v4, 4 * ((v5 - v4) >> 2));
        *(unsigned long *)v4 = v6;
      }
      else
      {
        v7 = v5 - 4;
        if ( a3(v6, *((unsigned long *)v5 - 1)) )
        {
          do
          {
            *(unsigned long *)v5 = *(unsigned long *)v7;
            v5 = v7;
            v8 = *((unsigned long *)v7 - 1);
            v7 -= 4;
          }
          while ( a3(v6, v8) );
          v10 = v5;
          v5 = i;
        }
        result = v10;
        v4 = Src;
        *(unsigned long *)v10 = v6;
      }
      v5 += 4;
    }
  }
  return result;
}

int  sub_416C80(int a1, int a2, unsigned char ( *a3)(unsigned long, unsigned long))
{
  int v4; 
  int result; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  v15 = (a2 - a1) >> 2;
  v4 = v15;
  result = v4 - (v4 >> 31);
  v6 = v15 / 2;
  if ( v15 / 2 > 0 )
  {
    v7 = 2 * v6 + 2;
    do
    {
      v8 = *(unsigned long *)(a1 + 4 * v6 - 4);
      v9 = v6 - 1;
      v10 = v7 - 2;
      v14 = v9;
      v13 = v10;
      v11 = v9;
      v12 = v8;
      if ( v10 < v4 )
      {
        do
        {
          if ( a3(*(unsigned long *)(a1 + 4 * v10), *(unsigned long *)(a1 + 4 * v10 - 4)) )
            --v10;
          v4 = v15;
          *(unsigned long *)(a1 + 4 * v11) = *(unsigned long *)(a1 + 4 * v10);
          v11 = v10;
          v10 = 2 * v10 + 2;
        }
        while ( v10 < v15 );
        v9 = v14;
      }
      if ( v10 == v4 )
      {
        *(unsigned long *)(a1 + 4 * v11) = *(unsigned long *)(a1 + 4 * v4 - 4);
        v11 = v4 - 1;
      }
      result = sub_416F10(a1, v11, v9, &v12, a3);
      v6 = v14;
      v4 = v15;
      v7 = v13;
    }
    while ( v14 > 0 );
  }
  return result;
}

int  sub_416D30(int *a1, int *a2, int *a3, unsigned char ( *a4)(int, int))
{
  int v5; 
  int v6; 
  int v7; 
  int *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int result; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int *v29; 
  int v30; 
  int *v31; 

  v5 = a3 - a1;
  v27 = *a1;
  if ( v5 <= 40 )
  {
    if ( a4(*a2, v27) )
    {
      v23 = *a2;
      *a2 = *a1;
      *a1 = v23;
    }
    result = ((int ( *)(int, int))a4)(*a3, *a2);
    if ( (unsigned char)result )
    {
      v24 = *a3;
      *a3 = *a2;
      *a2 = v24;
      result = ((int ( *)(int, int))a4)(v24, *a1);
      if ( (unsigned char)result )
      {
        v25 = *a2;
        result = *a1;
        *a2 = *a1;
        *a1 = v25;
      }
    }
  }
  else
  {
    v6 = (v5 + 1) / 8;
    v7 = 8 * v6;
    v6 *= 4;
    v26 = *(int *)((char *)a1 + v6);
    v8 = (int *)((char *)a1 + v6);
    v28 = v7;
    v30 = v6;
    if ( a4(v26, v27) )
    {
      v9 = *v8;
      *v8 = *a1;
      *a1 = v9;
    }
    if ( a4(*(int *)((char *)a1 + v28), *v8) )
    {
      v10 = *(int *)((char *)a1 + v28);
      *(int *)((char *)a1 + v28) = *v8;
      *v8 = v10;
      if ( a4(v10, *a1) )
      {
        v11 = *v8;
        *v8 = *a1;
        *a1 = v11;
      }
    }
    v29 = (int *)((char *)a2 - v30);
    if ( a4(*a2, *(int *)((char *)a2 - v30)) )
    {
      v12 = *a2;
      *a2 = *v29;
      *v29 = v12;
    }
    if ( a4(*(int *)((char *)a2 + v30), *a2) )
    {
      v13 = *(int *)((char *)a2 + v30);
      *(int *)((char *)a2 + v30) = *a2;
      *a2 = v13;
      if ( a4(v13, *v29) )
      {
        v14 = *a2;
        *a2 = *v29;
        *v29 = v14;
      }
    }
    v15 = (int *)((char *)a3 - v30);
    v31 = (int *)((char *)a3 - v28);
    if ( a4(*v15, *(int *)((char *)a3 - v28)) )
    {
      v16 = *v15;
      *v15 = *v31;
      *v31 = v16;
    }
    if ( a4(*a3, *v15) )
    {
      v17 = *a3;
      *a3 = *v15;
      *v15 = v17;
      if ( a4(v17, *v31) )
      {
        v18 = *v15;
        *v15 = *v31;
        *v31 = v18;
      }
    }
    if ( a4(*a2, *v8) )
    {
      v19 = *a2;
      *a2 = *v8;
      *v8 = v19;
    }
    result = ((int ( *)(int, int))a4)(*v15, *a2);
    if ( (unsigned char)result )
    {
      v21 = *v15;
      *v15 = *a2;
      *a2 = v21;
      result = ((int ( *)(int, int))a4)(v21, *v8);
      if ( (unsigned char)result )
      {
        v22 = *a2;
        result = *v8;
        *a2 = *v8;
        *v8 = v22;
      }
    }
  }
  return result;
}

int  sub_416F10(int a1, int a2, int a3, unsigned long *a4, unsigned char ( *a5)(unsigned long, unsigned long))
{
  int v5; 
  int v6; 
  int result; 

  v5 = a2;
  v6 = (a2 - 1) / 2;
  if ( a3 >= a2 )
  {
    result = a1;
    *(unsigned long *)(a1 + 4 * a2) = *a4;
  }
  else
  {
    do
    {
      if ( !a5(*(unsigned long *)(a1 + 4 * v6), *a4) )
        break;
      *(unsigned long *)(a1 + 4 * v5) = *(unsigned long *)(a1 + 4 * v6);
      v5 = v6;
      v6 = (v6 - 1) / 2;
    }
    while ( a3 < v5 );
    result = *a4;
    *(unsigned long *)(a1 + 4 * v5) = *a4;
  }
  return result;
}

void * sub_416F80(char *Src, char *a2, int a3, unsigned char ( *a4)(int, int))
{
  unsigned char ( *v4)(int, int); 
  char *v5; 
  char *v6; 
  int v7; 
  void *result; 
  int v10; 
  void *v11; 

  v4 = a4;
  v5 = a2;
  v6 = Src;
  v7 = (a2 - Src) >> 2;
  if ( v7 <= 32 )
  {
LABEL_7:
    if ( v7 > 1 )
      return sub_416BD0(v6, v5, v4);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_4170C0((int **)&v10, (int *)v6, (int *)v5, v4);
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)((v10 - (unsigned long)v6) & 0xFFFFFFFC) >= (int)((v5 - (unsigned char *)v11) & 0xFFFFFFFC) )
      {
        result = (void *)sub_416F80(v11, (int)v5, a3, (int)a4);
        v5 = (char *)v10;
      }
      else
      {
        result = (void *)sub_416F80(v6, v10, a3, (int)a4);
        v6 = (char *)v11;
      }
      v4 = a4;
      v7 = (v5 - v6) >> 2;
      if ( v7 <= 32 )
        goto LABEL_7;
    }
    if ( (int)((v5 - v6) & 0xFFFFFFFC) > 4 )
    {
      sub_416C80((int)v6, (int)v5, v4);
      v4 = a4;
    }
    return (void *)sub_417060(v6, (int)v5, v4);
  }
  return result;
}

signed int  sub_417060(unsigned long *a1, int a2, unsigned char ( *a3)(unsigned long, unsigned long))
{
  int v3; 
  signed int result; 
  unsigned char ( *v5)(unsigned long, unsigned long); 

  v3 = a2 - (unsigned long)a1;
  result = (a2 - (unsigned long)a1) & 0xFFFFFFFC;
  if ( result > 4 )
  {
    v5 = a3;
    do
    {
      a2 = *(unsigned long *)((char *)a1 + v3 - 4);
      *(unsigned long *)((char *)a1 + v3 - 4) = *a1;
      v3 -= 4;
      sub_416B30((int)a1, 0, v3 >> 2, &a2, v5);
      result = v3 & 0xFFFFFFFC;
    }
    while ( (int)(v3 & 0xFFFFFFFC) > 4 );
  }
  return result;
}

int ** sub_4170C0(int **a1, int *a2, int *a3, unsigned char ( *a4)(int, int))
{
  int *v4; 
  int *v5; 
  unsigned int v6; 
  int *v7; 
  int *v8; 
  int *v9; 
  int v10; 
  bool v11; 
  int *v12; 
  int *v13; 
  int v14; 
  int *v15; 
  int v16; 
  int *v17; 
  int *v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int **result; 
  int *v25; 
  int *v26; 
  int *v27; 
  int *v28; 

  v4 = &a2[(a3 - a2) / 2];
  sub_416D30(a2, v4, a3 - 1, a4);
  v5 = v4 + 1;
  v28 = v4 + 1;
  if ( a2 < v4 )
  {
    do
    {
      v25 = v4 - 1;
      if ( a4(*(v4 - 1), *v4) )
        break;
      if ( a4(*v4, *v25) )
        break;
      --v4;
    }
    while ( a2 < v25 );
    v5 = v28;
  }
  v6 = (unsigned int)a3;
  if ( v5 < a3 )
  {
    while ( !a4(*v5, *v4) )
    {
      v11 = a4(*v4, *v5) == 0;
      v6 = (unsigned int)a3;
      if ( v11 && ++v5 < a3 )
        continue;
      goto LABEL_12;
    }
    v6 = (unsigned int)a3;
LABEL_12:
    v28 = v5;
  }
  v7 = v4;
  v8 = v5;
  v27 = v4;
  while ( 2 )
  {
    while ( 2 )
    {
      v26 = v8;
LABEL_15:
      if ( (unsigned int)v8 < v6 )
      {
        do
        {
          if ( !a4(*v4, *v8) )
          {
            if ( a4(*v8, *v4) )
              break;
            v9 = v5++;
            if ( v9 != v8 )
            {
              v10 = *(v5 - 1);
              *(v5 - 1) = *v8;
              *v8 = v10;
            }
          }
          ++v8;
        }
        while ( v8 < a3 );
        v7 = v27;
        v28 = v5;
        v26 = v8;
      }
      v11 = v7 == a2;
      if ( v7 <= a2 )
        goto LABEL_32;
      v12 = v27;
      v13 = v27 - 1;
      while ( a4(*v13, *v4) )
      {
LABEL_28:
        v15 = a2;
        --v12;
        --v13;
        if ( a2 >= v12 )
          goto LABEL_31;
      }
      if ( !a4(*v4, *v13) )
      {
        if ( --v4 != v13 )
        {
          v14 = *v4;
          *v4 = *v13;
          *v13 = v14;
        }
        goto LABEL_28;
      }
      v15 = a2;
LABEL_31:
      v5 = v28;
      v27 = v12;
      v7 = v12;
      v11 = v12 == v15;
      v8 = v26;
LABEL_32:
      if ( !v11 )
      {
        v27 = --v7;
        if ( v8 != a3 )
        {
          v23 = *v8;
          *v8++ = *v7;
          v6 = (unsigned int)a3;
          *v7 = v23;
          continue;
        }
        if ( v7 != --v4 )
        {
          v20 = *v7;
          *v7 = *v4;
          *v4 = v20;
        }
        v21 = *--v5;
        v22 = *v4;
        *v4 = v21;
        v6 = (unsigned int)a3;
        v28 = v5;
        *v5 = v22;
        goto LABEL_15;
      }
      break;
    }
    if ( v8 != a3 )
    {
      if ( v5 != v8 )
      {
        v16 = *v4;
        *v4 = *v5;
        *v5 = v16;
      }
      v17 = v4;
      v28 = v5 + 1;
      ++v4;
      v18 = v8++;
      v19 = *v17;
      *v17 = *v18;
      v7 = v27;
      v6 = (unsigned int)a3;
      *v18 = v19;
      v5 = v28;
      continue;
    }
    break;
  }
  result = a1;
  a1[1] = v5;
  *a1 = v4;
  return result;
}

bool  sub_4172A0(int a1, int a2)
{
  return *(double *)(a1 + 24) > *(double *)(a2 + 24);
}

bool  sub_4172C0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        double a16)
{
  return a7 > a16;
}

unsigned int  sub_4172E0()
{
  unsigned int v2; 
  unsigned int result; 
  int v4; 
  char *v5; 
  char *v6; 
  int v7; 
  int v8; 

  v2 = 1;
  result = (this[25] - this[24]) >> 2;
  if ( result > 1 )
  {
    v4 = 0;
    v8 = 0;
    do
    {
      v5 = (char *)(this[24] + v4);
      v6 = (char *)(this[24] + 4 * v2);
      if ( *(unsigned long *)(*(unsigned long *)v5 + 20) == *(unsigned long *)(*(unsigned long *)v6 + 20) )
      {
        v4 = v8;
        v7 = 4 * v2;
      }
      else
      {
        sub_416F80(v5, v6, (v6 - v5) >> 2, (unsigned char ( *)(int, int))sub_4172A0);
        v7 = 4 * v2;
        v4 = 4 * v2;
        v8 = 4 * v2;
      }
      if ( v2 == ((this[25] - this[24]) >> 2) - 1 )
        sub_416F80(
          (char *)(v4 + this[24]),
          (char *)(v7 + this[24] + 4),
          (v7 + 4 - v4) >> 2,
          (unsigned char ( *)(int, int))sub_4172A0);
      ++v2;
      result = (this[25] - this[24]) >> 2;
    }
    while ( v2 < result );
  }
  return result;
}

int  sub_4173B0(
        int a1,
        int a2,
        int a3,
        const int *a4,
        unsigned char ( *a5)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int v5; 
  int v6; 
  int v7; 
  bool i; 
  const int *v9; 
  const int *v10; 
  int v11; 
  int v12; 
  int v13; 
  int j; 
  const int *v15; 
  int v16; 
  int result; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  const int *v26; 

  v5 = a3;
  v6 = a2;
  v7 = 2 * a2 + 2;
  for ( i = v7 == a3; v7 < a3; i = v7 == a3 )
  {
    v9 = (const int *)(a1 + 40 * v7);
    v22 = _mm_loadu_si128((const int *)((char *)v9 - 40));
    v24 = _mm_loadu_si128((const int *)((char *)v9 - 24));
    v18 = _mm_loadu_si128(v9);
    v20 = _mm_loadu_si128(v9 + 1);
    if ( a5(
           v18.m128i_i32[0],
           v18.m128i_i32[1],
           v18.m128i_i32[2],
           v18.m128i_i32[3],
           v20.m128i_i32[0],
           v20.m128i_i32[1],
           v20.m128i_i32[2],
           v20.m128i_i32[3],
           v9[2].m128i_i32[0],
           v9[2].m128i_i32[1],
           v22.m128i_i32[0],
           v22.m128i_i32[1],
           v22.m128i_i32[2],
           v22.m128i_i32[3],
           v24.m128i_i32[0],
           v24.m128i_i32[1],
           v24.m128i_i32[2],
           v24.m128i_i32[3],
           v9[-1].m128i_i32[2],
           v9[-1].m128i_i32[3]) )
    {
      --v7;
    }
    v5 = a3;
    v10 = (const int *)(a1 + 40 * v7);
    v11 = 5 * v6;
    v6 = v7;
    *(int *)(a1 + 8 * v11) = _mm_loadu_si128(v10);
    v7 = 2 * v7 + 2;
    *(int *)(a1 + 8 * v11 + 16) = _mm_loadu_si128(v10 + 1);
    *(unsigned long long *)(a1 + 8 * v11 + 32) = v10[2].m128i_i64[0];
  }
  if ( i )
  {
    v12 = a1 + 40 * v5;
    v13 = 5 * v6;
    *(int *)(a1 + 8 * v13) = _mm_loadu_si128((const int *)(v12 - 40));
    v6 = v5 - 1;
    *(int *)(a1 + 8 * v13 + 16) = _mm_loadu_si128((const int *)(v12 - 24));
    *(unsigned long long *)(a1 + 8 * v13 + 32) = *(unsigned long long *)(v12 - 8);
  }
  for ( j = (v6 - 1) / 2; a2 < v6; j = (j - 1) / 2 )
  {
    v15 = (const int *)(a1 + 40 * j);
    v26 = v15;
    v23 = _mm_loadu_si128(a4);
    v25 = _mm_loadu_si128(a4 + 1);
    v19 = _mm_loadu_si128(v15);
    v21 = _mm_loadu_si128(v15 + 1);
    if ( !a5(
            v19.m128i_i32[0],
            v19.m128i_i32[1],
            v19.m128i_i32[2],
            v19.m128i_i32[3],
            v21.m128i_i32[0],
            v21.m128i_i32[1],
            v21.m128i_i32[2],
            v21.m128i_i32[3],
            v15[2].m128i_i32[0],
            v15[2].m128i_i32[1],
            v23.m128i_i32[0],
            v23.m128i_i32[1],
            v23.m128i_i32[2],
            v23.m128i_i32[3],
            v25.m128i_i32[0],
            v25.m128i_i32[1],
            v25.m128i_i32[2],
            v25.m128i_i32[3],
            a4[2].m128i_i32[0],
            a4[2].m128i_i32[1]) )
      break;
    v16 = 5 * v6;
    v6 = j;
    *(int *)(a1 + 8 * v16) = _mm_loadu_si128(v26);
    *(int *)(a1 + 8 * v16 + 16) = _mm_loadu_si128(v26 + 1);
    *(unsigned long long *)(a1 + 8 * v16 + 32) = v26[2].m128i_i64[0];
  }
  result = 5 * v6;
  *(int *)(a1 + 8 * result) = _mm_loadu_si128(a4);
  *(int *)(a1 + 8 * result + 16) = _mm_loadu_si128(a4 + 1);
  *(unsigned long long *)(a1 + 8 * result + 32) = a4[2].m128i_i64[0];
  return result;
}

void  sub_417570(int a1, int a2)
{
  int i; 

  for ( i = a1; i != a2; i += 12 )
  {
    if ( *(unsigned long *)i )
    {
      operator delete(*(void **)i);
      *(unsigned long *)i = 0;
      *(unsigned long *)(i + 4) = 0;
      *(unsigned long *)(i + 8) = 0;
    }
  }
}

int * sub_4175B0(
        const int *a1,
        int *a2,
        unsigned char ( *a3)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int *result; 
  int *v4; 
  const int *v5; 
  const int *v6; 
  int v7; 
  int v8; 
  const int *v9; 
  int *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  long long v25; 
  const int *v26; 
  int *v27; 

  result = a2;
  v4 = (int *)a1;
  if ( a1 != a2 )
  {
    v5 = (const int *)((char *)a1 + 40);
    if ( &a1[2].m128i_u64[1] != (unsigned long long *)a2 )
    {
      v6 = a1;
      v26 = a1;
      do
      {
        v7 = _mm_loadu_si128(v5);
        v27 = (int *)v5;
        v24 = v7;
        v23 = _mm_loadu_si128(v5 + 1);
        v25 = v5[2].m128i_i64[0];
        v18 = _mm_loadu_si128(v4);
        v20 = _mm_loadu_si128(v4 + 1);
        v12 = _mm_loadu_si128(v5);
        v15 = _mm_loadu_si128(v5 + 1);
        if ( a3(
               v12.m128i_i32[0],
               v12.m128i_i32[1],
               v12.m128i_i32[2],
               v12.m128i_i32[3],
               v15.m128i_i32[0],
               v15.m128i_i32[1],
               v15.m128i_i32[2],
               v15.m128i_i32[3],
               v5[2].m128i_i32[0],
               v5[2].m128i_i32[1],
               v18.m128i_i32[0],
               v18.m128i_i32[1],
               v18.m128i_i32[2],
               v18.m128i_i32[3],
               v20.m128i_i32[0],
               v20.m128i_i32[1],
               v20.m128i_i32[2],
               v20.m128i_i32[3],
               v4[2].m128i_i32[0],
               v4[2].m128i_i32[1]) )
        {
          result = (int *)v5;
          if ( v4 != v5 )
          {
            do
            {
              v8 = _mm_loadu_si128((int *)((char *)result - 40));
              result = (int *)((char *)result - 40);
              *(int *)((char *)result + 40) = v8;
              *(int *)((char *)result + 56) = _mm_loadu_si128(result + 1);
              result[4].m128i_i64[1] = result[2].m128i_i64[0];
            }
            while ( result != v4 );
          }
          *v4 = _mm_loadu_si128(&v24);
          v4[1] = _mm_loadu_si128(&v23);
          v4[2].m128i_i64[0] = v25;
        }
        else
        {
          v9 = v26;
          v19 = _mm_loadu_si128(v26);
          v21 = _mm_loadu_si128(v26 + 1);
          v13 = _mm_loadu_si128(&v24);
          v16 = _mm_loadu_si128(&v23);
          if ( a3(
                 v13.m128i_i32[0],
                 v13.m128i_i32[1],
                 v13.m128i_i32[2],
                 v13.m128i_i32[3],
                 v16.m128i_i32[0],
                 v16.m128i_i32[1],
                 v16.m128i_i32[2],
                 v16.m128i_i32[3],
                 v25,
                 HIDWORD(v25),
                 v19.m128i_i32[0],
                 v19.m128i_i32[1],
                 v19.m128i_i32[2],
                 v19.m128i_i32[3],
                 v21.m128i_i32[0],
                 v21.m128i_i32[1],
                 v21.m128i_i32[2],
                 v21.m128i_i32[3],
                 v26[2].m128i_i32[0],
                 v26[2].m128i_i32[1]) )
          {
            v10 = v27;
            do
            {
              *v10 = _mm_loadu_si128(v9);
              v10[1] = _mm_loadu_si128(v9 + 1);
              v10[2].m128i_i64[0] = v9[2].m128i_i64[0];
              v10 = (int *)v9;
              v11 = _mm_loadu_si128((const int *)((char *)v9 - 40));
              v9 = (const int *)((char *)v9 - 40);
              v22 = _mm_loadu_si128(v9 + 1);
              v14 = _mm_loadu_si128(&v24);
              v17 = _mm_loadu_si128(&v23);
            }
            while ( a3(
                      v14.m128i_i32[0],
                      v14.m128i_i32[1],
                      v14.m128i_i32[2],
                      v14.m128i_i32[3],
                      v17.m128i_i32[0],
                      v17.m128i_i32[1],
                      v17.m128i_i32[2],
                      v17.m128i_i32[3],
                      v25,
                      HIDWORD(v25),
                      v11.m128i_i32[0],
                      v11.m128i_i32[1],
                      v11.m128i_i32[2],
                      v11.m128i_i32[3],
                      v22.m128i_i32[0],
                      v22.m128i_i32[1],
                      v22.m128i_i32[2],
                      v22.m128i_i32[3],
                      v9[2].m128i_i32[0],
                      v9[2].m128i_i32[1]) );
            v27 = v10;
            v4 = (int *)a1;
          }
          result = v27;
          v6 = v26;
          *v27 = _mm_loadu_si128(&v24);
          result[1] = _mm_loadu_si128(&v23);
          result[2].m128i_i64[0] = v25;
        }
        v5 = (const int *)((char *)v5 + 40);
        v6 = (const int *)((char *)v6 + 40);
        v26 = v6;
      }
      while ( v5 != a2 );
    }
  }
  return result;
}

int  sub_4177B0(
        int a1,
        int a2,
        unsigned char ( *a3)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int result; 
  int v5; 
  int v6; 
  int v7; 
  const int *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  const int *v13; 
  const int *v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22[2]; 
  long long i; 
  const int *v24; 
  int v25; 
  int v26; 
  int v27; 

  v27 = (a2 - a1) / 40;
  result = v27 - (v27 >> 31);
  v5 = v27 / 2;
  if ( v27 / 2 > 0 )
  {
    v6 = 2 * v5 + 2;
    result = a1 + 40 * v5;
    do
    {
      v7 = _mm_loadu_si128((const int *)(result - 40));
      v8 = (const int *)(result - 40);
      v25 = v5 - 1;
      v22[0] = v7;
      v9 = v5 - 1;
      v26 = v6 - 2;
      v10 = _mm_loadu_si128(v8 + 1);
      v11 = v6 - 2;
      v24 = v8;
      v12 = v27;
      v22[1] = v10;
      for ( i = v8[2].m128i_i64[0]; v11 < v27; *(unsigned long long *)(a1 + 8 * v15 + 32) = v14[2].m128i_i64[0] )
      {
        v13 = (const int *)(a1 + 40 * v11);
        v20 = _mm_loadu_si128((const int *)((char *)v13 - 40));
        v21 = _mm_loadu_si128((const int *)((char *)v13 - 24));
        v18 = _mm_loadu_si128(v13);
        v19 = _mm_loadu_si128(v13 + 1);
        if ( a3(
               v18.m128i_i32[0],
               v18.m128i_i32[1],
               v18.m128i_i32[2],
               v18.m128i_i32[3],
               v19.m128i_i32[0],
               v19.m128i_i32[1],
               v19.m128i_i32[2],
               v19.m128i_i32[3],
               v13[2].m128i_i32[0],
               v13[2].m128i_i32[1],
               v20.m128i_i32[0],
               v20.m128i_i32[1],
               v20.m128i_i32[2],
               v20.m128i_i32[3],
               v21.m128i_i32[0],
               v21.m128i_i32[1],
               v21.m128i_i32[2],
               v21.m128i_i32[3],
               v13[-1].m128i_i32[2],
               v13[-1].m128i_i32[3]) )
        {
          --v11;
        }
        v12 = v27;
        v14 = (const int *)(a1 + 40 * v11);
        v15 = 5 * v9;
        v9 = v11;
        *(int *)(a1 + 8 * v15) = _mm_loadu_si128(v14);
        v11 = 2 * v11 + 2;
        *(int *)(a1 + 8 * v15 + 16) = _mm_loadu_si128(v14 + 1);
      }
      if ( v11 == v12 )
      {
        v16 = a1 + 40 * v12;
        v17 = 5 * v9;
        *(int *)(a1 + 8 * v17) = _mm_loadu_si128((const int *)(v16 - 40));
        v9 = v12 - 1;
        *(int *)(a1 + 8 * v17 + 16) = _mm_loadu_si128((const int *)(v16 - 24));
        *(unsigned long long *)(a1 + 8 * v17 + 32) = *(unsigned long long *)(v16 - 8);
      }
      v5 = v25;
      sub_417B70(a1, v9, v25, v22, a3);
      result = (int)v24;
      v6 = v26;
    }
    while ( v5 > 0 );
  }
  return result;
}

int  sub_417920(
        int *a1,
        int *a2,
        int *a3,
        unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int v4; 
  int v5; 
  long long v6; 
  int result; 
  int v8; 
  int v9; 
  long long v10; 
  int v11; 
  int v12; 
  long long v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 

  v18 = _mm_loadu_si128(a1);
  v21 = _mm_loadu_si128(a1 + 1);
  v14 = _mm_loadu_si128(a2);
  v16 = _mm_loadu_si128(a2 + 1);
  if ( a4(
         v14.m128i_i32[0],
         v14.m128i_i32[1],
         v14.m128i_i32[2],
         v14.m128i_i32[3],
         v16.m128i_i32[0],
         v16.m128i_i32[1],
         v16.m128i_i32[2],
         v16.m128i_i32[3],
         a2[2].m128i_i32[0],
         a2[2].m128i_i32[1],
         v18.m128i_i32[0],
         v18.m128i_i32[1],
         v18.m128i_i32[2],
         v18.m128i_i32[3],
         v21.m128i_i32[0],
         v21.m128i_i32[1],
         v21.m128i_i32[2],
         v21.m128i_i32[3],
         a1[2].m128i_i32[0],
         a1[2].m128i_i32[1]) )
  {
    v4 = _mm_loadu_si128(a2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = a2[2].m128i_i64[0];
    *a2 = _mm_loadu_si128(a1);
    a2[1] = _mm_loadu_si128(a1 + 1);
    a2[2].m128i_i64[0] = a1[2].m128i_i64[0];
    *a1 = v4;
    a1[1] = v5;
    a1[2].m128i_i64[0] = v6;
  }
  v19 = _mm_loadu_si128(a2);
  v22 = _mm_loadu_si128(a2 + 1);
  v15 = _mm_loadu_si128(a3);
  v17 = _mm_loadu_si128(a3 + 1);
  result = ((int ( *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))a4)(
             v15.m128i_i32[0],
             v15.m128i_i32[1],
             v15.m128i_i32[2],
             v15.m128i_i32[3],
             v17.m128i_i32[0],
             v17.m128i_i32[1],
             v17.m128i_i32[2],
             v17.m128i_i32[3],
             a3[2].m128i_i32[0],
             a3[2].m128i_i32[1],
             v19.m128i_i32[0],
             v19.m128i_i32[1],
             v19.m128i_i32[2],
             v19.m128i_i32[3],
             v22.m128i_i32[0],
             v22.m128i_i32[1],
             v22.m128i_i32[2],
             v22.m128i_i32[3],
             a2[2].m128i_i32[0],
             a2[2].m128i_i32[1]);
  if ( (unsigned char)result )
  {
    v8 = _mm_loadu_si128(a3);
    v9 = _mm_loadu_si128(a3 + 1);
    v10 = a3[2].m128i_i64[0];
    *a3 = _mm_loadu_si128(a2);
    a3[1] = _mm_loadu_si128(a2 + 1);
    a3[2].m128i_i64[0] = a2[2].m128i_i64[0];
    *a2 = v8;
    a2[1] = v9;
    a2[2].m128i_i64[0] = v10;
    v20 = _mm_loadu_si128(a1);
    v23 = _mm_loadu_si128(a1 + 1);
    result = ((int ( *)(int, int, int, int, int, int, int, int, unsigned long, unsigned long, int, int, int, int, int, int, int, int, int, int))a4)(
               v8.m128i_i32[0],
               v8.m128i_i32[1],
               v8.m128i_i32[2],
               v8.m128i_i32[3],
               v9.m128i_i32[0],
               v9.m128i_i32[1],
               v9.m128i_i32[2],
               v9.m128i_i32[3],
               v10,
               HIDWORD(v10),
               v20.m128i_i32[0],
               v20.m128i_i32[1],
               v20.m128i_i32[2],
               v20.m128i_i32[3],
               v23.m128i_i32[0],
               v23.m128i_i32[1],
               v23.m128i_i32[2],
               v23.m128i_i32[3],
               a1[2].m128i_i32[0],
               a1[2].m128i_i32[1]);
    if ( (unsigned char)result )
    {
      v11 = _mm_loadu_si128(a2);
      v12 = _mm_loadu_si128(a2 + 1);
      v13 = a2[2].m128i_i64[0];
      *a2 = _mm_loadu_si128(a1);
      a2[1] = _mm_loadu_si128(a1 + 1);
      a2[2].m128i_i64[0] = a1[2].m128i_i64[0];
      *a1 = v11;
      a1[1] = v12;
      a1[2].m128i_i64[0] = v13;
    }
  }
  return result;
}

int  sub_417AC0(
        int *a1,
        int *a2,
        int *a3,
        unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int v5; 
  int v6; 
  int v7; 
  int *v9; 
  int v10; 

  v5 = ((char *)a3 - (char *)a1) / 40;
  if ( v5 <= 40 )
    return sub_417920(a1, a2, a3, a4);
  v6 = (v5 + 1) / 8;
  v7 = 40 * v6;
  v10 = 80 * v6;
  v9 = (int *)((char *)a1 + 40 * v6);
  sub_417920(a1, v9, &a1[5 * v6], a4);
  sub_417920((int *)((char *)a2 - v7), a2, (int *)((char *)a2 + v7), a4);
  sub_417920(&a3[v10 / 0xFFFFFFF0], (int *)((char *)a3 - v7), a3, a4);
  return sub_417920(v9, a2, (int *)((char *)a3 - v7), a4);
}

int  sub_417B70(
        int a1,
        int a2,
        int a3,
        const int *a4,
        unsigned char ( *a5)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int v5; 
  int v6; 
  const int *v7; 
  int v8; 
  int result; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 

  v5 = a2;
  v6 = (a2 - 1) / 2;
  if ( a3 < a2 )
  {
    while ( 1 )
    {
      v7 = (const int *)(a1 + 40 * v6);
      v12 = _mm_loadu_si128(a4);
      v13 = _mm_loadu_si128(a4 + 1);
      v10 = _mm_loadu_si128(v7);
      v11 = _mm_loadu_si128(v7 + 1);
      if ( !a5(
              v10.m128i_i32[0],
              v10.m128i_i32[1],
              v10.m128i_i32[2],
              v10.m128i_i32[3],
              v11.m128i_i32[0],
              v11.m128i_i32[1],
              v11.m128i_i32[2],
              v11.m128i_i32[3],
              v7[2].m128i_i32[0],
              v7[2].m128i_i32[1],
              v12.m128i_i32[0],
              v12.m128i_i32[1],
              v12.m128i_i32[2],
              v12.m128i_i32[3],
              v13.m128i_i32[0],
              v13.m128i_i32[1],
              v13.m128i_i32[2],
              v13.m128i_i32[3],
              a4[2].m128i_i32[0],
              a4[2].m128i_i32[1]) )
        break;
      v8 = 5 * a2;
      *(int *)(a1 + 8 * v8) = _mm_loadu_si128(v7);
      *(int *)(a1 + 8 * v8 + 16) = _mm_loadu_si128(v7 + 1);
      *(unsigned long long *)(a1 + 8 * v8 + 32) = v7[2].m128i_i64[0];
      v5 = v6;
      a2 = v6;
      v6 = (v6 - 1) / 2;
      if ( a3 >= a2 )
        goto LABEL_6;
    }
    v5 = a2;
  }
LABEL_6:
  result = 5 * v5;
  *(int *)(a1 + 8 * result) = _mm_loadu_si128(a4);
  *(int *)(a1 + 8 * result + 16) = _mm_loadu_si128(a4 + 1);
  *(unsigned long long *)(a1 + 8 * result + 32) = a4[2].m128i_i64[0];
  return result;
}

int  sub_417C60(
        int *a1,
        int *a2,
        int a3,
        unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int *v4; 
  int *v5; 
  unsigned char ( *v6)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); 
  int result; 
  int *v9; 
  int *v10; 
  int v11; 

  v4 = a1;
  v5 = a2;
  v6 = a4;
  result = ((char *)a2 - (char *)a1) / 40;
  if ( result <= 32 )
  {
LABEL_7:
    if ( result > 1 )
      return (int)sub_4175B0(v4, v5, v6);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_417E60(&v9, v4, v5, v6);
      v11 = a3 / 2 / 2 + a3 / 2;
      a3 = v11;
      if ( ((char *)v9 - (char *)v4) / 40 >= ((char *)v5 - (char *)v10) / 40 )
      {
        sub_417C60(v10, v5, v11, a4);
        v5 = v9;
      }
      else
      {
        sub_417C60(v4, v9, v11, a4);
        v4 = v10;
      }
      v6 = a4;
      result = ((char *)v5 - (char *)v4) / 40;
      if ( result <= 32 )
        goto LABEL_7;
    }
    if ( ((char *)v5 - (char *)v4) / 40 > 1 )
      sub_4177B0((int)v4, (int)v5, a4);
    return sub_417DA0(v4, (int)v5, a4);
  }
  return result;
}
int  sub_417DA0(
        const int *a1,
        int a2,
        unsigned char ( *a3)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int v3; 
  int result; 
  int *v5; 
  int v6[2]; 
  long long v7; 

  v3 = a2 - (unsigned long)a1;
  result = (a2 - (int)a1) / 40;
  if ( result > 1 )
  {
    v5 = (int *)(a2 - 40);
    do
    {
      v6[0] = _mm_loadu_si128(v5);
      v6[1] = _mm_loadu_si128(v5 + 1);
      v7 = v5[2].m128i_i64[0];
      *v5 = _mm_loadu_si128(a1);
      v5[1] = _mm_loadu_si128(a1 + 1);
      v5[2].m128i_i64[0] = a1[2].m128i_i64[0];
      sub_4173B0((int)a1, 0, (v3 - 40) / 40, v6, a3);
      v5 = (int *)((char *)v5 - 40);
      v3 = (char *)v5 - (char *)a1 + 40;
      result = v3 / 40;
    }
    while ( v3 / 40 > 1 );
  }
  return result;
}

int ** sub_417E60(
        int **a1,
        int *a2,
        int *a3,
        unsigned char ( *a4)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))
{
  int *v4; 
  int *v5; 
  unsigned int v6; 
  unsigned char v7; 
  int *v8; 
  int *v9; 
  int *v10; 
  int *v11; 
  int v12; 
  int v13; 
  long long v14; 
  bool v15; 
  int *v16; 
  int *v17; 
  int v18; 
  int v19; 
  long long v20; 
  int v21; 
  int v22; 
  long long v23; 
  int *v24; 
  int *v25; 
  int v26; 
  int v27; 
  long long v28; 
  int v29; 
  int v30; 
  long long v31; 
  int v32; 
  int v33; 
  int v34; 
  long long v35; 
  int v36; 
  int v37; 
  long long v38; 
  int **result; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  const int *v72; 
  int *v73; 
  signed char *v74; 
  int *v75; 
  int *v76; 

  v4 = (int *)((char *)a2 + 40 * (((char *)a3 - (char *)a2) / 40 / 2));
  sub_417AC0(a2, v4, (int *)((char *)a3 - 40), a4);
  v5 = (int *)((char *)v4 + 40);
  v75 = (int *)((char *)v4 + 40);
  if ( a2 < v4 )
  {
    do
    {
      v72 = (int *)((char *)v4 - 40);
      v56 = _mm_loadu_si128(v4);
      v64 = _mm_loadu_si128(v4 + 1);
      v40 = _mm_loadu_si128((int *)((char *)v4 - 40));
      v48 = _mm_loadu_si128((int *)((char *)v4 - 24));
      if ( a4(
             v40.m128i_i32[0],
             v40.m128i_i32[1],
             v40.m128i_i32[2],
             v40.m128i_i32[3],
             v48.m128i_i32[0],
             v48.m128i_i32[1],
             v48.m128i_i32[2],
             v48.m128i_i32[3],
             v4[-1].m128i_i32[2],
             v4[-1].m128i_i32[3],
             v56.m128i_i32[0],
             v56.m128i_i32[1],
             v56.m128i_i32[2],
             v56.m128i_i32[3],
             v64.m128i_i32[0],
             v64.m128i_i32[1],
             v64.m128i_i32[2],
             v64.m128i_i32[3],
             v4[2].m128i_i32[0],
             v4[2].m128i_i32[1]) )
      {
        break;
      }
      v57 = _mm_loadu_si128(v72);
      v65 = _mm_loadu_si128(v72 + 1);
      v41 = _mm_loadu_si128(v4);
      v49 = _mm_loadu_si128(v4 + 1);
      if ( a4(
             v41.m128i_i32[0],
             v41.m128i_i32[1],
             v41.m128i_i32[2],
             v41.m128i_i32[3],
             v49.m128i_i32[0],
             v49.m128i_i32[1],
             v49.m128i_i32[2],
             v49.m128i_i32[3],
             v4[2].m128i_i32[0],
             v4[2].m128i_i32[1],
             v57.m128i_i32[0],
             v57.m128i_i32[1],
             v57.m128i_i32[2],
             v57.m128i_i32[3],
             v65.m128i_i32[0],
             v65.m128i_i32[1],
             v65.m128i_i32[2],
             v65.m128i_i32[3],
             v72[2].m128i_i32[0],
             v72[2].m128i_i32[1]) )
      {
        break;
      }
      v4 = (int *)((char *)v4 - 40);
    }
    while ( a2 < v72 );
    v5 = v75;
  }
  v6 = (unsigned int)a3;
  if ( v5 < a3 )
  {
    while ( 1 )
    {
      v58 = _mm_loadu_si128(v4);
      v66 = _mm_loadu_si128(v4 + 1);
      v42 = _mm_loadu_si128(v5);
      v50 = _mm_loadu_si128(v5 + 1);
      if ( a4(
             v42.m128i_i32[0],
             v42.m128i_i32[1],
             v42.m128i_i32[2],
             v42.m128i_i32[3],
             v50.m128i_i32[0],
             v50.m128i_i32[1],
             v50.m128i_i32[2],
             v50.m128i_i32[3],
             v5[2].m128i_i32[0],
             v5[2].m128i_i32[1],
             v58.m128i_i32[0],
             v58.m128i_i32[1],
             v58.m128i_i32[2],
             v58.m128i_i32[3],
             v66.m128i_i32[0],
             v66.m128i_i32[1],
             v66.m128i_i32[2],
             v66.m128i_i32[3],
             v4[2].m128i_i32[0],
             v4[2].m128i_i32[1]) )
      {
        break;
      }
      v59 = _mm_loadu_si128(v5);
      v67 = _mm_loadu_si128(v5 + 1);
      v43 = _mm_loadu_si128(v4);
      v51 = _mm_loadu_si128(v4 + 1);
      v7 = a4(
             v43.m128i_i32[0],
             v43.m128i_i32[1],
             v43.m128i_i32[2],
             v43.m128i_i32[3],
             v51.m128i_i32[0],
             v51.m128i_i32[1],
             v51.m128i_i32[2],
             v51.m128i_i32[3],
             v4[2].m128i_i32[0],
             v4[2].m128i_i32[1],
             v59.m128i_i32[0],
             v59.m128i_i32[1],
             v59.m128i_i32[2],
             v59.m128i_i32[3],
             v67.m128i_i32[0],
             v67.m128i_i32[1],
             v67.m128i_i32[2],
             v67.m128i_i32[3],
             v5[2].m128i_i32[0],
             v5[2].m128i_i32[1]);
      v6 = (unsigned int)a3;
      if ( !v7 )
      {
        v5 = (int *)((char *)v5 + 40);
        if ( v5 < a3 )
          continue;
      }
      goto LABEL_12;
    }
    v6 = (unsigned int)a3;
LABEL_12:
    v75 = v5;
  }
  v8 = v4;
  v9 = v5;
  v76 = v4;
LABEL_14:
  while ( 1 )
  {
    v73 = v9;
    while ( 1 )
    {
      if ( (unsigned int)v9 < v6 )
      {
        v74 = &v5[-3].m128i_i8[8];
        do
        {
          v60 = _mm_loadu_si128(v9);
          v68 = _mm_loadu_si128(v9 + 1);
          v44 = _mm_loadu_si128(v4);
          v52 = _mm_loadu_si128(v4 + 1);
          if ( !a4(
                  v44.m128i_i32[0],
                  v44.m128i_i32[1],
                  v44.m128i_i32[2],
                  v44.m128i_i32[3],
                  v52.m128i_i32[0],
                  v52.m128i_i32[1],
                  v52.m128i_i32[2],
                  v52.m128i_i32[3],
                  v4[2].m128i_i32[0],
                  v4[2].m128i_i32[1],
                  v60.m128i_i32[0],
                  v60.m128i_i32[1],
                  v60.m128i_i32[2],
                  v60.m128i_i32[3],
                  v68.m128i_i32[0],
                  v68.m128i_i32[1],
                  v68.m128i_i32[2],
                  v68.m128i_i32[3],
                  v9[2].m128i_i32[0],
                  v9[2].m128i_i32[1]) )
          {
            v61 = _mm_loadu_si128(v4);
            v69 = _mm_loadu_si128(v4 + 1);
            v45 = _mm_loadu_si128(v9);
            v53 = _mm_loadu_si128(v9 + 1);
            if ( a4(
                   v45.m128i_i32[0],
                   v45.m128i_i32[1],
                   v45.m128i_i32[2],
                   v45.m128i_i32[3],
                   v53.m128i_i32[0],
                   v53.m128i_i32[1],
                   v53.m128i_i32[2],
                   v53.m128i_i32[3],
                   v9[2].m128i_i32[0],
                   v9[2].m128i_i32[1],
                   v61.m128i_i32[0],
                   v61.m128i_i32[1],
                   v61.m128i_i32[2],
                   v61.m128i_i32[3],
                   v69.m128i_i32[0],
                   v69.m128i_i32[1],
                   v69.m128i_i32[2],
                   v69.m128i_i32[3],
                   v4[2].m128i_i32[0],
                   v4[2].m128i_i32[1]) )
            {
              break;
            }
            v10 = v5;
            v11 = (int *)(v74 + 40);
            v5 = (int *)((char *)v5 + 40);
            v74 += 40;
            if ( v10 != v9 )
            {
              v12 = _mm_loadu_si128(v11);
              v13 = _mm_loadu_si128(v11 + 1);
              v14 = v11[2].m128i_i64[0];
              *v11 = _mm_loadu_si128(v9);
              v11[1] = _mm_loadu_si128(v9 + 1);
              v11[2].m128i_i64[0] = v9[2].m128i_i64[0];
              *v9 = v12;
              v9[1] = v13;
              v9[2].m128i_i64[0] = v14;
            }
          }
          v9 = (int *)((char *)v9 + 40);
        }
        while ( v9 < a3 );
        v8 = v76;
        v75 = v5;
        v73 = v9;
      }
      v15 = v8 == a2;
      if ( v8 > a2 )
      {
        v16 = v76;
        v17 = (int *)((char *)v76 - 40);
        do
        {
          v62 = _mm_loadu_si128(v4);
          v70 = _mm_loadu_si128(v4 + 1);
          v46 = _mm_loadu_si128(v17);
          v54 = _mm_loadu_si128(v17 + 1);
          if ( !a4(
                  v46.m128i_i32[0],
                  v46.m128i_i32[1],
                  v46.m128i_i32[2],
                  v46.m128i_i32[3],
                  v54.m128i_i32[0],
                  v54.m128i_i32[1],
                  v54.m128i_i32[2],
                  v54.m128i_i32[3],
                  v17[2].m128i_i32[0],
                  v17[2].m128i_i32[1],
                  v62.m128i_i32[0],
                  v62.m128i_i32[1],
                  v62.m128i_i32[2],
                  v62.m128i_i32[3],
                  v70.m128i_i32[0],
                  v70.m128i_i32[1],
                  v70.m128i_i32[2],
                  v70.m128i_i32[3],
                  v4[2].m128i_i32[0],
                  v4[2].m128i_i32[1]) )
          {
            v63 = _mm_loadu_si128(v17);
            v71 = _mm_loadu_si128(v17 + 1);
            v47 = _mm_loadu_si128(v4);
            v55 = _mm_loadu_si128(v4 + 1);
            if ( a4(
                   v47.m128i_i32[0],
                   v47.m128i_i32[1],
                   v47.m128i_i32[2],
                   v47.m128i_i32[3],
                   v55.m128i_i32[0],
                   v55.m128i_i32[1],
                   v55.m128i_i32[2],
                   v55.m128i_i32[3],
                   v4[2].m128i_i32[0],
                   v4[2].m128i_i32[1],
                   v63.m128i_i32[0],
                   v63.m128i_i32[1],
                   v63.m128i_i32[2],
                   v63.m128i_i32[3],
                   v71.m128i_i32[0],
                   v71.m128i_i32[1],
                   v71.m128i_i32[2],
                   v71.m128i_i32[3],
                   v17[2].m128i_i32[0],
                   v17[2].m128i_i32[1]) )
            {
              break;
            }
            v4 = (int *)((char *)v4 - 40);
            if ( v4 != v17 )
            {
              v18 = _mm_loadu_si128(v4);
              v19 = _mm_loadu_si128(v4 + 1);
              v20 = v4[2].m128i_i64[0];
              *v4 = _mm_loadu_si128(v17);
              v4[1] = _mm_loadu_si128(v17 + 1);
              v4[2].m128i_i64[0] = v17[2].m128i_i64[0];
              *v17 = v18;
              v17[1] = v19;
              v17[2].m128i_i64[0] = v20;
            }
          }
          v16 = (int *)((char *)v16 - 40);
          v17 = (int *)((char *)v17 - 40);
        }
        while ( a2 < v16 );
        v5 = v75;
        v76 = v16;
        v8 = v16;
        v15 = v16 == a2;
        v9 = v73;
      }
      if ( v15 )
        break;
      v6 = (unsigned int)a3;
      v8 = (int *)((char *)v8 - 40);
      v76 = v8;
      if ( v9 != a3 )
      {
        v36 = _mm_loadu_si128(v9);
        v37 = _mm_loadu_si128(v9 + 1);
        v38 = v9[2].m128i_i64[0];
        *v9 = _mm_loadu_si128(v8);
        v9[1] = _mm_loadu_si128(v8 + 1);
        v9[2].m128i_i64[0] = v8[2].m128i_i64[0];
        v9 = (int *)((char *)v9 + 40);
        *v8 = v36;
        v8[1] = v37;
        v8[2].m128i_i64[0] = v38;
        goto LABEL_14;
      }
      v4 = (int *)((char *)v4 - 40);
      if ( v8 != v4 )
      {
        v29 = _mm_loadu_si128(v8);
        v30 = _mm_loadu_si128(v8 + 1);
        v31 = v8[2].m128i_i64[0];
        *v8 = _mm_loadu_si128(v4);
        v8[1] = _mm_loadu_si128(v4 + 1);
        v8[2].m128i_i64[0] = v4[2].m128i_i64[0];
        *v4 = v29;
        v4[1] = v30;
        v4[2].m128i_i64[0] = v31;
      }
      v32 = _mm_loadu_si128((int *)((char *)v5 - 40));
      v5 = (int *)((char *)v5 - 40);
      v33 = _mm_loadu_si128(v4);
      v75 = v5;
      v34 = _mm_loadu_si128(v4 + 1);
      v35 = v4[2].m128i_i64[0];
      *v4 = v32;
      v4[1] = _mm_loadu_si128(v5 + 1);
      v4[2].m128i_i64[0] = v5[2].m128i_i64[0];
      *v5 = v33;
      v5[1] = v34;
      v5[2].m128i_i64[0] = v35;
    }
    if ( v9 == a3 )
      break;
    if ( v5 != v9 )
    {
      v21 = _mm_loadu_si128(v4);
      v22 = _mm_loadu_si128(v4 + 1);
      v23 = v4[2].m128i_i64[0];
      *v4 = _mm_loadu_si128(v5);
      v4[1] = _mm_loadu_si128(v5 + 1);
      v4[2].m128i_i64[0] = v5[2].m128i_i64[0];
      *v5 = v21;
      v5[1] = v22;
      v5[2].m128i_i64[0] = v23;
    }
    v24 = v9;
    v25 = v4;
    v5 = (int *)((char *)v5 + 40);
    v4 = (int *)((char *)v4 + 40);
    v75 = v5;
    v9 = (int *)((char *)v9 + 40);
    v26 = _mm_loadu_si128(v25);
    v27 = _mm_loadu_si128(v25 + 1);
    v28 = v25[2].m128i_i64[0];
    *v25 = _mm_loadu_si128(v24);
    v25[1] = _mm_loadu_si128(v24 + 1);
    v25[2].m128i_i64[0] = v24[2].m128i_i64[0];
    v8 = v76;
    *v24 = v26;
    v24[1] = v27;
    v24[2].m128i_i64[0] = v28;
    v6 = (unsigned int)a3;
  }
  result = a1;
  *a1 = v4;
  a1[1] = v5;
  return result;
}

void  sub_4183C0(unsigned long long *a1, int a2)
{
  int i; 

  for ( i = a2; i; --i )
  {
    if ( a1 )
    {
      *a1 = 0i64;
      a1[1] = 0i64;
    }
    a1 += 2;
  }
}

int * sub_4183F0(const int *a1, const int *a2, int *a3)
{
  const int *v3; 
  int *result; 

  v3 = a1;
  for ( result = a3; v3 != a2; result += 2 )
  {
    if ( result )
    {
      *result = _mm_loadu_si128(v3);
      result[1] = _mm_loadu_si128(v3 + 1);
    }
    v3 += 2;
  }
  return result;
}

int * sub_418430(const int *a1, const int *a2, int *a3)
{
  const int *v3; 
  int *result; 

  v3 = a1;
  for ( result = a3; v3 != a2; result = (int *)((char *)result + 24) )
  {
    if ( result )
    {
      *result = _mm_loadu_si128(v3);
      result[1].m128i_i64[0] = v3[1].m128i_i64[0];
    }
    v3 = (const int *)((char *)v3 + 24);
  }
  return result;
}

unsigned long * sub_418470(unsigned long *a1, unsigned long *a2, unsigned long *a3)
{
  unsigned long *result; 
  unsigned long *v4; 

  result = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    do
    {
      if ( result )
      {
        *result = 0;
        result[1] = 0;
        result[2] = 0;
        *result = *(v4 - 2);
        result[1] = *(v4 - 1);
        result[2] = *v4;
        *(v4 - 2) = 0;
        *(v4 - 1) = 0;
        *v4 = 0;
      }
      v4 += 3;
      result += 3;
    }
    while ( v4 - 2 != a2 );
  }
  return result;
}

int  sub_4184D0( double a2, int a3, int a4, double a5)
{
  long long v6; 
  int result; 
  int v8; 
  double v9; 
  double v10; 
  double v11; 
  int v12; 
  double v13; 
  unsigned int v14; 
  int v15; 
  double v16; 
  double v17; 
  double v18; 
  int v19; 
  double v20; 
  int v21; 
  double v22; 
  double v23; 
  int v24; 
  double v25; 
  double v26; 
  double v27; 
  int v28; 
  int v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  int v34; 
  int v35; 
  double v36; 
  int v37; 
  bool v38; 
  double v39; 
  double v40[2]; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  int v58; 
  int v59; 
  double v60; 
  int v61; 
  int v62; 
  int v63; 
  unsigned int v64; 
  int v65; 
  int v66; 
  char v67[176]; 

  v60 = a5;
  v6 = *(unsigned long long *)(a3 + 8);
  v63 = a3;
  sub_406C30(*(unsigned long long *)a3, *(double *)&v6, *((double *)&v6 + 1), v40);
  sub_4216E0((unsigned long *)(this + 108), *(unsigned long *)(this + 16));
  sub_405750((unsigned long *)(this + 120), *(unsigned long *)(this + 16));
  result = sub_405EB0((int)v67, a4, v63 + 24, *(long long *)&v60);
  v8 = 0;
  v65 = 0;
  v66 = 0;
  if ( *(int *)(this + 8) > 0 )
  {
    v9 = a2;
    v10 = v47;
    v11 = v41;
    do
    {
      v12 = *(unsigned long *)(this + 96);
      v13 = 0.0;
      v60 = 0.0;
      v59 = *(unsigned long *)(v12 + 4 * v8);
      v14 = (int)((unsigned long long)(1717986919i64 * (*(unsigned long *)(v59 + 12) - *(unsigned long *)(v59 + 8))) >> 32) >> 4;
      v15 = (*(unsigned long *)(v59 + 12) - *(unsigned long *)(v59 + 8)) / 40;
      v58 = v15;
      if ( v15 > 0 )
      {
        v16 = v10;
        v17 = v11;
        v18 = v10 * -v9;
        v19 = 0;
        v20 = v11 * -v9;
        v64 = v14 + (v14 >> 31);
        v21 = v66;
        v62 = 32 * v65;
        v52 = -v9;
        v22 = v16 * v9;
        v61 = 0;
        v23 = v17 * v9;
        v53 = v22;
        v56 = v18;
        v51 = v23;
        v55 = v20;
        v48 = v44 * -v9;
        v50 = v44 * v9;
        do
        {
          v24 = *(unsigned long *)(v59 + 8);
          v25 = *(double *)(v19 + v24 + 16) - *(double *)(this + 40);
          v57 = *(double *)(v19 + v24 + 8) - *(double *)(this + 32);
          v49 = v25;
          v26 = sub_406A70(
                  (int)v67,
                  -10.0,
                  0.0,
                  -1.0,
                  1.0e-10,
                  v40[1] * v25 + v40[0] * v57 + v20,
                  v23,
                  v46 * v25 + v45 * v57 + v18,
                  v22);
          v27 = v49;
          v28 = v62;
          v29 = v65;
          v30 = v43 * v49;
          v31 = v42 * v57;
          *(double *)(v62 + *(unsigned long *)(this + 108)) = v57;
          v32 = v52;
          v18 = v56;
          v20 = v55;
          v22 = v53;
          v23 = v51;
          *(double *)(*(unsigned long *)(this + 108) + v28 + 8) = v27;
          v33 = v30 + v31 + v48;
          v34 = *(unsigned long *)(this + 108);
          v54 = v26;
          *(double *)(v34 + v28 + 16) = v32;
          *(double *)(*(unsigned long *)(this + 108) + v28 + 24) = v26;
          v35 = *(unsigned long *)(this + 120);
          v36 = v33 * v26 - v50;
          v62 = v28 + 32;
          v37 = v61;
          *(unsigned long *)(v35 + 4 * v29) = v21;
          v19 = v37 + 40;
          v61 = v19;
          v38 = v64-- == 1;
          v13 = v36 + v60;
          v65 = v29 + 1;
          v60 = v13;
        }
        while ( !v38 );
        v9 = a2;
        v10 = v47;
        v11 = v41;
        v15 = v58;
      }
      v39 = v13 / *(double *)(this + 56);
      result = v66 + *(unsigned long *)(this + 204);
      v8 = ++v66;
      *(double *)(v63 + 8 * result) = v39 / (double)v15;
    }
    while ( v8 < *(unsigned long *)(this + 8) );
  }
  return result;
}

unsigned long * sub_418880(int a1, int a2, int a3@<esi>, int a4, int a5, long long a6)
{
  int v6; 
  int *v7; 
  double v8; 
  int v9; 
  double v10; 
  int v11; 
  double v12; 
  double v13; 
  int v14; 
  double v15; 
  int v16; 
  int v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  int v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  unsigned long long v30; 
  int v31; 
  double v32; 
  bool v33; 
  double v34; 
  int v35; 
  float *v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  int v43; 
  double v44; 
  double v45; 
  int v46; 
  double v47; 
  int v48; 
  unsigned long *result; 
  int v50; 
  int v51; 
  int v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  unsigned long *v65; 
  int v66; 
  double v67; 
  unsigned long *v68; 
  int v69; 
  int v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  int v82; 
  double v83; 
  double v84; 
  int v85; 
  double v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  unsigned long long v104; 
  char v105[180]; 

  v60 = a3;
  v59 = a2;
  v6 = a1;
  sub_406C30(*(unsigned long long *)a4, *(double *)(a4 + 8), *(double *)(a4 + 16), &v88);
  v7 = (int *)(v6 + 48);
  if ( *(unsigned long *)(v6 + 48) < *(unsigned long *)(v6 + 52) )
    v7 = (int *)(v6 + 52);
  v87 = (double)*v7 * *(double *)(a4 + 64);
  sub_405EB0((int)v105, a5, a4 + 24, a6);
  sub_4216E0((unsigned long *)(v6 + 108), *(unsigned long *)(v6 + 16) + 3 * *(unsigned long *)(v6 + 24));
  sub_405750((unsigned long *)(v6 + 120), *(unsigned long *)(v6 + 16));
  v8 = v96;
  v9 = 0;
  v10 = v90;
  v11 = 0;
  v61 = 0;
  v70 = 0;
  v84 = 0.0;
  if ( *(int *)(v6 + 8) > 0 )
  {
    v12 = v93;
    do
    {
      v13 = 0.0;
      v80 = 0.0;
      v85 = *(unsigned long *)(*(unsigned long *)(v6 + 96) + 4 * v9);
      v14 = (*(unsigned long *)(v85 + 12) - *(unsigned long *)(v85 + 8)) / 40;
      v69 = v14;
      if ( v14 > 0 )
      {
        v15 = v10 * v87;
        v16 = 32 * v11;
        v17 = 0;
        v82 = 0;
        v18 = v8;
        v19 = v10 * COERCE_DOUBLE(*(unsigned long long *)&v87 ^ 0x8000000000000000ui64);
        v66 = (*(unsigned long *)(v85 + 12) - *(unsigned long *)(v85 + 8)) / 40;
        v97 = v15;
        v20 = v8 * COERCE_DOUBLE(*(unsigned long long *)&v87 ^ 0x8000000000000000ui64);
        v104 = *(unsigned long long *)&v87 ^ 0x8000000000000000ui64;
        v21 = v18 * v87;
        v98 = v20;
        v72 = v21;
        v76 = v19;
        v103 = v12 * COERCE_DOUBLE(*(unsigned long long *)&v87 ^ 0x8000000000000000ui64);
        v100 = v12 * v87;
        do
        {
          v22 = *(unsigned long *)(v85 + 8);
          v23 = *(double *)(v17 + v22 + 16) - *(double *)(v6 + 40);
          v101 = *(double *)(v17 + v22 + 8) - *(double *)(v6 + 32);
          v99 = v23;
          v24 = sub_406A70(
                  (int)v105,
                  -10.0,
                  0.0,
                  -1.0,
                  1.0e-10,
                  v89 * v23 + v88 * v101 + v19,
                  v97,
                  v95 * v23 + v94 * v101 + v20,
                  v21);
          v25 = v101;
          v26 = v99;
          v27 = v91;
          v28 = v92;
          *(double *)(v16 + *(unsigned long *)(v6 + 108)) = v101;
          v29 = v27 * v25;
          v30 = v104;
          *(double *)(v16 + *(unsigned long *)(v6 + 108) + 8) = v26;
          v20 = v98;
          v19 = v76;
          v21 = v72;
          *(unsigned long long *)(v16 + *(unsigned long *)(v6 + 108) + 16) = v30;
          v31 = *(unsigned long *)(v6 + 108);
          v32 = v28 * v26 + v29 + v103;
          v102 = v24;
          *(double *)(v16 + v31 + 24) = v24;
          v16 += 32;
          *(unsigned long *)(*(unsigned long *)(v6 + 120) + 4 * v61++) = v70;
          v17 = v82 + 40;
          v33 = v66-- == 1;
          v82 += 40;
          v13 = v32 * v24 - v100 + v80;
          v80 = v13;
        }
        while ( !v33 );
        v8 = v96;
        v10 = v90;
        v12 = v93;
        v11 = v61;
        v14 = v69;
      }
      v34 = (double)v14;
      v35 = v70 + *(unsigned long *)(v6 + 204);
      v9 = ++v70;
      *(double *)(a4 + 8 * v35) = v13 / *(double *)(v6 + 56) / v34;
    }
    while ( v70 < *(unsigned long *)(v6 + 8) );
  }
  v36 = *(float **)(v6 + 192);
  v62 = 0;
  v64 = 0;
  if ( *(int *)(v6 + 24) > 0 )
  {
    v37 = v10 * v87;
    v38 = v8 * v87;
    v39 = v8 * -v87;
    v40 = v10 * -v87;
    v67 = -v87;
    v81 = v38;
    v83 = v39;
    v71 = v40;
    do
    {
      v73 = *v36 - *(double *)(v6 + 32);
      v77 = v36[1] - *(double *)(v6 + 40);
      v41 = sub_406A70(
              (int)v105,
              -10.0,
              0.0,
              -1.0,
              1.0e-10,
              v89 * v77 + v88 * v73 + v40,
              v37,
              v95 * v77 + v94 * v73 + v39,
              v38);
      v42 = v95;
      *(double *)(32 * (v62 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108)) = v73;
      *(double *)(32 * (v62 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108) + 8) = v77;
      *(double *)(32 * (v62 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108) + 16) = v67;
      v43 = v62 + *(unsigned long *)(v6 + 16);
      v63 = v62 + 1;
      *(double *)(32 * v43 + *(unsigned long *)(v6 + 108) + 24) = v41;
      v74 = v36[4] - *(double *)(v6 + 32);
      v78 = v36[5] - *(double *)(v6 + 40);
      v44 = sub_406A70(
              (int)v105,
              -10.0,
              0.0,
              -1.0,
              1.0e-10,
              v89 * v78 + v88 * v74 + v71,
              v37,
              v42 * v78 + v94 * v74 + v83,
              v81);
      v45 = v95;
      *(double *)(32 * (v63 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108)) = v74;
      *(double *)(32 * (v63 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108) + 8) = v78;
      *(double *)(32 * (v63 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108) + 16) = v67;
      v46 = v63 + *(unsigned long *)(v6 + 16);
      ++v63;
      *(double *)(32 * v46 + *(unsigned long *)(v6 + 108) + 24) = v44;
      v75 = v36[2] - *(double *)(v6 + 32);
      v79 = v36[3] - *(double *)(v6 + 40);
      v47 = sub_406A70(
              (int)v105,
              -10.0,
              0.0,
              -1.0,
              1.0e-10,
              v89 * v79 + v88 * v75 + v71,
              v37,
              v45 * v79 + v94 * v75 + v83,
              v81);
      *(double *)(32 * (v63 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108)) = v75;
      v36 += 10;
      v39 = v83;
      v40 = v71;
      v38 = v81;
      *(double *)(32 * (v63 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108) + 8) = v79;
      *(double *)(32 * (v63 + *(unsigned long *)(v6 + 16)) + *(unsigned long *)(v6 + 108) + 16) = v67;
      v48 = v63 + *(unsigned long *)(v6 + 16);
      v62 = v63 + 1;
      *(double *)(32 * v48 + *(unsigned long *)(v6 + 108) + 24) = v47;
      ++v64;
    }
    while ( v64 < *(unsigned long *)(v6 + 24) );
  }
  result = *(unsigned long **)(v6 + 8);
  v68 = result;
  if ( (int)result > 0 )
  {
    result = *(unsigned long **)(v6 + 96);
    v65 = result;
    do
    {
      v50 = *result;
      v51 = (*(unsigned long *)(v50 + 12) - *(unsigned long *)(v50 + 8)) / 40;
      if ( v51 > 0 )
      {
        v52 = *(unsigned long *)(v50 + 8);
        do
        {
          v52 += 40;
          v84 = *(double *)libm_sse2_sqrt_precise(v59, v60, v62, v65).m128_u64 + v84;
          --v51;
        }
        while ( v51 );
      }
      result = v65 + 1;
      v33 = v68 == (unsigned long *)1;
      v68 = (unsigned long *)((char *)v68 - 1);
      ++v65;
    }
    while ( !v33 );
    v6 = a1;
  }
  v53 = (double)*(int *)(v6 + 16);
  v54 = 50.0;
  v55 = v53 / (double)*(int *)(v6 + 24);
  v56 = v84 / v53;
  if ( v55 < 50.0 )
    v55 = 50.0;
  v57 = (double)*(int *)(v6 + 28);
  *(double *)(v6 + 80) = v55;
  v58 = v53 / v57;
  if ( v58 >= 50.0 )
    v54 = v58;
  *(unsigned long long *)(v6 + 88) = 0x4059000000000000i64;
  *(double *)(v6 + 72) = v54 * v56;
  return result;
}

void  sub_419150(unsigned double a2, int a3, int a4, double a5)
{
  long long v6; 
  double *v7; 
  int *v8; 
  int v9; 
  int v10; 
  double v11; 
  int v12; 
  int v13; 
  double v14; 
  int v15; 
  int v16; 
  double v17; 
  double v18; 
  double v19; 
  int v20; 
  double v21; 
  double v22; 
  int *v23; 
  double v24; 
  double v25; 
  int v26; 
  double v27; 
  double v28; 
  double v29; 
  int v30; 
  int v31; 
  bool v32; 
  int v33; 
  int v34; 
  signed int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  int v39; 
  signed int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  double v45; 
  double v46; 
  double v47; 
  int v48; 
  signed int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  double *v53; 
  signed int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  double *v62; 
  int v63; 
  int v64; 
  double v65; 
  double v66; 
  int v67; 
  double v68; 
  char v69; 
  double *v70; 
  int *v71; 
  int v72; 
  double v73; 
  int v74; 
  unsigned long *v75; 
  int v76; 
  double v77; 
  int v78; 
  unsigned int v79; 
  double v80[2]; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  long long v97[2]; 
  int *v98; 
  double v99; 
  unsigned long *v100; 
  double v101; 
  double v102; 
  int v103; 
  int v104; 
  double v105; 
  double v106; 
  double v107; 
  int v108; 
  int v109; 
  double *v110; 
  int v111; 
  double *v112; 
  int v113; 
  int *v114; 
  int *v115; 
  int v116; 
  unsigned int *v117; 
  char v118; 
  int v119; 
  char v120[176]; 
  int v121; 
  double v122; 
  void *v123[2]; 
  double *v124; 
  void *v125[2]; 
  int *v126; 
  int v127; 

  v117 = this;
  v107 = a5;
  v6 = *(unsigned long long *)(a3 + 8);
  v104 = a3;
  sub_406C30(*(unsigned long long *)a3, *(double *)&v6, *((double *)&v6 + 1), v80);
  v98 = (int *)(this + 27);
  sub_4216E0(this + 27, this[4]);
  v79 = this[4];
  v100 = this + 30;
  sub_405750(this + 30, v79);
  *(double *)&v6 = v107;
  this[34] = this[33];
  sub_405EB0((int)v120, a4, v104 + 24, v6);
  v111 = 0;
  v7 = 0;
  v109 = 0;
  v103 = -1;
  v123[0] = 0;
  v112 = 0;
  v123[1] = 0;
  v110 = 0;
  v124 = 0;
  v8 = 0;
  v127 = 1;
  v125[0] = 0;
  v115 = 0;
  v125[1] = 0;
  v114 = 0;
  v126 = 0;
  v9 = (int)v117;
  v10 = 0;
  v119 = 0;
  if ( (int)v117[2] <= 0 )
    return;
  do
  {
    v11 = 0.0;
    HIDWORD(v106) = *(unsigned long *)(*(unsigned long *)(v9 + 96) + 4 * v10);
    v107 = 0.0;
    v12 = (*(unsigned long *)(HIDWORD(v106) + 12) - *(unsigned long *)(HIDWORD(v106) + 8)) / 40;
    v108 = v12;
    if ( v12 > 0 )
    {
      v13 = HIDWORD(v106);
      v14 = v87 * -a2;
      v15 = 32 * v111;
      v16 = 0;
      v17 = v81 * -a2;
      v113 = 0;
      v91 = -a2;
      v116 = v12;
      v18 = v87 * a2;
      v19 = v81 * a2;
      v88 = -a2 * v84;
      v96 = v87 * a2;
      v89 = v14;
      v92 = v81 * a2;
      v94 = v17;
      v93 = v84 * a2;
      do
      {
        v20 = *(unsigned long *)(v13 + 8);
        v21 = *(double *)(v16 + v20 + 16) - *((double *)v117 + 5);
        v90 = *(double *)(v16 + v20 + 8) - *((double *)v117 + 4);
        v106 = v21;
        v22 = sub_406A70(
                (int)v120,
                -10.0,
                0.0,
                -1.0,
                1.0e-10,
                v80[1] * v21 + v80[0] * v90 + v17,
                v19,
                v86 * v21 + v85 * v90 + v14,
                v18);
        v23 = v98;
        v24 = v106;
        v25 = v90 * v82;
        v26 = v111;
        v27 = v83 * v106;
        *(double *)(v15 + *v98) = v90;
        v28 = v91;
        v14 = v89;
        v17 = v94;
        *(double *)(v15 + *v23 + 8) = v24;
        v18 = v96;
        v29 = v27 + v25 + v88;
        v19 = v92;
        *(double *)(v15 + *v23 + 16) = v28;
        v30 = *v23;
        v31 = v119;
        v95 = v22;
        *(double *)(v15 + v30 + 24) = v22;
        v15 += 32;
        v11 = v29 * v22 - v93 + v107;
        *(unsigned long *)(*v100 + 4 * v26) = v31;
        v16 = v113 + 40;
        v111 = v26 + 1;
        v32 = v116-- == 1;
        v107 = v11;
        v113 += 40;
      }
      while ( !v32 );
      v8 = v115;
      v7 = v112;
      v12 = v108;
    }
    v33 = v119;
    *(double *)(v104 + 8 * (v119 + v117[51])) = v11 / *((double *)v117 + 7) / (double)v12;
    v9 = (int)v117;
    if ( v103 == *(unsigned long *)(*(unsigned long *)(v117[24] + 4 * v33) + 20) )
    {
      if ( &v119 >= v8 || v125[0] > &v119 )
      {
        if ( v8 == v114 && !(v114 - v8) )
        {
          v40 = ((char *)v8 - (char *)v125[0]) >> 2;
          if ( v40 == 0x3FFFFFFF )
            goto LABEL_104;
          v41 = ((char *)v114 - (char *)v125[0]) >> 2;
          v42 = v40 + 1;
          if ( 0x3FFFFFFF - (v41 >> 1) >= v41 )
            v43 = (v41 >> 1) + v41;
          else
            v43 = 0;
          if ( v43 < v42 )
            v43 = v42;
          sub_405400((int)v125, v43);
          v8 = (int *)v125[1];
          v9 = (int)v117;
          v114 = v126;
        }
        if ( v8 )
        {
          v39 = v119;
          goto LABEL_32;
        }
      }
      else
      {
        v34 = ((char *)&v119 - (char *)v125[0]) >> 2;
        v116 = v34;
        if ( v8 == v114 )
        {
          if ( !(v114 - v8) )
          {
            v35 = ((char *)v8 - (char *)v125[0]) >> 2;
            if ( v35 == 0x3FFFFFFF )
              goto LABEL_104;
            v36 = ((char *)v114 - (char *)v125[0]) >> 2;
            v37 = v35 + 1;
            if ( 0x3FFFFFFF - (v36 >> 1) >= v36 )
              v38 = (v36 >> 1) + v36;
            else
              v38 = 0;
            if ( v38 < v37 )
              v38 = v37;
            sub_405400((int)v125, v38);
            v8 = (int *)v125[1];
            v9 = (int)v117;
            v114 = v126;
          }
          v34 = v116;
        }
        if ( v8 )
        {
          v39 = *((unsigned long *)v125[0] + v34);
LABEL_32:
          *v8 = v39;
        }
      }
      ++v8;
      v44 = *(unsigned long *)(v9 + 96);
      v125[1] = v8;
      v115 = v8;
      v106 = *(double *)(*(unsigned long *)(v44 + 4 * v119) + 24);
      v45 = v106;
      v46 = v106 - v102;
      v107 = v106 - v102;
      v47 = (v102 + v106) * 0.5;
      *(double *)&v97[1] = v106 - v102;
      v102 = v47;
      *(double *)v97 = v47;
      if ( v97 >= (long long *)v7 || v123[0] > v97 )
      {
        if ( v7 == v110 && !(((char *)v110 - (char *)v7) >> 4) )
        {
          v54 = ((char *)v7 - (char *)v123[0]) >> 4;
          if ( v54 == 0xFFFFFFF )
LABEL_104:
            std::_Xlength_error("vector<T> too long");
          v55 = ((char *)v110 - (char *)v123[0]) >> 4;
          v56 = v54 + 1;
          if ( 0xFFFFFFF - (v55 >> 1) >= v55 )
            v57 = (v55 >> 1) + v55;
          else
            v57 = 0;
          if ( v57 < v56 )
            v57 = v56;
          sub_406840((unsigned long long **)v123, v57);
          v7 = (double *)v123[1];
          v46 = v107;
          v47 = v102;
          v45 = v106;
          v110 = v124;
        }
        if ( v7 )
        {
          *v7 = v47;
          v7[1] = v46;
        }
      }
      else
      {
        v48 = ((char *)v97 - (char *)v123[0]) >> 4;
        v108 = v48;
        if ( v7 == v110 && !(((char *)v110 - (char *)v7) >> 4) )
        {
          v49 = ((char *)v7 - (char *)v123[0]) >> 4;
          if ( v49 == 0xFFFFFFF )
            goto LABEL_104;
          v50 = ((char *)v110 - (char *)v123[0]) >> 4;
          v51 = v49 + 1;
          if ( 0xFFFFFFF - (v50 >> 1) >= v50 )
            v52 = (v50 >> 1) + v50;
          else
            v52 = 0;
          if ( v52 < v51 )
            v52 = v51;
          sub_406840((unsigned long long **)v123, v52);
          v7 = (double *)v123[1];
          v46 = v107;
          v45 = v106;
          v48 = v108;
          v110 = v124;
        }
        v53 = (double *)((char *)v123[0] + 16 * v48);
        if ( v7 )
        {
          *v7 = *v53;
          v7[1] = v53[1];
        }
      }
      v7 += 2;
      v123[1] = v7;
      v112 = v7;
      if ( v46 < 0.0 )
        v46 = -v46;
      if ( v105 > v46 )
        v105 = v46;
      v9 = (int)v117;
      v58 = v109 + 1;
      v102 = v45;
      ++v109;
      if ( v119 != v117[2] - 1 )
        goto LABEL_98;
      goto LABEL_64;
    }
    v58 = v109;
LABEL_64:
    if ( v119 && v58 > 5 )
    {
      v59 = v58 - 1;
      v116 = 2;
      v115 = (int *)(v58 - 1);
      v113 = 0;
      v105 = v105 * 0.1;
      do
      {
        v60 = rand() % v59;
        v61 = rand() % v59;
        if ( v60 == v61 )
          goto LABEL_78;
        v62 = (double *)v123[0];
        v63 = 2 * v60;
        v64 = 0;
        v65 = (*((double *)v123[0] + v63 + 1) - *((double *)v123[0] + 2 * v61 + 1))
            / (*((double *)v123[0] + v63) - *((double *)v123[0] + 2 * v61));
        v66 = *((double *)v123[0] + v63 + 1) - *((double *)v123[0] + v63) * v65;
        if ( v59 > 0 )
        {
          v67 = v59;
          do
          {
            v68 = *v62 * v65 + v66 - v62[1];
            if ( v68 < 0.0 )
              v68 = -v68;
            if ( v105 > v68 )
              ++v64;
            v62 += 2;
            --v67;
          }
          while ( v67 );
        }
        if ( v64 <= v116 )
        {
LABEL_78:
          v66 = v99;
          v65 = v101;
        }
        else
        {
          v116 = v64;
          v101 = v65;
          v99 = v66;
          if ( (double)v64 > (double)v111 * 0.95 )
            break;
        }
        ++v113;
      }
      while ( v113 < 100 );
      v69 = 0;
      v118 = 0;
      if ( v59 > 0 )
      {
        v70 = (double *)v123[0];
        v71 = (int *)((char *)v125[0] + 4);
        v72 = (int)v115;
        while ( 1 )
        {
          v73 = *v70 * v65 + v66 - v70[1];
          if ( v73 < 0.0 )
            v73 = -v73;
          if ( v105 <= v73 )
            break;
          if ( !v69 )
          {
            v69 = 1;
LABEL_89:
            v118 = v69;
            goto LABEL_90;
          }
          v121.m128i_i64[0] = *((unsigned long long *)v71 - 1);
          v121.m128i_i32[2] = *v71;
          v122 = (double)((int)v117[4] / (int)v117[3]);
          sub_421580(v117 + 33, &v121);
          v65 = v101;
          v66 = v99;
          v69 = v118;
          v72 = (int)v115;
LABEL_90:
          v70 += 2;
          ++v71;
          v115 = (int *)--v72;
          if ( !v72 )
            goto LABEL_91;
        }
        v69 = 0;
        goto LABEL_89;
      }
LABEL_91:
      v9 = (int)v117;
    }
    v74 = *(unsigned long *)(v9 + 96);
    v75 = v125[0];
    v7 = (double *)v123[0];
    v109 = 1;
    v76 = *(unsigned long *)(v74 + 4 * v119);
    v112 = (double *)v123[0];
    v123[1] = v123[0];
    v125[1] = v125[0];
    v77 = *(double *)(v76 + 24);
    v78 = *(unsigned long *)(v76 + 20);
    v102 = v77;
    v103 = v78;
    v105 = 1.0e11;
    if ( v125[0] == v114 && !(((char *)v114 - (char *)v125[0]) >> 2) )
    {
      sub_405400((int)v125, 1u);
      v75 = v125[1];
      v9 = (int)v117;
      v114 = v126;
    }
    if ( v75 )
      *v75 = v119;
    v8 = v75 + 1;
    v115 = v8;
    v125[1] = v8;
LABEL_98:
    v10 = v119 + 1;
    v119 = v10;
  }
  while ( v10 < *(unsigned long *)(v9 + 8) );
  if ( v125[0] )
    operator delete(v125[0]);
  if ( v123[0] )
    operator delete(v123[0]);
}

void  sub_419BD0( int a2, int a3, long long a4)
{
  int *v5; 
  double *v6; 
  int *v7; 
  int v8; 
  int v9; 
  double v10; 
  double v11; 
  double v12; 
  int v13; 
  double v14; 
  double v15; 
  int v16; 
  int v17; 
  double v18; 
  double v19; 
  int v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  int v25; 
  double v26; 
  unsigned long long v27; 
  int v28; 
  double v29; 
  double v30; 
  bool v31; 
  int v32; 
  int v33; 
  signed int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  int v38; 
  signed int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  int v43; 
  double *v44; 
  double v45; 
  double v46; 
  double v47; 
  int v48; 
  signed int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  int v53; 
  signed int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  double *v62; 
  int v63; 
  int v64; 
  double v65; 
  double v66; 
  int v67; 
  double v68; 
  char v69; 
  double *v70; 
  int *v71; 
  int v72; 
  double v73; 
  int v74; 
  int *v75; 
  int v76; 
  int v77; 
  float *v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  int v85; 
  double v86; 
  double v87; 
  int v88; 
  double v89; 
  int v90; 
  unsigned long *v91; 
  int v92; 
  int v93; 
  int v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  void *v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int *v111; 
  int v112; 
  int v113; 
  int *v115; 
  int v116; 
  int v117; 
  int v118; 
  unsigned long *v119; 
  double v120; 
  double v121; 
  int v122; 
  int v123; 
  double *v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  double v129; 
  double v130; 
  double v131; 
  double v132; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  int v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158[3]; 
  double v159; 
  double v160; 
  double v161; 
  unsigned long long v162; 
  double v163; 
  double v164; 
  double v165; 
  int v166; 
  void *v167[2]; 
  int *v168; 
  void *v169[2]; 
  int v170; 
  int v171; 
  double v172; 
  char v173[180]; 
  int v174; 

  sub_406C30(*(unsigned long long *)a2, *(double *)(a2 + 8), *(double *)(a2 + 16), &v149);
  v5 = (int *)(this + 48);
  if ( *(unsigned long *)(this + 48) < *(unsigned long *)(this + 52) )
    v5 = (int *)(this + 52);
  v148 = (double)*v5 * *(double *)(a2 + 64);
  sub_4216E0((unsigned long *)(this + 108), *(unsigned long *)(this + 16) + 3 * *(unsigned long *)(this + 24));
  sub_405750((unsigned long *)(this + 120), *(unsigned long *)(this + 16));
  *(unsigned long *)(this + 136) = *(unsigned long *)(this + 132);
  sub_405EB0((int)v173, a3, a2 + 24, a4);
  v125 = 0;
  v6 = 0;
  v126 = 0;
  v117 = -1;
  v169[0] = 0;
  v124 = 0;
  v169[1] = 0;
  v127 = 0;
  v170 = 0;
  v7 = 0;
  v174 = 1;
  v167[0] = 0;
  v115 = 0;
  v167[1] = 0;
  v111 = 0;
  v168 = 0;
  v8 = this;
  v9 = 0;
  v10 = v157;
  v11 = v151;
  v166 = 0;
  v147 = 0.0;
  if ( *(int *)(this + 8) > 0 )
  {
    while ( 1 )
    {
      v12 = 0.0;
      v144 = 0.0;
      v145 = *(unsigned long *)(*(unsigned long *)(v8 + 96) + 4 * v9);
      v13 = (*(unsigned long *)(v145 + 12) - *(unsigned long *)(v145 + 8)) / 40;
      v128 = v13;
      if ( v13 > 0 )
      {
        v14 = v10;
        v15 = v10 * COERCE_DOUBLE(*(unsigned long long *)&v148 ^ 0x8000000000000000ui64);
        v16 = 32 * v125;
        v17 = 0;
        v122 = 0;
        v18 = v151 * COERCE_DOUBLE(*(unsigned long long *)&v148 ^ 0x8000000000000000ui64);
        v106 = (*(unsigned long *)(v145 + 12) - *(unsigned long *)(v145 + 8)) / 40;
        v162 = *(unsigned long long *)&v148 ^ 0x8000000000000000ui64;
        v160 = v151 * v148;
        v19 = v14 * v148;
        v163 = v15;
        v136 = v19;
        v140 = v18;
        v161 = v154 * COERCE_DOUBLE(*(unsigned long long *)&v148 ^ 0x8000000000000000ui64);
        v165 = v154 * v148;
        do
        {
          v20 = *(unsigned long *)(v145 + 8);
          v21 = *(double *)(v17 + v20 + 16) - *(double *)(this + 40);
          v164 = *(double *)(v17 + v20 + 8) - *(double *)(this + 32);
          v159 = v21;
          v22 = sub_406A70(
                  (int)v173,
                  -10.0,
                  0.0,
                  -1.0,
                  1.0e-10,
                  v150 * v21 + v149 * v164 + v18,
                  v160,
                  v156 * v21 + v155 * v164 + v15,
                  v19);
          v23 = v159;
          v24 = v153 * v159;
          v25 = v166;
          v26 = v152 * v164;
          *(double *)(v16 + *(unsigned long *)(this + 108)) = v164;
          v27 = v162;
          v15 = v163;
          v18 = v140;
          v19 = v136;
          *(double *)(v16 + *(unsigned long *)(this + 108) + 8) = v23;
          v28 = *(unsigned long *)(this + 108);
          v29 = v24 + v26 + v161;
          v158[2] = v22;
          *(unsigned long long *)(v16 + v28 + 16) = v27;
          *(double *)(v16 + *(unsigned long *)(this + 108) + 24) = v22;
          v16 += 32;
          v30 = v29 * v22 - v165;
          *(unsigned long *)(*(unsigned long *)(this + 120) + 4 * v125) = v25;
          v12 = v30 + v144;
          v17 = v122 + 40;
          ++v125;
          v31 = v106-- == 1;
          v122 += 40;
          v144 = v12;
        }
        while ( !v31 );
        v7 = v115;
        v6 = v124;
        v13 = v128;
      }
      v32 = v166;
      *(double *)(a2 + 8 * (v166 + *(unsigned long *)(this + 204))) = v12 / *(double *)(this + 56) / (double)v13;
      v8 = this;
      if ( v117 != *(unsigned long *)(*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * v32) + 20) )
      {
        v58 = v126;
LABEL_67:
        if ( v166 && v58 > 5 )
        {
          v59 = v58 - 1;
          v109 = 2;
          v116 = v58 - 1;
          v123 = 0;
          v121 = v120 * 0.1;
          do
          {
            v60 = rand() % v59;
            v61 = rand() % v59;
            if ( v60 == v61 )
              goto LABEL_81;
            v62 = (double *)v169[0];
            v63 = 2 * v60;
            v64 = 0;
            v65 = (*((double *)v169[0] + v63 + 1) - *((double *)v169[0] + 2 * v61 + 1))
                / (*((double *)v169[0] + v63) - *((double *)v169[0] + 2 * v61));
            v66 = *((double *)v169[0] + v63 + 1) - v65 * *((double *)v169[0] + v63);
            if ( v59 > 0 )
            {
              v67 = v59;
              do
              {
                v68 = *v62 * v65 + v66 - v62[1];
                if ( v68 < 0.0 )
                  v68 = -v68;
                if ( v121 > v68 )
                  ++v64;
                v62 += 2;
                --v67;
              }
              while ( v67 );
            }
            if ( v64 <= v109 )
            {
LABEL_81:
              v66 = v132;
              v65 = v134;
            }
            else
            {
              v109 = v64;
              v134 = v65;
              v132 = *((double *)v169[0] + v63 + 1) - v65 * *((double *)v169[0] + v63);
              if ( (double)v64 > (double)v125 * 0.95 )
                break;
            }
            ++v123;
          }
          while ( v123 < 100 );
          v69 = 0;
          HIBYTE(v105) = 0;
          if ( v59 > 0 )
          {
            v70 = (double *)v169[0];
            v71 = (int *)((char *)v167[0] + 4);
            v72 = v116;
            while ( 1 )
            {
              v73 = *v70 * v65 + v66 - v70[1];
              if ( v73 < 0.0 )
                v73 = -v73;
              if ( v121 <= v73 )
                break;
              if ( !v69 )
              {
                v69 = 1;
LABEL_92:
                HIBYTE(v105) = v69;
                goto LABEL_93;
              }
              v171.m128i_i64[0] = *((unsigned long long *)v71 - 1);
              v171.m128i_i32[2] = *v71;
              v172 = (double)(*(unsigned long *)(this + 16) / *(unsigned long *)(this + 12));
              sub_421580((unsigned long *)(this + 132), &v171);
              v65 = v134;
              v66 = v132;
              v72 = v116;
              v69 = HIBYTE(v105);
LABEL_93:
              v70 += 2;
              ++v71;
              v116 = --v72;
              if ( !v72 )
                goto LABEL_94;
            }
            v69 = 0;
            goto LABEL_92;
          }
LABEL_94:
          v8 = this;
        }
        v74 = v166;
        v75 = (int *)v167[0];
        v6 = (double *)v169[0];
        v126 = 1;
        v76 = *(unsigned long *)(*(unsigned long *)(v8 + 96) + 4 * v166);
        v124 = (double *)v169[0];
        v169[1] = v169[0];
        v167[1] = v167[0];
        v130 = *(double *)(v76 + 24);
        v117 = *(unsigned long *)(v76 + 20);
        v120 = 1.0e11;
        if ( v167[0] == v111 )
        {
          if ( !(((char *)v111 - (char *)v167[0]) >> 2) )
          {
            sub_405400((int)v167, 1u);
            v75 = (int *)v167[1];
            v8 = this;
            v111 = v168;
          }
          v74 = v166;
        }
        if ( v75 )
          *v75 = v74;
        v7 = v75 + 1;
        v115 = v7;
        v167[1] = v7;
        goto LABEL_102;
      }
      if ( &v166 >= v7 || v167[0] > &v166 )
      {
        if ( v7 == v111 && !(v111 - v7) )
        {
          v39 = ((char *)v7 - (char *)v167[0]) >> 2;
          if ( v39 == 0x3FFFFFFF )
            goto LABEL_106;
          v40 = ((char *)v111 - (char *)v167[0]) >> 2;
          v41 = v39 + 1;
          if ( 0x3FFFFFFF - (v40 >> 1) >= v40 )
            v42 = (v40 >> 1) + v40;
          else
            v42 = 0;
          if ( v42 < v41 )
            v42 = v41;
          sub_405400((int)v167, v42);
          v7 = (int *)v167[1];
          v8 = this;
          v111 = v168;
        }
        if ( v7 )
        {
          v38 = v166;
          goto LABEL_34;
        }
      }
      else
      {
        v33 = ((char *)&v166 - (char *)v167[0]) >> 2;
        v107 = v33;
        if ( v7 == v111 )
        {
          if ( !(v111 - v7) )
          {
            v34 = ((char *)v7 - (char *)v167[0]) >> 2;
            if ( v34 == 0x3FFFFFFF )
              goto LABEL_106;
            v35 = ((char *)v111 - (char *)v167[0]) >> 2;
            v36 = v34 + 1;
            if ( 0x3FFFFFFF - (v35 >> 1) >= v35 )
              v37 = (v35 >> 1) + v35;
            else
              v37 = 0;
            if ( v37 < v36 )
              v37 = v36;
            sub_405400((int)v167, v37);
            v7 = (int *)v167[1];
            v8 = this;
            v111 = v168;
          }
          v33 = v107;
        }
        if ( v7 )
        {
          v38 = *((unsigned long *)v167[0] + v33);
LABEL_34:
          *v7 = v38;
        }
      }
      v43 = *(unsigned long *)(v8 + 96);
      ++v7;
      v44 = (double *)v169[0];
      v167[1] = v7;
      v115 = v7;
      v45 = *(double *)(*(unsigned long *)(v43 + 4 * v166) + 24);
      v46 = v45 - v130;
      v47 = (v130 + v45) * 0.5;
      v158[1] = v45 - v130;
      v158[0] = v47;
      if ( v158 >= v6 || v169[0] > v158 )
      {
        if ( v6 == (double *)v127 && !((v127 - (int)v6) >> 4) )
        {
          v54 = ((char *)v6 - (char *)v169[0]) >> 4;
          if ( v54 == 0xFFFFFFF )
LABEL_106:
            std::_Xlength_error("vector<T> too long");
          v55 = (signed int)(v127 - (unsigned int)v169[0]) >> 4;
          v56 = v54 + 1;
          if ( 0xFFFFFFF - (v55 >> 1) >= v55 )
            v57 = (v55 >> 1) + v55;
          else
            v57 = 0;
          if ( v57 < v56 )
            v57 = v56;
          sub_406840((unsigned long long **)v169, v57);
          v6 = (double *)v169[1];
          v46 = v45 - v130;
          v127 = v170;
        }
        if ( v6 )
        {
          *v6 = v47;
          v6[1] = v46;
        }
      }
      else
      {
        v48 = ((char *)v158 - (char *)v169[0]) >> 4;
        v108 = v48;
        if ( v6 == (double *)v127 )
        {
          if ( !((v127 - (int)v6) >> 4) )
          {
            v49 = ((char *)v6 - (char *)v169[0]) >> 4;
            if ( v49 == 0xFFFFFFF )
              goto LABEL_106;
            v50 = (signed int)(v127 - (unsigned int)v169[0]) >> 4;
            v51 = v49 + 1;
            if ( 0xFFFFFFF - (v50 >> 1) >= v50 )
              v52 = (v50 >> 1) + v50;
            else
              v52 = 0;
            if ( v52 < v51 )
              v52 = v51;
            sub_406840((unsigned long long **)v169, v52);
            v6 = (double *)v169[1];
            v46 = v45 - v130;
            v44 = (double *)v169[0];
            v127 = v170;
          }
          v48 = v108;
        }
        v53 = 2 * v48;
        if ( v6 )
        {
          *v6 = v44[v53];
          v6[1] = v44[v53 + 1];
        }
      }
      v6 += 2;
      v169[1] = v6;
      v124 = v6;
      if ( v46 < 0.0 )
        v46 = -v46;
      if ( v120 > v46 )
        v120 = v46;
      v8 = this;
      v58 = v126 + 1;
      v130 = v45;
      ++v126;
      if ( v166 == *(unsigned long *)(this + 8) - 1 )
        goto LABEL_67;
LABEL_102:
      v9 = v166 + 1;
      v10 = v157;
      v166 = v9;
      if ( v9 >= *(unsigned long *)(v8 + 8) )
      {
        v11 = v151;
        break;
      }
    }
  }
  v77 = this;
  v112 = 0;
  v118 = 0;
  v78 = *(float **)(this + 192);
  if ( *(int *)(this + 24) > 0 )
  {
    v79 = v10 * v148;
    v80 = v10 * -v148;
    v81 = v11 * v148;
    v82 = v11 * -v148;
    v133 = -v148;
    v135 = v79;
    v129 = v80;
    v131 = v81;
    v146 = v82;
    do
    {
      v137 = *v78 - *(double *)(this + 32);
      v141 = v78[1] - *(double *)(this + 40);
      v83 = sub_406A70(
              (int)v173,
              -10.0,
              0.0,
              -1.0,
              1.0e-10,
              v150 * v141 + v149 * v137 + v82,
              v81,
              v156 * v141 + v155 * v137 + v80,
              v79);
      v84 = v156;
      *(double *)(32 * (v112 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108)) = v137;
      *(double *)(32 * (v112 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 8) = v141;
      *(double *)(32 * (v112 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 16) = v133;
      v85 = v112 + *(unsigned long *)(this + 16);
      v113 = v112 + 1;
      *(double *)(32 * v85 + *(unsigned long *)(this + 108) + 24) = v83;
      v138 = v78[4] - *(double *)(this + 32);
      v142 = v78[5] - *(double *)(this + 40);
      v86 = sub_406A70(
              (int)v173,
              -10.0,
              0.0,
              -1.0,
              1.0e-10,
              v150 * v142 + v149 * v138 + v146,
              v131,
              v84 * v142 + v155 * v138 + v129,
              v135);
      v87 = v156;
      *(double *)(32 * (v113 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108)) = v138;
      *(double *)(32 * (v113 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 8) = v142;
      *(double *)(32 * (v113 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 16) = v133;
      v88 = v113 + *(unsigned long *)(this + 16);
      ++v113;
      *(double *)(32 * v88 + *(unsigned long *)(this + 108) + 24) = v86;
      v139 = v78[2] - *(double *)(this + 32);
      v143 = v78[3] - *(double *)(this + 40);
      v89 = sub_406A70(
              (int)v173,
              -10.0,
              0.0,
              -1.0,
              1.0e-10,
              v150 * v143 + v149 * v139 + v146,
              v131,
              v87 * v143 + v155 * v139 + v129,
              v135);
      v78 += 10;
      v79 = v135;
      v81 = v131;
      v80 = v129;
      *(double *)(32 * (v113 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108)) = v139;
      v82 = v146;
      *(double *)(32 * (v113 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 8) = v143;
      *(double *)(32 * (v113 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 16) = v133;
      v90 = v113 + *(unsigned long *)(this + 16);
      v112 = v113 + 1;
      *(double *)(32 * v90 + *(unsigned long *)(this + 108) + 24) = v89;
      ++v118;
    }
    while ( v118 < *(unsigned long *)(this + 24) );
  }
  v110 = *(unsigned long *)(this + 8);
  if ( v110 > 0 )
  {
    v91 = *(unsigned long **)(this + 96);
    v119 = v91;
    do
    {
      v92 = *v91;
      v93 = (*(unsigned long *)(v92 + 12) - *(unsigned long *)(v92 + 8)) / 40;
      if ( v93 > 0 )
      {
        v94 = *(unsigned long *)(v92 + 8);
        do
        {
          v94 += 40;
          v147 = *(double *)libm_sse2_sqrt_precise(v102, v103, v104, v105).m128_u64 + v147;
          --v93;
        }
        while ( v93 );
      }
      v91 = v119 + 1;
      v31 = v110-- == 1;
      ++v119;
    }
    while ( !v31 );
    v77 = this;
  }
  v95 = (double)*(int *)(v77 + 16);
  v96 = 50.0;
  v97 = v95 / (double)*(int *)(v77 + 24);
  v98 = v147 / v95;
  if ( v97 < 50.0 )
    v97 = 50.0;
  v99 = (double)*(int *)(v77 + 28);
  *(double *)(v77 + 80) = v97;
  v100 = v95 / v99;
  if ( v100 >= 50.0 )
    v96 = v100;
  v101 = v167[0];
  *(unsigned long long *)(v77 + 88) = 0x4059000000000000i64;
  *(double *)(v77 + 72) = v98 * v96;
  if ( v101 )
    operator delete(v101);
  if ( v169[0] )
    operator delete(v169[0]);
}

void  sub_41AC40( double a2, int a3, int a4, long long a5)
{
  int *v6; 
  long long v7; 
  unsigned long *v8; 
  unsigned long *v9; 
  signed int v10; 
  int v11; 
  int v12; 
  int v13; 
  double v14; 
  int v15; 
  double v16; 
  double v17; 
  double v18; 
  int v19; 
  double v20; 
  double v21; 
  int *v22; 
  double v23; 
  int v24; 
  unsigned int v25; 
  bool v26; 
  unsigned int v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int *v32; 
  unsigned int v33; 
  int v34; 
  unsigned int v35; 
  unsigned int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  signed int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int *v61; 
  int v62; 
  int v63; 
  unsigned int v64; 
  unsigned int v65; 
  int v66; 
  unsigned int v67; 
  unsigned int v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  unsigned int v73; 
  int v74; 
  int v75; 
  unsigned int v76; 
  double v77; 
  double v78; 
  double v79; 
  int v80; 
  double v81; 
  double v82; 
  int v83; 
  unsigned int v84; 
  int v85; 
  int v86; 
  double *v87; 
  int v88; 
  int v89; 
  double v90; 
  double v91; 
  int v92; 
  int v93; 
  int v94; 
  double v95; 
  double v96; 
  int v97; 
  int v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  int v104; 
  double v105; 
  double v106; 
  int v107; 
  double v108; 
  double v109; 
  void *v110; 
  unsigned int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  double v118; 
  double v119; 
  double v120; 
  double v121; 
  double v122; 
  int v123; 
  double v124; 
  double v125; 
  int v126; 
  int v127; 
  int v128; 
  double v129; 
  int v130; 
  double v131; 
  double v132; 
  int v133; 
  int v134; 
  int v135; 
  double v136; 
  int v137; 
  double v138; 
  double v139; 
  void *v140; 
  int v141; 
  unsigned int v142; 
  int v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  int v149; 
  int v150; 
  int v151; 
  double v152; 
  double v153; 
  double v154; 
  unsigned int v155; 
  unsigned int v156; 
  double v157; 
  double v158; 
  double v159; 
  double v160; 
  double v161; 
  unsigned int v162; 
  bool v163; 
  int *v164; 
  unsigned int v165; 
  int v166; 
  void **v167; 
  int v168; 
  double v169; 
  double v170; 
  double v171; 
  double v172; 
  int v173; 
  int v174; 
  int v175; 
  double v176; 
  double v177; 
  unsigned int v178; 
  unsigned int v179; 
  int v180; 
  void **v181; 
  int v182; 
  unsigned int v183; 
  unsigned int v184; 
  int v185; 
  void **v186; 
  int v187; 
  unsigned int v188; 
  unsigned int v189; 
  int v190; 
  unsigned int v191; 
  int v192; 
  void **v193; 
  int v194; 
  unsigned int v195; 
  int v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  unsigned int v201; 
  unsigned int v202; 
  int v203; 
  void **v204; 
  int v205; 
  unsigned int v206; 
  unsigned int v207; 
  int v208; 
  unsigned int v209; 
  unsigned int v210; 
  int v211; 
  void **v212; 
  int v213; 
  unsigned int v214; 
  unsigned int v215; 
  int v216; 
  unsigned int v217; 
  int v218; 
  void **v219; 
  int v220; 
  unsigned int v221; 
  int v222; 
  unsigned int v223; 
  bool v224; 
  unsigned int v225; 
  int v226; 
  void **v227; 
  int v228; 
  unsigned int v229; 
  unsigned int v230; 
  int v231; 
  int v232; 
  int v233; 
  signed int v234; 
  int v235; 
  int v236; 
  int v237; 
  int v238; 
  int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  int v250; 
  int v251; 
  int v252; 
  int v253; 
  int v254; 
  int v255; 
  unsigned int v256; 
  double v257; 
  int v258; 
  double v259; 
  unsigned int v260; 
  int v261; 
  int v262; 
  int v263; 
  int v264; 
  char v265; 
  int v266; 
  double v267; 
  int v268; 
  double v269; 
  unsigned int v270; 
  int v271; 
  double v272; 
  double v273; 
  int *v275; 
  int v276; 
  int v277; 
  double v278; 
  int v279; 
  unsigned long *v280; 
  int v281; 
  unsigned int v282; 
  int v283; 
  int v284; 
  int v285; 
  int v286; 
  int v287; 
  int v288; 
  double v289; 
  double v290; 
  int v291; 
  int v292; 
  int v293; 
  int v294; 
  int v295; 
  int v296; 
  double v297; 
  double v298; 
  int v299; 
  double v300; 
  unsigned int v301; 
  double v302; 
  double v303; 
  int v304; 
  int v305; 
  unsigned int v306; 
  double v307; 
  double v308; 
  double v309; 
  double v310; 
  double v311; 
  double v312; 
  double v313; 
  double v314; 
  double v315; 
  double v316; 
  double v317; 
  double v318; 
  double v319; 
  double v320; 
  double v321; 
  double v322; 
  double v323; 
  double v324; 
  double v325; 
  double v326; 
  double v327; 
  double v328; 
  double v329; 
  double v330; 
  double v331; 
  double v332; 
  double v333; 
  double v334; 
  double v335; 
  double v336; 
  double v337; 
  double v338; 
  double v339; 
  double v340; 
  double v341; 
  double v342; 
  double v343; 
  double v344; 
  double v345; 
  double v346; 
  double v347; 
  double v348; 
  int v349[2]; 
  long long v350; 
  int *v351; 
  unsigned long *v352; 
  signed int v353; 
  void *v354[2]; 
  void *v355; 
  void *v356[2]; 
  int v357; 
  void *v358[2]; 
  int v359; 
  void *v360[2]; 
  void *v361; 
  void *v362[2]; 
  int v363; 
  void *v364[2]; 
  int v365; 
  void *v366[2]; 
  int v367; 
  void *v368[2]; 
  int v369; 
  int v370; 
  double v371; 
  double v372; 
  double v373; 
  int v374; 
  double v375; 
  double v376; 
  double v377; 
  char v378[180]; 
  int v379; 

  v350 = a5;
  sub_406C30(*(unsigned long long *)a3, *(double *)(a3 + 8), *(double *)(a3 + 16), &v340);
  v351 = (int *)(this + 108);
  sub_4216E0((unsigned long *)(this + 108), *(unsigned long *)(this + 16));
  v260 = *(unsigned long *)(this + 16);
  v352 = (unsigned long *)(this + 120);
  sub_405750((unsigned long *)(this + 120), v260);
  v6 = (int *)(this + 156);
  v275 = v6;
  sub_417570(*v6, v6[1]);
  v7 = v350;
  v6[1] = *v6;
  sub_405EB0((int)v378, a4, a3 + 24, v7);
  v305 = 0;
  v276 = 0;
  v293 = -1;
  v354[0] = 0;
  v354[1] = 0;
  v355 = 0;
  v8 = 0;
  v379 = 1;
  v360[0] = 0;
  v360[1] = 0;
  v361 = 0;
  v9 = (unsigned long *)this;
  v10 = 0;
  v353 = 0;
  if ( *(int *)(this + 8) > 0 )
  {
    while ( 1 )
    {
      v304 = *(unsigned long *)(v9[24] + 4 * v10);
      v326 = 0.0;
      v11 = *(unsigned long *)(v304 + 12) - *(unsigned long *)(v304 + 8);
      v12 = v11 / 40;
      v299 = v11 / 40;
      if ( v11 / 40 > 0 )
      {
        v13 = 32 * v305;
        v14 = v348 * a2;
        v15 = 0;
        v285 = v11 / 40;
        v16 = v348 * -a2;
        v17 = v342 * -a2;
        v18 = v342 * a2;
        v269 = v16;
        v300 = v348 * a2;
        v278 = v17;
        v310 = v342 * a2;
        v307 = v345 * -a2;
        v334 = v345 * a2;
        do
        {
          v19 = *(unsigned long *)(v304 + 8);
          v321 = *(double *)(v15 + v19 + 8) - *(double *)(this + 32);
          v328 = *(double *)(v15 + v19 + 16) - *(double *)(this + 40);
          v331 = v321 * v340 + v341 * v328 + v17;
          v20 = sub_406A70((int)v378, -10.0, 0.0, -1.0, 1.0e-10, v331, v18, v321 * v346 + v347 * v328 + v16, v14);
          v21 = v321 * v343;
          v16 = v269;
          v14 = v300;
          *(double *)(v15 + *(unsigned long *)(v304 + 8) + 24) = v331 * v20 - v310;
          *(double *)(v15 + *(unsigned long *)(v304 + 8) + 32) = (v21 + v344 * v328 + v307) * v20 - v334;
          v22 = v351;
          v23 = *(double *)(v15 + *(unsigned long *)(v304 + 8) + 32);
          v15 += 40;
          *(double *)(v13 + *v351) = v321;
          v326 = v23 + v326;
          *(double *)(*v22 + v13 + 8) = v328;
          v18 = v310;
          *(double *)(*v22 + v13 + 16) = -a2;
          v24 = *v22;
          v25 = v353;
          *(double *)(v24 + v13 + 24) = v20;
          v13 += 32;
          *(unsigned long *)(*v352 + 4 * v305) = v25;
          v26 = v285-- == 1;
          ++v305;
          v17 = v278;
        }
        while ( !v26 );
        v12 = v299;
      }
      sub_417C60(
        *(int **)(v304 + 8),
        (int *)(40 * v12 + *(unsigned long *)(v304 + 8)),
        40 * v12 / 40,
        (unsigned char ( *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))sub_4172C0);
      *(unsigned long long *)v304 = libm_sse2_sqrt_precise(v261, v262, v263, v264).m128_u64[0];
      v27 = v353;
      *(double *)(a3 + 8 * (v353 + *(unsigned long *)(this + 204))) = v326 / *(double *)(this + 56) / (double)v299;
      if ( v293 == *(unsigned long *)(v304 + 20) )
        break;
      v38 = v276;
LABEL_73:
      if ( !v27 )
        goto LABEL_395;
      while ( 1 )
      {
        if ( v38 < 4 )
          goto LABEL_395;
        v69 = 0.0;
        v308 = 1.0e11;
        v70 = 0.0;
        v71 = 0.0;
        v287 = 2;
        v72 = 0.0;
        v282 = 0;
        v364[0] = 0;
        v364[1] = 0;
        v365 = 0;
        v362[0] = 0;
        v362[1] = 0;
        v363 = 0;
        v73 = 0;
        v74 = (v354[1] - v354[0]) >> 2;
        if ( v74 )
        {
          do
          {
            v75 = *((unsigned long *)v354[0] + v73++);
            v72 = v72 + *(double *)*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * v75);
          }
          while ( v73 < v74 );
        }
        v76 = 0;
        v77 = v72 / ((double)v74 + qword_439340[(unsigned int)(v354[1] - v354[0]) >> 31]);
        if ( v74 )
        {
          v78 = v77 * 0.8;
          v316 = v78;
          do
          {
            if ( v78 > *(double *)*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v354[0] + v76)) )
            {
              memmove(
                (char *)v354[0] + 4 * v76,
                (char *)v354[0] + 4 * v76 + 4,
                ((char *)v354[1] - ((char *)v354[0] + 4 * v76 + 4)) & 0xFFFFFFFC);
              v354[1] = (char *)v354[1] - 4;
              v78 = v316;
              --v76;
            }
            ++v76;
          }
          while ( v76 < (v354[1] - v354[0]) >> 2 );
          v70 = 0.0;
          v69 = 0.0;
          v71 = 0.0;
        }
        v38 = (v354[1] - v354[0]) >> 2;
        v277 = v38;
        if ( v38 >= 4 )
          break;
        if ( v362[0] )
        {
          operator delete(v362[0]);
          v362[0] = 0;
          v362[1] = 0;
          v363 = 0;
        }
        LOBYTE(v379) = 1;
        if ( v364[0] )
        {
          operator delete(v364[0]);
          v364[0] = 0;
          v364[1] = 0;
          v365 = 0;
        }
      }
      v79 = 0.0;
      v80 = (v354[1] - v354[0]) >> 2;
      v332 = 0.0;
      v329 = 0.0;
      v270 = v80;
      v81 = (double)*(int *)(this + 52);
      v82 = (double)*(int *)(this + 48);
      v317 = v81;
      v322 = v82;
      if ( v80 )
      {
        v83 = *(unsigned long *)(this + 96);
        v84 = 0;
        do
        {
          v85 = *(unsigned long *)(v83 + 4 * *((unsigned long *)v354[0] + v84));
          v294 = v85;
          if ( (*(unsigned long *)(v85 + 12) - *(unsigned long *)(v85 + 8)) / 40 > 0 )
          {
            v86 = *(unsigned long *)(v85 + 8);
            v87 = (double *)(v86 + 8);
            v295 = (*(unsigned long *)(v294 + 12) - *(unsigned long *)(v294 + 8)) / 40;
            v88 = 0;
            v89 = 0;
            do
            {
              v90 = *(double *)(v88 + v86 + 8);
              ++v282;
              v70 = v70 + *(double *)(v88 + v86 + 16);
              v71 = v71 + v90;
              if ( v82 > v90 )
                v82 = *v87;
              if ( v90 > v69 )
                v69 = *(double *)(v88 + v86 + 8);
              v91 = *(double *)(v88 + v86 + 16);
              if ( v81 > v91 )
                v81 = *(double *)(v88 + v86 + 16);
              if ( v91 > v79 )
                v79 = *(double *)(v88 + v86 + 16);
              ++v89;
              v88 += 40;
              v87 += 5;
            }
            while ( v89 < v295 );
            v322 = v82;
            v317 = v81;
            v329 = v69;
            v332 = v79;
          }
          v80 = v270;
          ++v84;
          v83 = *(unsigned long *)(this + 96);
        }
        while ( v84 < v270 );
        v38 = v277;
      }
      v92 = _mm_cvtsi32_si128(v282);
      v265 = 0;
      v283 = 0;
      *(double *)v92.m128i_i64 = _mm_cvtepi32_pd(v92).m128d_f64[0];
      v335 = v70 / *(double *)v92.m128i_i64;
      v327 = v71 / *(double *)v92.m128i_i64;
      if ( (v80 & 0xFFFFFFF) != 0 )
      {
        while ( 1 )
        {
          v266 = rand() % v38;
          v271 = rand() % v38;
          if ( v266 != v271 )
            break;
LABEL_129:
          if ( ++v283 >= (unsigned int)(16 * ((v354[1] - v354[0]) >> 2)) )
            goto LABEL_133;
        }
        v368[0] = 0;
        v368[1] = 0;
        v369 = 0;
        LOBYTE(v379) = 4;
        v93 = *(unsigned long *)(this + 96);
        v94 = *(unsigned long *)(*(unsigned long *)(v93 + 4 * *((unsigned long *)v354[0] + v266)) + 8);
        v95 = *(double *)(v94 + 8);
        v96 = *(double *)(v94 + 16);
        v97 = 0;
        v98 = *(unsigned long *)(*(unsigned long *)(v93 + 4 * *((unsigned long *)v354[0] + v271)) + 8);
        v99 = v95 - *(double *)(v98 + 8);
        v100 = v96 - *(double *)(v98 + 16);
        v267 = v99 / v100;
        v101 = v95 - v96 * (v99 / v100);
        v102 = v99 / v100;
        v272 = v101;
        if ( v99 / v100 <= 1.0 )
        {
          v265 = 0;
          v103 = 0.0;
          if ( v38 > 0 )
          {
            do
            {
              v107 = *(unsigned long *)(*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v354[0] + v97)) + 8);
              v108 = *(double *)(v107 + 16) * v102 + v272 - *(double *)(v107 + 8);
              v109 = v108;
              if ( v108 < 0.0 )
                v109 = -v108;
              v103 = v103 + v109;
              if ( (double)*((int *)v360[0] + 2 * v97 + 1) * 0.5 > v108 * v108 )
                sub_4214D0(v368, (const int *)v107);
              v102 = v99 / v100;
              ++v97;
            }
            while ( v97 < v38 );
LABEL_120:
            v101 = v272;
            v102 = v267;
          }
        }
        else
        {
          v265 = 1;
          v102 = v100 / v99;
          v267 = v100 / v99;
          v101 = v96 - v95 * (v100 / v99);
          v103 = 0.0;
          v272 = v101;
          if ( v38 > 0 )
          {
            do
            {
              v104 = *(unsigned long *)(*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v354[0] + v97)) + 8);
              v105 = *(double *)(v104 + 8) * v102 + v272 - *(double *)(v104 + 16);
              v106 = v105;
              if ( v105 < 0.0 )
                v106 = -v105;
              v103 = v103 + v106;
              if ( (double)*((int *)v360[0] + 2 * v97 + 1) * 0.5 > v105 * v105 )
                sub_4214D0(v368, (const int *)v104);
              v102 = v100 / v99;
              ++v97;
            }
            while ( v97 < v38 );
            goto LABEL_120;
          }
        }
        v110 = v368[0];
        v111 = (v368[1] - v368[0]) / 40;
        if ( v111 >= v287 )
        {
          if ( v287 != v111 )
          {
            v287 = (v368[1] - v368[0]) / 40;
            goto LABEL_125;
          }
          if ( v308 > v103 )
          {
LABEL_125:
            v364[1] = v364[0];
            v308 = v103;
            v338 = v101;
            v339 = v102;
            sub_404AC0((int)v364, (const int **)v368);
            v110 = v368[0];
          }
          if ( (double)v287 > (double)v305 * 0.95 )
          {
            if ( v110 )
            {
              operator delete(v110);
              v368[0] = 0;
              v368[1] = 0;
              v369 = 0;
            }
            goto LABEL_133;
          }
        }
        if ( v110 )
        {
          operator delete(v110);
          v368[0] = 0;
          v368[1] = 0;
          v369 = 0;
        }
        goto LABEL_129;
      }
LABEL_133:
      v311 = 1.0e11;
      v301 = 2;
      v296 = 0;
      if ( (((v354[1] - v354[0]) >> 2) & 0xFFFFFFF) == 0 )
        goto LABEL_165;
      while ( 1 )
      {
        v112 = rand() % v38;
        v268 = rand() % v38;
        if ( v112 != v268 )
          break;
LABEL_161:
        if ( ++v296 >= (unsigned int)(16 * ((v354[1] - v354[0]) >> 2)) )
          goto LABEL_165;
      }
      v366[0] = 0;
      v366[1] = 0;
      v367 = 0;
      LOBYTE(v379) = 5;
      v113 = *(unsigned long *)(this + 96);
      v114 = *(unsigned long *)(v113 + 4 * *((unsigned long *)v354[0] + v112));
      v288 = 5 * ((*(unsigned long *)(v114 + 12) - *(unsigned long *)(v114 + 8)) / 40);
      v284 = *(unsigned long *)(v114 + 8);
      v115 = *(unsigned long *)(v113 + 4 * *((unsigned long *)v354[0] + v268));
      v116 = *(unsigned long *)(v115 + 12) - *(unsigned long *)(v115 + 8);
      v117 = *(unsigned long *)(v115 + 8);
      if ( v265 )
      {
        v118 = *(double *)(v284 + 8 * v288 - 24);
        v119 = *(double *)(v284 + 8 * v288 - 32);
        v120 = v118 - *(double *)(v117 + 40 * (v116 / 40) - 24);
        v121 = v119 - *(double *)(v117 + 40 * (v116 / 40) - 32);
      }
      else
      {
        v118 = *(double *)(v284 + 8 * v288 - 32);
        v119 = *(double *)(v284 + 8 * v288 - 24);
        v120 = v118 - *(double *)(v117 + 40 * (v116 / 40) - 32);
        v121 = v119 - *(double *)(v117 + 40 * (v116 / 40) - 24);
      }
      v122 = v120 / v121;
      v123 = 0;
      v124 = 0.0;
      v309 = v122;
      v125 = v118 - v119 * v122;
      v273 = v125;
      if ( v265 )
      {
        if ( v277 > 0 )
        {
          do
          {
            v126 = *(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v354[0] + v123));
            v127 = *(unsigned long *)(v126 + 8);
            v128 = 5 * ((*(unsigned long *)(v126 + 12) - v127) / 40) - 5;
            v129 = *(double *)(v127 + 8 * v128 + 8);
            v130 = v127 + 8 * v128;
            v131 = v129 * v122 + v125 - *(double *)(v130 + 16);
            v132 = v131;
            if ( v131 < 0.0 )
              v132 = -v131;
            v124 = v124 + v132;
            if ( (double)*((int *)v360[0] + 2 * v123 + 1) * 0.5 > v131 * v131 )
            {
              sub_4214D0(v366, (const int *)v130);
              v122 = v309;
              v125 = v273;
            }
            ++v123;
          }
          while ( v123 < v277 );
        }
      }
      else if ( v277 > 0 )
      {
        do
        {
          v133 = *(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v354[0] + v123));
          v134 = *(unsigned long *)(v133 + 8);
          v135 = 5 * ((*(unsigned long *)(v133 + 12) - v134) / 40) - 5;
          v136 = *(double *)(v134 + 8 * v135 + 16);
          v137 = v134 + 8 * v135;
          v138 = v136 * v122 + v125 - *(double *)(v137 + 8);
          v139 = v138;
          if ( v138 < 0.0 )
            v139 = -v138;
          v124 = v124 + v139;
          if ( (double)*((int *)v360[0] + 2 * v123 + 1) * 0.5 > v138 * v138 )
          {
            sub_4214D0(v366, (const int *)v137);
            v122 = v309;
            v125 = v273;
          }
          ++v123;
        }
        while ( v123 < v277 );
      }
      v140 = v366[0];
      v141 = v301;
      v142 = (v366[1] - v366[0]) / 40;
      if ( v142 < v301 )
      {
LABEL_158:
        if ( v140 )
        {
          operator delete(v140);
          v366[0] = 0;
          v366[1] = 0;
          v367 = 0;
        }
        v38 = v277;
        goto LABEL_161;
      }
      if ( v301 == v142 )
      {
        if ( v311 <= v124 )
          goto LABEL_157;
      }
      else
      {
        v141 = (v366[1] - v366[0]) / 40;
        v301 = v141;
      }
      v362[1] = v362[0];
      v336 = v125;
      v311 = v124;
      v337 = v122;
      sub_404AC0((int)v362, (const int **)v366);
      v140 = v366[0];
LABEL_157:
      if ( (double)v141 <= (double)v305 * 0.95 )
        goto LABEL_158;
      if ( v140 )
      {
        operator delete(v140);
        v366[0] = 0;
        v366[1] = 0;
        v367 = 0;
      }
LABEL_165:
      v358[0] = 0;
      v358[1] = 0;
      v359 = 0;
      v356[0] = 0;
      v356[1] = 0;
      v357 = 0;
      v143 = this;
      LOBYTE(v379) = 7;
      if ( !v265 )
      {
        v152 = v335;
        v169 = (double)*(int *)(this + 52);
        v170 = v335 - (v332 - v317);
        if ( v170 <= v169 * 0.1 )
          v170 = v169 * 0.1;
        v171 = v169 * 0.9;
        v172 = v332 - v317 + v335;
        v173 = (int)v170;
        if ( v171 <= v172 )
          v172 = v171;
        v174 = (int)v172;
        v175 = (int)v170;
        if ( v173 < (int)v172 )
        {
          while ( 1 )
          {
            v371 = (double)v175;
            v375 = (double)v175;
            *(double *)&v370.m128i_i64[1] = (double)v175 * v339 + v338;
            *(double *)&v374.m128i_i64[1] = (double)v175 * v337 + v336;
            if ( v175 == v173 || v175 == v174 - 1 )
            {
              v303 = v348 * a2;
              v298 = (double)v175 * v339 + v338 - *(double *)(v143 + 32);
              v330 = (double)v175 - *(double *)(v143 + 40);
              v320 = v342 * a2;
              v324 = v341 * v330 + v340 * v298 + v342 * -a2;
              v314 = sub_406A70(
                       (int)v378,
                       -10.0,
                       0.0,
                       -1.0,
                       1.0e-10,
                       v324,
                       v342 * a2,
                       v347 * v330 + v346 * v298 + v348 * -a2,
                       v348 * a2);
              v176 = (double)v175 - *(double *)(this + 40);
              v290 = v345 * a2;
              v372 = v314 * v324 - v320;
              v177 = (double)v175 * v337 + v336 - *(double *)(this + 32);
              v373 = (v344 * v330 + v343 * v298 + v345 * -a2) * v314 - v345 * a2;
              v325 = v341 * v176 + v340 * v177 + v342 * -a2;
              v315 = sub_406A70(
                       (int)v378,
                       -10.0,
                       0.0,
                       -1.0,
                       1.0e-10,
                       v325,
                       v320,
                       v347 * v176 + v346 * v177 + v348 * -a2,
                       v303);
              v376 = v315 * v325 - v320;
              v377 = (v344 * v176 + v343 * v177 + v345 * -a2) * v315 - v290;
            }
            sub_4214D0(v358, &v370);
            sub_4214D0(v356, &v374);
            v173 = (int)v170;
            v175 += 2;
            if ( v175 >= v174 )
              break;
            v143 = this;
          }
LABEL_177:
          v152 = v335;
        }
        v144 = v327;
        goto LABEL_179;
      }
      v144 = v327;
      v145 = (double)*(int *)(this + 48);
      v146 = v327 - (v329 - v322);
      if ( v146 <= v145 * 0.1 )
        v146 = v145 * 0.1;
      v147 = v145 * 0.9;
      v148 = v329 - v322 + v327;
      v149 = (int)v146;
      if ( v147 <= v148 )
        v148 = v147;
      v150 = (int)v148;
      v151 = (int)v146;
      if ( v149 < (int)v148 )
      {
        while ( 1 )
        {
          *(double *)&v374.m128i_i64[1] = (double)v151;
          *(double *)&v370.m128i_i64[1] = (double)v151;
          v375 = (double)v151 * v339 + v338;
          v371 = (double)v151 * v337 + v336;
          if ( v151 == v149 || v151 == v150 - 1 )
          {
            v302 = v348 * a2;
            v297 = (double)v151 - *(double *)(v143 + 32);
            v333 = (double)v151 * v339 + v338 - *(double *)(v143 + 40);
            v323 = v342 * a2;
            v318 = v341 * v333 + v340 * v297 + v342 * -a2;
            v312 = sub_406A70(
                     (int)v378,
                     -10.0,
                     0.0,
                     -1.0,
                     1.0e-10,
                     v318,
                     v342 * a2,
                     v347 * v333 + v346 * v297 + v348 * -a2,
                     v348 * a2);
            v153 = (double)v151 - *(double *)(this + 32);
            v289 = v345 * a2;
            v376 = v312 * v318 - v323;
            v154 = (double)v151 * v337 + v336 - *(double *)(this + 40);
            v377 = (v344 * v333 + v343 * v297 + v345 * -a2) * v312 - v345 * a2;
            v319 = v341 * v154 + v340 * v153 + v342 * -a2;
            v313 = sub_406A70(
                     (int)v378,
                     -10.0,
                     0.0,
                     -1.0,
                     1.0e-10,
                     v319,
                     v323,
                     v347 * v154 + v346 * v153 + v348 * -a2,
                     v302);
            v372 = v313 * v319 - v323;
            v373 = (v344 * v154 + v343 * v153 + v345 * -a2) * v313 - v289;
          }
          sub_4214D0(v358, &v374);
          sub_4214D0(v356, &v370);
          v149 = (int)v146;
          v151 += 2;
          if ( v151 >= v150 )
            break;
          v143 = this;
        }
        goto LABEL_177;
      }
      v152 = v335;
LABEL_179:
      v155 = (v354[1] - v354[0]) >> 2;
      v156 = (v364[1] - v364[0]) / 40;
      if ( v156 <= v155 / 3 || (v362[1] - v362[0]) / 40 <= v155 / 3 )
      {
        v223 = 3 * v155 / 5;
        if ( v223 < 4 )
          v223 = 4;
        v224 = v156 <= v223;
        v164 = v275;
        if ( !v224 )
        {
          v225 = v275[1];
          if ( (unsigned int)v358 >= v225 || *v275 > (unsigned int)v358 )
          {
            if ( v225 == v275[2] )
              sub_4213C0(v275, 1u);
            v228 = v275[1];
            LOBYTE(v379) = 33;
            if ( v228 )
            {
              v227 = v358;
              goto LABEL_369;
            }
          }
          else
          {
            v226 = ((int)v358 - *v275) / 12;
            if ( v275[1] == v275[2] )
              sub_4213C0(v275, 1u);
            v227 = (void **)(*v275 + 12 * v226);
            v228 = v275[1];
            LOBYTE(v379) = 32;
            if ( v228 )
LABEL_369:
              sub_404A00(v228, (const int **)v227);
          }
          v275[1] += 12;
          LOBYTE(v379) = 7;
        }
        v229 = 3 * ((v354[1] - v354[0]) >> 2) / 5u;
        if ( v229 < 4 )
          v229 = 4;
        if ( (v362[1] - v362[0]) / 40 <= v229 )
          goto LABEL_387;
        v230 = v275[1];
        if ( (unsigned int)v356 < v230 && *v275 <= (unsigned int)v356 )
        {
          v231 = ((int)v356 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v181 = (void **)(*v275 + 12 * v231);
          v182 = v275[1];
          LOBYTE(v379) = 34;
          if ( !v182 )
            goto LABEL_386;
LABEL_385:
          sub_404A00(v182, (const int **)v181);
          goto LABEL_386;
        }
        if ( v230 == v275[2] )
          sub_4213C0(v275, 1u);
        v182 = v275[1];
        LOBYTE(v379) = 35;
LABEL_383:
        if ( v182 )
        {
          v181 = v356;
          goto LABEL_385;
        }
        goto LABEL_386;
      }
      v157 = v339 - v337;
      if ( !v265 )
      {
        v197 = v339 - v337;
        if ( v157 < 0.0 )
          v197 = -v157;
        if ( v197 > 0.00001 )
        {
          v198 = (v336 - v338) / v157;
          v199 = (double)*(int *)(this + 52);
          if ( v152 - v199 <= v198 && v198 <= v199 + v152 )
          {
            v200 = v199 * 0.5;
            if ( v152 - v200 <= v198 && v198 <= v152 + v200 )
              goto LABEL_387;
            v201 = 4 * v155 / 5;
            if ( v201 < 4 )
              v201 = 4;
            v163 = v156 < v201;
            v164 = v275;
            if ( !v163 )
            {
              v202 = v275[1];
              if ( (unsigned int)v358 >= v202 || *v275 > (unsigned int)v358 )
              {
                if ( v202 == v275[2] )
                  sub_4213C0(v275, 1u);
                v205 = v275[1];
                LOBYTE(v379) = 25;
                if ( v205 )
                {
                  v204 = v358;
                  goto LABEL_295;
                }
              }
              else
              {
                v203 = ((int)v358 - *v275) / 12;
                if ( v275[1] == v275[2] )
                  sub_4213C0(v275, 1u);
                v204 = (void **)(*v275 + 12 * v203);
                v205 = v275[1];
                LOBYTE(v379) = 24;
                if ( v205 )
LABEL_295:
                  sub_404A00(v205, (const int **)v204);
              }
              v275[1] += 12;
              LOBYTE(v379) = 7;
            }
            v206 = ((v354[1] - v354[0]) & 0xFFFFFFFC) / 5;
            if ( v206 < 4 )
              v206 = 4;
            if ( (v362[1] - v362[0]) / 40 < v206 )
              goto LABEL_387;
            v207 = v275[1];
            if ( (unsigned int)v356 < v207 && *v275 <= (unsigned int)v356 )
            {
              v208 = ((int)v356 - *v275) / 12;
              if ( v275[1] == v275[2] )
                sub_4213C0(v275, 1u);
              v181 = (void **)(*v275 + 12 * v208);
              v182 = v275[1];
              LOBYTE(v379) = 26;
              if ( !v182 )
                goto LABEL_386;
              goto LABEL_385;
            }
            if ( v207 == v275[2] )
              sub_4213C0(v275, 1u);
            v182 = v275[1];
            LOBYTE(v379) = 27;
            goto LABEL_383;
          }
          v209 = v155 >> 1;
          if ( v209 < 4 )
            v209 = 4;
          v163 = v156 < v209;
          v164 = v275;
          if ( !v163 )
          {
            v210 = v275[1];
            if ( (unsigned int)v358 >= v210 || *v275 > (unsigned int)v358 )
            {
              if ( v210 == v275[2] )
                sub_4213C0(v275, 1u);
              v213 = v275[1];
              LOBYTE(v379) = 21;
              if ( v213 )
              {
                v212 = v358;
                goto LABEL_322;
              }
            }
            else
            {
              v211 = ((int)v358 - *v275) / 12;
              if ( v275[1] == v275[2] )
                sub_4213C0(v275, 1u);
              v212 = (void **)(*v275 + 12 * v211);
              v213 = v275[1];
              LOBYTE(v379) = 20;
              if ( v213 )
LABEL_322:
                sub_404A00(v213, (const int **)v212);
            }
            v275[1] += 12;
            LOBYTE(v379) = 7;
          }
          v214 = (unsigned int)((v354[1] - v354[0]) >> 2) >> 1;
          if ( v214 < 4 )
            v214 = 4;
          if ( (v362[1] - v362[0]) / 40 < v214 )
            goto LABEL_387;
          v215 = v275[1];
          if ( (unsigned int)v356 < v215 && *v275 <= (unsigned int)v356 )
          {
            v216 = ((int)v356 - *v275) / 12;
            if ( v275[1] == v275[2] )
              sub_4213C0(v275, 1u);
            v181 = (void **)(*v275 + 12 * v216);
            v182 = v275[1];
            LOBYTE(v379) = 22;
            if ( !v182 )
              goto LABEL_386;
            goto LABEL_385;
          }
          if ( v215 == v275[2] )
            sub_4213C0(v275, 1u);
          v182 = v275[1];
          LOBYTE(v379) = 23;
          goto LABEL_383;
        }
        v164 = v275;
        v217 = v275[1];
        if ( (unsigned int)v358 >= v217 || *v275 > (unsigned int)v358 )
        {
          if ( v217 == v275[2] )
            sub_4213C0(v275, 1u);
          v220 = v275[1];
          LOBYTE(v379) = 29;
          if ( v220 )
          {
            v219 = v358;
            goto LABEL_346;
          }
        }
        else
        {
          v218 = ((int)v358 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v219 = (void **)(*v275 + 12 * v218);
          v220 = v275[1];
          LOBYTE(v379) = 28;
          if ( v220 )
LABEL_346:
            sub_404A00(v220, (const int **)v219);
        }
        v275[1] += 12;
        v221 = v275[1];
        LOBYTE(v379) = 7;
        if ( (unsigned int)v356 < v221 && *v275 <= (unsigned int)v356 )
        {
          v222 = ((int)v356 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v181 = (void **)(*v275 + 12 * v222);
          v182 = v275[1];
          LOBYTE(v379) = 30;
          if ( !v182 )
            goto LABEL_386;
          goto LABEL_385;
        }
        if ( v221 == v275[2] )
          sub_4213C0(v275, 1u);
        v182 = v275[1];
        LOBYTE(v379) = 31;
        goto LABEL_383;
      }
      v158 = v339 - v337;
      if ( v157 < 0.0 )
        v158 = -v157;
      if ( v158 <= 0.00001 )
      {
        v164 = v275;
        v191 = v275[1];
        if ( (unsigned int)v358 >= v191 || *v275 > (unsigned int)v358 )
        {
          if ( v191 == v275[2] )
            sub_4213C0(v275, 1u);
          v194 = v275[1];
          LOBYTE(v379) = 17;
          if ( v194 )
          {
            v193 = v358;
            goto LABEL_265;
          }
        }
        else
        {
          v192 = ((int)v358 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v193 = (void **)(*v275 + 12 * v192);
          v194 = v275[1];
          LOBYTE(v379) = 16;
          if ( v194 )
LABEL_265:
            sub_404A00(v194, (const int **)v193);
        }
        v275[1] += 12;
        v195 = v275[1];
        LOBYTE(v379) = 7;
        if ( (unsigned int)v356 < v195 && *v275 <= (unsigned int)v356 )
        {
          v196 = ((int)v356 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v181 = (void **)(*v275 + 12 * v196);
          v182 = v275[1];
          LOBYTE(v379) = 18;
          if ( !v182 )
            goto LABEL_386;
          goto LABEL_385;
        }
        if ( v195 == v275[2] )
          sub_4213C0(v275, 1u);
        v182 = v275[1];
        LOBYTE(v379) = 19;
        goto LABEL_383;
      }
      v159 = (v336 - v338) / v157;
      v160 = (double)*(int *)(this + 48);
      if ( v144 - v160 > v159 || v159 > v160 + v144 )
      {
        v183 = v155 >> 1;
        if ( v183 < 4 )
          v183 = 4;
        v163 = v156 < v183;
        v164 = v275;
        if ( !v163 )
        {
          v184 = v275[1];
          if ( (unsigned int)v358 >= v184 || *v275 > (unsigned int)v358 )
          {
            if ( v184 == v275[2] )
              sub_4213C0(v275, 1u);
            v187 = v275[1];
            LOBYTE(v379) = 9;
            if ( v187 )
            {
              v186 = v358;
              goto LABEL_241;
            }
          }
          else
          {
            v185 = ((int)v358 - *v275) / 12;
            if ( v275[1] == v275[2] )
              sub_4213C0(v275, 1u);
            v186 = (void **)(*v275 + 12 * v185);
            v187 = v275[1];
            LOBYTE(v379) = 8;
            if ( v187 )
LABEL_241:
              sub_404A00(v187, (const int **)v186);
          }
          v275[1] += 12;
          LOBYTE(v379) = 7;
        }
        v188 = (unsigned int)((v354[1] - v354[0]) >> 2) >> 1;
        if ( v188 < 4 )
          v188 = 4;
        if ( (v362[1] - v362[0]) / 40 < v188 )
          goto LABEL_387;
        v189 = v275[1];
        if ( (unsigned int)v356 < v189 && *v275 <= (unsigned int)v356 )
        {
          v190 = ((int)v356 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v181 = (void **)(*v275 + 12 * v190);
          v182 = v275[1];
          LOBYTE(v379) = 10;
          if ( !v182 )
            goto LABEL_386;
          goto LABEL_385;
        }
        if ( v189 == v275[2] )
          sub_4213C0(v275, 1u);
        v182 = v275[1];
        LOBYTE(v379) = 11;
        goto LABEL_383;
      }
      v161 = v160 * 0.5;
      if ( v144 - v161 <= v159 && v159 <= v161 + v144 )
        goto LABEL_387;
      v162 = 4 * v155 / 5;
      if ( v162 < 4 )
        v162 = 4;
      v163 = v156 < v162;
      v164 = v275;
      if ( !v163 )
      {
        v165 = v275[1];
        if ( (unsigned int)v358 >= v165 || *v275 > (unsigned int)v358 )
        {
          if ( v165 == v275[2] )
            sub_4213C0(v275, 1u);
          v168 = v275[1];
          LOBYTE(v379) = 13;
          if ( v168 )
          {
            v167 = v358;
            goto LABEL_214;
          }
        }
        else
        {
          v166 = ((int)v358 - *v275) / 12;
          if ( v275[1] == v275[2] )
            sub_4213C0(v275, 1u);
          v167 = (void **)(*v275 + 12 * v166);
          v168 = v275[1];
          LOBYTE(v379) = 12;
          if ( v168 )
LABEL_214:
            sub_404A00(v168, (const int **)v167);
        }
        v275[1] += 12;
        LOBYTE(v379) = 7;
      }
      v178 = ((v354[1] - v354[0]) & 0xFFFFFFFC) / 5;
      if ( v178 < 4 )
        v178 = 4;
      if ( (v362[1] - v362[0]) / 40 < v178 )
        goto LABEL_387;
      v179 = v275[1];
      if ( (unsigned int)v356 >= v179 || *v275 > (unsigned int)v356 )
      {
        if ( v179 == v275[2] )
          sub_4213C0(v275, 1u);
        v182 = v275[1];
        LOBYTE(v379) = 15;
        goto LABEL_383;
      }
      v180 = ((int)v356 - *v275) / 12;
      if ( v275[1] == v275[2] )
        sub_4213C0(v275, 1u);
      v181 = (void **)(*v275 + 12 * v180);
      v182 = v275[1];
      LOBYTE(v379) = 14;
      if ( v182 )
        goto LABEL_385;
LABEL_386:
      v164[1] += 12;
LABEL_387:
      LOBYTE(v379) = 6;
      if ( v356[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v356);
        operator delete(v356[0]);
        v356[0] = 0;
        v356[1] = 0;
        v357 = 0;
      }
      LOBYTE(v379) = 3;
      if ( v358[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v358);
        operator delete(v358[0]);
        v358[0] = 0;
        v358[1] = 0;
        v359 = 0;
      }
      LOBYTE(v379) = 2;
      if ( v362[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v362);
        operator delete(v362[0]);
        v362[0] = 0;
        v362[1] = 0;
        v363 = 0;
      }
      LOBYTE(v379) = 1;
      if ( v364[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v364);
        operator delete(v364[0]);
        v364[0] = 0;
        v364[1] = 0;
        v365 = 0;
      }
LABEL_395:
      v293 = *(unsigned long *)(v304 + 20);
      std::_Container_base0::_Orphan_all((std::_Container_base0 *)v360);
      v360[1] = v360[0];
      std::_Container_base0::_Orphan_all((std::_Container_base0 *)v354);
      v354[1] = v354[0];
      sub_421460(v354, (unsigned int *)&v353);
      v232 = v299;
      v233 = 0;
      v276 = 1;
      v234 = 0;
      v291 = 0;
      if ( v299 <= 0 )
      {
        v250 = 0;
      }
      else
      {
        if ( (unsigned int)v299 >= 8 && dword_5019B4 >= 2 )
        {
          v235 = *(unsigned long *)(v304 + 8);
          v236 = 0i64;
          v237 = 0i64;
          v238 = 0i64;
          v239 = 0i64;
          v240 = 80;
          do
          {
            v241 = _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 + 40));
            v240 += 320;
            v234 += 8;
            v242 = _mm_unpacklo_epi32(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 400)),
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 320))),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 360)), v241));
            v237 = _mm_add_epi32(v237, v242);
            v236 = _mm_max_epi32(v236, v242);
            v243 = _mm_unpacklo_epi32(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 240)),
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 160))),
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 200)),
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v235 - 120))));
            v239 = _mm_add_epi32(v239, v243);
            v238 = _mm_max_epi32(v238, v243);
          }
          while ( v234 < (int)(v299 - (v299 & 0x80000007)) );
          v244 = _mm_add_epi32(v239, v237);
          v245 = _mm_add_epi32(v244, _mm_srli_si128(v244, 8));
          v246 = _mm_max_epi32(v236, v238);
          v291 = _mm_cvtsi128_si32(_mm_add_epi32(v245, _mm_srli_si128(v245, 4)));
          v247 = _mm_max_epi32(v246, _mm_srli_si128(v246, 8));
          v233 = _mm_cvtsi128_si32(_mm_max_epi32(v247, _mm_srli_si128(v247, 4)));
        }
        if ( v234 >= v299 )
        {
          v250 = v291;
        }
        else
        {
          v248 = 40 * v234;
          v249 = v299 - v234;
          v250 = v291;
          v251 = *(unsigned long *)(v304 + 8);
          do
          {
            v252 = *(unsigned long *)(v248 + v251);
            v248 += 40;
            v250 += v252;
            if ( v233 < v252 )
              v233 = v252;
            v251 = *(unsigned long *)(v304 + 8);
            --v249;
          }
          while ( v249 );
          v232 = v299;
        }
      }
      LODWORD(v350) = v233;
      HIDWORD(v350) = (v250 + v232 / 2) / v232;
      sub_4056D0((unsigned int *)v360, &v350);
      v8 = v360[0];
      v27 = v353;
      v9 = (unsigned long *)this;
LABEL_410:
      v10 = v27 + 1;
      v353 = v10;
      if ( v10 >= v9[2] )
      {
        v6 = v275;
        goto LABEL_412;
      }
    }
    if ( &v353 >= v354[1] || v354[0] > &v353 )
    {
      if ( v354[1] == v355 && !((signed int)((int)v355 - (unsigned int)v354[1]) >> 2) )
      {
        v34 = (v354[1] - v354[0]) >> 2;
        if ( v34 == 0x3FFFFFFF )
          goto LABEL_423;
        v35 = (signed int)((int)v355 - (unsigned int)v354[0]) >> 2;
        if ( 0x3FFFFFFF - (v35 >> 1) >= v35 )
          v36 = (v35 >> 1) + v35;
        else
          v36 = 0;
        if ( v36 < v34 + 1 )
          v36 = v34 + 1;
        sub_405400((int)v354, v36);
      }
      v32 = (unsigned int *)v354[1];
      if ( !v354[1] )
        goto LABEL_32;
      v33 = v353;
    }
    else
    {
      v28 = ((char *)&v353 - (char *)v354[0]) >> 2;
      if ( v354[1] == v355 && !((signed int)((int)v355 - (unsigned int)v354[1]) >> 2) )
      {
        v29 = (v354[1] - v354[0]) >> 2;
        if ( v29 == 0x3FFFFFFF )
          goto LABEL_423;
        v30 = (signed int)((int)v355 - (unsigned int)v354[0]) >> 2;
        if ( 0x3FFFFFFF - (v30 >> 1) >= v30 )
          v31 = (v30 >> 1) + v30;
        else
          v31 = 0;
        if ( v31 < v29 + 1 )
          v31 = v29 + 1;
        sub_405400((int)v354, v31);
      }
      v32 = (unsigned int *)v354[1];
      if ( !v354[1] )
        goto LABEL_32;
      v33 = *((unsigned long *)v354[0] + v28);
    }
    *v32 = v33;
LABEL_32:
    v37 = 0;
    v354[1] = (char *)v354[1] + 4;
    v38 = v276 + 1;
    v39 = v299;
    v40 = 0;
    v41 = 0;
    ++v276;
    v279 = 0;
    if ( v299 > 0 )
    {
      if ( (unsigned int)v299 >= 8 && dword_5019B4 >= 2 )
      {
        v42 = *(unsigned long *)(v304 + 8);
        v43 = 0i64;
        v44 = 0i64;
        v45 = 0i64;
        v46 = 0i64;
        v47 = 80;
        do
        {
          v48 = _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 + 40));
          v47 += 320;
          v41 += 8;
          v49 = _mm_unpacklo_epi32(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 400)),
                    _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 320))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 360)), v48));
          v44 = _mm_add_epi32(v44, v49);
          v43 = _mm_max_epi32(v43, v49);
          v50 = _mm_unpacklo_epi32(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 240)),
                    _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 160))),
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 200)),
                    _mm_cvtsi32_si128(*(unsigned long *)(v47 + v42 - 120))));
          v46 = _mm_add_epi32(v46, v50);
          v45 = _mm_max_epi32(v45, v50);
        }
        while ( v41 < (int)(v299 - (v299 & 0x80000007)) );
        v39 = v299;
        v51 = _mm_add_epi32(v44, v46);
        v52 = _mm_add_epi32(v51, _mm_srli_si128(v51, 8));
        v53 = _mm_max_epi32(v43, v45);
        v37 = _mm_cvtsi128_si32(_mm_add_epi32(v52, _mm_srli_si128(v52, 4)));
        v54 = _mm_max_epi32(v53, _mm_srli_si128(v53, 8));
        v279 = v37;
        v40 = _mm_cvtsi128_si32(_mm_max_epi32(v54, _mm_srli_si128(v54, 4)));
      }
      if ( v41 < v39 )
      {
        v55 = 40 * v41;
        v56 = v299 - v41;
        v57 = v279;
        v58 = *(unsigned long *)(v304 + 8);
        do
        {
          v59 = *(unsigned long *)(v55 + v58);
          v55 += 40;
          v57 += v59;
          if ( v40 < v59 )
            v40 = v59;
          v58 = *(unsigned long *)(v304 + 8);
          --v56;
        }
        while ( v56 );
        v38 = v276;
        v37 = v57;
        v39 = v299;
      }
    }
    v349[0] = v40;
    v60 = v37 + v39 / 2;
    v61 = (int *)v360[1];
    v286 = v60 / v299;
    v349[1] = v60 / v299;
    v280 = v360[0];
    if ( v349 >= v360[1] || v360[0] > v349 )
    {
      if ( v360[1] == v361 && !((signed int)((int)v361 - (unsigned int)v360[1]) >> 3) )
      {
        v66 = (v360[1] - v360[0]) >> 3;
        if ( v66 == 0x1FFFFFFF )
LABEL_423:
          std::_Xlength_error("vector<T> too long");
        v67 = (signed int)((int)v361 - (unsigned int)v360[0]) >> 3;
        if ( 0x1FFFFFFF - (v67 >> 1) >= v67 )
          v68 = (v67 >> 1) + v67;
        else
          v68 = 0;
        if ( v68 < v66 + 1 )
          v68 = v66 + 1;
        sub_405480((unsigned long **)v360, v68);
        v61 = (int *)v360[1];
        v280 = v360[0];
      }
      if ( v61 )
      {
        *v61 = v40;
        v61[1] = v286;
        v61 = (int *)v360[1];
        v8 = v360[0];
      }
      else
      {
        v8 = v280;
      }
    }
    else
    {
      v8 = v360[0];
      v62 = ((char *)v349 - (char *)v360[0]) >> 3;
      v281 = v62;
      if ( v360[1] == v361 )
      {
        if ( !((signed int)((int)v361 - (unsigned int)v360[1]) >> 3) )
        {
          v63 = (v360[1] - v360[0]) >> 3;
          if ( v63 == 0x1FFFFFFF )
            goto LABEL_423;
          v64 = (signed int)((int)v361 - (unsigned int)v360[0]) >> 3;
          if ( 0x1FFFFFFF - (v64 >> 1) >= v64 )
            v65 = (v64 >> 1) + v64;
          else
            v65 = 0;
          if ( v65 < v63 + 1 )
            v65 = v63 + 1;
          sub_405480((unsigned long **)v360, v65);
          v61 = (int *)v360[1];
          v8 = v360[0];
        }
        v62 = v281;
      }
      if ( v61 )
      {
        *v61 = v8[2 * v62];
        v61[1] = v8[2 * v281 + 1];
        v61 = (int *)v360[1];
        v8 = v360[0];
      }
    }
    v9 = (unsigned long *)this;
    v360[1] = v61 + 2;
    v27 = v353;
    if ( v353 != *(unsigned long *)(this + 8) - 1 )
      goto LABEL_410;
    goto LABEL_73;
  }
LABEL_412:
  v9[5] = 0;
  v306 = 0;
  if ( (v6[1] - *v6) / 12 )
  {
    v253 = 0;
    v292 = 0;
    do
    {
      v254 = *v6;
      *(unsigned long *)(this + 20) += (*(unsigned long *)(v253 + v254 + 4) - *(unsigned long *)(v253 + v254)) / 40;
      v255 = *(unsigned long *)(v253 + v254);
      v256 = (int)((unsigned long long)(1717986919i64 * (*(unsigned long *)(v292 + v254 + 4) - *(unsigned long *)(v292 + v254))) >> 32) >> 4;
      v6 = v275;
      v257 = *(double *)(v255 + 40 * (v256 + (v256 >> 31)) - 16) + *(double *)(v255 + 24);
      v258 = *(unsigned long *)(this + 8) + v306 + *(unsigned long *)(this + 204);
      ++v306;
      v253 = v292 + 12;
      v292 += 12;
      *(double *)(a3 + 8 * v258) = v257 * 0.5 / *(double *)(this + 56);
    }
    while ( v306 < (v6[1] - *v6) / 12 );
    v8 = v360[0];
  }
  v259 = 10.0;
  if ( (double)*(int *)(this + 16) / (double)(*(unsigned long *)(this + 8) + *(unsigned long *)(this + 20)) * 0.25 <= 10.0 )
    v259 = (double)*(int *)(this + 16) / (double)(*(unsigned long *)(this + 8) + *(unsigned long *)(this + 20)) * 0.25;
  *(double *)(this + 64) = v259;
  LOBYTE(v379) = 0;
  if ( v8 )
  {
    std::_Container_base0::_Orphan_all((std::_Container_base0 *)v360);
    operator delete(v360[0]);
    v360[0] = 0;
    v360[1] = 0;
    v361 = 0;
  }
  v379 = -1;
  if ( v354[0] )
  {
    std::_Container_base0::_Orphan_all((std::_Container_base0 *)v354);
    operator delete(v354[0]);
  }
}

void  sub_41DA90( int a2, int a3, double a4)
{
  long long v5; 
  unsigned int *v6; 
  int v7; 
  int v8; 
  int *v9; 
  unsigned long *v10; 
  signed int v11; 
  bool v12; 
  double v13; 
  double v14; 
  int v15; 
  int v16; 
  int v17; 
  double v18; 
  int v19; 
  int v20; 
  double v21; 
  double v22; 
  double v23; 
  int v24; 
  double v25; 
  double v26; 
  double v27; 
  int *v28; 
  double v29; 
  double v30; 
  int v31; 
  int v32; 
  unsigned int v33; 
  bool v34; 
  unsigned long long v35; 
  double v36; 
  unsigned int v37; 
  int v38; 
  int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int *v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  signed int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int *v71; 
  unsigned long *v72; 
  int v73; 
  int v74; 
  unsigned int v75; 
  unsigned int v76; 
  int v77; 
  unsigned int v78; 
  unsigned int v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  unsigned int v84; 
  int v85; 
  int v86; 
  unsigned int v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  int v93; 
  unsigned int v94; 
  int v95; 
  int v96; 
  int v97; 
  double *v98; 
  int v99; 
  int v100; 
  double v101; 
  double v102; 
  int v103; 
  int v104; 
  int v105; 
  double v106; 
  double v107; 
  int v108; 
  int v109; 
  double v110; 
  double v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  int v116; 
  double v117; 
  double v118; 
  int v119; 
  double v120; 
  double v121; 
  void *v122; 
  unsigned int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  double v130; 
  double v131; 
  double v132; 
  double v133; 
  double v134; 
  int v135; 
  double v136; 
  double v137; 
  int v138; 
  int v139; 
  int v140; 
  double v141; 
  int v142; 
  double v143; 
  double v144; 
  int v145; 
  int v146; 
  int v147; 
  double v148; 
  int v149; 
  double v150; 
  double v151; 
  void *v152; 
  int v153; 
  unsigned int v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  double v159; 
  int v160; 
  int v161; 
  int v162; 
  double v163; 
  double v164; 
  unsigned int v165; 
  unsigned int v166; 
  double v167; 
  double v168; 
  double v169; 
  double v170; 
  double v171; 
  unsigned int v172; 
  bool v173; 
  int *v174; 
  unsigned int v175; 
  int v176; 
  void **v177; 
  int v178; 
  double v179; 
  double v180; 
  double v181; 
  double v182; 
  int v183; 
  int v184; 
  int v185; 
  double v186; 
  double v187; 
  double v188; 
  unsigned int v189; 
  unsigned int v190; 
  int v191; 
  const int **v192; 
  int v193; 
  int v194; 
  unsigned int v195; 
  unsigned int v196; 
  int v197; 
  void **v198; 
  int v199; 
  unsigned int v200; 
  unsigned int v201; 
  int v202; 
  unsigned int v203; 
  int v204; 
  void **v205; 
  int v206; 
  unsigned int v207; 
  int v208; 
  double v209; 
  double v210; 
  double v211; 
  double v212; 
  unsigned int v213; 
  unsigned int v214; 
  int v215; 
  void **v216; 
  int v217; 
  unsigned int v218; 
  unsigned int v219; 
  int v220; 
  unsigned int v221; 
  unsigned int v222; 
  int v223; 
  void **v224; 
  int v225; 
  unsigned int v226; 
  unsigned int v227; 
  int v228; 
  unsigned int v229; 
  int v230; 
  void **v231; 
  int v232; 
  unsigned int v233; 
  int v234; 
  unsigned int v235; 
  unsigned int v236; 
  int v237; 
  int v238; 
  signed int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  int v250; 
  int v251; 
  int v252; 
  int v253; 
  int v254; 
  int v255; 
  int v256; 
  int v257; 
  int v258; 
  int v259; 
  int v260; 
  unsigned int v261; 
  double v262; 
  int v263; 
  void *v264; 
  int v265; 
  double v266; 
  float *v267; 
  int v268; 
  double v269; 
  double v270; 
  double v271; 
  double v272; 
  double v273; 
  int v274; 
  int v275; 
  double v276; 
  double v277; 
  int v278; 
  double v279; 
  int v280; 
  unsigned long *v281; 
  int v282; 
  int v283; 
  int v284; 
  double v285; 
  double v286; 
  double v287; 
  double v288; 
  double v289; 
  double v290; 
  double v291; 
  unsigned int v292; 
  int v293; 
  int v294; 
  int v295; 
  int v296; 
  double v298; 
  int v299; 
  int v300; 
  double v301; 
  int v302; 
  double v303; 
  double v304; 
  unsigned int v305; 
  int v306; 
  double v307; 
  double v308; 
  double v309; 
  double v310; 
  int *v311; 
  int v312; 
  int v313; 
  int v314; 
  int v315; 
  double v316; 
  int v317; 
  unsigned long *v318; 
  int v319; 
  int v320; 
  void *v321; 
  double v322; 
  int v323; 
  int v324; 
  int v325; 
  int v326; 
  int v327; 
  int v328; 
  unsigned int v329; 
  int v330; 
  int v331; 
  double v332; 
  double v333; 
  int v334; 
  double v335; 
  unsigned int v336; 
  double v337; 
  double v338; 
  int v339; 
  int v340; 
  double v341; 
  double v342; 
  double v343; 
  double v344; 
  double v345; 
  double v346; 
  double v347; 
  double v348; 
  double v349; 
  double v350; 
  double v351; 
  int v352; 
  double v353; 
  double v354; 
  double v355; 
  double v356; 
  double v357; 
  double v358; 
  double v359; 
  int *v360; 
  int v361; 
  int *v362; 
  unsigned int v363; 
  double v364; 
  double v365; 
  double v366; 
  double v367; 
  double v368; 
  double v369; 
  int v370; 
  double v371; 
  double v372; 
  double v373; 
  double v374; 
  int v375; 
  double v376; 
  double v377; 
  double v378; 
  double v379; 
  double v380; 
  double v381; 
  double v382; 
  double v383; 
  double v384; 
  double v385; 
  double v386; 
  double v387; 
  double v388; 
  double v389; 
  int v390[2]; 
  double v391; 
  unsigned long *v392; 
  int *v393; 
  signed int v394; 
  void *v395[2]; 
  void *v396; 
  void *v397[2]; 
  int v398; 
  void *v399[2]; 
  int v400; 
  void *v401[2]; 
  void *v402; 
  void *v403[2]; 
  int v404; 
  void *v405[2]; 
  int v406; 
  void *v407[2]; 
  int v408; 
  void *v409[2]; 
  int v410; 
  int v411; 
  double v412; 
  double v413; 
  double v414; 
  int v415; 
  double v416; 
  double v417; 
  double v418; 
  char v419[180]; 
  int v420; 

  v371 = a4;
  v5 = *(unsigned long long *)(a2 + 8);
  v375 = a2;
  sub_406C30(*(unsigned long long *)a2, *(double *)&v5, *((double *)&v5 + 1), &v380);
  v6 = (unsigned int *)(this + 48);
  v360 = (int *)(this + 52);
  v362 = (int *)(this + 48);
  if ( *(unsigned long *)(this + 48) < *(unsigned long *)(this + 52) )
    v6 = (unsigned int *)(this + 52);
  v7 = _mm_cvtsi32_si128(*v6);
  v393 = (int *)(this + 108);
  v8 = 3 * *(unsigned long *)(this + 24);
  v389 = _mm_cvtepi32_pd(v7).m128d_f64[0] * *(double *)(v375 + 64);
  sub_4216E0((unsigned long *)(this + 108), *(unsigned long *)(this + 16) + v8);
  v292 = *(unsigned long *)(this + 16);
  v392 = (unsigned long *)(this + 120);
  sub_405750((unsigned long *)(this + 120), v292);
  v9 = (int *)(this + 156);
  v311 = v9;
  sub_417570(*v9, v9[1]);
  *(double *)v7.m128i_i64 = v371;
  v9[1] = *v9;
  sub_405EB0((int)v419, a3, v375 + 24, v7.m128i_i64[0]);
  v370 = 0;
  v319 = 0;
  v312 = -1;
  v395[0] = 0;
  v395[1] = 0;
  v396 = 0;
  v420 = 1;
  v321 = 0;
  v401[0] = 0;
  v401[1] = 0;
  v402 = 0;
  v10 = (unsigned long *)this;
  v11 = 0;
  v394 = 0;
  v12 = *(unsigned long *)(this + 8) <= 0;
  v13 = v388;
  v14 = v382;
  v391 = 0.0;
  if ( !v12 )
  {
    while ( 1 )
    {
      v15 = v10[24];
      v372 = 0.0;
      v352 = *(unsigned long *)(v15 + 4 * v11);
      v16 = *(unsigned long *)(v352 + 12) - *(unsigned long *)(v352 + 8);
      v17 = v16 / 40;
      v340 = v16 / 40;
      if ( v16 / 40 > 0 )
      {
        v18 = v13 * v389;
        v19 = 32 * v370;
        v20 = 0;
        v298 = -v389;
        v21 = -v389 * v13;
        v326 = v16 / 40;
        v22 = v14 * v389;
        v23 = -v389 * v14;
        v304 = v21;
        v341 = -v389 * v385;
        v335 = v18;
        v322 = v23;
        v353 = v14 * v389;
        v379 = v385 * v389;
        do
        {
          v24 = *(unsigned long *)(v352 + 8);
          v365 = *(double *)(v24 + v20 + 16) - *(double *)(this + 40);
          v378 = *(double *)(v24 + v20 + 8) - *(double *)(this + 32);
          v377 = v365 * v381 + v378 * v380 + v23;
          v25 = sub_406A70((int)v419, -10.0, 0.0, -1.0, 1.0e-10, v377, v22, v365 * v387 + v378 * v386 + v21, v18);
          v26 = v378;
          v27 = v365 * v384;
          v21 = v304;
          v18 = v335;
          *(double *)(*(unsigned long *)(v352 + 8) + v20 + 24) = v377 * v25 - v353;
          *(double *)(*(unsigned long *)(v352 + 8) + v20 + 32) = (v27 + v26 * v383 + v341) * v25 - v379;
          v28 = v393;
          v29 = *(double *)(*(unsigned long *)(v352 + 8) + v20 + 32);
          v20 += 40;
          v30 = v29 + v372;
          *(double *)(v19 + *v393) = v26;
          v31 = *v28;
          v372 = v30;
          *(double *)(v31 + v19 + 8) = v365;
          v22 = v353;
          *(double *)(*v28 + v19 + 16) = v298;
          v32 = *v28;
          v33 = v394;
          *(double *)(v32 + v19 + 24) = v25;
          v19 += 32;
          *(unsigned long *)(*v392 + 4 * v370) = v33;
          v34 = v326-- == 1;
          ++v370;
          v23 = v322;
        }
        while ( !v34 );
        v17 = v340;
      }
      sub_417C60(
        *(int **)(v352 + 8),
        (int *)(40 * v17 + *(unsigned long *)(v352 + 8)),
        40 * v17 / 40,
        (unsigned char ( *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))sub_4172C0);
      v35 = libm_sse2_sqrt_precise(v293, v294, v295, v296).m128_u64[0];
      v36 = v372;
      *(unsigned long long *)v352 = v35;
      v37 = v394;
      *(double *)(v375 + 8 * (v394 + *(unsigned long *)(this + 204))) = v36 / *(double *)(this + 56) / (double)v340;
      if ( v312 == *(unsigned long *)(v352 + 20) )
        break;
      v48 = v319;
LABEL_75:
      if ( !v37 )
        goto LABEL_375;
      while ( 1 )
      {
        if ( v48 < 4 )
          goto LABEL_375;
        v80 = 0.0;
        v342 = 1.0e11;
        v81 = 0.0;
        v82 = 0.0;
        v324 = 2;
        v83 = 0.0;
        v379 = 0.0;
        v372 = 0.0;
        v329 = 0;
        v405[0] = 0;
        v405[1] = 0;
        v406 = 0;
        v403[0] = 0;
        v403[1] = 0;
        v404 = 0;
        v84 = 0;
        v85 = (v395[1] - v395[0]) >> 2;
        if ( v85 )
        {
          do
          {
            v86 = *((unsigned long *)v395[0] + v84++);
            v83 = v83 + *(double *)*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * v86);
          }
          while ( v84 < v85 );
        }
        v87 = 0;
        v88 = v83 / ((double)v85 + qword_439340[(unsigned int)(v395[1] - v395[0]) >> 31]);
        if ( v85 )
        {
          v89 = v88 * 0.8;
          v346 = v89;
          do
          {
            if ( v89 > *(double *)*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v395[0] + v87)) )
            {
              memmove(
                (char *)v395[0] + 4 * v87,
                (char *)v395[0] + 4 * v87 + 4,
                ((char *)v395[1] - ((char *)v395[0] + 4 * v87 + 4)) & 0xFFFFFFFC);
              v395[1] = (char *)v395[1] - 4;
              v89 = v346;
              --v87;
            }
            ++v87;
          }
          while ( v87 < (v395[1] - v395[0]) >> 2 );
          v81 = v379;
          v80 = 0.0;
          v82 = v372;
        }
        v48 = (v395[1] - v395[0]) >> 2;
        v320 = v48;
        if ( v48 >= 4 )
          break;
        if ( v403[0] )
        {
          operator delete(v403[0]);
          v403[0] = 0;
          v403[1] = 0;
          v404 = 0;
        }
        LOBYTE(v420) = 1;
        if ( v405[0] )
        {
          operator delete(v405[0]);
          v405[0] = 0;
          v405[1] = 0;
          v406 = 0;
        }
      }
      v90 = 0.0;
      v377 = 0.0;
      v378 = 0.0;
      v91 = (double)*v360;
      v92 = (double)*v362;
      v93 = (v395[1] - v395[0]) >> 2;
      v305 = v93;
      v347 = v91;
      v366 = v92;
      if ( v93 )
      {
        v94 = 0;
        v95 = *(unsigned long *)(this + 96);
        v299 = v95;
        do
        {
          v96 = *(unsigned long *)(v95 + 4 * *((unsigned long *)v395[0] + v94));
          v313 = v96;
          if ( (*(unsigned long *)(v96 + 12) - *(unsigned long *)(v96 + 8)) / 40 > 0 )
          {
            v97 = *(unsigned long *)(v96 + 8);
            v98 = (double *)(v97 + 8);
            v314 = (*(unsigned long *)(v313 + 12) - *(unsigned long *)(v313 + 8)) / 40;
            v99 = 0;
            v100 = 0;
            do
            {
              v101 = *(double *)(v99 + v97 + 8);
              ++v329;
              v81 = v81 + *(double *)(v99 + v97 + 16);
              v82 = v82 + v101;
              if ( v92 > v101 )
                v92 = *v98;
              if ( v101 > v80 )
                v80 = *(double *)(v99 + v97 + 8);
              v102 = *(double *)(v99 + v97 + 16);
              if ( v91 > v102 )
                v91 = *(double *)(v99 + v97 + 16);
              if ( v102 > v90 )
                v90 = *(double *)(v99 + v97 + 16);
              ++v100;
              v99 += 40;
              v98 += 5;
            }
            while ( v100 < v314 );
            v366 = v92;
            v347 = v91;
            v378 = v80;
            v377 = v90;
          }
          v93 = v305;
          ++v94;
          v95 = v299;
        }
        while ( v94 < v305 );
        v48 = v320;
      }
      v103 = _mm_cvtsi32_si128(v329);
      HIBYTE(v296) = 0;
      v330 = 0;
      *(double *)v103.m128i_i64 = _mm_cvtepi32_pd(v103).m128d_f64[0];
      v379 = v81 / *(double *)v103.m128i_i64;
      v372 = v82 / *(double *)v103.m128i_i64;
      if ( (v93 & 0xFFFFFFF) != 0 )
      {
        while ( 1 )
        {
          v300 = rand() % v48;
          v306 = rand() % v48;
          if ( v300 != v306 )
            break;
LABEL_131:
          if ( ++v330 >= (unsigned int)(16 * ((v395[1] - v395[0]) >> 2)) )
            goto LABEL_135;
        }
        v407[0] = 0;
        v407[1] = 0;
        v408 = 0;
        LOBYTE(v420) = 4;
        v104 = *(unsigned long *)(this + 96);
        v105 = *(unsigned long *)(*(unsigned long *)(v104 + 4 * *((unsigned long *)v395[0] + v300)) + 8);
        v106 = *(double *)(v105 + 8);
        v107 = *(double *)(v105 + 16);
        v108 = 0;
        v109 = *(unsigned long *)(*(unsigned long *)(v104 + 4 * *((unsigned long *)v395[0] + v306)) + 8);
        v110 = v106 - *(double *)(v109 + 8);
        v111 = v107 - *(double *)(v109 + 16);
        v112 = v110 / v111;
        v301 = v110 / v111;
        v113 = v106 - v110 / v111 * v107;
        v307 = v113;
        if ( v110 / v111 <= 1.0 )
        {
          HIBYTE(v296) = 0;
          v115 = 0.0;
          if ( v48 > 0 )
          {
            do
            {
              v119 = *(unsigned long *)(*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v395[0] + v108)) + 8);
              v120 = *(double *)(v119 + 16) * v301 + v113 - *(double *)(v119 + 8);
              v121 = v120;
              if ( v120 < 0.0 )
                v121 = -v120;
              v115 = v115 + v121;
              if ( (double)*((int *)v401[0] + 2 * v108 + 1) * 0.5 > v120 * v120 )
              {
                sub_4214D0(v407, (const int *)v119);
                v113 = v307;
              }
              ++v108;
            }
            while ( v108 < v48 );
LABEL_122:
            v112 = v301;
          }
        }
        else
        {
          HIBYTE(v296) = 1;
          v112 = v111 / v110;
          v301 = v111 / v110;
          v114 = v107 - v111 / v110 * v106;
          v115 = 0.0;
          v307 = v114;
          if ( v48 > 0 )
          {
            do
            {
              v116 = *(unsigned long *)(*(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v395[0] + v108)) + 8);
              v117 = *(double *)(v116 + 8) * v301 + v114 - *(double *)(v116 + 16);
              v118 = v117;
              if ( v117 < 0.0 )
                v118 = -v117;
              v115 = v115 + v118;
              if ( (double)*((int *)v401[0] + 2 * v108 + 1) * 0.5 > v117 * v117 )
              {
                sub_4214D0(v407, (const int *)v116);
                v114 = v307;
              }
              ++v108;
            }
            while ( v108 < v48 );
            goto LABEL_122;
          }
        }
        v122 = v407[0];
        v123 = (v407[1] - v407[0]) / 40;
        if ( v123 >= v324 )
        {
          if ( v324 != v123 )
          {
            v324 = (v407[1] - v407[0]) / 40;
            goto LABEL_127;
          }
          if ( v342 > v115 )
          {
LABEL_127:
            v405[1] = v405[0];
            v342 = v115;
            v374 = v112;
            v364 = v307;
            sub_404AC0((int)v405, (const int **)v407);
            v122 = v407[0];
          }
          if ( (double)v324 > (double)v370 * 0.95 )
          {
            if ( v122 )
            {
              operator delete(v122);
              v407[0] = 0;
              v407[1] = 0;
              v408 = 0;
            }
            goto LABEL_135;
          }
        }
        if ( v122 )
        {
          operator delete(v122);
          v407[0] = 0;
          v407[1] = 0;
          v408 = 0;
        }
        goto LABEL_131;
      }
LABEL_135:
      v354 = 1.0e11;
      v336 = 2;
      v315 = 0;
      if ( (((v395[1] - v395[0]) >> 2) & 0xFFFFFFF) == 0 )
        goto LABEL_168;
      while ( 1 )
      {
        v124 = rand() % v48;
        v302 = rand() % v48;
        if ( v124 != v302 )
          break;
LABEL_164:
        if ( ++v315 >= (unsigned int)(16 * ((v395[1] - v395[0]) >> 2)) )
          goto LABEL_168;
      }
      v409[0] = 0;
      v409[1] = 0;
      v410 = 0;
      LOBYTE(v420) = 5;
      v125 = *(unsigned long *)(this + 96);
      v126 = *(unsigned long *)(v125 + 4 * *((unsigned long *)v395[0] + v124));
      v331 = 5 * ((*(unsigned long *)(v126 + 12) - *(unsigned long *)(v126 + 8)) / 40);
      v325 = *(unsigned long *)(v126 + 8);
      v127 = *(unsigned long *)(v125 + 4 * *((unsigned long *)v395[0] + v302));
      v128 = *(unsigned long *)(v127 + 12) - *(unsigned long *)(v127 + 8);
      v129 = *(unsigned long *)(v127 + 8);
      if ( HIBYTE(v296) )
      {
        v130 = *(double *)(v325 + 8 * v331 - 24);
        v131 = *(double *)(v325 + 8 * v331 - 32);
        v132 = v130 - *(double *)(v129 + 40 * (v128 / 40) - 24);
        v133 = v131 - *(double *)(v129 + 40 * (v128 / 40) - 32);
      }
      else
      {
        v130 = *(double *)(v325 + 8 * v331 - 32);
        v131 = *(double *)(v325 + 8 * v331 - 24);
        v132 = v130 - *(double *)(v129 + 40 * (v128 / 40) - 32);
        v133 = v131 - *(double *)(v129 + 40 * (v128 / 40) - 24);
      }
      v134 = v132 / v133;
      v135 = 0;
      v343 = v134;
      v136 = v130 - v134 * v131;
      v137 = 0.0;
      v308 = v136;
      if ( HIBYTE(v296) )
      {
        if ( v320 <= 0 )
          goto LABEL_155;
        do
        {
          v138 = *(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v395[0] + v135));
          v139 = *(unsigned long *)(v138 + 8);
          v140 = 5 * ((*(unsigned long *)(v138 + 12) - v139) / 40) - 5;
          v141 = *(double *)(v139 + 8 * v140 + 8);
          v142 = v139 + 8 * v140;
          v143 = v141 * v134 + v136 - *(double *)(v142 + 16);
          v144 = v143;
          if ( v143 < 0.0 )
            v144 = -v143;
          v303 = v137 + v144;
          if ( (double)*((int *)v401[0] + 2 * v135 + 1) * 0.5 > v143 * v143 )
          {
            sub_4214D0(v409, (const int *)v142);
            v134 = v343;
            v136 = v308;
          }
          v137 = v137 + v144;
          ++v135;
        }
        while ( v135 < v320 );
      }
      else
      {
        if ( v320 <= 0 )
          goto LABEL_155;
        do
        {
          v145 = *(unsigned long *)(*(unsigned long *)(this + 96) + 4 * *((unsigned long *)v395[0] + v135));
          v146 = *(unsigned long *)(v145 + 8);
          v147 = 5 * ((*(unsigned long *)(v145 + 12) - v146) / 40) - 5;
          v148 = *(double *)(v146 + 8 * v147 + 16);
          v149 = v146 + 8 * v147;
          v150 = v148 * v134 + v136 - *(double *)(v149 + 8);
          v151 = v150;
          if ( v150 < 0.0 )
            v151 = -v150;
          v303 = v137 + v151;
          if ( (double)*((int *)v401[0] + 2 * v135 + 1) * 0.5 > v150 * v150 )
          {
            sub_4214D0(v409, (const int *)v149);
            v134 = v343;
            v136 = v308;
          }
          v137 = v137 + v151;
          ++v135;
        }
        while ( v135 < v320 );
      }
      v137 = v303;
LABEL_155:
      v152 = v409[0];
      v153 = v336;
      v154 = (v409[1] - v409[0]) / 40;
      if ( v154 < v336 )
        goto LABEL_161;
      if ( v336 == v154 )
      {
        if ( v354 <= v137 )
          goto LABEL_160;
      }
      else
      {
        v153 = (v409[1] - v409[0]) / 40;
        v336 = v153;
      }
      v403[1] = v403[0];
      v376 = v136;
      v373 = v134;
      v354 = v137;
      sub_404AC0((int)v403, (const int **)v409);
      v152 = v409[0];
LABEL_160:
      if ( (double)v153 <= (double)v370 * 0.95 )
      {
LABEL_161:
        if ( v152 )
        {
          operator delete(v152);
          v409[0] = 0;
          v409[1] = 0;
          v410 = 0;
        }
        v48 = v320;
        goto LABEL_164;
      }
      if ( v152 )
      {
        operator delete(v152);
        v409[0] = 0;
        v409[1] = 0;
        v410 = 0;
      }
LABEL_168:
      v399[0] = 0;
      v399[1] = 0;
      v400 = 0;
      v397[0] = 0;
      v397[1] = 0;
      v398 = 0;
      LOBYTE(v420) = 7;
      if ( HIBYTE(v296) )
      {
        v155 = v372;
        v156 = (double)*v362;
        v157 = v372 - (v378 - v366);
        if ( v157 <= v156 * 0.1 )
          v157 = v156 * 0.1;
        v158 = v156 * 0.9;
        v159 = v378 - v366 + v372;
        v160 = (int)v157;
        if ( v158 <= v159 )
          v159 = v158;
        v161 = (int)v159;
        v162 = (int)v157;
        if ( v160 < (int)v159 )
        {
          do
          {
            *(double *)&v415.m128i_i64[1] = (double)v162;
            *(double *)&v411.m128i_i64[1] = (double)v162;
            v344 = v373 * (double)v162 + v376;
            v416 = (double)v162 * v374 + v364;
            v412 = v344;
            if ( v162 == v160 || v162 == v161 - 1 )
            {
              v337 = v388 * v389;
              v316 = (double)v162 - *(double *)(this + 32);
              v377 = (double)v162 * v374 + v364 - *(double *)(this + 40);
              v378 = -v389;
              v367 = v382 * v389;
              v348 = v377 * v381 + v316 * v380 + -v389 * v382;
              v355 = sub_406A70(
                       (int)v419,
                       -10.0,
                       0.0,
                       -1.0,
                       1.0e-10,
                       v348,
                       v382 * v389,
                       v377 * v387 + v316 * v386 + -v389 * v388,
                       v388 * v389);
              v163 = v344 - *(double *)(this + 40);
              v332 = v385 * v389;
              v417 = v355 * v348 - v367;
              v418 = (v377 * v384 + v316 * v383 + v378 * v385) * v355 - v385 * v389;
              v309 = (double)v162 - *(double *)(this + 32);
              v349 = v163 * v381 + v309 * v380 + v378 * v382;
              v356 = sub_406A70(
                       (int)v419,
                       -10.0,
                       0.0,
                       -1.0,
                       1.0e-10,
                       v349,
                       v367,
                       v163 * v387 + v309 * v386 + v378 * v388,
                       v337);
              v413 = v356 * v349 - v367;
              v414 = (v163 * v384 + v309 * v383 + v378 * v385) * v356 - v332;
            }
            sub_4214D0(v399, &v415);
            sub_4214D0(v397, &v411);
            v160 = (int)v157;
            v162 += 2;
          }
          while ( v162 < v161 );
          goto LABEL_178;
        }
        v164 = v379;
      }
      else
      {
        v164 = v379;
        v179 = (double)*v360;
        v180 = v379 - (v377 - v347);
        if ( v180 <= v179 * 0.1 )
          v180 = v179 * 0.1;
        v181 = v179 * 0.9;
        v182 = v377 - v347 + v379;
        v183 = (int)v180;
        if ( v181 <= v182 )
          v182 = v181;
        v184 = (int)v182;
        v185 = (int)v180;
        if ( v183 < (int)v182 )
        {
          do
          {
            v412 = (double)v185;
            v416 = (double)v185;
            v310 = v373 * (double)v185 + v376;
            *(double *)&v411.m128i_i64[1] = (double)v185 * v374 + v364;
            *(double *)&v415.m128i_i64[1] = v310;
            if ( v185 == v183 || v185 == v184 - 1 )
            {
              v186 = (double)v185 * v374 + v364 - *(double *)(this + 32);
              v378 = (double)v185 - *(double *)(this + 40);
              v377 = -v389;
              v338 = v388 * v389;
              v350 = v382 * v389;
              v368 = v378 * v381 + v186 * v380 + -v389 * v382;
              v357 = sub_406A70(
                       (int)v419,
                       -10.0,
                       0.0,
                       -1.0,
                       1.0e-10,
                       v368,
                       v382 * v389,
                       v378 * v387 + v186 * v386 + -v389 * v388,
                       v388 * v389);
              v187 = (double)v185 - *(double *)(this + 40);
              v333 = v385 * v389;
              v413 = v357 * v368 - v350;
              v188 = v310 - *(double *)(this + 32);
              v414 = (v378 * v384 + v186 * v383 + v377 * v385) * v357 - v385 * v389;
              v369 = v187 * v381 + v188 * v380 + v377 * v382;
              v358 = sub_406A70(
                       (int)v419,
                       -10.0,
                       0.0,
                       -1.0,
                       1.0e-10,
                       v369,
                       v350,
                       v187 * v387 + v188 * v386 + v377 * v388,
                       v338);
              v417 = v358 * v369 - v350;
              v418 = (v187 * v384 + v188 * v383 + v377 * v385) * v358 - v333;
            }
            sub_4214D0(v399, &v411);
            sub_4214D0(v397, &v415);
            v183 = (int)v180;
            v185 += 2;
          }
          while ( v185 < v184 );
LABEL_178:
          v164 = v379;
        }
        v155 = v372;
      }
      v165 = (v395[1] - v395[0]) >> 2;
      v166 = (v405[1] - v405[0]) / 40;
      if ( v166 <= v165 / 3 || (v403[1] - v403[0]) / 40 <= v165 / 3 )
      {
        v235 = 3 * v165 / 5;
        if ( v235 < 4 )
          v235 = 4;
        if ( v166 > v235 )
          sub_421620(v311, (const int **)v399);
        v236 = 3 * ((v395[1] - v395[0]) >> 2) / 5u;
        if ( v236 < 4 )
          v236 = 4;
        if ( (v403[1] - v403[0]) / 40 > v236 )
          sub_421620(v311, (const int **)v397);
        goto LABEL_367;
      }
      v167 = v374 - v373;
      if ( !HIBYTE(v296) )
      {
        v209 = v374 - v373;
        if ( v167 < 0.0 )
          v209 = -v167;
        if ( v209 > 0.00001 )
        {
          v210 = (v376 - v364) / v167;
          v211 = (double)*v360;
          if ( v164 - v211 <= v210 && v210 <= v211 + v164 )
          {
            v212 = v211 * 0.5;
            if ( v164 - v212 <= v210 && v210 <= v212 + v164 )
              goto LABEL_367;
            v213 = 4 * v165 / 5;
            if ( v213 < 4 )
              v213 = 4;
            v173 = v166 < v213;
            v174 = v311;
            if ( !v173 )
            {
              v214 = v311[1];
              if ( (unsigned int)v399 >= v214 || *v311 > (unsigned int)v399 )
              {
                if ( v214 == v311[2] )
                  sub_4213C0(v311, 1u);
                v217 = v311[1];
                LOBYTE(v420) = 25;
                if ( v217 )
                {
                  v216 = v399;
                  goto LABEL_295;
                }
              }
              else
              {
                v215 = ((int)v399 - *v311) / 12;
                if ( v311[1] == v311[2] )
                  sub_4213C0(v311, 1u);
                v216 = (void **)(*v311 + 12 * v215);
                v217 = v311[1];
                LOBYTE(v420) = 24;
                if ( v217 )
LABEL_295:
                  sub_404A00(v217, (const int **)v216);
              }
              v311[1] += 12;
              LOBYTE(v420) = 7;
            }
            v218 = ((v395[1] - v395[0]) & 0xFFFFFFFC) / 5;
            if ( v218 < 4 )
              v218 = 4;
            if ( (v403[1] - v403[0]) / 40 < v218 )
              goto LABEL_367;
            v219 = v311[1];
            if ( (unsigned int)v397 >= v219 || *v311 > (unsigned int)v397 )
            {
              if ( v219 == v311[2] )
                sub_4213C0(v311, 1u);
              v194 = v311[1];
              LOBYTE(v420) = 27;
              goto LABEL_356;
            }
            v220 = ((int)v397 - *v311) / 12;
            if ( v311[1] == v311[2] )
              sub_4213C0(v311, 1u);
            v192 = (const int **)(*v311 + 12 * v220);
            v193 = v311[1];
            LOBYTE(v420) = 26;
            if ( !v193 )
              goto LABEL_358;
LABEL_352:
            sub_404A00(v193, v192);
            v174[1] += 12;
            goto LABEL_367;
          }
          v221 = v165 >> 1;
          if ( v221 < 4 )
            v221 = 4;
          v173 = v166 < v221;
          v174 = v311;
          if ( !v173 )
          {
            v222 = v311[1];
            if ( (unsigned int)v399 >= v222 || *v311 > (unsigned int)v399 )
            {
              if ( v222 == v311[2] )
                sub_4213C0(v311, 1u);
              v225 = v311[1];
              LOBYTE(v420) = 21;
              if ( v225 )
              {
                v224 = v399;
                goto LABEL_322;
              }
            }
            else
            {
              v223 = ((int)v399 - *v311) / 12;
              if ( v311[1] == v311[2] )
                sub_4213C0(v311, 1u);
              v224 = (void **)(*v311 + 12 * v223);
              v225 = v311[1];
              LOBYTE(v420) = 20;
              if ( v225 )
LABEL_322:
                sub_404A00(v225, (const int **)v224);
            }
            v311[1] += 12;
            LOBYTE(v420) = 7;
          }
          v226 = (unsigned int)((v395[1] - v395[0]) >> 2) >> 1;
          if ( v226 < 4 )
            v226 = 4;
          if ( (v403[1] - v403[0]) / 40 < v226 )
            goto LABEL_367;
          v227 = v311[1];
          if ( (unsigned int)v397 >= v227 || *v311 > (unsigned int)v397 )
          {
            if ( v227 == v311[2] )
              sub_4213C0(v311, 1u);
            v194 = v311[1];
            LOBYTE(v420) = 23;
            goto LABEL_356;
          }
          v228 = ((int)v397 - *v311) / 12;
          if ( v311[1] == v311[2] )
            sub_4213C0(v311, 1u);
          v192 = (const int **)(*v311 + 12 * v228);
          v193 = v311[1];
          LOBYTE(v420) = 22;
          if ( !v193 )
            goto LABEL_358;
          goto LABEL_352;
        }
        v174 = v311;
        v229 = v311[1];
        if ( (unsigned int)v399 >= v229 || *v311 > (unsigned int)v399 )
        {
          if ( v229 == v311[2] )
            sub_4213C0(v311, 1u);
          v232 = v311[1];
          LOBYTE(v420) = 29;
          if ( v232 )
          {
            v231 = v399;
            goto LABEL_346;
          }
        }
        else
        {
          v230 = ((int)v399 - *v311) / 12;
          if ( v311[1] == v311[2] )
            sub_4213C0(v311, 1u);
          v231 = (void **)(*v311 + 12 * v230);
          v232 = v311[1];
          LOBYTE(v420) = 28;
          if ( v232 )
LABEL_346:
            sub_404A00(v232, (const int **)v231);
        }
        v311[1] += 12;
        v233 = v311[1];
        LOBYTE(v420) = 7;
        if ( (unsigned int)v397 >= v233 || *v311 > (unsigned int)v397 )
        {
          if ( v233 == v311[2] )
            sub_4213C0(v311, 1u);
          v194 = v311[1];
          LOBYTE(v420) = 31;
          goto LABEL_356;
        }
        v234 = ((int)v397 - *v311) / 12;
        if ( v311[1] == v311[2] )
          sub_4213C0(v311, 1u);
        v192 = (const int **)(*v311 + 12 * v234);
        v193 = v311[1];
        LOBYTE(v420) = 30;
        if ( !v193 )
          goto LABEL_358;
        goto LABEL_352;
      }
      v168 = v374 - v373;
      if ( v167 < 0.0 )
        v168 = -v167;
      if ( v168 <= 0.00001 )
      {
        v174 = v311;
        v203 = v311[1];
        if ( (unsigned int)v399 >= v203 || *v311 > (unsigned int)v399 )
        {
          if ( v203 == v311[2] )
            sub_4213C0(v311, 1u);
          v206 = v311[1];
          LOBYTE(v420) = 17;
          if ( v206 )
          {
            v205 = v399;
            goto LABEL_265;
          }
        }
        else
        {
          v204 = ((int)v399 - *v311) / 12;
          if ( v311[1] == v311[2] )
            sub_4213C0(v311, 1u);
          v205 = (void **)(*v311 + 12 * v204);
          v206 = v311[1];
          LOBYTE(v420) = 16;
          if ( v206 )
LABEL_265:
            sub_404A00(v206, (const int **)v205);
        }
        v311[1] += 12;
        v207 = v311[1];
        LOBYTE(v420) = 7;
        if ( (unsigned int)v397 >= v207 || *v311 > (unsigned int)v397 )
        {
          if ( v207 == v311[2] )
            sub_4213C0(v311, 1u);
          v194 = v311[1];
          LOBYTE(v420) = 19;
          goto LABEL_356;
        }
        v208 = ((int)v397 - *v311) / 12;
        if ( v311[1] == v311[2] )
          sub_4213C0(v311, 1u);
        v192 = (const int **)(*v311 + 12 * v208);
        v193 = v311[1];
        LOBYTE(v420) = 18;
        if ( !v193 )
          goto LABEL_358;
        goto LABEL_352;
      }
      v169 = (v376 - v364) / v167;
      v170 = (double)*v362;
      if ( v155 - v170 > v169 || v169 > v170 + v155 )
      {
        v195 = v165 >> 1;
        if ( v195 < 4 )
          v195 = 4;
        v173 = v166 < v195;
        v174 = v311;
        if ( !v173 )
        {
          v196 = v311[1];
          if ( (unsigned int)v399 >= v196 || *v311 > (unsigned int)v399 )
          {
            if ( v196 == v311[2] )
              sub_4213C0(v311, 1u);
            v199 = v311[1];
            LOBYTE(v420) = 9;
            if ( v199 )
            {
              v198 = v399;
              goto LABEL_241;
            }
          }
          else
          {
            v197 = ((int)v399 - *v311) / 12;
            if ( v311[1] == v311[2] )
              sub_4213C0(v311, 1u);
            v198 = (void **)(*v311 + 12 * v197);
            v199 = v311[1];
            LOBYTE(v420) = 8;
            if ( v199 )
LABEL_241:
              sub_404A00(v199, (const int **)v198);
          }
          v311[1] += 12;
          LOBYTE(v420) = 7;
        }
        v200 = (unsigned int)((v395[1] - v395[0]) >> 2) >> 1;
        if ( v200 < 4 )
          v200 = 4;
        if ( (v403[1] - v403[0]) / 40 < v200 )
          goto LABEL_367;
        v201 = v311[1];
        if ( (unsigned int)v397 >= v201 || *v311 > (unsigned int)v397 )
        {
          if ( v201 == v311[2] )
            sub_4213C0(v311, 1u);
          v194 = v311[1];
          LOBYTE(v420) = 11;
          goto LABEL_356;
        }
        v202 = ((int)v397 - *v311) / 12;
        if ( v311[1] == v311[2] )
          sub_4213C0(v311, 1u);
        v192 = (const int **)(*v311 + 12 * v202);
        v193 = v311[1];
        LOBYTE(v420) = 10;
        if ( !v193 )
          goto LABEL_358;
        goto LABEL_352;
      }
      v171 = v170 * 0.5;
      if ( v155 - v171 <= v169 && v169 <= v171 + v155 )
        goto LABEL_367;
      v172 = 4 * v165 / 5;
      if ( v172 < 4 )
        v172 = 4;
      v173 = v166 < v172;
      v174 = v311;
      if ( !v173 )
      {
        v175 = v311[1];
        if ( (unsigned int)v399 >= v175 || *v311 > (unsigned int)v399 )
        {
          if ( v175 == v311[2] )
            sub_4213C0(v311, 1u);
          v178 = v311[1];
          LOBYTE(v420) = 13;
          if ( v178 )
          {
            v177 = v399;
            goto LABEL_214;
          }
        }
        else
        {
          v176 = ((int)v399 - *v311) / 12;
          if ( v311[1] == v311[2] )
            sub_4213C0(v311, 1u);
          v177 = (void **)(*v311 + 12 * v176);
          v178 = v311[1];
          LOBYTE(v420) = 12;
          if ( v178 )
LABEL_214:
            sub_404A00(v178, (const int **)v177);
        }
        v311[1] += 12;
        LOBYTE(v420) = 7;
      }
      v189 = ((v395[1] - v395[0]) & 0xFFFFFFFC) / 5;
      if ( v189 < 4 )
        v189 = 4;
      if ( (v403[1] - v403[0]) / 40 < v189 )
        goto LABEL_367;
      v190 = v311[1];
      if ( (unsigned int)v397 >= v190 || *v311 > (unsigned int)v397 )
      {
        if ( v190 == v311[2] )
          sub_4213C0(v311, 1u);
        v194 = v311[1];
        LOBYTE(v420) = 15;
LABEL_356:
        if ( v194 )
          sub_404A00(v194, (const int **)v397);
        goto LABEL_358;
      }
      v191 = ((int)v397 - *v311) / 12;
      if ( v311[1] == v311[2] )
        sub_4213C0(v311, 1u);
      v192 = (const int **)(*v311 + 12 * v191);
      v193 = v311[1];
      LOBYTE(v420) = 14;
      if ( v193 )
        goto LABEL_352;
LABEL_358:
      v174[1] += 12;
LABEL_367:
      LOBYTE(v420) = 6;
      if ( v397[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v397);
        operator delete(v397[0]);
        v397[0] = 0;
        v397[1] = 0;
        v398 = 0;
      }
      LOBYTE(v420) = 3;
      if ( v399[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v399);
        operator delete(v399[0]);
        v399[0] = 0;
        v399[1] = 0;
        v400 = 0;
      }
      LOBYTE(v420) = 2;
      if ( v403[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v403);
        operator delete(v403[0]);
        v403[0] = 0;
        v403[1] = 0;
        v404 = 0;
      }
      LOBYTE(v420) = 1;
      if ( v405[0] )
      {
        std::_Container_base0::_Orphan_all((std::_Container_base0 *)v405);
        operator delete(v405[0]);
        v405[0] = 0;
        v405[1] = 0;
        v406 = 0;
      }
LABEL_375:
      v312 = *(unsigned long *)(v352 + 20);
      std::_Container_base0::_Orphan_all((std::_Container_base0 *)v401);
      v401[1] = v401[0];
      std::_Container_base0::_Orphan_all((std::_Container_base0 *)v395);
      v395[1] = v395[0];
      sub_421460(v395, (unsigned int *)&v394);
      v237 = v340;
      v238 = 0;
      v319 = 1;
      v239 = 0;
      v334 = 0;
      if ( v340 <= 0 )
      {
        v255 = 0;
      }
      else
      {
        if ( (unsigned int)v340 >= 8 && dword_5019B4 >= 2 )
        {
          v240 = *(unsigned long *)(v352 + 8);
          v241 = 0i64;
          v242 = 0i64;
          v243 = 0i64;
          v244 = 0i64;
          v245 = 80;
          do
          {
            v246 = _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 + 40));
            v245 += 320;
            v239 += 8;
            v247 = _mm_unpacklo_epi32(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 400)),
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 320))),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 360)), v246));
            v242 = _mm_add_epi32(v242, v247);
            v241 = _mm_max_epi32(v241, v247);
            v248 = _mm_unpacklo_epi32(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 240)),
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 160))),
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 200)),
                       _mm_cvtsi32_si128(*(unsigned long *)(v240 + v245 - 120))));
            v244 = _mm_add_epi32(v244, v248);
            v243 = _mm_max_epi32(v243, v248);
          }
          while ( v239 < (int)(v340 - (v340 & 0x80000007)) );
          v249 = _mm_add_epi32(v242, v244);
          v250 = _mm_add_epi32(v249, _mm_srli_si128(v249, 8));
          v251 = _mm_max_epi32(v241, v243);
          v334 = _mm_cvtsi128_si32(_mm_add_epi32(v250, _mm_srli_si128(v250, 4)));
          v252 = _mm_max_epi32(v251, _mm_srli_si128(v251, 8));
          v238 = _mm_cvtsi128_si32(_mm_max_epi32(v252, _mm_srli_si128(v252, 4)));
        }
        if ( v239 >= v340 )
        {
          v255 = v334;
        }
        else
        {
          v253 = 40 * v239;
          v254 = v340 - v239;
          v255 = v334;
          v256 = *(unsigned long *)(v352 + 8);
          do
          {
            v257 = *(unsigned long *)(v253 + v256);
            v253 += 40;
            v255 += v257;
            if ( v238 < v257 )
              v238 = v257;
            v256 = *(unsigned long *)(v352 + 8);
            --v254;
          }
          while ( v254 );
          v237 = v340;
        }
      }
      LODWORD(v371) = v238;
      HIDWORD(v371) = (v255 + v237 / 2) / v237;
      sub_4056D0((unsigned int *)v401, &v371);
      v37 = v394;
      v10 = (unsigned long *)this;
      v321 = v401[0];
LABEL_390:
      v11 = v37 + 1;
      v14 = v382;
      v13 = v388;
      v394 = v11;
      if ( v11 >= v10[2] )
      {
        v9 = v311;
        goto LABEL_392;
      }
    }
    if ( &v394 >= v395[1] || v395[0] > &v394 )
    {
      if ( v395[1] == v396 && !((signed int)((int)v396 - (unsigned int)v395[1]) >> 2) )
      {
        v44 = (v395[1] - v395[0]) >> 2;
        if ( v44 == 0x3FFFFFFF )
          goto LABEL_396;
        v45 = (signed int)((int)v396 - (unsigned int)v395[0]) >> 2;
        if ( 0x3FFFFFFF - (v45 >> 1) >= v45 )
          v46 = (v45 >> 1) + v45;
        else
          v46 = 0;
        if ( v46 < v44 + 1 )
          v46 = v44 + 1;
        sub_405400((int)v395, v46);
      }
      v42 = (unsigned int *)v395[1];
      if ( v395[1] )
      {
        v43 = v394;
        goto LABEL_33;
      }
    }
    else
    {
      v38 = ((char *)&v394 - (char *)v395[0]) >> 2;
      if ( v395[1] == v396 && !((signed int)((int)v396 - (unsigned int)v395[1]) >> 2) )
      {
        v39 = (v395[1] - v395[0]) >> 2;
        if ( v39 == 0x3FFFFFFF )
          goto LABEL_396;
        v40 = (signed int)((int)v396 - (unsigned int)v395[0]) >> 2;
        if ( 0x3FFFFFFF - (v40 >> 1) >= v40 )
          v41 = (v40 >> 1) + v40;
        else
          v41 = 0;
        if ( v41 < v39 + 1 )
          v41 = v39 + 1;
        sub_405400((int)v395, v41);
      }
      v42 = (unsigned int *)v395[1];
      if ( v395[1] )
      {
        v43 = *((unsigned long *)v395[0] + v38);
LABEL_33:
        *v42 = v43;
      }
    }
    v47 = 0;
    v395[1] = (char *)v395[1] + 4;
    v48 = v319 + 1;
    v49 = v340;
    v50 = 0;
    v51 = 0;
    ++v319;
    v323 = 0;
    if ( v340 > 0 )
    {
      if ( (unsigned int)v340 >= 8 && dword_5019B4 >= 2 )
      {
        v52 = *(unsigned long *)(v352 + 8);
        v53 = 0i64;
        v54 = 0i64;
        v55 = 0i64;
        v56 = 0i64;
        v57 = 80;
        do
        {
          v58 = _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 + 40));
          v57 += 320;
          v51 += 8;
          v59 = _mm_unpacklo_epi32(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 400)),
                    _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 320))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 360)), v58));
          v54 = _mm_add_epi32(v54, v59);
          v53 = _mm_max_epi32(v53, v59);
          v60 = _mm_unpacklo_epi32(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 240)),
                    _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 160))),
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 200)),
                    _mm_cvtsi32_si128(*(unsigned long *)(v52 + v57 - 120))));
          v56 = _mm_add_epi32(v56, v60);
          v55 = _mm_max_epi32(v55, v60);
        }
        while ( v51 < (int)(v340 - (v340 & 0x80000007)) );
        v49 = v340;
        v61 = _mm_add_epi32(v54, v56);
        v62 = _mm_add_epi32(v61, _mm_srli_si128(v61, 8));
        v63 = _mm_max_epi32(v53, v55);
        v47 = _mm_cvtsi128_si32(_mm_add_epi32(v62, _mm_srli_si128(v62, 4)));
        v64 = _mm_max_epi32(v63, _mm_srli_si128(v63, 8));
        v323 = v47;
        v50 = _mm_cvtsi128_si32(_mm_max_epi32(v64, _mm_srli_si128(v64, 4)));
      }
      if ( v51 < v49 )
      {
        v65 = 40 * v51;
        v66 = v340 - v51;
        v67 = v323;
        v68 = *(unsigned long *)(v352 + 8);
        do
        {
          v69 = *(unsigned long *)(v68 + v65);
          v65 += 40;
          v67 += v69;
          if ( v50 < v69 )
            v50 = v69;
          v68 = *(unsigned long *)(v352 + 8);
          --v66;
        }
        while ( v66 );
        v48 = v319;
        v47 = v67;
        v49 = v340;
      }
    }
    v390[0] = v50;
    v70 = v47 + v49 / 2;
    v71 = (int *)v401[1];
    v327 = v70 / v340;
    v390[1] = v70 / v340;
    v321 = v401[0];
    if ( v390 >= v401[1] || v401[0] > v390 )
    {
      if ( v401[1] == v402 && !((signed int)((int)v402 - (unsigned int)v401[1]) >> 3) )
      {
        v77 = (v401[1] - v401[0]) >> 3;
        if ( v77 == 0x1FFFFFFF )
LABEL_396:
          std::_Xlength_error("vector<T> too long");
        v78 = (signed int)((int)v402 - (unsigned int)v401[0]) >> 3;
        if ( 0x1FFFFFFF - (v78 >> 1) >= v78 )
          v79 = (v78 >> 1) + v78;
        else
          v79 = 0;
        if ( v79 < v77 + 1 )
          v79 = v77 + 1;
        sub_405480((unsigned long **)v401, v79);
        v71 = (int *)v401[1];
        v321 = v401[0];
      }
      if ( !v71 )
        goto LABEL_72;
      *v71 = v50;
      v71[1] = v327;
      v321 = v401[0];
    }
    else
    {
      v72 = v401[0];
      v73 = ((char *)v390 - (char *)v401[0]) >> 3;
      v328 = v73;
      if ( v401[1] == v402 )
      {
        if ( !((signed int)((int)v402 - (unsigned int)v401[1]) >> 3) )
        {
          v74 = (v401[1] - v401[0]) >> 3;
          if ( v74 == 0x1FFFFFFF )
            goto LABEL_396;
          v75 = (signed int)((int)v402 - (unsigned int)v401[0]) >> 3;
          if ( 0x1FFFFFFF - (v75 >> 1) >= v75 )
            v76 = (v75 >> 1) + v75;
          else
            v76 = 0;
          if ( v76 < v74 + 1 )
            v76 = v74 + 1;
          sub_405480((unsigned long **)v401, v76);
          v72 = v401[0];
          v71 = (int *)v401[1];
          v321 = v401[0];
        }
        v73 = v328;
      }
      if ( !v71 )
        goto LABEL_72;
      *v71 = v72[2 * v73];
      v71[1] = v72[2 * v328 + 1];
      v321 = v401[0];
    }
    v71 = (int *)v401[1];
LABEL_72:
    v10 = (unsigned long *)this;
    v401[1] = v71 + 2;
    v37 = v394;
    if ( v394 != *(unsigned long *)(this + 8) - 1 )
      goto LABEL_390;
    goto LABEL_75;
  }
LABEL_392:
  v10[5] = 0;
  v363 = 0;
  if ( (v9[1] - *v9) / 12 )
  {
    v258 = 0;
    v361 = 0;
    do
    {
      v259 = *v9;
      *(unsigned long *)(this + 20) += (*(unsigned long *)(v258 + v259 + 4) - *(unsigned long *)(v258 + v259)) / 40;
      v260 = *(unsigned long *)(v258 + v259);
      v261 = (int)((unsigned long long)(1717986919i64 * (*(unsigned long *)(v361 + v259 + 4) - *(unsigned long *)(v361 + v259))) >> 32) >> 4;
      v9 = v311;
      v262 = *(double *)(v260 + 40 * (v261 + (v261 >> 31)) - 16) + *(double *)(v260 + 24);
      v263 = *(unsigned long *)(this + 204) + v363 + *(unsigned long *)(this + 8);
      ++v363;
      v258 = v361 + 12;
      v361 += 12;
      *(double *)(v375 + 8 * v263) = v262 * 0.5 / *(double *)(this + 56);
    }
    while ( v363 < (v9[1] - *v9) / 12 );
    v264 = v401[0];
    v321 = v401[0];
  }
  else
  {
    v264 = v321;
  }
  v265 = this;
  v266 = 10.0;
  if ( (double)*(int *)(this + 16) / (double)(*(unsigned long *)(this + 20) + *(unsigned long *)(this + 8)) * 0.25 <= 10.0 )
    v266 = (double)*(int *)(this + 16) / (double)(*(unsigned long *)(this + 20) + *(unsigned long *)(this + 8)) * 0.25;
  v267 = *(float **)(this + 192);
  v268 = 0;
  *(double *)(this + 64) = v266;
  v317 = 0;
  if ( *(int *)(this + 24) > 0 )
  {
    v345 = -v389;
    v269 = -v389 * v14;
    v270 = -v389 * v13;
    v271 = v13 * v389;
    v376 = v269;
    v359 = v14 * v389;
    v373 = v270;
    v374 = v271;
    do
    {
      v272 = v267[1] - *(double *)(v265 + 40);
      v371 = *v267 - *(double *)(v265 + 32);
      v273 = sub_406A70(
               (int)v419,
               -10.0,
               0.0,
               -1.0,
               1.0e-10,
               v272 * v381 + v371 * v380 + v269,
               v359,
               v272 * v387 + v371 * v386 + v270,
               v271);
      *(double *)(32 * (v268 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108)) = v371;
      *(double *)(32 * (v268 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 8) = v272;
      *(double *)(32 * (v268 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 16) = v345;
      v274 = v268 + *(unsigned long *)(this + 16);
      v275 = v268 + 1;
      *(double *)(32 * v274 + *(unsigned long *)(this + 108) + 24) = v273;
      v276 = v267[5] - *(double *)(this + 40);
      v371 = v267[4] - *(double *)(this + 32);
      v277 = sub_406A70(
               (int)v419,
               -10.0,
               0.0,
               -1.0,
               1.0e-10,
               v276 * v381 + v371 * v380 + v376,
               v359,
               v276 * v387 + v371 * v386 + v373,
               v374);
      *(double *)(32 * (v275 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108)) = v371;
      *(double *)(32 * (v275 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 8) = v276;
      *(double *)(32 * (v275 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 16) = v345;
      v278 = v275 + *(unsigned long *)(this + 16);
      ++v275;
      *(double *)(32 * v278 + *(unsigned long *)(this + 108) + 24) = v277;
      v351 = v267[5] - *(double *)(this + 40);
      v371 = v267[4] - *(double *)(this + 32);
      v279 = sub_406A70(
               (int)v419,
               -10.0,
               0.0,
               -1.0,
               1.0e-10,
               v351 * v381 + v371 * v380 + v376,
               v359,
               v351 * v387 + v371 * v386 + v373,
               v374);
      v265 = this;
      v267 += 10;
      *(double *)(32 * (v275 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108)) = v371;
      v269 = v376;
      v270 = v373;
      v271 = v374;
      *(double *)(32 * (v275 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 8) = v351;
      *(double *)(32 * (v275 + *(unsigned long *)(this + 16)) + *(unsigned long *)(this + 108) + 16) = v345;
      v280 = v275 + *(unsigned long *)(this + 16);
      v268 = v275 + 1;
      *(double *)(32 * v280 + *(unsigned long *)(this + 108) + 24) = v279;
      ++v317;
    }
    while ( v317 < *(unsigned long *)(this + 24) );
    v264 = v401[0];
    v321 = v401[0];
  }
  v339 = *(unsigned long *)(v265 + 8);
  if ( v339 > 0 )
  {
    v281 = *(unsigned long **)(v265 + 96);
    v318 = v281;
    do
    {
      v282 = *v281;
      v283 = (*(unsigned long *)(v282 + 12) - *(unsigned long *)(v282 + 8)) / 40;
      if ( v283 > 0 )
      {
        v284 = *(unsigned long *)(v282 + 8);
        do
        {
          v285 = *(double *)libm_sse2_sqrt_precise(v293, v294, v295, v296).m128_u64;
          v284 += 40;
          v391 = v285 + v391;
          --v283;
        }
        while ( v283 );
      }
      v281 = v318 + 1;
      v34 = v339-- == 1;
      ++v318;
    }
    while ( !v34 );
    v264 = v321;
    v265 = this;
  }
  v286 = (double)*(int *)(v265 + 16);
  v287 = 50.0;
  v288 = v286 / (double)*(int *)(v265 + 24);
  v289 = v391 / v286;
  if ( v288 < 50.0 )
    v288 = 50.0;
  v290 = (double)*(int *)(v265 + 28);
  *(double *)(v265 + 80) = v288;
  v291 = v286 / v290;
  if ( v291 >= 50.0 )
    v287 = v291;
  LOBYTE(v420) = 0;
  *(unsigned long long *)(v265 + 88) = 0x4059000000000000i64;
  *(double *)(v265 + 72) = v289 * v287;
  if ( v264 )
  {
    std::_Container_base0::_Orphan_all((std::_Container_base0 *)v401);
    operator delete(v401[0]);
    v401[0] = 0;
    v401[1] = 0;
    v402 = 0;
  }
  v420 = -1;
  if ( v395[0] )
  {
    std::_Container_base0::_Orphan_all((std::_Container_base0 *)v395);
    operator delete(v395[0]);
  }
}

signed char * sub_420E20( unsigned int a2)
{
  int *v3; 
  int *v4; 
  void *v5; 
  signed char *result; 
  int v7; 
  void *v8; 
  int *v9; 
  int v10; 

  v9 = &v7;
  v3 = 0;
  v8 = 0;
  if ( a2 )
  {
    if ( a2 > 0x6666666 || (v3 = (int *)operator new(40 * a2), (v8 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v10 = 0;
  sub_404940(*(const int **)this, *(const int **)(this + 4), v3);
  v4 = *(int **)this;
  v5 = (void *)((*(unsigned long *)(this + 4) - *(unsigned long *)this) / 40);
  v8 = v5;
  if ( v4 )
  {
    operator delete(v4);
    v5 = v8;
  }
  *(unsigned long *)this = v3;
  *(unsigned long *)(this + 8) = (char *)v3 + 40 * a2;
  result = &v3->m128i_i8[40 * (unsigned long)v5];
  *(unsigned long *)(this + 4) = result;
  return result;
}

int ** sub_420F10(const  unsigned int a2)
{
  int *v3; 
  int *v4; 
  int v5; 
  int **result; 
  int v7; 
  const int **v8; 
  void *v9; 
  int *v10; 
  int v11; 

  v10 = &v7;
  v8 = this;
  v3 = 0;
  v9 = 0;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFF || (v3 = (int *)operator new(32 * a2), (v9 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v11 = 0;
  sub_4183F0(*this, this[1], v3);
  v4 = (int *)*this;
  v5 = (char *)this[1] - (char *)*this;
  if ( v4 )
    operator delete(v4);
  result = (int **)v8;
  v8[2] = &v3[2 * a2];
  result[1] = (int *)((char *)v3 + (v5 & 0xFFFFFFE0));
  *result = v3;
  return result;
}

signed char * sub_420FF0( unsigned int a2)
{
  int *v3; 
  int *v4; 
  void *v5; 
  signed char *result; 
  int v7; 
  void *v8; 
  int *v9; 
  int v10; 

  v9 = &v7;
  v3 = 0;
  v8 = 0;
  if ( a2 )
  {
    if ( a2 > 0xAAAAAAA || (v3 = (int *)operator new(24 * a2), (v8 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v10 = 0;
  sub_418430(*(const int **)this, *(const int **)(this + 4), v3);
  v4 = *(int **)this;
  v5 = (void *)((*(unsigned long *)(this + 4) - *(unsigned long *)this) / 24);
  v8 = v5;
  if ( v4 )
  {
    operator delete(v4);
    v5 = v8;
  }
  *(unsigned long *)this = v3;
  *(unsigned long *)(this + 8) = (char *)v3 + 24 * a2;
  result = &v3->m128i_i8[24 * (unsigned long)v5];
  *(unsigned long *)(this + 4) = result;
  return result;
}

char * sub_4210E0(unsigned int a2)
{
  char *v3; 
  int v4; 
  void *v5; 
  char *result; 
  int v7; 
  void *v8; 
  int *v9; 
  int v10; 

  v9 = &v7;
  v3 = 0;
  v8 = 0;
  if ( a2 )
  {
    if ( a2 > 0x15555555 || (v3 = (char *)operator new(12 * a2), (v8 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v10 = 0;
  sub_418470((unsigned long *)*this, (unsigned long *)this[1], v3);
  v4 = *this;
  v5 = (void *)((this[1] - *this) / 12);
  v8 = v5;
  if ( v4 )
  {
    sub_417570(v4, this[1]);
    operator delete((void *)*this);
    v5 = v8;
  }
  *this = (int)v3;
  this[2] = (int)&v3[12 * a2];
  result = &v3[12 * (unsigned long)v5];
  this[1] = (int)result;
  return result;
}

unsigned int  sub_4211E0( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 

  v2 = this[1];
  result = (this[2] - v2) / 40;
  if ( result < a2 )
  {
    v4 = (v2 - *this) / 40;
    if ( 107374182 - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = this[2] - *this;
    v6 = a2 + v4;
    v7 = (unsigned int)(v5 / 40) >> 1;
    if ( 107374182 - v7 >= v5 / 40 )
    {
      v8 = v7 + v5 / 40;
      if ( v8 < v6 )
        v8 = v6;
    }
    else
    {
      v8 = 0;
      if ( v6 )
        v8 = v6;
    }
    return (unsigned int)sub_420E20((int)this, v8);
  }
  return result;
}

unsigned int  sub_421290( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v2 = *(unsigned long *)(this + 4);
  result = (*(unsigned long *)(this + 8) - v2) >> 5;
  if ( result < a2 )
  {
    v4 = (v2 - *(unsigned long *)this) >> 5;
    if ( 0x7FFFFFF - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = a2 + v4;
    v6 = (*(unsigned long *)(this + 8) - *(unsigned long *)this) >> 5;
    if ( 0x7FFFFFF - (v6 >> 1) >= v6 )
    {
      v7 = (v6 >> 1) + v6;
      if ( v7 < v5 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = v5;
    }
    return (unsigned int)sub_420F10((const int **)this, v7);
  }
  return result;
}

unsigned int  sub_421310( unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 

  v2 = this[1];
  result = (this[2] - v2) / 24;
  if ( result < a2 )
  {
    v4 = (v2 - *this) / 24;
    if ( 178956970 - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = this[2] - *this;
    v6 = a2 + v4;
    v7 = (unsigned int)(v5 / 24) >> 1;
    if ( 178956970 - v7 >= v5 / 24 )
    {
      v8 = v7 + v5 / 24;
      if ( v8 < v6 )
        v8 = v6;
    }
    else
    {
      v8 = 0;
      if ( v6 )
        v8 = v6;
    }
    return (unsigned int)sub_420FF0((int)this, v8);
  }
  return result;
}

unsigned int  sub_4213C0(unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 

  v2 = this[1];
  result = (this[2] - v2) / 12;
  if ( result < a2 )
  {
    v4 = (v2 - *this) / 12;
    if ( 357913941 - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = this[2] - *this;
    v6 = a2 + v4;
    v7 = (unsigned int)(v5 / 12) >> 1;
    if ( 357913941 - v7 >= v5 / 12 )
    {
      v8 = v7 + v5 / 12;
      if ( v8 < v6 )
        v8 = v6;
    }
    else
    {
      v8 = 0;
      if ( v6 )
        v8 = v6;
    }
    return (unsigned int)sub_4210E0(this, v8);
  }
  return result;
}

unsigned int  sub_421460( unsigned int *a2)
{
  unsigned int result; 
  int v4; 
  unsigned int *v5; 
  unsigned int *v6; 

  result = this[1];
  if ( (unsigned int)a2 >= result || *this > (unsigned int)a2 )
  {
    if ( result == this[2] )
      result = sub_405560(this, 1u);
    v6 = (unsigned int *)this[1];
    if ( v6 )
    {
      result = *a2;
      *v6 = *a2;
    }
  }
  else
  {
    v4 = ((int)a2 - *this) >> 2;
    if ( result == this[2] )
      result = sub_405560(this, 1u);
    v5 = (unsigned int *)this[1];
    if ( v5 )
    {
      result = *(unsigned long *)(*this + 4 * v4);
      *v5 = result;
      this[1] += 4;
      return result;
    }
  }
  this[1] += 4;
  return result;
}

int * sub_4214D0( const int *a2)
{
  unsigned int v3; 
  int v4; 
  const int *v5; 
  int *result; 

  v3 = this[1];
  if ( (unsigned int)a2 >= v3 || *this > (unsigned int)a2 )
  {
    if ( v3 == this[2] )
      sub_4211E0(this, 1u);
    result = (int *)this[1];
    if ( result )
    {
      *result = _mm_loadu_si128(a2);
      result[1] = _mm_loadu_si128(a2 + 1);
      result[2].m128i_i64[0] = a2[2].m128i_i64[0];
    }
  }
  else
  {
    v4 = ((int)a2->m128i_i32 - *this) / 40;
    if ( v3 == this[2] )
      sub_4211E0(this, 1u);
    v5 = (const int *)(*this + 40 * v4);
    result = (int *)this[1];
    if ( result )
    {
      *result = _mm_loadu_si128(v5);
      result[1] = _mm_loadu_si128(v5 + 1);
      result[2].m128i_i64[0] = v5[2].m128i_i64[0];
      this[1] += 40;
      return result;
    }
  }
  this[1] += 40;
  return result;
}
int * sub_421580( const int *a2)
{
  unsigned int v3; 
  int v4; 
  const int *v5; 
  int *result; 

  v3 = this[1];
  if ( (unsigned int)a2 >= v3 || *this > (unsigned int)a2 )
  {
    if ( v3 == this[2] )
      sub_421310(this, 1u);
    result = (int *)this[1];
    if ( result )
    {
      *result = _mm_loadu_si128(a2);
      result[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
  }
  else
  {
    v4 = ((int)a2->m128i_i32 - *this) / 24;
    if ( v3 == this[2] )
      sub_421310(this, 1u);
    v5 = (const int *)(*this + 24 * v4);
    result = (int *)this[1];
    if ( result )
    {
      *result = _mm_loadu_si128(v5);
      result[1].m128i_i64[0] = v5[1].m128i_i64[0];
      this[1] += 24;
      return result;
    }
  }
  this[1] += 24;
  return result;
}
void  sub_421620(const int **a2)
{
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 

  v3 = this[1];
  if ( (unsigned int)a2 >= v3 || *this > (unsigned int)a2 )
  {
    if ( v3 == this[2] )
      sub_4213C0(this, 1u);
    v6 = this[1];
    if ( v6 )
      sub_404A00(v6, a2);
  }
  else
  {
    v4 = ((int)a2 - *this) / 12;
    if ( v3 == this[2] )
      sub_4213C0(this, 1u);
    v5 = this[1];
    if ( v5 )
      sub_404A00(v5, (const int **)(*this + 12 * v4));
  }
  this[1] += 12;
}
int  sub_4216E0( unsigned int a2)
{
  int result; 
  unsigned int v4; 
  unsigned long long *v5; 
  unsigned long v6[9]; 

  v6[5] = v6;
  v6[4] = this;
  result = this[1];
  v4 = (result - *this) >> 5;
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      sub_421290((int)this, a2 - v4);
      v5 = (unsigned long long *)this[1];
      v6[8] = 0;
      sub_4183C0(v5, a2 - (((int)v5 - *this) >> 5));
      result = (this[1] - *this) >> 5;
      this[1] += 32 * (a2 - result);
    }
  }
  else
  {
    this[1] = result + 32 * (a2 - v4);
  }
  return result;
}
int  sub_4217B0(
        double a1@<st0>,
        unsigned long *a2,
        int a3,
        int a4,
        int a5,
        long long a6,
        long long a7,
        long long a8,
        long long a9,
        long long a10,
        long long a11,
        int Count,
        unsigned long *a13,
        unsigned int *a14,
        unsigned long *a15)
{
  unsigned long *v15; 
  unsigned long *v16; 
  void *v17; 
  unsigned long *i; 
  unsigned long *v20; 
  void **v21; 
  unsigned long *v22; 
  unsigned int v23; 
  unsigned long *v24; 
  unsigned int v25; 
  unsigned int v26; 
  int *v27; 
  unsigned long *v28; 
  int v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  int j; 
  int v36; 
  unsigned int v37; 
  unsigned long *v38; 
  int v39; 
  void *v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  long long v47; 
  double v48; 
  double v49; 
  void *Block; 
  int v51; 
  int *v52; 
  double v53; 
  void *v54; 
  void *v55; 
  double v56; 
  int v57; 
  void *v58; 
  void *v59; 
  int v60; 
  void *v61; 
  int v62; 
  double v63; 
  double v64; 

  v15 = malloc(0x10u);
  v16 = v15;
  v55 = v15;
  if ( !v15 )
    sub_422090("not enough memory.");
  *v15 = 0;
  v15[1] = 1;
  v15[2] = 7;
  v17 = malloc(0x38u);
  v16[3] = v17;
  if ( !v17 )
    sub_422090("not enough memory.");
  i = 0;
  v57 = 0;
  if ( !a3 || a4 <= 0 || a5 <= 0 )
    sub_422090("invalid image input.");
  if ( *(double *)&a6 <= 0.0 )
    sub_422090("`scale` value must be positive.");
  if ( *(double *)&a7 <= 0.0 )
    sub_422090("`sigma_scale` value must be positive.");
  if ( *(double *)&a8 < 0.0 )
    sub_422090("`quant` value must be positive.");
  if ( *(double *)&a9 <= 0.0 || *(double *)&a9 >= 180.0 )
    sub_422090("`ang_th` value must be in the range (0,180).");
  if ( *(double *)&a11 < 0.0 || *(double *)&a11 > 1.0 )
    sub_422090("`density_th` value must be in the range [0,1].");
  if ( Count <= 0 )
    sub_422090("`n_bins` value must be positive.");
  v64 = *(double *)&a9 / 180.0;
  v53 = *(double *)&a9 * 3.141592653589793 / 180.0;
  v63 = *(double *)&a8 / *(double *)libm_sse2_sin_precise().m128_u64;
  v20 = sub_423590(a4, a5, a3);
  Block = v20;
  if ( *(double *)&a6 == 1.0 )
  {
    v22 = sub_422DD0(0, v20, *(long long *)&v63, &v60, &v54, &v58, Count);
    v61 = v22;
  }
  else
  {
    v21 = (void **)sub_422240(v20, *(double *)&a6, *(double *)&a7);
    v61 = sub_422DD0(0, v21, *(long long *)&v63, &v60, &v54, &v58, Count);
    sub_4220C0(v21);
    v22 = v61;
  }
  v23 = v22[2];
  v62 = v22[1];
  v56 = *(double *)libm_sse2_log10_precise().m128_u64;
  v56 = (v56 + *(double *)libm_sse2_log10_precise().m128_u64) * 5.0 * 0.5;
  v56 = v56 + *(double *)libm_sse2_log10_precise().m128_u64;
  v51 = (int)-(v56 / *(double *)libm_sse2_log10_precise().m128_u64);
  if ( a13 )
  {
    if ( a14 )
    {
      if ( a15 )
      {
        v24 = sub_4235F0(v62, v23);
        v25 = v23 * v62;
        v26 = 0;
        for ( i = v24; v26 < v25; ++v26 )
          *(unsigned long *)(*v24 + 4 * v26) = 0;
      }
    }
  }
  v59 = sub_4234C0(v62, v23, 0);
  v27 = (int *)calloc((v23 * (unsigned long long)(unsigned int)v62) >> 32 != 0 ? -1 : v23 * v62, 8u);
  v52 = v27;
  if ( !v27 )
    sub_422090("not enough memory!");
  v28 = (unsigned long *)v60;
  if ( v60 )
  {
    do
    {
      v29 = v28[1];
      if ( !*(unsigned char *)(*v28 + v29 * *((unsigned long *)v59 + 1) + *(unsigned long *)v59)
        && *(double *)(*(unsigned long *)v61 + 8 * (*(unsigned long *)v60 + v29 * *((unsigned long *)v61 + 1))) != -1024.0 )
      {
        sub_424E00(*(unsigned long *)v60, v29, v61, v27, &v62, &v49, v59, v53);
        if ( v62 >= v51 )
        {
          sub_424B60((int)v27, v62, v58, v49, v53, *(long long *)&v64, (int)&v42);
          if ( sub_424790(v27, &v62, v58, v49, v53, *(long long *)&v64, (int)&v42, v59, v61, *(double *)&a11) )
          {
            a1 = sub_423A70(a1, &v42, v61, v56, *(double *)&a10);
            v48 = a1;
            if ( *(double *)&a10 < a1 )
            {
              ++v57;
              v30 = v42 + 0.5;
              v31 = v43 + 0.5;
              v32 = v44 + 0.5;
              v33 = v45 + 0.5;
              v34 = v46;
              v42 = v42 + 0.5;
              v43 = v43 + 0.5;
              v44 = v44 + 0.5;
              v45 = v45 + 0.5;
              if ( *(double *)&a6 != 1.0 )
              {
                v30 = v30 / *(double *)&a6;
                v31 = v31 / *(double *)&a6;
                v32 = v32 / *(double *)&a6;
                v33 = v33 / *(double *)&a6;
                v34 = v46 / *(double *)&a6;
                v42 = v30;
                v43 = v31;
                v44 = v32;
                v45 = v33;
                v46 = v46 / *(double *)&a6;
              }
              sub_421E50(
                v55,
                *(long long *)&v30,
                *(long long *)&v31,
                *(long long *)&v32,
                *(long long *)&v33,
                *(long long *)&v34,
                v47,
                *(long long *)&a1);
              if ( i )
              {
                for ( j = 0; j < v62; v27 = v52 )
                {
                  v36 = v27[2 * j] + i[1] * v27[2 * j + 1];
                  ++j;
                  *(unsigned long *)(*i + 4 * v36) = v57;
                }
              }
            }
          }
        }
      }
      v28 = *(unsigned long **)(v60 + 8);
      v60 = (int)v28;
    }
    while ( v28 );
  }
  free(Block);
  sub_4220C0((void **)v61);
  sub_4220C0((void **)v58);
  if ( !v59 || !*(unsigned long *)v59 )
    sub_422090("free_image_char: invalid input image.");
  free(*(void **)v59);
  free(v59);
  free(v27);
  free(v54);
  if ( a13 && a14 && a15 )
  {
    if ( !i )
      sub_422090("`region` should be a valid image.");
    *a13 = *i;
    v37 = i[1];
    if ( v37 > 0x7FFFFFFF )
      sub_422090("region image to big to fit in INT sizes.");
    *a14 = v37;
    *a15 = i[2];
    free(i);
  }
  v38 = v55;
  if ( *(unsigned long *)v55 > 0x7FFFFFFFu )
    sub_422090("too many detections to fit in an INT.");
  v41 = v55;
  *a2 = *(unsigned long *)v55;
  v39 = v38[3];
  free(v41);
  return v39;
}
int  sub_421E50(unsigned long *a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long a8)
{
  int v8; 
  int result; 

  if ( !a1 )
    sub_422090("add_7tuple: invalid n-tuple input.");
  if ( a1[2] != 7 )
    sub_422090("add_7tuple: the n-tuple must be a 7-tuple.");
  if ( *a1 == a1[1] )
    sub_422020((int)a1);
  v8 = a1[3];
  if ( !v8 )
    sub_422090("add_7tuple: invalid n-tuple input.");
  *(unsigned long long *)(v8 + 8 * *a1 * a1[2]) = a2;
  *(unsigned long long *)(a1[3] + 8 * *a1 * a1[2] + 8) = a3;
  *(unsigned long long *)(a1[3] + 8 * *a1 * a1[2] + 16) = a4;
  *(unsigned long long *)(a1[3] + 8 * *a1 * a1[2] + 24) = a5;
  *(unsigned long long *)(a1[3] + 8 * *a1 * a1[2] + 32) = a6;
  *(unsigned long long *)(a1[3] + 8 * *a1 * a1[2] + 40) = a7;
  result = a1[3];
  *(unsigned long long *)(result + 8 * *a1 * a1[2] + 48) = a8;
  ++*a1;
  return result;
}
double  sub_421F30(double a1, double a2)
{
  double v2; 
  double v4; 

  v2 = a1 - a2;
  v4 = a1 - a2;
  if ( v4 <= -3.141592653589793 )
  {
    do
      v2 = v2 + 6.28318530718;
    while ( v2 <= -3.141592653589793 );
    v4 = v2;
  }
  if ( v2 > 3.141592653589793 )
  {
    do
      v2 = v2 - 6.28318530718;
    while ( v2 > 3.141592653589793 );
    v4 = v2;
  }
  if ( v2 < 0.0 )
    return -v2;
  return v4;
}
bool  sub_421FB0(double a1, double a2)
{
  double v3; 
  double v4; 
  double v5; 

  if ( a1 == a2 )
    return 1;
  v3 = fabs(a1);
  v4 = fabs(a2);
  v5 = fabs(a1 - a2);
  if ( v3 <= v4 )
    v3 = v4;
  if ( v3 < 2.225073858507201e-308 )
    v3 = 2.225073858507201e-308;
  return v5 / v3 <= 2.220446049250313e-14;
}
void * sub_422020(int a1)
{
  int v1; 
  int v2; 
  int v3; 
  void *result; 

  if ( !a1 || !*(unsigned long *)(a1 + 12) || (v1 = *(unsigned long *)(a1 + 4)) == 0 )
    sub_422090("enlarge_ntuple_list: invalid n-tuple.");
  v2 = 2 * v1;
  v3 = v2 * *(unsigned long *)(a1 + 8);
  *(unsigned long *)(a1 + 4) = v2;
  result = realloc(*(void **)(a1 + 12), (unsigned long long)(unsigned int)v3 >> 29 != 0 ? -1 : 8 * v3);
  *(unsigned long *)(a1 + 12) = result;
  if ( !result )
    sub_422090("not enough memory.");
  return result;
}
void   sub_422090(const char *a1)
{
  FILE *v1; 

  v1 = _iob_func();
  printf(v1 + 2, "LSD Error: %s\n", a1);
  exit(1);
}
void  sub_4220C0(void **Block)
{
  if ( !Block || !*Block )
    sub_422090("free_image_double: invalid input image.");
  free(*Block);
  free(Block);
}
void  sub_4220F0(void *Block)
{
  if ( !Block || !*((unsigned long *)Block + 3) )
    sub_422090("free_ntuple_list: invalid n-tuple input.");
  free(*((void **)Block + 3));
  free(Block);
}
void  sub_422130(unsigned long *a1, double a2)
{
  double v2; 
  unsigned int v3; 
  int v4; 
  double v5; 
  double v6; 
  unsigned int i; 
  double v8; 

  v2 = 0.0;
  v8 = 0.0;
  if ( !a1 || !a1[3] )
    sub_422090("gaussian_kernel: invalid n-tuple `kernel`.");
  if ( a2 <= 0.0 )
    sub_422090("gaussian_kernel: `sigma` must be positive.");
  if ( !a1[1] )
  {
    sub_422020((int)a1);
    v2 = 0.0;
  }
  v3 = 0;
  *a1 = 1;
  if ( !a1[2] )
    goto LABEL_10;
  v4 = a1[3];
  do
  {
    *(unsigned long long *)(v4 + 8 * v3) = libm_sse2_exp_precise().m128_u64[0];
    v4 = a1[3];
    v5 = *(double *)(v4 + 8 * v3++);
    v6 = v5 + v8;
    v2 = v6;
    v8 = v6;
  }
  while ( v3 < a1[2] );
  if ( v6 >= 0.0 )
  {
LABEL_10:
    for ( i = 0; i < a1[2]; ++i )
      *(double *)(a1[3] + 8 * i) = *(double *)(a1[3] + 8 * i) / v2;
  }
}
unsigned long * sub_422240(unsigned long *a1, double a2, double a3)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  double v7; 
  double v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  unsigned long *v12; 
  unsigned int v13; 
  double v14; 
  int v15; 
  double *v16; 
  int v17; 
  int v18; 
  int j; 
  double v20; 
  bool v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 
  unsigned long *v27; 
  double *v28; 
  unsigned long *v29; 
  int v30; 
  double v31; 
  double *v32; 
  int v33; 
  int k; 
  double v35; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  unsigned long *v42; 
  unsigned long *Block; 
  unsigned long *v44; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  int i; 
  unsigned int v49; 
  unsigned int v50; 
  double *v51; 
  int v52; 
  int v53; 
  double v54; 
  double v55; 
  double v56; 

  if ( !a1 || !*a1 || (v3 = a1[1]) == 0 || (v4 = a1[2]) == 0 )
    sub_422090("gaussian_sampler: invalid image.");
  if ( a2 <= 0.0 )
    sub_422090("gaussian_sampler: `scale` must be positive.");
  if ( a3 <= 0.0 )
    sub_422090("gaussian_sampler: `sigma_scale` must be positive.");
  if ( (double)v3 * a2 > 4294967295.0 || (double)v4 * a2 > 4294967295.0 )
    sub_422090("gaussian_sampler: the output image size exceeds the handled size.");
  v5 = (unsigned int)ceil((double)v3 * a2);
  v6 = (unsigned int)ceil((double)v4 * a2);
  Block = sub_423520(v5, v4);
  v44 = sub_423520(v5, v6);
  v7 = a3;
  if ( a2 < 1.0 )
    v7 = a3 / a2;
  v56 = v7;
  libm_sse2_log_precise(v37);
  v8 = *(double *)libm_sse2_sqrt_precise(v38, v39, v40, v41).m128_u64;
  v45 = (unsigned int)ceil(v8 * v56);
  v9 = 0;
  v42 = sub_423660(2 * v45 + 1);
  v50 = 0;
  v10 = 2 * a1[1];
  v11 = 2 * a1[2];
  v53 = v10;
  v52 = v11;
  if ( Block[1] )
  {
    v12 = Block;
    do
    {
      v54 = floor((double)v9 / a2 + 0.5);
      sub_422130(v42, v56);
      v13 = 0;
      for ( i = 0; v13 < v12[2]; *(double *)(*v12 + 8 * (v9 + v22)) = v14 )
      {
        v14 = 0.0;
        v46 = v42[2];
        if ( v46 )
        {
          v15 = a1[1];
          v16 = (double *)v42[3];
          v17 = v13 * v15;
          v18 = (int)v54 - v45;
          do
          {
            for ( j = v18; j < 0; j += v10 )
              ;
            for ( ; j >= v10; j -= v10 )
              ;
            if ( j >= v15 )
              j = v10 - j - 1;
            ++v18;
            v10 = v53;
            v20 = *(double *)(*a1 + 8 * (v17 + j)) * *v16++;
            v21 = v46-- == 1;
            v15 = a1[1];
            v14 = v14 + v20;
          }
          while ( !v21 );
          v13 = i;
          v9 = v50;
          v12 = Block;
        }
        v22 = v13 * v12[1];
        i = ++v13;
      }
      v50 = ++v9;
    }
    while ( v9 < v12[1] );
    v11 = v52;
  }
  v23 = 0;
  v49 = 0;
  if ( v44[2] )
  {
    v24 = v44[1];
    do
    {
      v55 = floor((double)v23 / a2 + 0.5);
      sub_422130(v42, v56);
      v25 = 0;
      v47 = 0;
      if ( v24 )
      {
        v26 = v23 * v24;
        v27 = v44;
        v28 = (double *)(*v44 + 8 * v26);
        v29 = v42;
        v51 = v28;
        do
        {
          v30 = v29[2];
          v31 = 0.0;
          if ( v30 )
          {
            v32 = (double *)v29[3];
            v33 = (int)v55 - v45;
            do
            {
              for ( k = v33; k < 0; k += v11 )
                ;
              for ( ; k >= v11; k -= v11 )
                ;
              if ( k >= a1[2] )
                k = v11 - k - 1;
              ++v33;
              v11 = v52;
              v35 = *(double *)(*Block + 8 * (v47 + k * Block[1])) * *v32++;
              v31 = v31 + v35;
              --v30;
            }
            while ( v30 );
            v25 = v47;
            v28 = v51;
            v29 = v42;
            v27 = v44;
          }
          v24 = v27[1];
          ++v25;
          *v28++ = v31;
          v47 = v25;
          v51 = v28;
        }
        while ( v25 < v24 );
        v23 = v49;
      }
      v49 = ++v23;
    }
    while ( v23 < v44[2] );
  }
  sub_4220F0(v42);
  sub_4220C0((void **)Block);
  return v44;
}
double  sub_422760@<st0>(
        long long a1@<esi:edi>,
        int a2,
        int a3,
        double a4,
        double a5,
        unsigned long *a6,
        double a7,
        double a8)
{
  int v8; 
  double v9; 
  double v10; 
  double v11; 
  int v12; 
  int v13; 
  int v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  long double v27; 
  long double v28; 
  double result; 
  double v31; 
  int _38; 

  v8 = a2;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  if ( !a2 )
    sub_422090("get_theta: invalid region.");
  if ( a3 <= 1 )
    sub_422090("get_theta: region size <= 1.");
  if ( !a6 || !*a6 )
    sub_422090("get_theta: invalid `modgrad`.");
  if ( a8 < 0.0 )
    sub_422090("get_theta: `prec` must be positive.");
  v12 = 0;
  do
  {
    v13 = *(unsigned long *)(v8 + 8 * v12 + 4);
    v14 = *(unsigned long *)(v8 + 8 * v12++);
    v15 = (double)v13 - a5;
    v16 = *(double *)(*a6 + 8 * (v14 + a6[1] * v13));
    v17 = (double)v14;
    v8 = a2;
    v18 = v17 - a4;
    v9 = v9 + v15 * v15 * v16;
    v10 = v10 - v15 * v18 * v16;
    v19 = v18 * v18 * v16 + v11;
    v11 = v19;
  }
  while ( v12 < a3 );
  v31 = v19;
  if ( v9 == 0.0 )
    goto LABEL_19;
  v20 = fabs(v9);
  v21 = fabs(v9 - 0.0);
  if ( v20 <= 0.0 )
    v20 = 0.0;
  if ( v20 < 2.225073858507201e-308 )
    v20 = 2.225073858507201e-308;
  if ( v21 / v20 <= 2.220446049250313e-14 )
  {
LABEL_19:
    if ( v11 == 0.0 )
      goto LABEL_34;
    v22 = fabs(v11);
    v23 = fabs(v11 - 0.0);
    if ( v22 <= 0.0 )
      v22 = 0.0;
    if ( v22 < 2.225073858507201e-308 )
      v22 = 2.225073858507201e-308;
    if ( v23 / v22 <= 2.220446049250313e-14 )
    {
LABEL_34:
      if ( sub_421FB0(v10, 0.0) )
        sub_422090("get_theta: null inertia matrix.");
    }
  }
  v24 = v11 + v9;
  v25 = *(double *)&_38;
  v26 = (v10 - *(double *)libm_sse2_sqrt_precise(a1, HIDWORD(a1), LODWORD(v9), HIDWORD(v9)).m128_u64) * 0.5;
  if ( fabs(v11 + v9) <= fabs(*(double *)&_38) )
  {
    v27 = v31;
    *(double *)&_38 = v26 - *(double *)&_38;
    v28 = v26 - v25;
  }
  else
  {
    *(double *)&_38 = v26 - v24;
    v27 = v26 - v24;
    v28 = v31;
  }
  result = atan2(v27, v28);
  *(double *)&_38 = sub_421F30(result, a7);
  if ( *(double *)&_38 > a8 )
    return result + 3.141592653589793;
  return result;
}
double  sub_422A60(double a1, double a2, double a3, double a4, double a5)
{
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v10; 
  double v11; 
  double v12; 

  if ( a2 > a4 || (v5 = a1, a2 > a1) || a1 > a4 )
    sub_422090("inter_hi: unsuitable input, `x1>x2` or `x<x1` or `x>x2`.");
  if ( a2 == a4 )
    goto LABEL_10;
  v6 = fabs(a2);
  v7 = fabs(a4);
  v8 = fabs(a2 - a4);
  if ( v6 <= v7 )
    v6 = v7;
  v5 = a1;
  if ( v6 < 2.225073858507201e-308 )
    v6 = 2.225073858507201e-308;
  if ( v8 / v6 <= 2.220446049250313e-14 )
  {
LABEL_10:
    if ( a5 > a3 )
      return a5;
  }
  if ( a2 == a4 )
    goto LABEL_18;
  v10 = fabs(a2);
  v11 = fabs(a4);
  v12 = fabs(a2 - a4);
  if ( v10 <= v11 )
    v10 = v11;
  v5 = a1;
  if ( v10 < 2.225073858507201e-308 )
    v10 = 2.225073858507201e-308;
  if ( v12 / v10 <= 2.220446049250313e-14 )
  {
LABEL_18:
    if ( a3 > a5 )
      return a3;
  }
  return (v5 - a2) * (a5 - a3) / (a4 - a2) + a3;
}
double  sub_422BB0(double a1, double a2, double a3, double a4, double a5)
{
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v10; 
  double v11; 
  double v12; 

  if ( a2 > a4 || (v5 = a1, a2 > a1) || a1 > a4 )
    sub_422090("inter_low: unsuitable input, `x1>x2` or `x<x1` or `x>x2`.");
  if ( a2 == a4 )
    goto LABEL_10;
  v6 = fabs(a2);
  v7 = fabs(a4);
  v8 = fabs(a2 - a4);
  if ( v6 <= v7 )
    v6 = v7;
  v5 = a1;
  if ( v6 < 2.225073858507201e-308 )
    v6 = 2.225073858507201e-308;
  if ( v8 / v6 <= 2.220446049250313e-14 )
  {
LABEL_10:
    if ( a5 > a3 )
      return a3;
  }
  if ( a2 == a4 )
    goto LABEL_18;
  v10 = fabs(a2);
  v11 = fabs(a4);
  v12 = fabs(a2 - a4);
  if ( v10 <= v11 )
    v10 = v11;
  v5 = a1;
  if ( v10 < 2.225073858507201e-308 )
    v10 = 2.225073858507201e-308;
  if ( v12 / v10 <= 2.220446049250313e-14 )
  {
LABEL_18:
    if ( a3 > a5 )
      return a5;
  }
  return (v5 - a2) * (a5 - a3) / (a4 - a2) + a3;
}
bool  sub_422D00(int a1, int a2, unsigned long *a3, double a4, double a5)
{
  int v5; 
  double v6; 
  double v8; 

  if ( !a3 || !*a3 )
    sub_422090("isaligned: invalid image `angles`.");
  if ( a1 < 0 || a2 < 0 || (v5 = a3[1], a1 >= v5) || a2 >= a3[2] )
    sub_422090("isaligned: (x,y) out of the image.");
  if ( a5 < 0.0 )
    sub_422090("isaligned: `prec` must be positive.");
  v6 = *(double *)(*a3 + 8 * (a1 + a2 * v5));
  if ( v6 == -1024.0 )
    return 0;
  v8 = a4 - v6;
  if ( a4 - v6 < 0.0 )
    v8 = -v8;
  if ( v8 > 4.71238898038 )
  {
    v8 = v8 - 6.28318530718;
    if ( v8 < 0.0 )
      v8 = -v8;
  }
  return a5 >= v8;
}
unsigned long * sub_422DD0(
        int a1,
        unsigned long *a2,
        long long a3,
        unsigned long *a4,
        unsigned long *a5,
        unsigned long *a6,
        unsigned int Count)
{
  unsigned int v7; 
  unsigned int v8; 
  unsigned long *v9; 
  unsigned int v10; 
  unsigned long long *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned long long *v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  double v22; 
  double v23; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  double v29; 
  char *v30; 
  int v31; 
  unsigned int v32; 
  int v33; 
  unsigned int *v34; 
  unsigned int v35; 
  void *v36; 
  char *v37; 
  int v38; 
  int v39; 
  int v40; 
  int v42; 
  int v43; 
  char *Block; 
  int v45; 
  unsigned int v46; 
  unsigned long *v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned long *v51; 
  unsigned int v52; 
  int v53; 
  int v54; 
  int v55; 
  unsigned int v56; 
  unsigned int v57; 
  int v58; 
  char *v59; 
  int v60; 
  unsigned long *v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 

  v45 = 0;
  v62 = 0.0;
  v42 = a1;
  if ( !a2 || !*a2 || (v7 = a2[1], (v46 = v7) == 0) || (v8 = a2[2], (v48 = v8) == 0) )
    sub_422090("ll_angle: invalid image.");
  if ( *(double *)&a3 < 0.0 )
    sub_422090("ll_angle: `threshold` must be positive.");
  if ( !a4 )
    sub_422090("ll_angle: NULL pointer `list_p`.");
  if ( !a5 )
    sub_422090("ll_angle: NULL pointer `mem_p`.");
  if ( !a6 )
    sub_422090("ll_angle: NULL pointer `modgrad`.");
  if ( !Count )
    sub_422090("ll_angle: `n_bins` must be positive.");
  v47 = sub_423520(v7, v8);
  *a6 = sub_423520(a2[1], a2[2]);
  v59 = (char *)calloc((v46 * (unsigned long long)v48) >> 32 != 0 ? -1 : v46 * v48, 0xCu);
  *a5 = v59;
  Block = (char *)calloc(Count, 4u);
  v9 = calloc(Count, 4u);
  v51 = v9;
  if ( !v59 || !Block || !v9 )
    sub_422090("not enough memory.");
  memset(v9, 0, 4 * ((4 * Count) >> 2));
  memset(Block, 0, 4 * ((4 * Count) >> 2));
  v10 = v46;
  if ( v46 )
  {
    v11 = (unsigned long long *)(*v47 + 8 * v46 * (v48 - 1));
    *v11 = 0xC090000000000000ui64;
    qmemcpy(v11 + 1, v11, 4 * ((8 * v46 - 5) >> 2));
  }
  v12 = v48;
  if ( v48 )
  {
    v13 = v48;
    v14 = (unsigned long long *)(8 * v46 + *v47 - 8);
    do
    {
      *v14 = 0xC090000000000000ui64;
      v14 += v46;
      --v13;
    }
    while ( v13 );
    v10 = v46;
  }
  v15 = v10 - 1;
  v50 = v10 - 1;
  if ( v10 != 1 )
  {
    v16 = v48 - 1;
    v57 = v10 - 1;
    v17 = 0;
    v18 = 8 * v10;
    v53 = 0;
    v55 = v18;
    v19 = v15;
    do
    {
      if ( v16 )
      {
        v20 = v17;
        v21 = v18;
        v61 = (unsigned long *)*a6;
        v52 = v48 - 1;
        do
        {
          v22 = *(double *)(*a2 + v20 + 8) - *(double *)(*a2 + v21);
          v23 = *(double *)(*a2 + v21 + 8) - *(double *)(*a2 + v20);
          v64 = v22 + v23;
          v63 = v23 - v22;
          v65 = *(double *)libm_sse2_sqrt_precise(v42, v43, Block, v45).m128_u64;
          *(double *)(v20 + *v61) = v65;
          if ( *(double *)&a3 < v65 )
          {
            *(long double *)(*v47 + v20) = atan2(v64, -v63);
            if ( v65 > v62 )
              v62 = v65;
          }
          else
          {
            *(unsigned long long *)(*v47 + v20) = 0xC090000000000000ui64;
          }
          v21 += 8 * v46;
          v20 += 8 * v46;
          --v52;
        }
        while ( v52 );
        v17 = v53;
        v18 = v55;
        v19 = v57;
        v16 = v48 - 1;
      }
      v17 += 8;
      v18 += 8;
      --v19;
      v53 = v17;
      v55 = v18;
      v57 = v19;
    }
    while ( v19 );
    v12 = v48;
    v15 = v50;
  }
  v24 = 0;
  v49 = 0;
  if ( v15 )
  {
    v25 = v12 - 1;
    v26 = 0;
    v27 = v50;
    v56 = v25;
    v54 = 0;
    do
    {
      v28 = 0;
      if ( v25 )
      {
        v29 = (double)Count;
        v30 = &v59[12 * v45];
        v31 = v26;
        v58 = v26;
        do
        {
          v32 = (unsigned int)(*(double *)(*(unsigned long *)*a6 + v31) * v29 / v62);
          if ( v32 >= Count )
            v32 = Count - 1;
          ++v45;
          v33 = v51[v32];
          v51[v32] = v30;
          if ( v33 )
            *(unsigned long *)(v33 + 8) = v30;
          else
            *(unsigned long *)&Block[4 * v32] = v30;
          v34 = (unsigned int *)v51[v32];
          v30 += 12;
          v29 = (double)Count;
          *v34 = v49;
          v34[1] = v28++;
          v34[2] = 0;
          v31 = 8 * v46 + v58;
          v58 = v31;
        }
        while ( v28 < v56 );
        v24 = v49;
        v25 = v56;
        v26 = v54;
        v27 = v50;
      }
      ++v24;
      v26 += 8;
      v49 = v24;
      v54 = v26;
    }
    while ( v24 < v27 );
  }
  v35 = Count - 1;
  if ( Count != 1 )
  {
    do
    {
      if ( *(unsigned long *)&Block[4 * v35] )
        break;
      --v35;
    }
    while ( v35 );
  }
  v36 = v51;
  v37 = &Block[4 * v35];
  v38 = *(unsigned long *)v37;
  v60 = *(unsigned long *)v37;
  v39 = v51[v35];
  if ( *(unsigned long *)v37 && v35 )
  {
    do
    {
      v40 = *((unsigned long *)v37 - 1);
      v37 -= 4;
      --v35;
      if ( v40 )
      {
        *(unsigned long *)(v39 + 8) = v40;
        v39 = *(unsigned long *)&v37[(char *)v51 - Block];
      }
    }
    while ( v35 );
    v36 = v51;
    v38 = v60;
  }
  *a4 = v38;
  free(Block);
  free(v36);
  return v47;
}
double  sub_423270@<st0>(int a1@<esi>, double a2)
{
  double v2; 
  int v3; 
  double v4; 
  double v6; 
  double v7; 

  v2 = *(double *)libm_sse2_log_precise(a1).m128_u64;
  v3 = 0;
  v6 = 0.0;
  v7 = v2 * (a2 + 0.5) - (a2 + 5.5);
  do
  {
    v7 = v7 - *(double *)libm_sse2_log_precise(LODWORD(v6)).m128_u64;
    v4 = *(double *)libm_sse2_pow_precise().m128_u64 * qword_43E010[v3++];
    v6 = v4 + v6;
  }
  while ( v3 < 7 );
  return *(double *)libm_sse2_log_precise(LODWORD(v6)).m128_u64 + v7;
}
double  sub_423330(double a1)
{
  double v1; 
  double v2; 
  double v4; 

  v1 = *(double *)libm_sse2_pow_precise().m128_u64;
  v4 = *(double *)libm_sse2_log_precise(COERCE_UNSIGNED_INT64(1.0 / (v1 * 810.0))).m128_u64 * (a1 * 0.5);
  v2 = *(double *)libm_sse2_log_precise(LODWORD(v4)).m128_u64;
  return v4 + v2 * (a1 - 0.5) + 0.918938533204673 - a1;
}
int  sub_4233F0(double a1@<st0>, unsigned long *a2, int a3, int a4, int a5)
{
  return sub_4217B0(
           a1,
           a2,
           a3,
           a4,
           a5,
           0x3FE999999999999Ai64,
           0x3FE999999999999Ai64,
           0x4000000000000000i64,
           0x402E000000000000i64,
           0x4000000000000000i64,
           0x3FE999999999999Ai64,
           1024,
           0,
           0,
           0);
}
unsigned long * sub_423450(unsigned int a1, unsigned int a2)
{
  unsigned long *v2; 
  void *v3; 
  unsigned long *result; 

  if ( !a1 || !a2 )
    sub_422090("new_image_char: invalid image size.");
  v2 = malloc(0xCu);
  if ( !v2 )
    sub_422090("not enough memory.");
  v3 = calloc((a2 * (unsigned long long)a1) >> 32 != 0 ? -1 : a2 * a1, 1u);
  *v2 = v3;
  if ( !v3 )
    sub_422090("not enough memory.");
  v2[1] = a1;
  result = v2;
  v2[2] = a2;
  return result;
}
void ** sub_4234C0(unsigned int a1, unsigned int a2, unsigned char a3)
{
  void **result; 
  unsigned int v4; 
  char *v5; 

  result = (void **)sub_423450(a1, a2);
  v4 = a2 * a1;
  if ( !result || (v5 = (char *)*result) == 0 )
    sub_422090("new_image_char_ini: invalid image.");
  if ( v4 )
  {
    memset32(v5, 16843009 * a3, v4 >> 2);
    memset(&v5[4 * (v4 >> 2)], a3, v4 & 3);
  }
  return result;
}
unsigned long * sub_423520(unsigned int a1, unsigned int a2)
{
  unsigned long *v2; 
  void *v3; 
  unsigned long *result; 

  if ( !a1 || !a2 )
    sub_422090("new_image_double: invalid image size.");
  v2 = malloc(0xCu);
  if ( !v2 )
    sub_422090("not enough memory.");
  v3 = calloc((a2 * (unsigned long long)a1) >> 32 != 0 ? -1 : a2 * a1, 8u);
  *v2 = v3;
  if ( !v3 )
    sub_422090("not enough memory.");
  v2[1] = a1;
  result = v2;
  v2[2] = a2;
  return result;
}
unsigned long * sub_423590(int a1, int a2, int a3)
{
  unsigned long *result; 

  if ( !a1 || !a2 )
    sub_422090("new_image_double_ptr: invalid image size.");
  if ( !a3 )
    sub_422090("new_image_double_ptr: NULL data pointer.");
  result = malloc(0xCu);
  if ( !result )
    sub_422090("not enough memory.");
  result[2] = a2;
  result[1] = a1;
  *result = a3;
  return result;
}
unsigned long * sub_4235F0(unsigned int a1, unsigned int a2)
{
  unsigned long *v2; 
  void *v3; 
  unsigned long *result; 

  if ( !a1 || !a2 )
    sub_422090("new_image_int: invalid image size.");
  v2 = malloc(0xCu);
  if ( !v2 )
    sub_422090("not enough memory.");
  v3 = calloc((a2 * (unsigned long long)a1) >> 32 != 0 ? -1 : a2 * a1, 4u);
  *v2 = v3;
  if ( !v3 )
    sub_422090("not enough memory.");
  v2[1] = a1;
  result = v2;
  v2[2] = a2;
  return result;
}
unsigned long * sub_423660(unsigned int a1)
{
  unsigned long *v1; 
  unsigned long *v2; 
  void *v3; 

  if ( !a1 )
    sub_422090("new_ntuple_list: `dim` must be positive.");
  v1 = malloc(0x10u);
  v2 = v1;
  if ( !v1 )
    sub_422090("not enough memory.");
  *v1 = 0;
  v1[1] = 1;
  v1[2] = a1;
  v3 = malloc((unsigned long long)a1 >> 29 != 0 ? -1 : 8 * a1);
  v2[3] = v3;
  if ( !v3 )
    sub_422090("not enough memory.");
  return v2;
}
double  sub_4236E0@<st0>(int a1@<esi>, int a2, int a3, double a4, double a5)
{
  double v7; 
  double v8; 
  int v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  int v14; 
  int v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  int v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  int v29; 

  if ( a2 < 0 || a3 < 0 || a3 > a2 || a4 <= 0.0 || a4 >= 1.0 )
    sub_422090("nfa: wrong n, k or p values.");
  if ( !a2 || !a3 )
    return -a5;
  if ( a2 == a3 )
    return -a5 - *(double *)libm_sse2_log10_precise().m128_u64 * (double)a2;
  v23 = a4 / (1.0 - a4);
  v19 = (double)a2 + 1.0;
  if ( v19 <= 15.0 )
    v7 = sub_423270(a1, v19);
  else
    v7 = sub_423330(v19);
  v28 = v7;
  v20 = (double)a3 + 1.0;
  if ( v20 <= 15.0 )
    v8 = sub_423270(a1, v20);
  else
    v8 = sub_423330(v20);
  v27 = v8;
  v9 = a2 - a3;
  v18 = (double)(a2 - a3) + 1.0;
  if ( v18 <= 15.0 )
    v10 = sub_423270(v9, v18);
  else
    v10 = sub_423330(v18);
  v26 = *(double *)libm_sse2_log_precise(a1).m128_u64 * (double)a3 + v28 - v27 - v10;
  v24 = v26 + *(double *)libm_sse2_log_precise(v22).m128_u64 * (double)v9;
  *(unsigned long long *)&v11 = libm_sse2_exp_precise().m128_u64[0];
  v12 = v11;
  if ( sub_421FB0(v11, 0.0) )
  {
    if ( (double)a3 <= (double)a2 * a4 )
      return -a5;
    else
      return v24 / -2.302585092994046 - a5;
  }
  else
  {
    v13 = v11;
    v14 = a3 + 1;
    if ( a3 + 1 <= a2 )
    {
      v15 = a2 - a3;
      v29 = a2 - a3;
      do
      {
        if ( v14 >= 100000 )
        {
          v16 = 1.0 / (double)v14;
        }
        else
        {
          v16 = qword_43E468[v14];
          if ( v16 == 0.0 )
          {
            v16 = 1.0 / (double)v14;
            qword_43E468[v14] = v16;
          }
        }
        v17 = (double)v15 * v16;
        v12 = v12 * (v17 * v23);
        v13 = v13 + v12;
        if ( v17 < 1.0 )
        {
          v25 = ((1.0 - *(double *)libm_sse2_pow_precise().m128_u64) / (1.0 - v17 * v23) - 1.0) * v12;
          if ( fabs(-*(double *)libm_sse2_log10_precise().m128_u64 - a5) * 0.1 * v13 > v25 )
            return -*(double *)libm_sse2_log10_precise().m128_u64 - a5;
          v15 = v29;
        }
        ++v14;
        v29 = --v15;
      }
      while ( v14 <= a2 );
    }
    return -*(double *)libm_sse2_log10_precise().m128_u64 - a5;
  }
}
double  sub_423A70@<st0>(double result@<st0>, double *a2, unsigned long *a3, double a4, double a5)
{
  double v5; 
  int v6; 
  double v7; 
  int v8; 
  double v9; 
  int v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  int v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  int v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 

  sub_4243C0(a2, a3, a4);
  v49 = result;
  if ( result <= a5 )
  {
    if ( !a2 )
      sub_422090("rect_copy: invalid `in` or `out`.");
    v47 = *a2;
    v24 = v47;
    v5 = a2[11];
    v48 = a2[1];
    v25 = v48;
    v44 = a2[2];
    v26 = v44;
    v45 = a2[3];
    v27 = v45;
    v43 = a2[4];
    v28 = v43;
    v42 = a2[5];
    v29 = v42;
    v41 = a2[6];
    v30 = v41;
    v38 = a2[7];
    v31 = v38;
    v40 = a2[8];
    v32 = v40;
    v39 = a2[9];
    v6 = 5;
    v33 = v39;
    do
    {
      v46 = v5 * 0.5;
      v35 = v5 * 0.5;
      v37 = v5 * 0.5 * 3.141592653589793;
      v34 = v37;
      sub_4243C0(&v24, a3, a4);
      v7 = v49;
      v36 = result;
      if ( result <= v49 )
      {
        v5 = v46;
      }
      else
      {
        v7 = result;
        *a2 = v47;
        a2[1] = v48;
        a2[2] = v44;
        a2[3] = v45;
        a2[4] = v43;
        a2[5] = v42;
        a2[6] = v41;
        a2[7] = v38;
        a2[8] = v40;
        a2[9] = v39;
        a2[10] = v37;
        v5 = v46;
        v49 = result;
        a2[11] = v46;
      }
      --v6;
    }
    while ( v6 );
    if ( v7 <= a5 )
    {
      v8 = 5;
      v37 = *a2;
      v24 = v37;
      v39 = a2[1];
      v25 = v39;
      v9 = a2[4];
      v40 = a2[2];
      v26 = v40;
      v38 = a2[3];
      v27 = v38;
      v41 = a2[5];
      v29 = v41;
      v47 = a2[6];
      v30 = v47;
      v48 = a2[7];
      v31 = v48;
      v44 = a2[8];
      v32 = v44;
      v45 = a2[9];
      v33 = v45;
      v43 = a2[10];
      v34 = v43;
      v42 = a2[11];
      v35 = v42;
      do
      {
        if ( v9 - 0.5 >= 0.5 )
        {
          v46 = v9 - 0.5;
          v28 = v9 - 0.5;
          sub_4243C0(&v24, a3, a4);
          v7 = v49;
          v9 = v46;
          v36 = result;
          if ( result > v49 )
          {
            *a2 = v37;
            a2[1] = v39;
            a2[2] = v40;
            a2[3] = v38;
            a2[5] = v41;
            a2[6] = v47;
            a2[7] = v48;
            a2[8] = v44;
            a2[9] = v45;
            a2[10] = v43;
            a2[11] = v42;
            v7 = result;
            a2[4] = v9;
            v49 = result;
          }
        }
        --v8;
      }
      while ( v8 );
      if ( v7 <= a5 )
      {
        v10 = 5;
        v11 = *a2;
        v12 = a2[1];
        v13 = a2[2];
        v14 = a2[3];
        v15 = a2[4];
        v37 = a2[5];
        v29 = v37;
        v39 = a2[6];
        v30 = v39;
        v40 = a2[7];
        v31 = v40;
        v46 = a2[8];
        v32 = v46;
        v42 = a2[9];
        v33 = v42;
        v38 = a2[10];
        v34 = v38;
        v41 = a2[11];
        v35 = v41;
        do
        {
          if ( v15 - 0.5 >= 0.5 )
          {
            v43 = v15 - 0.5;
            v28 = v15 - 0.5;
            v45 = v11 - v42 * 0.25;
            v24 = v45;
            v48 = v12 + v46 * 0.25;
            v25 = v48;
            v44 = v13 - v42 * 0.25;
            v26 = v44;
            v47 = v14 + v46 * 0.25;
            v27 = v47;
            sub_4243C0(&v24, a3, a4);
            v7 = v49;
            v11 = v45;
            v12 = v48;
            v13 = v44;
            v14 = v47;
            v15 = v43;
            v36 = result;
            if ( result > v49 )
            {
              a2[5] = v37;
              a2[6] = v39;
              a2[7] = v40;
              a2[8] = v46;
              a2[9] = v42;
              a2[10] = v38;
              a2[11] = v41;
              v7 = result;
              *a2 = v11;
              a2[1] = v12;
              a2[2] = v13;
              a2[3] = v14;
              a2[4] = v15;
              v49 = result;
            }
          }
          --v10;
        }
        while ( v10 );
        if ( v7 <= a5 )
        {
          v16 = 5;
          v17 = *a2;
          v18 = a2[1];
          v19 = a2[2];
          v20 = a2[3];
          v21 = a2[4];
          v37 = a2[5];
          v29 = v37;
          v39 = a2[6];
          v30 = v39;
          v40 = a2[7];
          v31 = v40;
          v47 = a2[8];
          v32 = v47;
          v48 = a2[9];
          v33 = v48;
          v38 = a2[10];
          v34 = v38;
          v41 = a2[11];
          v35 = v41;
          do
          {
            if ( v21 - 0.5 >= 0.5 )
            {
              v44 = v21 - 0.5;
              v28 = v21 - 0.5;
              v45 = v17 - v48 * -0.25;
              v24 = v45;
              v43 = v18 - v47 * 0.25;
              v25 = v43;
              v42 = v19 - v48 * -0.25;
              v26 = v42;
              v46 = v20 - v47 * 0.25;
              v27 = v46;
              sub_4243C0(&v24, a3, a4);
              v7 = v49;
              v17 = v45;
              v18 = v43;
              v19 = v42;
              v20 = v46;
              v21 = v44;
              v36 = result;
              if ( result > v49 )
              {
                a2[5] = v37;
                a2[6] = v39;
                a2[7] = v40;
                a2[8] = v47;
                a2[9] = v48;
                a2[10] = v38;
                a2[11] = v41;
                v7 = result;
                *a2 = v17;
                a2[1] = v18;
                a2[2] = v19;
                a2[3] = v20;
                a2[4] = v21;
                v49 = result;
              }
            }
            --v16;
          }
          while ( v16 );
          if ( v7 <= a5 )
          {
            v22 = 5;
            v37 = *a2;
            v24 = v37;
            v39 = a2[1];
            v25 = v39;
            v40 = a2[2];
            v26 = v40;
            v38 = a2[3];
            v27 = v38;
            v41 = a2[4];
            v28 = v41;
            v47 = a2[5];
            v29 = v47;
            v48 = a2[6];
            v30 = v48;
            v44 = a2[7];
            v31 = v44;
            v45 = a2[8];
            v32 = v45;
            v43 = a2[9];
            v33 = v43;
            v23 = a2[11];
            do
            {
              v50 = v23 * 0.5;
              v35 = v23 * 0.5;
              v42 = v23 * 0.5 * 3.141592653589793;
              v34 = v42;
              sub_4243C0(&v24, a3, a4);
              v36 = result;
              if ( result <= v49 )
              {
                v23 = v23 * 0.5;
              }
              else
              {
                v49 = result;
                *a2 = v37;
                a2[1] = v39;
                a2[2] = v40;
                a2[3] = v38;
                a2[4] = v41;
                a2[5] = v47;
                a2[6] = v48;
                a2[7] = v44;
                a2[8] = v45;
                a2[9] = v43;
                a2[10] = v42;
                v23 = v23 * 0.5;
                a2[11] = v50;
              }
              --v22;
            }
            while ( v22 );
          }
        }
      }
    }
    return v49;
  }
  return result;
}
void  sub_4243C0(double *a1, unsigned long *a2, double a3)
{
  int v3; 
  double *v4; 
  int v5; 
  int v6; 
  int v7; 

  v7 = 0;
  v3 = 0;
  if ( !a1 )
    sub_422090("rect_nfa: invalid rectangle.");
  if ( !a2 )
    sub_422090("rect_nfa: invalid `angles`.");
  v4 = sub_425200(a1);
  if ( !v4 )
    sub_422090("ri_end: NULL iterator.");
  while ( 1 )
  {
    v5 = *((unsigned long *)v4 + 20);
    if ( (double)v5 > v4[2] )
      break;
    if ( v5 >= 0 )
    {
      v6 = *((unsigned long *)v4 + 21);
      if ( v6 >= 0 && v5 < a2[1] && v6 < a2[2] )
      {
        ++v7;
        if ( sub_422D00(v5, v6, a2, a1[7], a1[10]) )
          ++v3;
      }
    }
    sub_425060((int)v4);
  }
  free(v4);
  sub_4236E0((int)v4, v7, v3, a1[11], a3);
}
int  sub_4244C0(
        int a1,
        int *a2,
        unsigned long *a3,
        double a4,
        double a5,
        long long a6,
        int a7,
        unsigned long *a8,
        unsigned long *a9,
        double a10)
{
  double v11; 
  double v12; 
  int v13; 
  int v14; 
  double v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  double v32; 
  double i; 
  double v34; 
  double v35; 

  if ( !a1 )
    sub_422090("reduce_region_radius: invalid pointer `reg`.");
  if ( !a2 )
    sub_422090("reduce_region_radius: invalid pointer `reg_size`.");
  if ( a5 < 0.0 )
    sub_422090("reduce_region_radius: `prec` must be positive.");
  if ( !a7 )
    sub_422090("reduce_region_radius: invalid pointer `rec`.");
  if ( !a8 || !*a8 )
    sub_422090("reduce_region_radius: invalid image `used`.");
  if ( !a9 || !*a9 )
    sub_422090("reduce_region_radius: invalid image `angles`.");
  v34 = (double)*a2;
  v35 = v34 / (*(double *)libm_sse2_sqrt_precise(v16, v20, v24, v28).m128_u64 * *(double *)(a7 + 32));
  if ( v35 >= a10 )
    return 1;
  v32 = *(double *)libm_sse2_sqrt_precise(v17, v21, v25, v29).m128_u64;
  v11 = *(double *)libm_sse2_sqrt_precise(v18, v22, v26, v30).m128_u64;
  v12 = v32;
  if ( v32 <= v11 )
    v12 = v11;
  if ( a10 <= v35 )
    return 1;
  while ( 1 )
  {
    v13 = 0;
    for ( i = v12 * 0.75; v13 < *a2; ++v13 )
    {
      if ( *(double *)libm_sse2_sqrt_precise(v19, v23, v27, v31).m128_u64 > i )
      {
        *(unsigned char *)(*(unsigned long *)(a1 + 8 * v13) + *(unsigned long *)(a1 + 8 * v13 + 4) * a8[1] + *a8) = 0;
        *(unsigned long *)(a1 + 8 * v13) = *(unsigned long *)(a1 + 8 * *a2 - 8);
        *(unsigned long *)(a1 + 8 * v13-- + 4) = *(unsigned long *)(a1 + 8 * (*a2)-- - 4);
      }
    }
    if ( *a2 < 2 )
      break;
    sub_424B60(a1, *a2, a3, a4, a5, a6, a7);
    v14 = *a2;
    v15 = (double)v14 / (*(double *)libm_sse2_sqrt_precise(v19, v23, v27, v31).m128_u64 * *(double *)(a7 + 32));
    v12 = i;
    if ( a10 <= v15 )
      return 1;
  }
  return 0;
}

int  sub_424790(
        int *a1,
        int *a2,
        unsigned long *a3,
        double a4,
        double a5,
        long long a6,
        int a7,
        unsigned long *a8,
        unsigned long *a9,
        double a10)
{
  unsigned long *v10; 
  int v11; 
  int v12; 
  double v13; 
  double v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  double i; 
  int *v21; 
  double v22; 
  double v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  unsigned long *v36; 
  int v37; 
  int v38; 
  unsigned long *v39; 
  double v40; 
  double v41; 
  double v42; 

  v37 = a7;
  v10 = a9;
  v39 = a9;
  v36 = a8;
  if ( !a1 )
    sub_422090("refine: invalid pointer `reg`.");
  if ( !a2 )
    sub_422090("refine: invalid pointer `reg_size`.");
  v40 = 0.0;
  if ( a5 < 0.0 )
    sub_422090("refine: `prec` must be positive.");
  if ( !a7 )
    sub_422090("refine: invalid pointer `rec`.");
  if ( !a8 || !*a8 )
    sub_422090("refine: invalid image `used`.");
  if ( !a9 || (v11 = *a9) == 0 )
    sub_422090("refine: invalid image `angles`.");
  v12 = *a2;
  v13 = *(double *)libm_sse2_sqrt_precise(v24, v27, v30, v33).m128_u64;
  if ( (double)v12 / (v13 * *(double *)(v37 + 32)) >= a10 )
    return 1;
  v15 = *(double *)(v11 + 8 * (*a1 + a1[1] * v10[1]));
  v16 = 0;
  v38 = 0;
  v42 = v15;
  v41 = 0.0;
  if ( v12 <= 0 )
  {
    v21 = a2;
  }
  else
  {
    do
    {
      *(unsigned char *)(a1[2 * v16] + a1[2 * v16 + 1] * v36[1] + *v36) = 0;
      v17 = a1[2 * v16];
      v18 = a1[2 * v16 + 1];
      if ( *(double *)(v37 + 32) <= *(double *)libm_sse2_sqrt_precise(v25, v28, v31, v34).m128_u64 )
      {
        v10 = v39;
      }
      else
      {
        v19 = v18 * v39[1];
        v10 = v39;
        for ( i = *(double *)(*v39 + 8 * (v17 + v19)) - v42; i <= -3.141592653589793; i = i + 6.28318530718 )
          ;
        for ( ; i > 3.141592653589793; i = i - 6.28318530718 )
          ;
        ++v38;
        v41 = i + v41;
        v40 = v40 + i * i;
      }
      v21 = a2;
      ++v16;
    }
    while ( v16 < *a2 );
  }
  v22 = *(double *)libm_sse2_sqrt_precise(v25, v28, v31, v34).m128_u64;
  sub_424E00(*a1, a1[1], v10, a1, v21, &a4, v36, v22 * 2.0);
  if ( *v21 < 2 )
    return 0;
  sub_424B60((int)a1, *v21, a3, a4, a5, a6, v37);
  v23 = (double)*a2 / (*(double *)libm_sse2_sqrt_precise(v26, v29, v32, v35).m128_u64 * *(double *)(v37 + 32));
  if ( a10 <= v23 )
    return 1;
  return sub_4244C0((int)a1, a2, a3, a4, a5, a6, v37, v36, v10, a10);
}
int  sub_424B60(int a1, int a2, unsigned long *a3, double a4, double a5, long long a6, int a7)
{
  long long v7; 
  double v8; 
  double v9; 
  double v10; 
  int v11; 
  int v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  int v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  int result; 
  int v26; 
  int v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 

  LODWORD(v7) = a1;
  if ( !a1 )
    sub_422090("region2rect: invalid region.");
  if ( a2 <= 1 )
    sub_422090("region2rect: region size <= 1.");
  if ( !a3 || !*a3 )
    sub_422090("region2rect: invalid image `modgrad`.");
  if ( !a7 )
    sub_422090("region2rect: invalid `rec`.");
  HIDWORD(v7) = 0;
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  do
  {
    v11 = *(unsigned long *)(v7 + 8 * HIDWORD(v7) + 4);
    v12 = *(unsigned long *)(v7 + 8 * HIDWORD(v7)++);
    v13 = *(double *)(*a3 + 8 * (v12 + a3[1] * v11));
    LODWORD(v7) = a1;
    v8 = v8 + v13;
    v10 = v10 + (double)v12 * v13;
    v9 = v9 + (double)v11 * v13;
  }
  while ( SHIDWORD(v7) < a2 );
  if ( v8 <= 0.0 )
    sub_422090("region2rect: weights sum equal to zero.");
  v28 = v9 / v8;
  v30 = sub_422760(v7, a1, a2, v10 / v8, v9 / v8, a3, a4, a5);
  *(unsigned long long *)&v31 = libm_sse2_cos_precise(v26, v27).m128_u64[0];
  *(unsigned long long *)&v14 = libm_sse2_sin_precise().m128_u64[0];
  v15 = v10 / v8;
  v16 = 0.0;
  v17 = 0.0;
  v33 = v14;
  v18 = 0;
  v32 = 0.0;
  v29 = 0.0;
  while ( 1 )
  {
    v19 = (double)*(int *)(a1 + 8 * v18 + 4) - v28;
    v20 = (double)*(int *)(a1 + 8 * v18) - v15;
    v21 = v19 * v14 + v20 * v31;
    v22 = v19 * v31 - v20 * v33;
    v23 = v29;
    if ( v21 > v29 )
    {
      v23 = v21;
      v29 = v21;
    }
    if ( v17 > v21 )
      v17 = v21;
    if ( v22 > v16 )
      v16 = v22;
    if ( v32 <= v22 )
      v22 = v32;
    else
      v32 = v22;
    if ( ++v18 >= a2 )
      break;
    v14 = v33;
  }
  v24 = v16 - v22;
  result = a7;
  *(double *)(a7 + 32) = v24;
  *(double *)(a7 + 40) = v15;
  *(double *)(a7 + 48) = v28;
  *(double *)(a7 + 64) = v31;
  *(double *)a7 = v17 * v31 + v15;
  *(double *)(a7 + 8) = v17 * v33 + v28;
  *(double *)(a7 + 16) = v23 * v31 + v15;
  *(double *)(a7 + 72) = v33;
  *(double *)(a7 + 80) = a5;
  *(unsigned long long *)(a7 + 88) = a6;
  *(double *)(a7 + 24) = v23 * v33 + v28;
  *(double *)(a7 + 56) = v30;
  if ( v24 < 1.0 )
    *(unsigned long long *)(a7 + 32) = 0x3FF0000000000000i64;
  return result;
}
int  sub_424E00(int a1, int a2, unsigned long *a3, int *a4, unsigned long *a5, double *a6, unsigned long *a7, double a8)
{
  int *v8; 
  unsigned long long v9; 
  unsigned long *v10; 
  unsigned long *v11; 
  int result; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  double v23; 
  double v24; 
  int v25; 
  int i; 

  if ( a1 < 0 || a2 < 0 || a1 >= a3[1] || a2 >= a3[2] )
    sub_422090("region_grow: (x,y) out of the image.");
  if ( !*a3 )
    sub_422090("region_grow: invalid image `angles`.");
  v8 = a4;
  if ( !a4 )
    sub_422090("region_grow: invalid `reg`.");
  if ( !a5 )
    sub_422090("region_grow: invalid pointer `reg_size`.");
  if ( !a6 )
    sub_422090("region_grow: invalid pointer `reg_angle`.");
  if ( !a7 || !*a7 )
    sub_422090("region_grow: invalid image `used`.");
  *a5 = 1;
  a4[1] = a2;
  *a4 = a1;
  *a6 = *(double *)(*a3 + 8 * (a1 + a2 * a3[1]));
  *(unsigned long long *)&v24 = libm_sse2_cos_precise(v19, v21).m128_u64[0];
  v9 = libm_sse2_sin_precise().m128_u64[0];
  v10 = a7;
  v11 = a5;
  v23 = *(double *)&v9;
  *(unsigned char *)(*a7 + a2 * a7[1] + a1) = 1;
  result = 0;
  for ( i = 0; result < *v11; i = result )
  {
    v13 = v8[2 * result];
    v14 = v13 - 1;
    v25 = v13 - 1;
    if ( v13 - 1 <= v13 + 1 )
    {
      do
      {
        v15 = v8[2 * i + 1];
        v16 = v15 - 1;
        if ( v15 - 1 <= v15 + 1 )
        {
          v17 = i;
          do
          {
            if ( v14 >= 0 && v16 >= 0 )
            {
              v18 = v10[1];
              if ( v14 < v18 && v16 < v10[2] && *(unsigned char *)(*v10 + v16 * v18 + v14) != 1 )
              {
                if ( sub_422D00(v14, v16, a3, *a6, a8) )
                {
                  *(unsigned char *)(*v10 + v16 * v10[1] + v14) = 1;
                  a4[2 * *a5] = v14;
                  a4[2 * (*a5)++ + 1] = v16;
                  v24 = *(double *)libm_sse2_cos_precise(v20, v22).m128_u64 + v24;
                  v23 = *(double *)libm_sse2_sin_precise().m128_u64 + v23;
                  v14 = v25;
                  v10 = a7;
                  *a6 = atan2(v23, v24);
                }
                v17 = i;
              }
            }
            ++v16;
          }
          while ( v16 <= a4[2 * v17 + 1] + 1 );
        }
        v8 = a4;
        v25 = ++v14;
      }
      while ( v14 <= a4[2 * i] + 1 );
      v11 = a5;
    }
    result = i + 1;
  }
  return result;
}
long long  sub_425060@<xmm0>(int a1)
{
  long long result; 
  int v2; 
  double v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  int v10; 

  if ( !a1 )
    sub_422090("ri_inc: NULL iterator.");
  if ( (double)*(int *)(a1 + 80) <= *(double *)(a1 + 16) )
    ++*(unsigned long *)(a1 + 84);
  *(double *)&result = (double)*(int *)(a1 + 84);
  if ( *(double *)&result > *(double *)(a1 + 72) )
  {
    do
    {
      v2 = *(unsigned long *)(a1 + 80);
      *(double *)&result = (double)v2;
      if ( (double)v2 > *(double *)(a1 + 16) )
        break;
      v3 = (double)(v2 + 1);
      *(unsigned long *)(a1 + 80) = v2 + 1;
      v4 = *(double *)(a1 + 16);
      if ( v3 > v4 )
        break;
      v5 = *(double *)(a1 + 24);
      v6 = v5 <= v3
         ? sub_422BB0(v3, v5, *(double *)(a1 + 56), v4, *(double *)(a1 + 48))
         : sub_422BB0(v3, *(double *)a1, *(double *)(a1 + 32), v5, *(double *)(a1 + 56));
      v7 = (double)*(int *)(a1 + 80);
      *(double *)(a1 + 64) = v6;
      v8 = *(double *)(a1 + 8);
      v9 = v8 <= v7
         ? sub_422A60(v7, v8, *(double *)(a1 + 40), *(double *)(a1 + 16), *(double *)(a1 + 48))
         : sub_422A60(v7, *(double *)a1, *(double *)(a1 + 32), v8, *(double *)(a1 + 40));
      *(double *)(a1 + 72) = v9;
      v10 = (int)ceil(*(double *)(a1 + 64));
      *(unsigned long *)(a1 + 84) = v10;
      *(double *)&result = (double)v10;
    }
    while ( (double)v10 > *(double *)(a1 + 72) );
  }
  return result;
}
double * sub_425200(double *a1)
{
  double *v1; 
  double v2; 
  double v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  double v12; 
  double X; 
  double v15[4]; 
  double v16[4]; 
  double v17; 

  if ( !a1 )
    sub_422090("ri_ini: invalid rectangle.");
  v1 = (double *)malloc(0x58u);
  if ( !v1 )
    sub_422090("ri_ini: Not enough memory.");
  v2 = *a1;
  v3 = a1[9] * a1[4] * 0.5;
  v4 = a1[1];
  v5 = a1[8] * a1[4] * 0.5;
  v6 = a1[2];
  v7 = a1[3];
  v16[0] = *a1 - v3;
  v15[0] = v4 + v5;
  v16[1] = v6 - v3;
  v15[1] = v7 + v5;
  v16[2] = v6 + v3;
  v16[3] = v3 + v2;
  v15[2] = v7 - v5;
  v15[3] = v4 - v5;
  if ( v6 <= v2 || v7 < v4 )
  {
    if ( v2 < v6 )
      goto LABEL_11;
    if ( v7 > v4 )
    {
      v8 = 1;
      goto LABEL_12;
    }
    if ( v2 <= v6 || (v8 = 2, v4 < v7) )
LABEL_11:
      v8 = 3;
  }
  else
  {
    v8 = 0;
  }
LABEL_12:
  v17 = v16[v8];
  *v1 = v17;
  v1[4] = v15[v8];
  v9 = (v8 + 1) % 4;
  v1[1] = v16[v9];
  v1[5] = v15[v9];
  v10 = (v8 + 2) % 4;
  v1[2] = v16[v10];
  v1[6] = v15[v10];
  v11 = (v8 + 3) % 4;
  v12 = v17;
  v1[3] = v16[v11];
  v1[7] = v15[v11];
  v17 = ceil(v12);
  X = v1[4];
  *((unsigned long *)v1 + 20) = (int)v17 - 1;
  *((unsigned long *)v1 + 21) = (int)ceil(X);
  *((unsigned long long *)v1 + 4) = xmmword_43A0E0;
  sub_425060((int)v1);
  return v1;
}
int  sub_425400(int result, int a2, int a3)
{
  int v3; 

  v3 = (*(unsigned long *)(a2 + 12) - *(unsigned long *)(a2 + 8)) >> 5;
  if ( v3 > 0 )
  {
    result = 0;
    do
    {
      result += 32;
      *(unsigned long *)(result + *(unsigned long *)(a2 + 8) - 12) = a3;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
int  sub_425440(int a1, int a2, int a3)
{
  int result; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  double v11; 
  int v12; 
  int v13; 
  int v15; 

  result = a1;
  v4 = (*(unsigned long *)(a1 + 12) - *(unsigned long *)(a1 + 8)) >> 5;
  v15 = v4;
  if ( v4 > 0 )
  {
    v5 = *(unsigned long *)(a1 + 8);
    v6 = 0;
    do
    {
      v13 = 0;
      result = (*(unsigned long *)(v6 + v5 + 12) - *(unsigned long *)(v6 + v5 + 8)) / 40;
      if ( result > 0 )
      {
        v7 = 0;
        v12 = 0;
        do
        {
          v8 = *(unsigned long *)(v6 + *(unsigned long *)(a1 + 8) + 8);
          v9 = (int)*(double *)(v8 + v7 + 8);
          v10 = (int)*(double *)(v8 + v7 + 16);
          v11 = *(double *)libm_sse2_sqrt_precise(0, 0, 0, 1081073664).m128_u64;
          cvCircle(a3, v9, v10, (int)v11);
          v12 += 40;
          ++v13;
          v5 = *(unsigned long *)(a1 + 8);
          result = (*(unsigned long *)(v6 + v5 + 12) - *(unsigned long *)(v6 + v5 + 8)) / 40;
          v7 = v12;
        }
        while ( v13 < result );
        v4 = v15;
      }
      v6 += 32;
      v15 = --v4;
    }
    while ( v4 );
  }
  return result;
}
void  sub_425550(
        int a1,
        int a2,
        int a3,
        int *a4,
        double a5,
        double a6,
        int a7,
        double a8,
        double a9,
        double a10)
{
  int v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  int v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  bool v21; 
  int v22; 
  double v23; 
  double v24; 
  float v25; 
  float v26; 
  double v27; 
  double v28; 
  double v29; 
  float v30; 
  float v31; 
  double v32; 
  float v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  double v40; 
  double v41; 
  int v42; 
  double v43; 
  double v44; 
  double v45; 
  int v46; 
  double v47; 
  double v48; 
  char v49; 
  int v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  int v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  int v78; 
  double v79; 
  char v80[176]; 
  unsigned long v81[60]; 
  double v82; 
  double v83; 
  int v84; 

  v70 = a3;
  v75 = a9;
  sub_406C30(*(unsigned long long *)a7, *(double *)(a7 + 8), *(double *)(a7 + 16), &v57);
  sub_405EB0((int)v80, 4, a7 + 24, *(long long *)&v75);
  memset(v81, 0, sizeof(v81));
  sub_405E20((int)v81, 4, a7 + 24, *(long long *)&v75);
  v84 = 0;
  sub_406310((int)v81, (int)a4, a7 + 24);
  v10 = a4[1] - *a4;
  v11 = a8;
  v12 = v62;
  v13 = v59;
  v67 = a5 * a10;
  v66 = a6 * a10;
  v14 = v65;
  v78 = v10 / 40;
  if ( v10 / 40 > 0 )
  {
    v15 = v65 * COERCE_DOUBLE(*(unsigned long long *)&a8 ^ 0x8000000000000000ui64);
    v16 = 0;
    v17 = v59 * COERCE_DOUBLE(*(unsigned long long *)&a8 ^ 0x8000000000000000ui64);
    v18 = v65 * a8;
    v19 = v59 * a8;
    v68 = v15;
    v71 = v65 * a8;
    v75 = v17;
    v76 = v59 * a8;
    v77 = v62 * COERCE_DOUBLE(*(unsigned long long *)&a8 ^ 0x8000000000000000ui64);
    v69 = v62 * a8;
    do
    {
      v20 = *(float *)(v16 + *a4 + 4) - a6;
      v79 = *(float *)(v16 + *a4) - a5;
      v72 = v20;
      v73 = v58 * v20 + v57 * v79 + v17;
      v74 = sub_406A70((int)v80, -4.0, 0.0, -1.0, 1.0e-10, v73, v19, v64 * v20 + v63 * v79 + v15, v18);
      v79 = (v61 * v72 + v60 * v79 + v77) * v74 - v69;
      v21 = sub_406170(v81, v73 * v74 - v76, &v83) == 0;
      v22 = *a4;
      if ( v21 )
        goto LABEL_4;
      v23 = v58;
      v24 = v64;
      v25 = v67 - v83;
      *(float *)(v16 + v22) = v25;
      v26 = v66 - v79;
      *(float *)(v16 + *a4 + 4) = v26;
      v27 = *(float *)(v16 + *a4 + 20) - a6;
      v73 = *(float *)(v16 + *a4 + 16) - a5;
      v72 = v27;
      v79 = v23 * v27 + v57 * v73 + v75;
      v74 = sub_406A70((int)v80, -4.0, 0.0, -1.0, 1.0e-10, v79, v76, v24 * v27 + v63 * v73 + v68, v71);
      v52 = v79 * v74 - v76;
      v79 = (v61 * v72 + v60 * v73 + v77) * v74 - v69;
      v21 = sub_406170(v81, v52, &v83) == 0;
      v22 = *a4;
      if ( v21 )
        goto LABEL_4;
      v28 = v58;
      v29 = v64;
      v30 = v67 - v83;
      *(float *)(v16 + v22 + 16) = v30;
      v31 = v66 - v79;
      *(float *)(v16 + *a4 + 20) = v31;
      v32 = *(float *)(v16 + *a4 + 12) - a6;
      v73 = *(float *)(v16 + *a4 + 8) - a5;
      v72 = v32;
      v79 = v28 * v32 + v57 * v73 + v75;
      v74 = sub_406A70((int)v80, -4.0, 0.0, -1.0, 1.0e-10, v79, v76, v29 * v32 + v63 * v73 + v68, v71);
      v53 = v79 * v74 - v76;
      v79 = (v61 * v72 + v60 * v73 + v77) * v74 - v69;
      v21 = sub_406170(v81, v53, &v83) == 0;
      v22 = *a4;
      if ( v21 )
      {
LABEL_4:
        *(unsigned long *)(v16 + v22) = 0;
        *(unsigned long *)(v16 + *a4 + 4) = 0;
        *(unsigned long *)(v16 + *a4 + 16) = 0;
        *(unsigned long *)(v16 + *a4 + 20) = 0;
        *(unsigned long *)(v16 + *a4 + 8) = 0;
        *(unsigned long *)(v16 + *a4 + 12) = 0;
      }
      else
      {
        v33 = v67 - v83;
        *(float *)(v16 + v22 + 8) = v33;
        *(float *)(v16 + *a4 + 12) = v66 - v79;
      }
      v19 = v76;
      v16 += 40;
      v21 = v78-- == 1;
      v15 = v68;
      v18 = v71;
      v17 = v75;
    }
    while ( !v21 );
    v11 = a8;
    v14 = v65;
    v12 = v62;
    v13 = v59;
  }
  v34 = (*(unsigned long *)(v70 + 12) - *(unsigned long *)(v70 + 8)) / 56;
  HIDWORD(v76) = v34;
  if ( v34 > 0 )
  {
    v35 = 0;
    HIDWORD(v77) = 0;
    do
    {
      v36 = *(unsigned long *)(v70 + 8);
      v78 = v36;
      HIDWORD(v74) = (*(unsigned long *)(v36 + v35 + 12) - *(unsigned long *)(v36 + v35 + 8)) >> 5;
      if ( SHIDWORD(v74) > 0 )
      {
        v37 = 0;
        do
        {
          HIDWORD(v83) = (*(unsigned long *)(*(unsigned long *)(v36 + v35 + 8) + v37 + 12)
                        - *(unsigned long *)(*(unsigned long *)(v36 + v35 + 8) + v37 + 8))
                       / 40;
          if ( SHIDWORD(v83) > 0 )
          {
            v38 = HIDWORD(v77);
            v39 = v78;
            v40 = v14;
            v41 = v14 * COERCE_DOUBLE(*(unsigned long long *)&v11 ^ 0x8000000000000000ui64);
            v42 = 0;
            v43 = v13 * COERCE_DOUBLE(*(unsigned long long *)&v11 ^ 0x8000000000000000ui64);
            v44 = v40 * v11;
            v45 = v13 * v11;
            v54 = v41;
            v56 = v44;
            v55 = v43;
            v75 = v13 * v11;
            v68 = v12 * COERCE_DOUBLE(*(unsigned long long *)&v11 ^ 0x8000000000000000ui64);
            v69 = v12 * v11;
            do
            {
              v46 = *(unsigned long *)(*(unsigned long *)(v39 + v38 + 8) + v37 + 8);
              v47 = *(double *)(v46 + v42 + 16) - a6;
              v71 = *(double *)(v46 + v42 + 8) - a5;
              v73 = v47;
              v72 = v58 * v47 + v57 * v71 + v43;
              v48 = sub_406A70((int)v80, -4.0, 0.0, -1.0, 1.0e-10, v72, v45, v64 * v47 + v63 * v71 + v41, v44);
              v79 = (v61 * v73 + v60 * v71 + v68) * v48 - v69;
              v49 = sub_406170(v81, v72 * v48 - v75, &v82);
              v38 = HIDWORD(v77);
              v21 = v49 == 0;
              v39 = v78;
              v50 = *(unsigned long *)(*(unsigned long *)(v78 + HIDWORD(v77) + 8) + v37 + 8);
              if ( v21 )
              {
                v51 = 0.0;
                *(unsigned long long *)(v50 + v42 + 8) = 0i64;
              }
              else
              {
                *(double *)(v50 + v42 + 8) = v67 - v82;
                v51 = v66 - v79;
              }
              v45 = v75;
              v41 = v54;
              v44 = v56;
              v43 = v55;
              *(double *)(*(unsigned long *)(*(unsigned long *)(v39 + v38 + 8) + v37 + 8) + v42 + 16) = v51;
              v42 += 40;
              --HIDWORD(v83);
            }
            while ( HIDWORD(v83) );
            v35 = HIDWORD(v77);
          }
          v11 = a8;
          v37 += 32;
          v21 = HIDWORD(v74)-- == 1;
          v14 = v65;
          v12 = v62;
          v13 = v59;
          v36 = v78;
        }
        while ( !v21 );
        v34 = HIDWORD(v76);
      }
      v11 = a8;
      v35 += 56;
      v14 = v65;
      --v34;
      v12 = v62;
      v13 = v59;
      HIDWORD(v77) = v35;
      HIDWORD(v76) = v34;
    }
    while ( v34 );
  }
  v84 = -1;
  sub_406030((int)v81);
}
void  sub_425F90(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        int a9,
        double a10,
        double a11,
        double a12)
{
  unsigned long *v12; 
  long long v13; 
  unsigned long *v14; 
  int v15; 
  double v16; 
  double v17; 
  int v18; 
  int v19; 
  int v20; 
  double v21; 
  unsigned int v22; 
  double *v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  int v41; 
  int v42; 
  double v43; 
  int v44; 
  int v45; 
  double v46; 
  int v47; 
  double v48[9]; 
  double v49; 
  int v50; 
  int v51; 
  double v52; 
  double v53; 
  double v54; 
  int v55; 
  unsigned long *v56; 
  int v57; 
  int v58; 
  long long v59[30]; 
  double v60; 
  int v61; 

  v12 = (unsigned long *)a2;
  v54 = a11;
  v13 = *(unsigned long long *)(a9 + 8);
  v56 = (unsigned long *)a2;
  sub_406C30(*(unsigned long long *)a9, *(double *)&v13, *((double *)&v13 + 1), v48);
  memset(v59, 0, sizeof(v59));
  sub_405E20((int)v59, 4, a9 + 24, *(long long *)&v54);
  v61 = 0;
  sub_406310((int)v59, a2, a9);
  v51 = a2;
  v14 = (unsigned long *)a1;
  v50 = a1;
  LOBYTE(v61) = 2;
  cvSetZero(a2);
  v15 = 0;
  v16 = a7 * a12;
  v58 = 0;
  v17 = a8 * a12;
  v54 = a7 * a12;
  v52 = a8 * a12;
  if ( *(int *)(a2 + 44) > 0 )
  {
    do
    {
      v18 = 0;
      v19 = v14[10] - 1;
      v57 = 0;
      v53 = (double)v19;
      if ( (int)v12[10] > 0 )
      {
        v49 = (double)v15 - v17;
        do
        {
          if ( sub_406280(v59, (double)v18 - v16, &v60) )
          {
            v20 = v59[28];
            v21 = 0.0;
            if ( SLODWORD(v59[28]) >= 0 )
            {
              if ( LODWORD(v59[28]) + 1 >= 4 )
              {
                v22 = (unsigned int)(LODWORD(v59[28]) + 1) >> 2;
                v23 = (double *)&v59[LODWORD(v59[28]) + 6];
                v20 = LODWORD(v59[28]) - 4 * v22;
                do
                {
                  v21 = (((v21 * (*(double *)&v59[29] * v60) + v23[2]) * (*(double *)&v59[29] * v60) + v23[1])
                       * (*(double *)&v59[29]
                        * v60)
                       + *v23)
                      * (*(double *)&v59[29]
                       * v60)
                      + *(v23 - 1);
                  v23 -= 4;
                  --v22;
                }
                while ( v22 );
              }
              for ( ; v20 >= 0; --v20 )
                v21 = v21 * (*(double *)&v59[29] * v60) + *(double *)&v59[v20 + 8];
              v18 = v57;
            }
            v24 = v21 / *(double *)&v59[29];
            v25 = v48[2] * v60 + v48[5] * v49 + v48[8] * v24 + a10;
            v26 = a7 - (v48[0] * v60 + v48[3] * v49 + v48[6] * v24) * a10 / v25;
            v27 = a8 - (v48[1] * v60 + v48[4] * v49 + v48[7] * v24) * a10 / v25;
            v28 = v26 - v53;
            v53 = v26;
            if ( v28 <= 0.15 )
            {
              v29 = (int)v26;
              v30 = (int)v27;
              v55 = (int)v27;
              if ( (int)v26 >= 0 && v29 < v14[10] - 1 && v30 >= 0 && v30 < v14[11] - 1 )
              {
                v31 = v14[17];
                v32 = v30 + 1;
                v33 = v14[18];
                v34 = v26 - (double)v29;
                v35 = v27 - (double)v30;
                v36 = 1.0 - v35;
                v37 = (1.0 - v34) * v35;
                v38 = v35 * v34;
                v39 = (1.0 - v34) * v36;
                v40 = v36 * v34;
                *(unsigned char *)(3 * (v56[10] - v57) + v56[18] * (v56[11] - v58 - 1) + v56[17] - 1) = (int)((double)*(unsigned char *)(3 * v29 + v33 * (v30 + 1) + v31 + 2) * v37 + (double)*(unsigned char *)(3 * v29 + v30 * v33 + v31 + 2) * v39 + (double)*(unsigned char *)(3 * v29 + v30 * v33 + v31 + 5) * v40 + (double)*(unsigned char *)(3 * v29 + v33 * (v30 + 1) + v31 + 5) * v38);
                v41 = *(unsigned long *)(a1 + 68);
                v42 = *(unsigned char *)(3 * v29 + *(unsigned long *)(a1 + 72) * (v30 + 1) + v41 + 4);
                v43 = (double)*(unsigned char *)(3 * v29 + *(unsigned long *)(a1 + 72) * (v30 + 1) + v41 + 1) * v37
                    + (double)*(unsigned char *)(3 * v29 + v55 * *(unsigned long *)(a1 + 72) + v41 + 1) * v39
                    + (double)*(unsigned char *)(3 * v29 + v55 * *(unsigned long *)(a1 + 72) + v41 + 4) * v40;
                v18 = v57;
                *(unsigned char *)(3 * (v56[10] - v57) + v56[18] * (v56[11] - v58 - 1) + v56[17] - 2) = (int)(v43 + (double)v42 * v38);
                v44 = 3 * v29 + v55 * *(unsigned long *)(a1 + 72);
                v45 = 3 * v29 + *(unsigned long *)(a1 + 72) * v32;
                v14 = (unsigned long *)a1;
                v46 = (double)*(unsigned char *)(v45 + *(unsigned long *)(a1 + 68)) * v37
                    + (double)*(unsigned char *)(v44 + *(unsigned long *)(a1 + 68)) * v39;
                v47 = *(unsigned char *)(v45 + *(unsigned long *)(a1 + 68) + 3);
                v12 = v56;
                *(unsigned char *)(3 * (v56[10] - v18 - 1) + v56[18] * (v56[11] - v58 - 1) + v56[17]) = (int)(v46 + (double)*(unsigned char *)(v44 + *(unsigned long *)(a1 + 68) + 3) * v40 + (double)v47 * v38);
              }
            }
          }
          v16 = v54;
          v57 = ++v18;
        }
        while ( v18 < v12[10] );
        v17 = v52;
        v15 = v58;
      }
      v58 = ++v15;
    }
    while ( v15 < v12[11] );
  }
  v61 = -1;
  sub_406030((int)v59);
}
int  sub_426520(unsigned long *a1, unsigned long *a2, unsigned long *a3)
{
  int result; 

  sub_42AD80(a1, a2);
  if ( result != -8 )
    *(unsigned long *)(result + 8) = *a3;
  return result;
}
unsigned long * sub_426540( int a2, unsigned long **a3, int a4)
{
  unsigned long *result; 

  result = sub_42AE00(this);
  *((_WORD *)result + 6) = 0;
  if ( result != (unsigned long *)-16 )
  {
    result[4] = **a3;
    result[5] = 0;
  }
  return result;
}
void  sub_426570(unsigned long *a1, unsigned long *a2, unsigned long *a3)
{
  int v3; 

  sub_42ADC0(a1, a2);
  if ( v3 != -8 )
  {
    *(unsigned long *)(v3 + 8) = *a3;
    *(unsigned long *)(v3 + 12) = a3[1];
  }
}
unsigned long * sub_4265A0( unsigned long *a2, char a3, unsigned long *a4, int a5, void *a6)
{
  unsigned int v7; 
  unsigned long *v8; 
  int *v9; 
  int *v10; 
  int *v11; 
  unsigned long *v12; 
  void **v13; 
  unsigned long *v14; 
  unsigned long *v15; 
  int v16; 
  unsigned long *v17; 
  int v18; 
  int v19; 
  unsigned long *v20; 
  unsigned long *v21; 
  unsigned long *result; 

  v7 = this[1];
  if ( v7 >= 0xAAAAAA9 )
  {
    operator delete(a6);
    std::_Xlength_error("map/set<T> too long");
  }
  this[1] = v7 + 1;
  *((unsigned long *)a6 + 1) = a4;
  if ( a4 == (unsigned long *)*this )
  {
    *(unsigned long *)(*this + 4) = a6;
    *(unsigned long *)*this = a6;
    *(unsigned long *)(*this + 8) = a6;
  }
  else if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(unsigned long **)*this )
      *(unsigned long *)*this = a6;
  }
  else
  {
    a4[2] = a6;
    if ( a4 == *(unsigned long **)(*this + 8) )
      *(unsigned long *)(*this + 8) = a6;
  }
  v8 = a6;
  if ( !*(unsigned char *)(*((unsigned long *)a6 + 1) + 12) )
  {
    do
    {
      v9 = (int *)v8[1];
      v10 = (int *)v9[1];
      v11 = (int *)*v10;
      if ( v9 == (int *)*v10 )
      {
        v11 = (int *)v10[2];
        if ( *((unsigned char *)v11 + 12) )
        {
          if ( v8 == (unsigned long *)v9[2] )
          {
            v8 = (unsigned long *)v8[1];
            v12 = (unsigned long *)v9[2];
            v9[2] = *v12;
            if ( !*(unsigned char *)(*v12 + 13) )
              *(unsigned long *)(*v12 + 4) = v9;
            v12[1] = v9[1];
            if ( v9 == *(int **)(*this + 4) )
            {
              *(unsigned long *)(*this + 4) = v12;
            }
            else
            {
              v13 = (void **)v9[1];
              if ( v8 == *v13 )
                *v13 = v12;
              else
                v13[2] = v12;
            }
            *v12 = v8;
            v8[1] = v12;
          }
          *(unsigned char *)(v8[1] + 12) = 1;
          *(unsigned char *)(*(unsigned long *)(v8[1] + 4) + 12) = 0;
          v14 = *(unsigned long **)(v8[1] + 4);
          v15 = (unsigned long *)*v14;
          *v14 = *(unsigned long *)(*v14 + 8);
          v16 = v15[2];
          if ( !*(unsigned char *)(v16 + 13) )
            *(unsigned long *)(v16 + 4) = v14;
          v15[1] = v14[1];
          if ( v14 == *(unsigned long **)(*this + 4) )
          {
            *(unsigned long *)(*this + 4) = v15;
            v15[2] = v14;
          }
          else
          {
            v17 = (unsigned long *)v14[1];
            if ( v14 == (unsigned long *)v17[2] )
              v17[2] = v15;
            else
              *v17 = v15;
            v15[2] = v14;
          }
LABEL_49:
          v14[1] = v15;
          continue;
        }
      }
      else if ( *((unsigned char *)v11 + 12) )
      {
        if ( v8 == (unsigned long *)*v9 )
        {
          v8 = (unsigned long *)v8[1];
          v18 = *v9;
          *v9 = *(unsigned long *)(*v9 + 8);
          v19 = *(unsigned long *)(v18 + 8);
          if ( !*(unsigned char *)(v19 + 13) )
            *(unsigned long *)(v19 + 4) = v8;
          *(unsigned long *)(v18 + 4) = v8[1];
          if ( v8 == *(unsigned long **)(*this + 4) )
          {
            *(unsigned long *)(*this + 4) = v18;
          }
          else
          {
            v20 = (unsigned long *)v8[1];
            if ( v8 == (unsigned long *)v20[2] )
              v20[2] = v18;
            else
              *v20 = v18;
          }
          *(unsigned long *)(v18 + 8) = v8;
          v8[1] = v18;
        }
        *(unsigned char *)(v8[1] + 12) = 1;
        *(unsigned char *)(*(unsigned long *)(v8[1] + 4) + 12) = 0;
        v14 = *(unsigned long **)(v8[1] + 4);
        v15 = (unsigned long *)v14[2];
        v14[2] = *v15;
        if ( !*(unsigned char *)(*v15 + 13) )
          *(unsigned long *)(*v15 + 4) = v14;
        v15[1] = v14[1];
        if ( v14 == *(unsigned long **)(*this + 4) )
        {
          *(unsigned long *)(*this + 4) = v15;
        }
        else
        {
          v21 = (unsigned long *)v14[1];
          if ( v14 == (unsigned long *)*v21 )
            *v21 = v15;
          else
            v21[2] = v15;
        }
        *v15 = v14;
        goto LABEL_49;
      }
      *((unsigned char *)v9 + 12) = 1;
      *((unsigned char *)v11 + 12) = 1;
      *(unsigned char *)(*(unsigned long *)(v8[1] + 4) + 12) = 0;
      v8 = *(unsigned long **)(v8[1] + 4);
    }
    while ( !*(unsigned char *)(v8[1] + 12) );
  }
  *(unsigned char *)(*(unsigned long *)(*this + 4) + 12) = 1;
  result = a2;
  *a2 = a6;
  return result;
}
unsigned long * sub_4267B0( unsigned long *a2, unsigned long *a3, int *a4, void *a5)
{
  bool v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  int v8; 
  bool v9; 
  int v11; 
  int v12[2]; 
  int v13; 
  int v14; 
  unsigned long *v15; 
  void *v16; 
  int *v17; 
  int v18; 

  v17 = &v11;
  v15 = this;
  v5 = this[1] == 0;
  v16 = a5;
  v12[1] = (int)a5;
  v18 = 0;
  if ( v5 )
  {
    sub_4265A0(this, a2, 1, *this, (int)a4, a5);
    return a2;
  }
  v6 = *this;
  if ( a3 == (unsigned long *)**this )
  {
    if ( *a4 > a3[4] )
    {
      sub_4265A0(this, a2, 1, a3, (int)a4, v16);
      return a2;
    }
LABEL_21:
    v18 = -1;
    *a2 = *(unsigned long *)sub_426950(v15, (int)v12, 0, a4, v16);
    return a2;
  }
  if ( a3 == v6 )
  {
    v7 = (unsigned long *)v6[2];
    if ( v7[4] > *a4 )
    {
      sub_4265A0(this, a2, 0, v7, (int)a4, v16);
      return a2;
    }
    goto LABEL_21;
  }
  v8 = a3[4];
  v13 = *a4;
  v9 = v8 <= v13;
  if ( v8 < v13 )
  {
    v14 = (int)a3;
    sub_4274A0(&v14);
    if ( *(unsigned long *)(v14 + 16) > v13 )
    {
      if ( *(unsigned char *)(*(unsigned long *)(v14 + 8) + 13) )
        sub_4265A0(v15, a2, 0, (unsigned long *)v14, (int)a4, v16);
      else
        sub_4265A0(v15, a2, 1, a3, (int)a4, v16);
      return a2;
    }
    v9 = a3[4] <= v13;
  }
  if ( v9 )
    goto LABEL_21;
  v14 = (int)a3;
  sub_427450(&v14);
  if ( (unsigned long *)v14 != v6 && v13 <= *(unsigned long *)(v14 + 16) )
    goto LABEL_21;
  if ( *(unsigned char *)(a3[2] + 13) )
    sub_4265A0(v15, a2, 0, a3, (int)a4, v16);
  else
    sub_4265A0(v15, a2, 1, (unsigned long *)v14, (int)a4, v16);
  return a2;
}
int  sub_426950( int a2, unsigned long *a3, unsigned long *a4, void *a5)
{
  unsigned long *v5; 
  bool v6; 
  unsigned long *v7; 
  unsigned long *v8; 
  int *v9; 
  int v10; 
  int v11; 
  int *v12; 
  int v13; 
  int result; 
  int v15; 
  unsigned long *v16; 
  unsigned long *v17; 
  int v18; 
  int *v19; 
  int v20; 

  v19 = &v15;
  v17 = this;
  v5 = (unsigned long *)*this;
  v6 = 1;
  v7 = a4;
  v8 = v5;
  v20 = 0;
  v16 = v5;
  v9 = (int *)v5[1];
  LOBYTE(v18) = 1;
  if ( !*((unsigned char *)v9 + 13) )
  {
    v10 = *a4;
    do
    {
      v8 = v9;
      if ( (unsigned char)a3 )
        v6 = v9[4] <= v10;
      else
        v6 = v10 > v9[4];
      LOBYTE(v18) = v6;
      if ( v6 )
        v9 = (int *)*v9;
      else
        v9 = (int *)v9[2];
    }
    while ( !*((unsigned char *)v9 + 13) );
    v5 = v16;
  }
  v11 = (int)v8;
  a3 = v8;
  if ( v6 )
  {
    if ( v8 == (unsigned long *)*v5 )
    {
      v12 = sub_4265A0(v17, &a3, 1, v8, (int)a4, a5);
LABEL_14:
      v13 = *v12;
      result = a2;
      *(unsigned long *)a2 = v13;
      *(unsigned char *)(a2 + 4) = 1;
      return result;
    }
    sub_4274A0(&a3);
    v11 = (int)a3;
  }
  if ( *(unsigned long *)(v11 + 16) > *v7 )
  {
    v12 = sub_4265A0(v17, &a3, v18, v8, (int)v7, a5);
    goto LABEL_14;
  }
  operator delete(a5);
  result = a2;
  *(unsigned long *)a2 = v11;
  *(unsigned char *)(a2 + 4) = 0;
  return result;
}
int  sub_426A70(int a1, int *a2)
{
  int result; 

  if ( a1 != -8 )
  {
    result = *a2;
    *(unsigned long *)(a1 + 8) = *a2;
  }
  return result;
}
int  sub_426A90(int a1, unsigned long *a2)
{
  int result; 

  if ( a1 != -8 )
  {
    *(unsigned long *)(a1 + 8) = *a2;
    result = a2[1];
    *(unsigned long *)(a1 + 12) = result;
  }
  return result;
}
int  sub_426AB0(int a1, int a2, int a3)
{
  int v3; 
  unsigned long v6[6]; 
  int v7; 

  v6[5] = v6;
  v3 = a3;
  v6[4] = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v7) = 1;
    if ( v3 )
    {
      *(unsigned long long *)v3 = *(unsigned long long *)a1;
      sub_404A00(v3 + 8, (const int **)(a1 + 8));
      *(unsigned long *)(v3 + 20) = *(unsigned long *)(a1 + 20);
      *(unsigned long long *)(v3 + 24) = *(unsigned long long *)(a1 + 24);
    }
    v3 += 32;
    LOBYTE(v7) = 0;
    a1 += 32;
  }
  return v3;
}
void  sub_426B70(int a1, int a2)
{
  int i; 

  for ( i = a2; i; --i )
  {
    if ( a1 )
    {
      *(unsigned long long *)a1 = 0i64;
      *(unsigned long long *)(a1 + 16) = 0i64;
      *(unsigned long long *)(a1 + 32) = 0i64;
    }
    a1 += 40;
  }
}
unsigned long * sub_426BA0(unsigned long *result, int a2, int a3)
{
  int v3; 

  v3 = a3;
  if ( a3 )
  {
    result = (unsigned long *)(a2 + 16);
    do
    {
      if ( result != (unsigned long *)16 )
      {
        *(result - 4) = &DwCParagraph::`vftable`;
        *(result - 2) = 0;
        *(result - 1) = 0;
        *result = 0;
      }
      result += 14;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
unsigned long * sub_426BE0(unsigned long *result, int a2, int a3)
{
  int v3; 

  v3 = a3;
  if ( a3 )
  {
    result = (unsigned long *)(a2 + 16);
    do
    {
      if ( result != (unsigned long *)16 )
      {
        *(result - 2) = 0;
        *(result - 1) = 0;
        *result = 0;
      }
      result += 8;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
int  sub_426C20(int a1, int a2, int a3)
{
  int v3; 
  unsigned long v6[6]; 
  int v7; 

  v6[5] = v6;
  v3 = a3;
  v6[4] = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v7) = 1;
    if ( v3 )
    {
      *(unsigned long *)v3 = &DwCParagraph::`vftable`;
      sub_426EE0((int *)(v3 + 8), (int *)(a1 + 8));
      *(int *)(v3 + 24) = _mm_loadu_si128((const int *)(a1 + 24));
      *(int *)(v3 + 40) = _mm_loadu_si128((const int *)(a1 + 40));
    }
    v3 += 56;
    LOBYTE(v7) = 0;
    a1 += 56;
  }
  return v3;
}
unsigned long * sub_426CE0( unsigned long *a2, unsigned long *a3)
{
  unsigned long *v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  int v8; 
  int v9; 
  int v11; 
  int v12[6]; 

  v12[2] = (int)&v11;
  v4 = (unsigned long *)*this;
  v5 = a2;
  v12[0] = (int)this;
  v12[5] = 0;
  while ( 1 )
  {
    v6 = a3;
    v4 = (unsigned long *)*v4;
    if ( v5 == a3 )
      break;
    if ( v4 == (unsigned long *)*this )
    {
      while ( v5 != v6 )
      {
        v7 = (unsigned long *)*this;
        v8 = sub_426520((unsigned long *)*this, *(unsigned long **)(*this + 4), v5 + 2);
        v9 = this[1];
        if ( v9 == 357913940 )
          std::_Xlength_error("list<T> too long");
        this[1] = v9 + 1;
        v7[1] = v8;
        **(unsigned long **)(v8 + 4) = v8;
        v6 = a3;
        v5 = (unsigned long *)*a2;
        a2 = (unsigned long *)*a2;
      }
      return sub_42B8B0(this, v12, (unsigned long **)v4, (unsigned long **)*this);
    }
    sub_426A70((int)v4, v5 + 2);
    v5 = (unsigned long *)*a2;
    a2 = (unsigned long *)*a2;
  }
  return sub_42B8B0(this, v12, (unsigned long **)v4, (unsigned long **)*this);
}
unsigned long * sub_426DD0( unsigned long *a2, unsigned long *a3)
{
  unsigned long *v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v12; 
  int v13[6]; 

  v13[2] = (int)&v12;
  v4 = (unsigned long *)*this;
  v5 = a2;
  v13[0] = (int)this;
  v13[5] = 0;
  while ( 1 )
  {
    v6 = a3;
    v4 = (unsigned long *)*v4;
    if ( v5 == a3 )
      break;
    if ( v4 == (unsigned long *)*this )
    {
      while ( v5 != v6 )
      {
        v7 = (unsigned long *)*this;
        sub_426570((unsigned long *)*this, *(unsigned long **)(*this + 4), v5 + 2);
        v9 = v8;
        v10 = this[1];
        if ( v10 == 268435454 )
          std::_Xlength_error("list<T> too long");
        this[1] = v10 + 1;
        v7[1] = v9;
        **(unsigned long **)(v9 + 4) = v9;
        v6 = a3;
        v5 = (unsigned long *)*a2;
        a2 = (unsigned long *)*a2;
      }
      return sub_42B8B0(this, v13, (unsigned long **)v4, (unsigned long **)*this);
    }
    sub_426A90((int)v4, v5 + 2);
    v5 = (unsigned long *)*a2;
    a2 = (unsigned long *)*a2;
  }
  return sub_42B8B0(this, v13, (unsigned long **)v4, (unsigned long **)*this);
}
void  sub_426EC0()
{
  int v2; 

  *this = 0;
  this[1] = 0;
  sub_42AD80(0, 0);
  *this = v2;
}
int * sub_426EE0(int *a2)
{
  int v4; 
  unsigned long v5[10]; 

  v5[6] = v5;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  v4 = (a2[1] - *a2) >> 5;
  v5[4] = this;
  if ( sub_405390(this, v4) )
  {
    v5[9] = 0;
    this[1] = sub_426AB0(*a2, a2[1], *this);
  }
  return this;
}
unsigned long * sub_426F90()
{
  int v2; 
  unsigned long *v3; 
  unsigned long *v4; 
  unsigned long *result; 

  *this = &CConnectedAnalysis::`vftable`;
  this[4] = &DwCTwoDimArray<float>::`vftable`;
  this[5] = 0;
  this[6] = 0;
  this[8] = 0;
  this[7] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[15] = &DwCDelaunayTriangulation::`vftable`;
  this[23] = 0;
  this[24] = 0;
  this[23] = v2;
  this[25] = 0;
  this[26] = 0;
  this[27] = 0;
  this[16] = 0;
  this[21] = 0;
  this[22] = 0;
  v3 = operator new[](0xC35004u);
  if ( v3 )
  {
    v4 = v3 + 1;
    *v3 = 200000;
    `eh vector constructor iterator`(
      v3 + 1,
      0x40u,
      200000,
      (void ( *)(void *))sub_427130,
      (void ( *)(void *))sub_427310);
  }
  else
  {
    v4 = 0;
  }
  this[3] = v4;
  this[14] = operator new[](0xC3500u);
  this[13] = 0;
  result = this;
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  this[30] = 0;
  return result;
}
unsigned long * sub_4270F0( int a2, int a3)
{
  int Mat; 

  *this = &CMyMatrix::`vftable`;
  this[2] = 0;
  sub_403EE0(this);
  this[3] = a2;
  this[4] = a3;
  Mat = cvCreateMat(a2, a3, 5);
  this[2] = Mat;
  this[1] = *(unsigned long *)(Mat + 16);
  return this;
}
void  sub_427130()
{
  int v2; 
  int v3; 

  *this = 0;
  this[1] = 0;
  sub_42ADC0(0, 0);
  *this = v2;
  this[6] = 0;
  this[7] = 0;
  sub_42AD80(0, 0);
  this[6] = v3;
  *((unsigned char *)this + 12) = 0;
  this[4] = -1;
}
void  sub_4271F0()
{
  unsigned long *v2; 
  unsigned long *v3; 

  v2 = *(unsigned long **)*this;
  *(unsigned long *)*this = *this;
  *(unsigned long *)(*this + 4) = *this;
  this[1] = 0;
  if ( v2 != (unsigned long *)*this )
  {
    do
    {
      v3 = (unsigned long *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != (unsigned long *)*this );
  }
  operator delete((void *)*this);
}
void  sub_427250()
{
  char *v2; 
  char *v3; 

  *(unsigned long *)this = &CConnectedAnalysis::`vftable`;
  v2 = *(char **)(this + 12);
  if ( v2 )
  {
    v3 = v2 - 4;
    `eh vector destructor iterator`(v2, 0x40u, *((unsigned long *)v2 - 1), (void ( *)(void *))sub_427310);
    operator delete[](v3);
  }
  operator delete[](*(void **)(this + 56));
  sub_42D7B0((char *)(this + 60));
  *(unsigned long *)(this + 16) = &DwCTwoDimArray<float>::`vftable`;
  if ( *(unsigned long *)(this + 44) )
    operator delete[](*(void **)(this + 44));
  if ( *(unsigned long *)(this + 48) )
    operator delete[](*(void **)(this + 48));
}
void  sub_427310()
{
  unsigned long *v2; 
  unsigned long *v3; 
  unsigned long *v4; 
  unsigned long **v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  unsigned long *v8; 
  unsigned long *v9; 

  v2 = *this;
  v3 = *(unsigned long **)*this;
  *v2 = v2;
  *((unsigned long *)*this + 1) = *this;
  this[1] = 0;
  if ( v3 != *this )
  {
    do
    {
      v4 = (unsigned long *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != *this );
  }
  v5 = (unsigned long **)this[6];
  v6 = *v5;
  *v5 = v5;
  *((unsigned long *)this[6] + 1) = this[6];
  this[7] = 0;
  if ( v6 != this[6] )
  {
    do
    {
      v7 = (unsigned long *)*v6;
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 != this[6] );
  }
  operator delete(this[6]);
  v8 = *(unsigned long **)*this;
  *(unsigned long *)*this = *this;
  *((unsigned long *)*this + 1) = *this;
  this[1] = 0;
  if ( v8 != *this )
  {
    do
    {
      v9 = (unsigned long *)*v8;
      operator delete(v8);
      v8 = v9;
    }
    while ( v9 != *this );
  }
  operator delete(*this);
}
unsigned long * sub_4273C0( unsigned long *a2)
{
  unsigned long *v3; 
  int *v4; 
  int *v6; 
  unsigned long *v7; 

  v3 = (unsigned long *)*this;
  v4 = *(int **)(*this + 4);
  while ( !*((unsigned char *)v4 + 13) )
  {
    if ( v4[4] <= *a2 )
    {
      v3 = v4;
      v4 = (int *)*v4;
    }
    else
    {
      v4 = (int *)v4[2];
    }
  }
  if ( v3 != (unsigned long *)*this && *a2 <= v3[4] )
    return v3 + 5;
  v7 = a2;
  v6 = sub_426540(this, (int)&unk_501983, &v7, (int)&a2 + 3);
  sub_4267B0((unsigned long **)this, &a2, v3, v6 + 4, v6);
  return a2 + 5;
}
int * sub_427450()
{
  int v2; 
  int **v3; 
  int *j; 
  int i; 

  v2 = *this;
  if ( *(unsigned char *)(*this + 13) )
    return this;
  v3 = *(int ***)(v2 + 8);
  if ( *((unsigned char *)v3 + 13) )
  {
    for ( i = *(unsigned long *)(v2 + 4); !*(unsigned char *)(i + 13); i = *(unsigned long *)(i + 4) )
    {
      if ( *this != *(unsigned long *)(i + 8) )
        break;
      *this = i;
    }
    *this = i;
    return this;
  }
  for ( j = *v3; !*((unsigned char *)j + 13); j = (int *)*j )
    v3 = (int **)j;
  *this = (int)v3;
  return this;
}
void * sub_4274A0()
{
  unsigned long *v2; 
  int i; 
  int v5; 
  int v6; 

  v2 = *(unsigned long **)this;
  if ( *(unsigned char *)(*(unsigned long *)this + 13) )
  {
    *(unsigned long *)this = v2[2];
    return this;
  }
  i = *v2;
  if ( *(unsigned char *)(*v2 + 13) )
  {
    for ( i = v2[1]; !*(unsigned char *)(i + 13); i = *(unsigned long *)(i + 4) )
    {
      if ( *(unsigned long *)this != *(unsigned long *)i )
        break;
      *(unsigned long *)this = i;
    }
    if ( *(unsigned char *)(*(unsigned long *)this + 13) )
      return this;
    goto LABEL_11;
  }
  v5 = *(unsigned long *)(i + 8);
  if ( *(unsigned char *)(v5 + 13) )
  {
LABEL_11:
    *(unsigned long *)this = i;
    return this;
  }
  do
  {
    v6 = v5;
    v5 = *(unsigned long *)(v5 + 8);
  }
  while ( !*(unsigned char *)(v5 + 13) );
  *(unsigned long *)this = v6;
  return this;
}
char * sub_427500(char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator`(this, 0xA8u, *((unsigned long *)this - 1), sub_431480);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    sub_431480(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}

void * sub_4275B0( char a2)
{
  sub_427250((int)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
char * sub_4275E0(char a2)
{
  sub_42D7B0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
unsigned long * sub_427610( char a2)
{
  int v3; 

  *this = &DwCParagraph::`vftable`;
  sub_404130(this[2], this[3]);
  v3 = this[2];
  this[3] = v3;
  if ( v3 )
  {
    sub_404130(v3, v3);
    operator delete((void *)this[2]);
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

int  sub_4276C0()
{
  unsigned long *v1; 
  bool v2; 
  int v3; 
  int v4; 
  int v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  int v8; 
  int v9; 
  int v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  int v16; 
  int v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  float v22; 
  float v23; 
  int v24; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v36; 
  int v37[100000]; 
  int v38[100001]; 
  long long v39; 
  int v40; 
  long long v41; 
  int v42; 
  long long v43; 
  int v44; 
  long long v45; 
  int v46; 
  int v47; 

  v1 = this;
  v42 = 0;
  v41 = 0i64;
  LODWORD(v41) = &CMyMatrix::`vftable`;
  DWORD2(v41) = 0;
  sub_403EE0(&v41);
  HIDWORD(v41) = 2;
  v42 = 2;
  DWORD2(v41) = cvCreateMat(2, 2, 5);
  DWORD1(v41) = *(unsigned long *)(DWORD2(v41) + 16);
  v47 = 0;
  v43 = 0i64;
  v44 = 0;
  LODWORD(v43) = &CMyMatrix::`vftable`;
  DWORD2(v43) = 0;
  sub_403EE0(&v43);
  HIDWORD(v43) = 2;
  v44 = 1;
  DWORD2(v43) = cvCreateMat(2, 1, 5);
  DWORD1(v43) = *(unsigned long *)(DWORD2(v43) + 16);
  LOBYTE(v47) = 1;
  v39 = 0i64;
  v40 = 0;
  LODWORD(v39) = &CMyMatrix::`vftable`;
  DWORD2(v39) = 0;
  sub_403EE0(&v39);
  HIDWORD(v39) = 2;
  v40 = 2;
  DWORD2(v39) = cvCreateMat(2, 2, 5);
  DWORD1(v39) = *(unsigned long *)(DWORD2(v39) + 16);
  LOBYTE(v47) = 2;
  v45 = 0i64;
  v46 = 0;
  LODWORD(v45) = &CMyMatrix::`vftable`;
  DWORD2(v45) = 0;
  sub_403EE0(&v45);
  HIDWORD(v45) = 2;
  v46 = 2;
  DWORD2(v45) = cvCreateMat(2, 2, 5);
  v2 = v1[1] <= 0;
  v32 = 0;
  DWORD1(v45) = *(unsigned long *)(DWORD2(v45) + 16);
  if ( !v2 )
  {
    v3 = 0;
    do
    {
      v4 = v1[3];
      v36 = v4;
      v5 = *(unsigned long *)(v3 + v4 + 4);
      v34 = v5;
      if ( v5 <= 100000 )
      {
        v6 = *(unsigned long **)(v3 + v4);
        v7 = (unsigned long *)*v6;
        if ( (unsigned long *)*v6 != v6 )
        {
          v8 = 0;
          do
          {
            v37[++v8 + 99999] = v7[2];
            v9 = v7[3];
            v7 = (unsigned long *)*v7;
            v37[v8 - 1] = v9;
          }
          while ( v7 != v6 );
          v1 = this;
          v5 = v34;
        }
        if ( v5 > 5 )
        {
          v10 = 0;
          v11 = 0.0;
          v12 = 0.0;
          v13 = 0.0;
          v14 = 0.0;
          v15 = 0.0;
          do
          {
            v16 = v38[v10];
            v17 = v37[v10++];
            v11 = v11 + (double)v16;
            v12 = v12 + (double)v17;
            v15 = v15 + (double)(v16 * v17);
            v13 = v13 + (double)(v16 * v16);
            v14 = v14 + (double)(v17 * v17);
          }
          while ( v10 < v34 );
          v18 = (double)v34;
          v1 = this;
          v19 = v18 * v11 / v18 * v12;
          v20 = v12 / (double)v34;
          v21 = (v15 - v19 / v18) / v18;
          *(float *)&v19 = (v13 - v11 / v18 * (v11 / v18) * v18) / v18;
          *(unsigned long *)DWORD1(v41) = LODWORD(v19);
          *(float *)&v19 = v21;
          *(unsigned long *)(DWORD1(v41) + 4) = LODWORD(v19);
          *(unsigned long *)(DWORD1(v41) + 4 * v42) = LODWORD(v19);
          *(float *)&v19 = (v14 - v20 * v20 * v18) / v18;
          *(unsigned long *)(DWORD1(v41) + 4 * v42 + 4) = LODWORD(v19);
          *(float *)&v19 = v11 / (double)v34;
          *(unsigned long *)(v3 + this[3] + 32) = LODWORD(v19);
          *(float *)&v19 = v20;
          *(unsigned long *)(v3 + this[3] + 36) = LODWORD(v19);
          cvSVD(DWORD2(v41), DWORD2(v43), DWORD2(v39), DWORD2(v45), 0);
          v22 = *(double *)libm_sse2_sqrt_precise(v26, v28, v30, v32).m128_u64;
          *(float *)(v3 + this[3] + 40) = v22;
          v23 = *(double *)libm_sse2_sqrt_precise(v27, v29, v31, v33).m128_u64;
          *(float *)(v3 + this[3] + 44) = v23;
          v24 = this[3];
          if ( *(float *)(v3 + v24 + 44) > *(float *)(v3 + v24 + 40) )
            exit(0);
          *(unsigned long *)(v3 + v24 + 48) = *(unsigned long *)DWORD1(v39);
          *(unsigned long *)(v3 + this[3] + 52) = *(unsigned long *)(DWORD1(v39) + 4 * v40);
          *(unsigned long *)(v3 + this[3] + 56) = *(unsigned long *)(DWORD1(v39) + 4);
          *(unsigned long *)(v3 + this[3] + 60) = *(unsigned long *)(DWORD1(v39) + 4 * v40 + 4);
        }
        else
        {
          *(float *)(v3 + v36 + 32) = (float)v38[0];
          *(float *)(v3 + v1[3] + 36) = (float)v37[0];
          *(unsigned long *)(v3 + v1[3] + 40) = 1065353216;
          *(unsigned long *)(v3 + v1[3] + 44) = 1065353216;
          *(unsigned long *)(v3 + v1[3] + 48) = 1065353216;
          *(unsigned long *)(v3 + v1[3] + 52) = 0;
          *(unsigned long *)(v3 + v1[3] + 56) = 0;
          *(unsigned long *)(v3 + v1[3] + 60) = 1065353216;
        }
      }
      else
      {
        *(unsigned char *)(v3 + v4 + 12) = 1;
      }
      v3 += 64;
      ++v32;
    }
    while ( v32 < v1[1] );
  }
  sub_403E70(&v45);
  LOBYTE(v47) = 1;
  sub_403E70(&v39);
  LOBYTE(v47) = 0;
  sub_403E70(&v43);
  v47 = -1;
  return sub_403E70(&v41);
}
void  sub_427C60( float a2)
{
  int v3; 
  int v4; 

  v3 = 0;
  if ( (int)this[2] > 0 )
  {
    v4 = 0;
    do
    {
      sub_431850((void *)(v4 + this[13]), a2);
      ++v3;
      v4 += 168;
    }
    while ( v3 < this[2] );
  }
}
void  sub_427CA0( float a2)
{
  int v3; 
  int v4; 

  v3 = 0;
  if ( (int)this[2] > 0 )
  {
    v4 = 0;
    do
    {
      sub_431870(v4 + this[13], a2);
      ++v3;
      v4 += 168;
    }
    while ( v3 < this[2] );
  }
}
int  sub_427CE0( int a2)
{
  unsigned int v3; 
  int v4; 
  unsigned char *v5; 
  int *v6; 
  void ( ***v7)(unsigned long, unsigned long); 
  void ( ***v8)(unsigned long, unsigned long); 
  int result; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned long *v16; 
  unsigned long *v17; 
  void *v18; 
  signed int v19; 
  int v20; 
  int *v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned long *v25; 
  int v26; 
  int v27; 
  float v28; 
  double v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  unsigned long *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  unsigned long *v47; 
  int *v48; 

  v3 = 0;
  v47 = this;
  v4 = this[2];
  if ( v4 > 0 )
  {
    v5 = (unsigned char *)(this[13] + 80);
    do
    {
      if ( *v5 == 1 )
        ++v3;
      v5 += 168;
      --v4;
    }
    while ( v4 );
  }
  v6 = (int *)(a2 + 8);
  v48 = v6;
  v7 = (void ( ***)(unsigned long, unsigned long))*v6;
  if ( *v6 != v6[1] )
  {
    v8 = (void ( ***)(unsigned long, unsigned long))v6[1];
    do
    {
      (**v7)(v7, 0);
      v7 += 14;
    }
    while ( v7 != v8 );
    v6 = v48;
  }
  v6[1] = *v6;
  result = sub_42BB40(v6, v3);
  v10 = (int)v47;
  v11 = 0;
  v45 = 0;
  v40 = 0;
  if ( (int)v47[2] > 0 )
  {
    v12 = 0;
    result = 0;
    v44 = 0;
    v46 = 0;
    do
    {
      v13 = *(unsigned long *)(v10 + 52);
      if ( *(unsigned char *)(result + v13 + 80) == 1 )
      {
        v14 = *v6;
        v41 = *(unsigned long *)(result + v13 + 8);
        v43 = v14;
        v15 = *(unsigned long *)(v12 + v14 + 12);
        v16 = *(unsigned long **)(v12 + v14 + 8);
        v42 = v15;
        if ( v16 != (unsigned long *)v15 )
        {
          v17 = (unsigned long *)v15;
          do
          {
            v18 = (void *)v16[2];
            v16[3] = v18;
            if ( v18 )
            {
              operator delete(v18);
              v16[2] = 0;
              v16[3] = 0;
              v16[4] = 0;
            }
            v16 += 8;
          }
          while ( v16 != v17 );
          v6 = v48;
          v14 = v43;
        }
        v19 = v41;
        *(unsigned long *)(v12 + v14 + 12) = *(unsigned long *)(v12 + v14 + 8);
        sub_42BC70((int *)(v12 + *v6 + 8), v19);
        v20 = 0;
        v42 = 0;
        if ( v19 > 0 )
        {
          v21 = v48;
          v22 = 0;
          do
          {
            v23 = *(unsigned long *)(*(unsigned long *)(*(unsigned long *)(v46 + v47[13] + 12) + 4 * v20) + 8);
            v24 = *v21;
            v39 = (unsigned long *)v23;
            sub_42BA60((unsigned long *)(v22 + *(unsigned long *)(v12 + v24 + 8) + 8), *(unsigned long *)(v23 + 4));
            v21 = v48;
            *(unsigned long *)(*(unsigned long *)(v12 + *v48 + 8) + v22 + 20) = v45;
            v25 = **(unsigned long ***)v23;
            if ( v25 != *(unsigned long **)v23 )
            {
              v43 = 0;
              do
              {
                v26 = v25[2] << 6;
                v27 = *(unsigned long *)(v46 + v47[13] + 16);
                v28 = *(float *)(v27 + v26 + 36);
                v29 = *(float *)(v27 + v26 + 32);
                v30 = *(unsigned long *)(v27 + v26 + 8);
                v31 = v43;
                v12 = v44;
                *(unsigned long *)(v43 + *(unsigned long *)(*(unsigned long *)(v44 + *v21 + 8) + v22 + 8)) = v30;
                v21 = v48;
                *(double *)(*(unsigned long *)(*(unsigned long *)(v12 + *v48 + 8) + v22 + 8) + v31 + 8) = v29;
                *(double *)(*(unsigned long *)(*(unsigned long *)(v12 + *v48 + 8) + v22 + 8) + v31 + 16) = v28;
                *(unsigned long long *)(*(unsigned long *)(*(unsigned long *)(v12 + *v48 + 8) + v22 + 8) + v31 + 24) = 0i64;
                *(unsigned long long *)(*(unsigned long *)(*(unsigned long *)(v12 + *v48 + 8) + v22 + 8) + v31 + 32) = 0i64;
                v25 = (unsigned long *)*v25;
                v43 = v31 + 40;
              }
              while ( v25 != (unsigned long *)*v39 );
            }
            v22 += 32;
            v20 = v42 + 1;
            v42 = v20;
          }
          while ( v20 < v41 );
          v6 = v48;
        }
        v38 = (int)COERCE_UNSIGNED_INT64((double)(rand() % 128 + 128));
        v32 = rand() % 128;
        v33 = rand() % 128;
        v34 = (_int)_mm_loadu_si128(&v38);
        ++v45;
        v10 = (int)v47;
        v35 = _mm_cvtsi32_si128(v32 + 128);
        v11 = v40;
        v36 = _mm_cvtsi32_si128(v33 + 128);
        v37 = *v6;
        *(int *)(v12 + v37 + 24) = _mm_unpacklo_pd(v34, _mm_cvtepi32_pd(v35));
        *(int *)(v12 + v37 + 40) = _mm_unpacklo_pd(_mm_cvtepi32_pd(v36), (_int)0i64);
        result = v46;
        v12 += 56;
        v44 = v12;
      }
      ++v11;
      result += 168;
      v40 = v11;
      v46 = result;
    }
    while ( v11 < *(unsigned long *)(v10 + 8) );
  }
  return result;
}
void  sub_427FB0()
{
  unsigned long *v1; 
  int i; 
  int v3; 
  unsigned long **v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  char *v8; 
  char *v9; 

  v1 = this;
  for ( i = 0; i < this[1]; ++i )
  {
    v3 = v1[12];
    v4 = *(unsigned long ***)(v3 + 8 * i);
    v5 = (unsigned long *)(v3 + 8 * i);
    v6 = *v4;
    *v4 = v4;
    *(unsigned long *)(*v5 + 4) = *v5;
    v5[1] = 0;
    if ( v6 != (unsigned long *)*v5 )
    {
      do
      {
        v7 = (unsigned long *)*v6;
        operator delete(v6);
        v6 = v7;
      }
      while ( v7 != (unsigned long *)*v5 );
    }
    v1 = this;
  }
  v8 = (char *)v1[12];
  if ( v8 )
  {
    v9 = v8 - 4;
    `eh vector destructor iterator`(v8, 8u, *((unsigned long *)v8 - 1), (void ( *)(void *))sub_4271F0);
    operator delete[](v9);
  }
  v1[12] = 0;
  v1[1] = 0;
}
void  sub_428040(int a2, int a3, int a4)
{
  int v5; 
  int v6; 

  v5 = 0;
  if ( this[2] > 0 )
  {
    v6 = 0;
    do
    {
      sub_431970(v6 + this[13], this[3], this[1], this[14], a2, a3, a4);
      ++v5;
      v6 += 168;
    }
    while ( v5 < this[2] );
  }
}

int  sub_428190()
{
  int result; 
  int v2; 
  int v3; 
  int v4; 
  int *v5; 
  long long v6; 
  int v7; 
  int v8; 
  unsigned long long v9; 
  int *v10; 

  result = (int)this;
  v2 = 0;
  v3 = 0;
  v10 = this;
  if ( this[2] > 0 )
  {
    v4 = 0;
    do
    {
      v5 = (int *)(v4 + *(unsigned long *)(result + 52));
      if ( v5[5].m128i_i8[0] == 1 )
      {
        switch ( v3 )
        {
          case 0:
            sub_433A80(v5, xmmword_43A2C0, xmmword_43A240);
            break;
          case 1:
            sub_433A80(v5, xmmword_43A300, xmmword_43A270);
            break;
          case 2:
            sub_433A80(v5, xmmword_43A2E0, xmmword_43A230);
            break;
          case 3:
            v6 = xmmword_43A320;
            goto LABEL_9;
          case 4:
            sub_433A80(v5, xmmword_43A2B0, xmmword_43A210);
            break;
          case 5:
            v6 = xmmword_43A2A0;
LABEL_9:
            sub_433A80(v5, v6, xmmword_43A250);
            break;
          case 6:
            sub_433A80(v5, 0i64, xmmword_43A260);
            break;
          case 7:
            sub_433A80(v5, xmmword_43A2D0, 0i64);
            break;
          case 8:
            sub_433A80(v5, xmmword_43A310, xmmword_43A280);
            break;
          case 9:
            sub_433A80(v5, xmmword_43A330, xmmword_43A220);
            break;
          case 10:
            sub_433A80(v5, xmmword_43A2F0, 0i64);
            break;
          default:
            v8 = (int)COERCE_UNSIGNED_INT64((double)(rand() % 255));
            *(double *)&v9 = (double)(rand() % 255);
            v7 = rand();
            sub_433A80(
              (int *)(v4 + v10[13]),
              *(unsigned long long *)&_mm_unpacklo_pd((_int)_mm_loadu_si128(&v8), (_int)v9),
              *(unsigned long long *)&_mm_unpacklo_pd((_int)COERCE_UNSIGNED_INT64((double)(v7 % 255)), (_int)0i64));
            break;
        }
        ++v3;
      }
      result = (int)v10;
      ++v2;
      v4 += 168;
    }
    while ( v2 < v10[2] );
  }
  return result;
}
void  sub_4283B0()
{
  unsigned long *v1; 
  char *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned long *v8; 
  unsigned long *v9; 
  int v10; 
  int v11; 
  int v12; 
  float v13; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int i; 
  int v20; 
  int v21; 
  char *v22; 
  int v23; 

  v1 = this;
  v20 = 0;
  v2 = (char *)operator new[](0xFA0u);
  v22 = v2;
  if ( (int)v1[2] > 0 )
  {
    v3 = 0;
    do
    {
      sub_433070((unsigned long *)(v3 + v1[13]));
      v3 += 168;
      ++v20;
    }
    while ( v20 < v1[2] );
    v2 = v22;
  }
  v4 = 0;
  v21 = 0;
  if ( (int)v1[1] > 0 )
  {
    v5 = 0;
    v23 = 0;
    while ( 1 )
    {
      if ( *(unsigned char *)(v1[3] + v5 + 12) != 1 )
      {
        v6 = v1[27];
        v7 = *(unsigned long *)(v6 + 8 * v4 + 4);
        v8 = *(unsigned long **)(v6 + 8 * v4);
        v18 = v7;
        v9 = (unsigned long *)*v8;
        if ( (unsigned long *)*v8 != v8 )
        {
          do
          {
            v2 += 4;
            *((unsigned long *)v2 - 1) = v9[2];
            v9 = (unsigned long *)*v9;
          }
          while ( v9 != *(unsigned long **)(v1[27] + 8 * v4) );
        }
        v5 = v23;
        v10 = 0;
        for ( i = 0; v10 < v18; i = v10 )
        {
          v16 = v1[3];
          v4 = v21;
          v17 = *(unsigned long *)&v22[4 * v10];
          v11 = v16 + (v17 << 6);
          v12 = *(unsigned long *)(v5 + v16 + 16);
          if ( v12 >= 0 && v12 == *(unsigned long *)(v11 + 16) )
          {
            v15 = 168 * v12 + v1[13];
            if ( *(unsigned char *)(v15 + 80) == 1 && !*(unsigned char *)(v11 + 12) )
            {
              v13 = *(double *)libm_sse2_exp_precise().m128_u64;
              sub_4317A0(
                (unsigned long *)v15,
                *(unsigned long *)(v23 + v16 + 20),
                *(unsigned long *)(v16 + (v17 << 6) + 20),
                (float)(v13 * 4.0));
              v1 = this;
              v4 = v21;
            }
            v5 = v23;
          }
          v10 = i + 1;
        }
      }
      ++v4;
      v5 += 64;
      v21 = v4;
      v23 = v5;
      if ( v4 >= v1[1] )
        break;
      v2 = v22;
    }
  }
  operator delete[](v22);
}
void  sub_4285B0()
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  float v7; 
  float v8; 
  int v9; 
  float v10; 
  float v11; 
  int v12; 
  int v13; 
  unsigned long *v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned long *v20; 
  int v21; 
  int v22; 
  float v23; 
  int v24; 
  float v25; 
  int v26; 
  unsigned long *v27; 
  int v28; 

  v2 = 0;
  v26 = 0;
  v3 = this[1];
  if ( v3 > 0 )
  {
    do
    {
      v4 = this[3];
      v5 = v2++ << 6;
      v6 = v2;
      v24 = v5;
      v21 = v2;
      v28 = v2;
      v7 = *(float *)(v5 + v4 + 32);
      v8 = *(float *)(v5 + v4 + 36);
      v23 = v7;
      v25 = v8;
      if ( v2 < v3 )
      {
        do
        {
          v9 = this[3];
          v10 = v7 - *(float *)(v9 + (v6 << 6) + 32);
          v11 = v8 - *(float *)(v9 + (v6 << 6) + 36);
          if ( (float)((float)(v11 * v11) + (float)(v10 * v10)) < 16384.0 )
          {
            v22 = v5 + v9 + 24;
            v27 = *(unsigned long **)v22;
            v28 = sub_426520(v27, (unsigned long *)v27[1], &v28);
            v12 = *(unsigned long *)(v22 + 4);
            if ( v12 == 357913940 )
              goto LABEL_11;
            v13 = v12 + 1;
            v14 = v27;
            *(unsigned long *)(v22 + 4) = v13;
            v15 = v28;
            v14[1] = v28;
            **(unsigned long **)(v15 + 4) = v15;
            v16 = this[3] + (v6 << 6);
            v27 = *(unsigned long **)(v16 + 24);
            v17 = sub_426520(v27, (unsigned long *)v27[1], &v26);
            v18 = *(unsigned long *)(v16 + 28);
            if ( v18 == 357913940 )
LABEL_11:
              std::_Xlength_error("list<T> too long");
            v8 = v25;
            v19 = v18 + 1;
            v20 = v27;
            *(unsigned long *)(v16 + 28) = v19;
            v5 = v24;
            v20[1] = v17;
            **(unsigned long **)(v17 + 4) = v17;
          }
          v7 = v23;
          v28 = ++v6;
        }
        while ( v6 < this[1] );
        v2 = v21;
      }
      v3 = this[1];
      v26 = v2;
    }
    while ( v2 < v3 );
  }
}
int  sub_428700(int a2, int a3)
{
  int *v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned long *v7; 
  unsigned long *v8; 
  float v9; 
  float v10; 
  float v11; 
  float *v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v22; 
  unsigned long *v23; 
  int v24; 
  char *v25; 
  int v26; 
  int v27; 
  char *v28; 
  int v29; 
  char *v30; 
  int v31; 
  double v32; 
  double v33; 
  double v34; 
  int v35; 
  float v36; 
  int v37; 
  int v38; 
  float v39; 
  int v40; 
  double v41; 
  int v42; 
  double v43; 
  double v44; 
  double v45; 
  int v46; 
  double v47; 
  int v48; 
  int v49; 
  int v50; 
  float v51; 
  int v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  int v57; 
  double v58; 
  int v59; 
  double v60; 
  int v61; 
  double v62; 
  int v63; 
  double v64; 
  int v65; 
  int v66; 
  float v67; 
  float v68; 
  int v69; 
  unsigned long *v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  double v76; 
  float v77; 
  int v78; 
  float *v79; 
  double v80; 
  double v81; 
  int v82; 
  int v83; 
  double v84; 
  double v85; 
  unsigned int v86; 
  int v87; 
  int v88; 
  int v89; 
  long long v90; 
  int v91; 
  long long v92; 
  int v93; 
  long long v94; 
  int v95; 
  long long v96; 
  int v97; 
  long long v98; 
  int v99; 
  long long v100; 
  int v101; 
  int v102; 

  v3 = this;
  this[28] = a3;
  this[29] = a2;
  sub_4285B0(this);
  sub_431F70((int)(v3 + 4), a2 * a3, v3[1], 0);
  v71 = operator new[](0xFA0u);
  v79 = (float *)operator new[](0x404u);
  v99 = 0;
  v98 = 0i64;
  sub_403E60(&v98);
  v102 = 0;
  v97 = 0;
  v96 = 0i64;
  sub_403E60(&v96);
  LOBYTE(v102) = 1;
  v101 = 0;
  v100 = 0i64;
  sub_403E60(&v100);
  LOBYTE(v102) = 2;
  sub_403EE0(&v98);
  HIDWORD(v98) = 1;
  v99 = 64;
  DWORD2(v98) = cvCreateMat(1, 64, 5);
  DWORD1(v98) = *(unsigned long *)(DWORD2(v98) + 16);
  sub_403EE0(&v96);
  HIDWORD(v96) = 1;
  v97 = 128;
  DWORD2(v96) = cvCreateMat(1, 128, 5);
  DWORD1(v96) = *(unsigned long *)(DWORD2(v96) + 16);
  sub_403EE0(&v100);
  HIDWORD(v100) = 1;
  v101 = 256;
  DWORD2(v100) = cvCreateMat(1, 256, 5);
  DWORD1(v100) = *(unsigned long *)(DWORD2(v100) + 16);
  v94 = 0i64;
  v95 = 0;
  sub_403E60(&v94);
  LOBYTE(v102) = 3;
  v93 = 0;
  v92 = 0i64;
  sub_403E60(&v92);
  LOBYTE(v102) = 4;
  v91 = 0;
  v90 = 0i64;
  sub_403E60(&v90);
  LOBYTE(v102) = 5;
  sub_403EE0(&v94);
  HIDWORD(v94) = 1;
  v95 = 64;
  DWORD2(v94) = cvCreateMat(1, 64, 5);
  DWORD1(v94) = *(unsigned long *)(DWORD2(v94) + 16);
  sub_403EE0(&v92);
  HIDWORD(v92) = 1;
  v93 = 128;
  DWORD2(v92) = cvCreateMat(1, 128, 5);
  DWORD1(v92) = *(unsigned long *)(DWORD2(v92) + 16);
  sub_403EE0(&v90);
  HIDWORD(v90) = 1;
  v91 = 256;
  v4 = 0;
  DWORD2(v90) = cvCreateMat(1, 256, 5);
  v88 = 0;
  DWORD1(v90) = *(unsigned long *)(DWORD2(v90) + 16);
  if ( v3[1] > 0 )
  {
    v5 = 0;
    v72 = 0;
    do
    {
      v6 = v3[3];
      v69 = *(unsigned long *)(v5 + v6 + 28);
      v67 = *(float *)(v5 + v6 + 32);
      v68 = *(float *)(v5 + v6 + 36);
      v7 = **(unsigned long ***)(v5 + v6 + 24);
      if ( v7 != *(unsigned long **)(v5 + v6 + 24) )
      {
        v8 = v71;
        do
        {
          *v8++ = v3[3] + (v7[2] << 6);
          v7 = (unsigned long *)*v7;
        }
        while ( v7 != *(unsigned long **)(v72 + v3[3] + 24) );
        v4 = v88;
      }
      v89 = 0;
      if ( a3 > 0 )
      {
        v73 = 4 * a3;
        v75 = 4 * a3;
        do
        {
          v9 = *(double *)libm_sse2_cos_precise(v65, v66).m128_u64;
          v77 = v9;
          v10 = *(double *)libm_sse2_sin_precise().m128_u64;
          memset(v79, 0, 0x404u);
          sub_429F10(v67, v68, v77, v10, v69, (int)v71, (int)(v79 + 128), 128);
          v11 = 0.0;
          v12 = v79 + 2;
          v13 = 64;
          do
          {
            if ( *(v12 - 2) > v11 )
              v11 = *(v12 - 2);
            if ( *(v12 - 1) > v11 )
              v11 = *(v12 - 1);
            if ( *v12 > v11 )
              v11 = *v12;
            if ( v12[1] > v11 )
              v11 = v12[1];
            v12 += 4;
            --v13;
          }
          while ( v13 );
          if ( v11 >= 3.0 )
          {
            v22 = 8;
            v23 = v79 + 2;
            v24 = -8 - (unsigned long)v79;
            do
            {
              *(unsigned long long *)((char *)v23 + v24 + DWORD1(v100)) = *((unsigned long long *)v23 - 1);
              *(unsigned long *)(v22 + DWORD1(v100)) = *v23;
              v22 += 32;
              *(unsigned long *)((char *)v23 + 4 - (unsigned long)v79 + DWORD1(v100)) = v23[1];
              *(unsigned long *)((char *)v23 + 8 - (unsigned long)v79 + DWORD1(v100)) = v23[2];
              *(unsigned long *)((char *)v23 + 12 - (unsigned long)v79 + DWORD1(v100)) = v23[3];
              *(unsigned long *)((char *)v23 + 16 - (unsigned long)v79 + DWORD1(v100)) = v23[4];
              v25 = (char *)v23 + 20 - (unsigned long)v79;
              v26 = v23[5];
              v23 += 8;
              *(unsigned long *)&v25[DWORD1(v100)] = v26;
              v24 = -8 - (unsigned long)v79;
            }
            while ( v22 < 1032 );
            v27 = -264 - (unsigned long)v79;
            v28 = (char *)(v79 + 66);
            v29 = 16;
            do
            {
              v28 += 32;
              *(unsigned long *)&v28[DWORD1(v96) - 32 + v27] = *((unsigned long *)v28 - 10);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -260 - (unsigned long)v79] = *((unsigned long *)v28 - 9);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -256 - (unsigned long)v79] = *((unsigned long *)v28 - 8);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -252 - (unsigned long)v79] = *((unsigned long *)v28 - 7);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -248 - (unsigned long)v79] = *((unsigned long *)v28 - 6);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -244 - (unsigned long)v79] = *((unsigned long *)v28 - 5);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -240 - (unsigned long)v79] = *((unsigned long *)v28 - 4);
              *(unsigned long *)&v28[DWORD1(v96) - 32 + -236 - (unsigned long)v79] = *((unsigned long *)v28 - 3);
              v27 = -264 - (unsigned long)v79;
              --v29;
            }
            while ( v29 );
            v30 = (char *)(v79 + 98);
            v31 = 8;
            do
            {
              v30 += 32;
              *(unsigned long *)&v30[-392 - (unsigned long)v79 - 32 + DWORD1(v98)] = *((unsigned long *)v30 - 10);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -388 - (unsigned long)v79] = *((unsigned long *)v30 - 9);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -384 - (unsigned long)v79] = *((unsigned long *)v30 - 8);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -380 - (unsigned long)v79] = *((unsigned long *)v30 - 7);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -376 - (unsigned long)v79] = *((unsigned long *)v30 - 6);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -372 - (unsigned long)v79] = *((unsigned long *)v30 - 5);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -368 - (unsigned long)v79] = *((unsigned long *)v30 - 4);
              *(unsigned long *)&v30[DWORD1(v98) - 32 + -364 - (unsigned long)v79] = *((unsigned long *)v30 - 3);
              --v31;
            }
            while ( v31 );
            cvDFT(DWORD2(v98), DWORD2(v94), 0, 64);
            cvDFT(DWORD2(v96), DWORD2(v92), 0, 128);
            cvDFT(DWORD2(v100), DWORD2(v90), 0, 256);
            v3 = this;
            v84 = (float)((float)((float)(*(float *)(DWORD1(v94) + 16) * *(float *)(DWORD1(v94) + 16))
                                + (float)(*(float *)(DWORD1(v94) + 12) * *(float *)(DWORD1(v94) + 12)))
                        + 1.0);
            v32 = (float)((float)((float)(*(float *)(DWORD1(v94) + 24) * *(float *)(DWORD1(v94) + 24))
                                + (float)(*(float *)(DWORD1(v94) + 20) * *(float *)(DWORD1(v94) + 20)))
                        + 1.0);
            v80 = v32;
            v33 = (float)((float)((float)(*(float *)(DWORD1(v94) + 32) * *(float *)(DWORD1(v94) + 32))
                                + (float)(*(float *)(DWORD1(v94) + 28) * *(float *)(DWORD1(v94) + 28)))
                        + 1.0);
            v34 = (float)((float)((float)(*(float *)(DWORD1(v94) + 40) * *(float *)(DWORD1(v94) + 40))
                                + (float)(*(float *)(DWORD1(v94) + 36) * *(float *)(DWORD1(v94) + 36)))
                        + 1.0);
            if ( v33 >= v34
              || (float)((float)((float)(*(float *)(DWORD1(v94) + 48) * *(float *)(DWORD1(v94) + 48))
                               + (float)(*(float *)(DWORD1(v94) + 44) * *(float *)(DWORD1(v94) + 44)))
                       + 1.0) >= v34 )
            {
              v37 = v88;
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v88) + 4 * v89) = 1077097267;
            }
            else
            {
              v35 = *(unsigned long *)(this[11] + 4 * v88);
              v32 = (float)((float)((float)(*(float *)(DWORD1(v94) + 24) * *(float *)(DWORD1(v94) + 24))
                                  + (float)(*(float *)(DWORD1(v94) + 20) * *(float *)(DWORD1(v94) + 20)))
                          + 1.0);
              v36 = -*(double *)libm_sse2_log_precise(v65).m128_u64;
              *(float *)(v35 + 4 * v89) = v36;
              v37 = v88;
            }
            if ( v32 >= v33 || v34 >= v33 )
            {
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v37) + v75) = 1077097267;
            }
            else
            {
              v38 = *(unsigned long *)(this[11] + 4 * v37);
              v32 = v80;
              v39 = -*(double *)libm_sse2_log_precise(v65).m128_u64;
              *(float *)(v38 + v75) = v39;
              v37 = v88;
            }
            if ( v33 >= v32 || v84 >= v32 )
            {
              v42 = a3;
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v37) + 4 * (v89 + 2 * a3)) = 1077097267;
            }
            else
            {
              v40 = *(unsigned long *)(this[11] + 4 * v37);
              v41 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v42 = a3;
              *(float *)&v41 = -v41;
              *(unsigned long *)(v40 + 4 * (v89 + 2 * a3)) = LODWORD(v41);
              v37 = v88;
            }
            v85 = (float)((float)((float)(*(float *)(DWORD1(v92) + 16) * *(float *)(DWORD1(v92) + 16))
                                + (float)(*(float *)(DWORD1(v92) + 12) * *(float *)(DWORD1(v92) + 12)))
                        + 1.0);
            v43 = (float)((float)((float)(*(float *)(DWORD1(v92) + 24) * *(float *)(DWORD1(v92) + 24))
                                + (float)(*(float *)(DWORD1(v92) + 20) * *(float *)(DWORD1(v92) + 20)))
                        + 1.0);
            v44 = (float)((float)((float)(*(float *)(DWORD1(v92) + 32) * *(float *)(DWORD1(v92) + 32))
                                + (float)(*(float *)(DWORD1(v92) + 28) * *(float *)(DWORD1(v92) + 28)))
                        + 1.0);
            v45 = (float)((float)((float)(*(float *)(DWORD1(v92) + 40) * *(float *)(DWORD1(v92) + 40))
                                + (float)(*(float *)(DWORD1(v92) + 36) * *(float *)(DWORD1(v92) + 36)))
                        + 1.0);
            if ( v44 >= v45
              || (float)((float)((float)(*(float *)(DWORD1(v92) + 48) * *(float *)(DWORD1(v92) + 48))
                               + (float)(*(float *)(DWORD1(v92) + 44) * *(float *)(DWORD1(v92) + 44)))
                       + 1.0) >= v45 )
            {
              v49 = v42 + v89 + 2 * v42;
              v48 = v89;
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v37) + 4 * v49) = 1077097267;
            }
            else
            {
              v46 = *(unsigned long *)(this[11] + 4 * v37);
              v47 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v48 = v89;
              *(float *)&v47 = -v47;
              *(unsigned long *)(v46 + 4 * (a3 + v89 + 2 * a3)) = LODWORD(v47);
              v37 = v88;
            }
            if ( v43 >= v44 || v45 >= v44 )
            {
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v37) + 4 * (v48 + v73)) = 1077097267;
            }
            else
            {
              v50 = *(unsigned long *)(this[11] + 4 * v37);
              v51 = -*(double *)libm_sse2_log_precise(v65).m128_u64;
              *(float *)(v50 + 4 * (v73 + v89)) = v51;
              v37 = v88;
            }
            if ( v44 >= v43 || v85 >= v43 )
            {
              v20 = a3;
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v37) + 4 * (a3 + v89 + 4 * a3)) = 1077097267;
            }
            else
            {
              v52 = *(unsigned long *)(this[11] + 4 * v37);
              v53 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v20 = a3;
              *(float *)&v53 = -v53;
              *(unsigned long *)(v52 + 4 * (a3 + v89 + 4 * a3)) = LODWORD(v53);
              v37 = v88;
            }
            v76 = (float)((float)((float)(*(float *)(DWORD1(v90) + 8) * *(float *)(DWORD1(v90) + 8))
                                + (float)(*(float *)(DWORD1(v90) + 4) * *(float *)(DWORD1(v90) + 4)))
                        + 1.0);
            v81 = (float)((float)((float)(*(float *)(DWORD1(v90) + 16) * *(float *)(DWORD1(v90) + 16))
                                + (float)(*(float *)(DWORD1(v90) + 12) * *(float *)(DWORD1(v90) + 12)))
                        + 1.0);
            v54 = (float)((float)((float)(*(float *)(DWORD1(v90) + 24) * *(float *)(DWORD1(v90) + 24))
                                + (float)(*(float *)(DWORD1(v90) + 20) * *(float *)(DWORD1(v90) + 20)))
                        + 1.0);
            v55 = (float)((float)((float)(*(float *)(DWORD1(v90) + 32) * *(float *)(DWORD1(v90) + 32))
                                + (float)(*(float *)(DWORD1(v90) + 28) * *(float *)(DWORD1(v90) + 28)))
                        + 1.0);
            v56 = (float)((float)((float)(*(float *)(DWORD1(v90) + 40) * *(float *)(DWORD1(v90) + 40))
                                + (float)(*(float *)(DWORD1(v90) + 36) * *(float *)(DWORD1(v90) + 36)))
                        + 1.0);
            if ( v55 >= v56
              || (float)((float)((float)(*(float *)(DWORD1(v90) + 48) * *(float *)(DWORD1(v90) + 48))
                               + (float)(*(float *)(DWORD1(v90) + 44) * *(float *)(DWORD1(v90) + 44)))
                       + 1.0) >= v56 )
            {
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v37) + 4 * (v89 + 6 * v20)) = 1077097267;
            }
            else
            {
              v57 = *(unsigned long *)(this[11] + 4 * v37);
              v58 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v20 = a3;
              *(float *)&v58 = -v58;
              *(unsigned long *)(v57 + 4 * (v89 + 6 * a3)) = LODWORD(v58);
            }
            v4 = v88;
            if ( v54 >= v55 || v56 >= v55 )
            {
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v88) + 4 * (v89 + 7 * v20)) = 1077097267;
            }
            else
            {
              v59 = *(unsigned long *)(this[11] + 4 * v88);
              v60 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v20 = a3;
              *(float *)&v60 = -v60;
              *(unsigned long *)(v59 + 4 * (v89 + 7 * a3)) = LODWORD(v60);
              v4 = v88;
            }
            if ( v55 >= v54 || v81 >= v54 )
            {
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v4) + 4 * (v89 + 8 * v20)) = 1077097267;
            }
            else
            {
              v61 = *(unsigned long *)(this[11] + 4 * v4);
              v62 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v20 = a3;
              *(float *)&v62 = -v62;
              *(unsigned long *)(v61 + 4 * (v89 + 8 * a3)) = LODWORD(v62);
              v4 = v88;
            }
            if ( v54 >= v81 || v76 >= v81 )
            {
              *(unsigned long *)(*(unsigned long *)(this[11] + 4 * v4) + 4 * (v20 + v89 + 8 * v20)) = 1077097267;
            }
            else
            {
              v63 = *(unsigned long *)(this[11] + 4 * v4);
              v64 = *(double *)libm_sse2_log_precise(v65).m128_u64;
              v20 = a3;
              *(float *)&v64 = -v64;
              *(unsigned long *)(v63 + 4 * (a3 + v89 + 8 * a3)) = LODWORD(v64);
              v4 = v88;
            }
          }
          else
          {
            v14 = a3;
            v15 = 0;
            v16 = v89;
            if ( a2 >= 4 )
            {
              v82 = 16 * a3;
              v74 = 4 * v89;
              v78 = 4 * (v89 + 2 * a3);
              v87 = v75;
              v17 = 4 * (a3 + v89 + 2 * a3);
              v86 = ((unsigned int)(a2 - 4) >> 2) + 1;
              v83 = 4 * v86;
              do
              {
                *(unsigned long *)(v74 + *(unsigned long *)(v3[11] + 4 * v4)) = 1077097267;
                *(unsigned long *)(v87 + *(unsigned long *)(v3[11] + 4 * v4)) = 1077097267;
                *(unsigned long *)(v78 + *(unsigned long *)(v3[11] + 4 * v4)) = 1077097267;
                v74 += v82;
                v87 += v82;
                v78 += v82;
                *(unsigned long *)(v17 + *(unsigned long *)(v3[11] + 4 * v4)) = 1077097267;
                v17 += v82;
                --v86;
              }
              while ( v86 );
              v14 = a3;
              v16 = v89;
              v15 = v83;
            }
            if ( v15 < a2 )
            {
              v18 = 4 * (v16 + v15 * v14);
              v19 = a2 - v15;
              do
              {
                *(unsigned long *)(v18 + *(unsigned long *)(v3[11] + 4 * v4)) = 1077097267;
                v18 += v73;
                --v19;
              }
              while ( v19 );
            }
            v20 = a3;
          }
          v75 += 4;
          ++v89;
        }
        while ( v89 < v20 );
      }
      ++v4;
      v5 = v72 + 64;
      v88 = v4;
      v72 += 64;
    }
    while ( v4 < v3[1] );
  }
  operator delete[](v71);
  operator delete[](v79);
  LOBYTE(v102) = 4;
  sub_403E70(&v90);
  LOBYTE(v102) = 3;
  sub_403E70(&v92);
  LOBYTE(v102) = 2;
  sub_403E70(&v94);
  LOBYTE(v102) = 1;
  sub_403E70(&v100);
  LOBYTE(v102) = 0;
  sub_403E70(&v96);
  v102 = -1;
  return sub_403E70(&v98);
}
double  sub_429780( int a2, int a3)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int v11; 
  unsigned int v12; 
  float v14; 
  float *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  double v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  float v38; 
  float v39; 
  float v40; 
  int v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  double v46; 
  double v47; 
  int v48; 
  int v49; 

  v3 = this[14];
  v4 = this[3];
  v5 = *(unsigned long *)(v3 + 4 * a2);
  v48 = a2 << 6;
  v6 = *(unsigned long *)(v3 + 4 * a3);
  v49 = a3 << 6;
  v7 = *(float *)(v4 + v48 + 32);
  v8 = *(float *)(v4 + v48 + 36);
  v9 = *(float *)(v4 + v49 + 32);
  v37 = (v5 - v5 % dword_501978) / dword_501978;
  v10 = *(float *)(v4 + v49 + 36);
  v41 = (v6 - v6 % dword_501978) / dword_501978;
  v11 = abs32(v5 % dword_501978 - v6 % dword_501978);
  v12 = abs32(v37 - v41);
  if ( v11 == 31 )
    v11 = 1;
  if ( (int)(v11 + v12) >= 4 || v11 >= 3 )
    return 0.0;
  v15 = &dword_43E070[v37];
  v46 = v7 - v9;
  v47 = v8 - v10;
  if ( *v15 > dword_43E070[v41] )
    v15 = &dword_43E070[v41];
  v14 = *(float *)(v48 + dword_501974 + 32) - *(float *)(v49 + dword_501974 + 32);
  v40 = (float)((float)(*(float *)(v48 + dword_501974 + 36) - *(float *)(v49 + dword_501974 + 36))
              * (float)(*(float *)(v48 + dword_501974 + 36) - *(float *)(v49 + dword_501974 + 36)))
      + (float)(v14 * v14);
  v16 = *v15 + 0.1;
  v38 = v16;
  v17 = *(double *)libm_sse2_sin_precise().m128_u64;
  v42 = (float)-v17 * (float)v46;
  v18 = *(double *)libm_sse2_cos_precise(v27, v31).m128_u64;
  v19 = fabs((float)(v42 + (float)(v18 * (float)v47)));
  v43 = v19;
  v20 = *(double *)libm_sse2_sqrt_precise(v28, v32, v35, LODWORD(v38)).m128_u64;
  if ( (float)((float)(v43 / v20) >= 0.4) <= 0.0
    || (v21 = *(double *)libm_sse2_sin_precise().m128_u64,
        v44 = (float)-v21 * (float)v46,
        v22 = *(double *)libm_sse2_cos_precise(v29, v33).m128_u64,
        v23 = v47,
        v24 = fabs((float)(v44 + (float)(v22 * v23))),
        v45 = v24,
        v25 = *(double *)libm_sse2_sqrt_precise(v30, v34, v36, LODWORD(v39)).m128_u64,
        (float)((float)(v45 / v25) >= 0.4) <= 0.0) )
  {
    v26 = v39 * 1.44;
  }
  else
  {
    v26 = v39 * 0.8100000000000001;
  }
  if ( v40 > v26 )
    return 0.0;
  else
    return 100.0;
}
double  sub_429AE0(int a1, int a2, int a3, int a4)
{
  float v5; 
  float v6; 
  float v7; 

  if ( a3 == a4 )
    return 0.0;
  v5 = fabs((float)(a3 % dword_501978 - a4 % dword_501978));
  v6 = (float)fabs((float)((a3 - a3 % dword_501978) / dword_501978 - (a4 - a4 % dword_501978) / dword_501978)) + v5;
  v7 = *(double *)libm_sse2_exp_precise().m128_u64;
  if ( v6 >= 4.0 )
    return (float)(v7 * 5.0);
  return (float)(v7 * 0.4);
}
void  sub_429C20()
{
  unsigned long *v2; 
  unsigned long long *v3; 
  unsigned long *v4; 
  int v5; 
  int *v6; 
  int *v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned long *v11; 
  unsigned long *v12; 
  unsigned long *v13; 
  int v14; 
  int v15; 
  unsigned long *v16; 
  int v17; 
  void ( ***v18)(unsigned long, int); 
  int v19; 
  int v20; 
  unsigned long *v21; 
  void *v22; 
  void *i; 
  float v24; 
  int v25; 

  dword_501978 = *(unsigned long *)(this + 112);
  dword_50197C = *(unsigned long *)(this + 116);
  dword_501974 = *(unsigned long *)(this + 12);
  v22 = *(void **)(this + 4);
  v19 = *(unsigned long *)(this + 112) * *(unsigned long *)(this + 116);
  v2 = operator new(0xCu);
  if ( v2 )
  {
    *(unsigned long long *)v2 = 0i64;
    v2[2] = 0;
    *v2 = *(unsigned long *)(this + 40);
    v2[2] = 1;
  }
  else
  {
    v2 = 0;
  }
  *(unsigned long *)(this + 124) = v2;
  v3 = operator new(0x28u);
  if ( v3 )
  {
    *v3 = 0i64;
    v3[1] = 0i64;
    *((unsigned long long *)v3 + 4) = 0i64;
    *((unsigned long *)v3 + 3) = sub_429AE0;
    *((unsigned long *)v3 + 4) = 0;
    *((unsigned char *)v3 + 32) = 0;
  }
  else
  {
    v3 = 0;
  }
  *(unsigned long *)(this + 128) = v3;
  v4 = operator new(8u);
  if ( v4 )
  {
    *(unsigned long long *)v4 = 0i64;
    v5 = *(unsigned long *)(this + 128);
    *v4 = *(unsigned long *)(this + 124);
    v4[1] = v5;
  }
  else
  {
    v4 = 0;
  }
  *(unsigned long *)(this + 132) = v4;
  v21 = operator new[](0xFA0u);
  v6 = (int *)operator new(0x58u);
  v7 = v6;
  v25 = 0;
  if ( v6 )
  {
    memset(v6, 0, 0x58u);
    sub_42DA70((int)v7, v22, v19, *(unsigned long **)(this + 132));
    *v7 = (int)&Expansion::`vftable`;
  }
  else
  {
    v7 = 0;
  }
  v25 = -1;
  *(unsigned long *)(this + 120) = v7;
  sub_431090(v7);
  (*(void ( **)(unsigned long))(**(unsigned long **)(this + 120) + 36))(*(unsigned long *)(this + 120));
  v8 = 0;
  for ( i = 0; v8 < *(unsigned long *)(this + 4); i = (void *)v8 )
  {
    v9 = *(unsigned long *)(this + 108);
    v10 = *(unsigned long *)(v9 + 8 * v8 + 4);
    v11 = *(unsigned long **)(v9 + 8 * v8);
    v20 = v10;
    v12 = (unsigned long *)*v11;
    if ( (unsigned long *)*v11 != v11 )
    {
      v13 = v21;
      do
      {
        *v13++ = v12[2];
        v12 = (unsigned long *)*v12;
      }
      while ( v12 != *(unsigned long **)(*(unsigned long *)(this + 108) + 8 * v8) );
    }
    v14 = v20;
    v15 = 0;
    if ( v20 > 0 )
    {
      v16 = v21;
      do
      {
        if ( v16[v15] > v8 )
        {
          (*(void ( **)(unsigned long, void *, unsigned long, int))(**(unsigned long **)(this + 120) + 16))(
            *(unsigned long *)(this + 120),
            i,
            v21[v15],
            1065353216);
          v8 = (int)i;
          v14 = v20;
          v16 = v21;
        }
        ++v15;
      }
      while ( v15 < v14 );
    }
    ++v8;
  }
  sub_4311F0(*(unsigned char **)(this + 120));
  v17 = 3;
  do
  {
    sub_431170(*(unsigned char **)(this + 120), 1, &v24);
    sub_4311F0(*(unsigned char **)(this + 120));
    --v17;
  }
  while ( v17 );
  if ( *(int *)(this + 4) > 0 )
  {
    do
    {
      *(unsigned long *)(*(unsigned long *)(this + 56) + 4 * v17) = (*(int ( **)(unsigned long, int))(**(unsigned long **)(this + 120) + 28))(
                                                        *(unsigned long *)(this + 120),
                                                        v17);
      ++v17;
    }
    while ( v17 < *(unsigned long *)(this + 4) );
  }
  operator delete(*(void **)(this + 124));
  operator delete(*(void **)(this + 128));
  operator delete(*(void **)(this + 132));
  v18 = *(void ( ****)(unsigned long, int))(this + 120);
  if ( v18 )
    (**v18)(v18, 1);
  *(unsigned long *)(this + 124) = 0;
  *(unsigned long *)(this + 128) = 0;
  *(unsigned long *)(this + 132) = 0;
  *(unsigned long *)(this + 120) = 0;
  operator delete[](v21);
}
void  sub_429EB0(int *a1, int a2, long long a3, unsigned int a4)
{
  int v5; 
  int v6; 

  v5 = 0;
  if ( a1[2] > 0 )
  {
    v6 = 0;
    do
    {
      sub_433090(v6 + a1[13], a2, a1[3], a1[1], a1[14], a3, a4);
      ++v5;
      v6 += 168;
    }
    while ( v5 < a1[2] );
  }
}
void  sub_429F10(float a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8)
{
  int v8; 
  float v9; 
  float v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  __m128 *v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  double v26; 

  v8 = 0;
  if ( a5 > 0 )
  {
    v9 = a4;
    v10 = a3;
    do
    {
      v26 = (a1 - *(float *)(*(unsigned long *)(a6 + 4 * v8) + 32)) * v10
          + (a2 - *(float *)(*(unsigned long *)(a6 + 4 * v8) + 36)) * v9;
      v11 = *(double *)libm_sse2_sqrt_precise(v22, v23, v24, v25).m128_u64;
      v12 = v26 - v11;
      if ( v26 - v11 <= (double)a8 )
      {
        v13 = v11 + v26;
        v14 = (double)-a8;
        if ( v14 <= v13 )
        {
          if ( v14 <= v12 )
            v14 = v12;
          v15 = (int)v14;
          if ( v13 > (double)a8 )
            v13 = (double)a8;
          v16 = (int)v13;
          v17 = (int)v13 - v15 + 1;
          if ( v15 <= (int)v13 )
          {
            if ( (unsigned int)v17 >= 8 )
            {
              v18 = v16 - v17 % 8;
              v19 = (__m128 *)(a7 + 4 * v15);
              do
              {
                v15 += 8;
                *v19 = _mm_add_ps(*v19, (__m128)xmmword_43A290);
                v19[1] = _mm_add_ps(v19[1], (__m128)xmmword_43A290);
                v19 += 2;
              }
              while ( v15 <= v18 );
            }
            if ( v15 <= v16 )
            {
              if ( v16 - v15 + 1 >= 4 )
              {
                v20 = a7 + 8 + 4 * v15;
                v21 = ((unsigned int)(v16 - v15 - 3) >> 2) + 1;
                v15 += 4 * v21;
                do
                {
                  *(__m128 *)(v20 - 8) = _mm_add_ps(*(__m128 *)(v20 - 8), (__m128)xmmword_43A290);
                  v20 += 16;
                  --v21;
                }
                while ( v21 );
              }
              for ( ; v15 <= v16; ++v15 )
                *(float *)(a7 + 4 * v15) = *(float *)(a7 + 4 * v15) + 1.0;
            }
          }
        }
      }
      v9 = a4;
      ++v8;
      v10 = a3;
    }
    while ( v8 < a5 );
  }
}
unsigned long * sub_42A0F0( int a2, int a3)
{
  unsigned long *result; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  unsigned long **v9; 
  int v10; 
  int v12; 
  int v13; 
  int v14; 

  result = this;
  v4 = 0;
  v5 = 0;
  v13 = 0;
  if ( (int)this[1] > 0 )
  {
    v6 = 0;
    v14 = 0;
    v12 = 0;
    do
    {
      v7 = result[3];
      v8 = *(unsigned long *)(v6 + v7 + 8);
      v9 = (unsigned long **)(v6 + v7);
      if ( v8 > a2 && v8 < a3 )
      {
        v10 = v7 + v14;
        if ( (unsigned long **)(v7 + v14) != v9 )
          sub_426DD0((unsigned long *)(v7 + v14), (unsigned long *)**v9, *v9);
        *(unsigned long *)(v10 + 8) = v9[2];
        *(unsigned char *)(v10 + 12) = *((unsigned char *)v9 + 12);
        *(unsigned long *)(v10 + 16) = v9[4];
        *(unsigned long *)(v10 + 20) = v9[5];
        if ( (unsigned long **)(v10 + 24) != v9 + 6 )
          sub_426CE0((unsigned long *)(v10 + 24), (unsigned long *)*v9[6], v9[6]);
        v6 = v12;
        *(unsigned long *)(v10 + 32) = v9[8];
        *(unsigned long *)(v10 + 36) = v9[9];
        *(unsigned long *)(v10 + 40) = v9[10];
        *(unsigned long *)(v10 + 44) = v9[11];
        *(unsigned long *)(v10 + 48) = v9[12];
        *(unsigned long *)(v10 + 52) = v9[13];
        *(unsigned long *)(v10 + 56) = v9[14];
        *(unsigned long *)(v10 + 60) = v9[15];
        v4 = v13 + 1;
        v14 += 64;
        ++v13;
      }
      result = this;
      ++v5;
      v6 += 64;
      v12 = v6;
    }
    while ( v5 < this[1] );
  }
  result[1] = v4;
  return result;
}
void  sub_42A1D0( int a2)
{
  int v3; 
  int v4; 
  int Size; 
  int v6; 
  unsigned long *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned long *v14; 
  unsigned long *v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  int v21; 
  __int16 v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  unsigned long *v34; 
  int *v35; 
  unsigned long *v36; 
  int v37; 
  char *v38; 
  unsigned long *v39; 
  void *v40; 
  unsigned long v41[4]; 
  int v42[2]; 
  int v43[2]; 
  int v44[2]; 
  int v45[2]; 
  int v46[2]; 
  int v47[2]; 
  int v48[2]; 
  int v49[2]; 
  int v50[2]; 
  int v51[2]; 
  int v52; 
  unsigned long *v53; 
  int v54; 
  int v55; 
  int v56; 
  int *v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int Image; 
  void *v64[4]; 
  int v65; 
  int v66; 

  v53 = this;
  v4 = *(unsigned long *)(a2 + 44);
  v54 = *(unsigned long *)(a2 + 40);
  v3 = v54;
  v55 = v4;
  v53[17] = 0;
  this[18] = 0;
  this[19] = v3;
  this[20] = v4;
  Size = cvGetSize(a2);
  Image = cvCreateImage(Size);
  cvCopy(a2, Image, 0);
  v6 = Image;
  v52 = Image;
  v41[3] = Image;
  v66 = 0;
  memset(v64, 0, sizeof(v64));
  v65 = 0;
  v7 = operator new(8u);
  if ( !v7 )
    std::_Xbad_alloc();
  v64[0] = v7;
  *v7 = 0;
  v7[1] = 0;
  *(unsigned long *)v64[0] = v64;
  v8 = 0;
  LOBYTE(v66) = 1;
  v9 = 0;
  v60 = 0;
  v59 = 0;
  if ( v55 <= 0 )
    goto LABEL_44;
  do
  {
    v10 = 0;
    v56 = 0;
    if ( v3 <= 0 )
      goto LABEL_43;
    v11 = v8 << 6;
    v58 = v8 << 6;
    do
    {
      if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v9 * *(unsigned long *)(v6 + 72) + v10) == 0xFF )
      {
        v43[0] = v10;
        v43[1] = v9;
        sub_42B970(v64, v43);
        v12 = v11 + v53[3];
        v13 = v65;
        v57 = (int *)v12;
        if ( v65 )
        {
          do
          {
            v14 = sub_42B4D0((int *)v64, v41);
            v15 = (unsigned long *)*v14;
            if ( *v14 )
              v15 = (unsigned long *)*v15;
            v16 = v14[2];
            v17 = v15[2] - 1;
            v62 = (int)v15;
            v18 = v16 >> 1;
            v19 = v16 & 1;
            v20 = *(unsigned long *)(*(unsigned long *)(v62 + 4) + 4 * (v18 & v17));
            v21 = *(unsigned __int16 *)(v20 + 8 * v19);
            v22 = *(_WORD *)(v20 + 8 * v19 + 4);
            v61 = v21;
            v65 = v13 - 1;
            if ( v13 == 1 )
              v64[3] = 0;
            else
              ++v64[3];
            v23 = v22;
            v24 = (__int16)v61;
            v25 = v22 * *(unsigned long *)(v6 + 72);
            v62 = v23;
            if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v25 + (__int16)v61) )
            {
              v49[1] = v23;
              v49[0] = (__int16)v61;
              v61 = *v57;
              sub_426570((unsigned long *)v61, *(unsigned long **)(v61 + 4), v49);
              if ( v57[1] == 268435454 )
                std::_Xlength_error("list<T> too long");
              ++v57[1];
              v27 = v62;
              *(unsigned long *)(v61 + 4) = v26;
              **(unsigned long **)(v26 + 4) = v26;
              *(unsigned char *)(*(unsigned long *)(v6 + 68) + v27 * *(unsigned long *)(v6 + 72) + v24) = 0;
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v27 * *(unsigned long *)(v6 + 72) + v24 - 1) == 0xFF )
              {
                v45[1] = v27;
                v45[0] = v24 - 1;
                sub_42B970(v64, v45);
                v27 = v62;
              }
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v27 * *(unsigned long *)(v6 + 72) + v24 + 1) == 0xFF )
              {
                v47[1] = v27;
                v47[0] = v24 + 1;
                sub_42B970(v64, v47);
                v27 = v62;
              }
              v28 = (v27 - 1) * *(unsigned long *)(v6 + 72);
              v61 = v27 - 1;
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v28 + v24) == 0xFF )
              {
                v51[0] = v24;
                v51[1] = v27 - 1;
                sub_42B970(v64, v51);
                v27 = v62;
              }
              v29 = v27 + 1;
              v30 = v29 * *(unsigned long *)(v6 + 72);
              v62 = v29;
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v30 + v24) == 0xFF )
              {
                v50[1] = v29;
                v50[0] = v24;
                sub_42B970(v64, v50);
              }
              v31 = v61;
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v61 * *(unsigned long *)(v6 + 72) + v24 - 1) == 0xFF )
              {
                v48[1] = v61;
                v48[0] = v24 - 1;
                sub_42B970(v64, v48);
                v31 = v61;
              }
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v31 * *(unsigned long *)(v6 + 72) + v24 + 1) == 0xFF )
              {
                v46[1] = v31;
                v46[0] = v24 + 1;
                sub_42B970(v64, v46);
              }
              v32 = v62;
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v62 * *(unsigned long *)(v6 + 72) + v24 - 1) == 0xFF )
              {
                v44[1] = v62;
                v44[0] = v24 - 1;
                sub_42B970(v64, v44);
                v32 = v62;
              }
              if ( *(unsigned char *)(*(unsigned long *)(v6 + 68) + v32 * *(unsigned long *)(v6 + 72) + v24 + 1) == 0xFF )
              {
                v42[1] = v32;
                v42[0] = v24 + 1;
                sub_42B970(v64, v42);
              }
            }
            v13 = v65;
          }
          while ( v65 );
          v12 = (int)v57;
        }
        v33 = *(unsigned long *)(v12 + 4);
        *(unsigned long *)(v12 + 8) = v33;
        if ( v33 < 100000 )
        {
          v8 = v60 + 1;
          v10 = v56;
          v11 = v58 + 64;
          v9 = v59;
          ++v60;
          v58 += 64;
          goto LABEL_41;
        }
        v34 = **(unsigned long ***)v12;
        **(unsigned long **)v12 = *(unsigned long *)v12;
        *(unsigned long *)(*(unsigned long *)v12 + 4) = *(unsigned long *)v12;
        *(unsigned long *)(v12 + 4) = 0;
        if ( v34 != *(unsigned long **)v12 )
        {
          v35 = v57;
          do
          {
            v36 = (unsigned long *)*v34;
            operator delete(v34);
            v34 = v36;
          }
          while ( v36 != (unsigned long *)*v35 );
          v6 = v52;
        }
        v9 = v59;
        v11 = v58;
        v10 = v56;
      }
      v8 = v60;
LABEL_41:
      v56 = ++v10;
    }
    while ( v10 < v54 );
    v3 = v54;
LABEL_43:
    v59 = ++v9;
  }
  while ( v9 < v55 );
LABEL_44:
  v53[1] = v8;
  cvReleaseImage(&Image);
  v37 = v65;
  if ( v65 )
  {
    do
      --v37;
    while ( v37 );
    v64[3] = 0;
    v65 = 0;
  }
  v38 = (char *)v64[2];
  v39 = v64[1];
  if ( v64[2] )
  {
    do
    {
      v40 = (void *)v39[(unsigned long)v38-- - 1];
      if ( v40 )
      {
        operator delete(v40);
        v39 = v64[1];
      }
    }
    while ( v38 );
  }
  if ( v39 )
    operator delete(v39);
  v64[2] = 0;
  v64[1] = 0;
  operator delete(v64[0]);
}
int  sub_42A690()
{
  int v2; 
  unsigned long *v3; 
  char *v4; 
  int v5; 
  unsigned long *v6; 
  int i; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 
  unsigned long *v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned long *v18; 
  unsigned long *v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  unsigned long *v30; 
  unsigned long **v31; 
  unsigned long *j; 
  void *v33; 
  unsigned int v35; 
  int v36; 
  char *v37; 
  int v38; 
  float v39; 
  char *v40; 
  unsigned long **v41; 
  int v42; 
  unsigned long *v43; 
  void *v44[2]; 
  int v45; 
  int v46; 

  v35 = this[1];
  v45 = 0;
  *(unsigned long long *)v44 = 0i64;
  sub_403D10((int *)v44, v35);
  v46 = 0;
  v2 = 0;
  v3 = operator new[](0xFA0u);
  v36 = 0;
  v43 = v3;
  if ( (int)this[1] > 0 )
  {
    v4 = 0;
    v37 = 0;
    do
    {
      if ( v4[this[3] + 12] != 1 )
      {
        v5 = this[27];
        v42 = *(unsigned long *)(8 * v2 + v5 + 4);
        v6 = **(unsigned long ***)(8 * v2 + v5);
        if ( v6 != *(unsigned long **)(8 * v2 + v5) )
        {
          do
          {
            *v3++ = v6[2];
            v6 = (unsigned long *)*v6;
          }
          while ( v6 != *(unsigned long **)(this[27] + 8 * v2) );
          v3 = v43;
        }
        for ( i = 0; i < v42; ++i )
        {
          v8 = v3[i];
          if ( *(unsigned char *)((v8 << 6) + this[3] + 12) != 1 )
          {
            v39 = sub_429780(this, v2, v8);
            if ( v39 > 1.0 )
            {
              v9 = sub_403DF0(v44, v2);
              v10 = sub_403DF0(v44, v43[i]);
              if ( v9 != v10 )
                sub_403E20((int *)v44, v9, v10);
              v2 = v36;
            }
          }
          v3 = v43;
        }
        v4 = v37;
      }
      v3 = v43;
      ++v2;
      v4 += 64;
      v36 = v2;
      v37 = v4;
    }
    while ( v2 < this[1] );
  }
  operator delete[](v3);
  v11 = this[1];
  v12 = (168 * (unsigned long long)(unsigned int)v11) >> 32 != 0 ? -1 : 168 * v11;
  v13 = (int *)operator new[](__CFADD__(v12, 4) ? -1 : v12 + 4);
  LOBYTE(v46) = 1;
  if ( v13 )
  {
    v14 = v13 + 1;
    *v13 = v11;
    `eh vector constructor iterator`(v13 + 1, 0xA8u, v11, (void ( *)(void *))sub_431250, sub_431480);
  }
  else
  {
    v14 = 0;
  }
  v15 = 0;
  LOBYTE(v46) = 0;
  v16 = 0;
  this[13] = v14;
  v43 = 0;
  v42 = 0;
  if ( (int)this[1] > 0 )
  {
    do
    {
      v17 = 168 * sub_403DF0(v44, v16);
      v40 = (char *)v17;
      if ( !*(unsigned long *)(v17 + this[13] + 40) )
      {
        v18 = operator new(8u);
        v19 = v18;
        LOBYTE(v46) = 2;
        if ( v18 )
        {
          *(unsigned long long *)v18 = 0i64;
          *v18 = 0;
          v18[1] = 0;
          sub_42AD80(0, 0);
          *v19 = v20;
        }
        else
        {
          v19 = 0;
        }
        v21 = this[13];
        v17 = (int)v40;
        v43 = (unsigned long *)((char *)v43 + 1);
        LOBYTE(v46) = 0;
        *(unsigned long *)&v40[v21 + 40] = v19;
      }
      v22 = *(unsigned long *)(v17 + this[13] + 40);
      v41 = *(unsigned long ***)v22;
      v23 = sub_426520(v41, v41[1], &v42);
      v24 = *(unsigned long *)(v22 + 4);
      if ( v24 == 357913940 )
        std::_Xlength_error("list<T> too long");
      ++v16;
      *(unsigned long *)(v22 + 4) = v24 + 1;
      v42 = v16;
      v41[1] = (unsigned long *)v23;
      **(unsigned long **)(v23 + 4) = v23;
    }
    while ( v16 < this[1] );
    v15 = (int)v43;
  }
  v25 = 0;
  if ( v15 > 0 )
  {
    v26 = 0;
    v42 = 0;
    do
    {
      v27 = this[13];
      if ( !*(unsigned long *)(v27 + v26 + 40) )
      {
        v28 = this[1];
        v29 = v25 + 1;
        if ( v25 + 1 < v28 )
        {
          v30 = (unsigned long *)(v26 + v27 + 208);
          while ( !*v30 )
          {
            ++v29;
            v30 += 42;
            if ( v29 >= v28 )
              goto LABEL_40;
          }
          v38 = 168 * v29;
          *(unsigned long *)(this[13] + v26 + 40) = *(unsigned long *)(168 * v29 + this[13] + 40);
          v31 = *(unsigned long ***)(this[13] + v26 + 40);
          for ( j = (unsigned long *)**v31; j != *v31; j = (unsigned long *)*j )
            *(unsigned long *)((j[2] << 6) + this[3] + 16) = v25;
          v26 = v42;
          *(unsigned long *)(v38 + this[13] + 40) = 0;
        }
      }
LABEL_40:
      v15 = (int)v43;
      ++v25;
      v26 += 168;
      v42 = v26;
    }
    while ( v25 < (int)v43 );
  }
  v33 = v44[0];
  this[2] = v15;
  if ( v33 )
  {
    operator delete(v33);
    return (int)v43;
  }
  return v15;
}
int  sub_42A9E0(int a1, int a2)
{
  int result; 
  int v3; 
  int i; 
  double v5; 
  double v6; 
  int v7; 
  int v8; 
  int v10; 
  int v11; 
  float v12; 

  result = a1;
  v3 = 0;
  if ( *(int *)(a1 + 4) > 0 )
  {
    v7 = a2;
    for ( i = 0; ; i += 64 )
    {
      v10 = i + *(unsigned long *)(result + 12);
      sub_432060(*(unsigned long *)(*(unsigned long *)(result + 56) + 4 * v3), (int *)&v12, (float *)&v11);
      libm_sse2_atan_precise();
      v5 = *(double *)libm_sse2_cos_precise(v7, v8).m128_u64;
      if ( fabs(v5 * *(float *)(v10 + 40)) > v12 )
        break;
      v6 = *(double *)libm_sse2_sin_precise().m128_u64;
      result = a1;
      if ( fabs(v6 * *(float *)(v10 + 44)) > v12 )
        goto LABEL_8;
      if ( ++v3 >= *(unsigned long *)(a1 + 4) )
        return result;
    }
    result = a1;
LABEL_8:
    result = *(unsigned long *)(result + 12);
    *(unsigned char *)((v3 << 6) + result + 12) = 1;
  }
  return result;
}
void  sub_42AAF0()
{
  int v2; 
  int v3; 

  v2 = 0;
  if ( this[2] > 0 )
  {
    v3 = 0;
    do
    {
      sub_433AA0(v3 + this[13], this[3], this[1], this[14]);
      ++v2;
      v3 += 168;
    }
    while ( v2 < this[2] );
  }
}
int  sub_42AB30(int a1, int a2, int a3)
{
  int v4; 
  int v5; 
  int result; 

  v4 = 0;
  if ( *(int *)(a1 + 8) > 0 )
  {
    v5 = 0;
    do
    {
      result = sub_433D90(v5 + *(unsigned long *)(a1 + 52), a2, a3);
      ++v4;
      v5 += 168;
    }
    while ( v4 < *(unsigned long *)(a1 + 8) );
  }
  return result;
}
float * sub_42AB70()
{
  int v2; 
  int v3; 
  float *result; 

  v2 = 0;
  if ( (int)this[2] > 0 )
  {
    v3 = 0;
    do
    {
      result = sub_434030((unsigned long *)(v3 + this[13]));
      ++v2;
      v3 += 168;
    }
    while ( v2 < this[2] );
  }
  return result;
}
void  sub_42ABA0()
{
  float *v2; 
  int v3; 
  float *v4; 
  int v5; 
  unsigned int v6; 
  int v7; 
  unsigned int *v8; 
  unsigned long *v9; 
  int v10; 
  int Subdiv2D; 
  int v12; 
  float *v13; 
  unsigned long *v14; 
  int v15; 
  int MemStorage; 
  float *v17; 
  void *v18; 
  int v19; 
  int v20; 

  v2 = (float *)operator new[](8 * (*(unsigned long *)(this + 4) + 1));
  v3 = 0;
  v4 = v2;
  v17 = v2;
  if ( *(int *)(this + 4) > 0 )
  {
    v5 = 0;
    do
    {
      v5 += 64;
      v2[2 * v3] = *(float *)(*(unsigned long *)(this + 12) + v5 - 32);
      v2[2 * v3++ + 1] = *(float *)(*(unsigned long *)(this + 12) + v5 - 28);
    }
    while ( v3 < *(unsigned long *)(this + 4) );
  }
  v19 = *(unsigned long *)(this + 4);
  sub_427FB0((unsigned long *)(this + 60));
  v6 = v19 + 1;
  v7 = (unsigned long long)v6 >> 29 != 0 ? -1 : 8 * v6;
  v8 = (unsigned int *)operator new[](__CFADD__(v7, 4) ? -1 : v7 + 4);
  v18 = v8;
  v20 = 0;
  if ( v8 )
  {
    *v8 = v6;
    v9 = v8 + 1;
    `eh vector constructor iterator`(
      v8 + 1,
      8u,
      v19 + 1,
      (void ( *)(void *))sub_426EC0,
      (void ( *)(void *))sub_4271F0);
  }
  else
  {
    v9 = 0;
  }
  *(unsigned long *)(this + 108) = v9;
  v10 = v19;
  v20 = -1;
  *(unsigned long *)(this + 64) = v19;
  MemStorage = cvCreateMemStorage(0);
  *(unsigned long *)(this + 84) = MemStorage;
  Subdiv2D = cvCreateSubdiv2D(2048, 96, 20, 36, MemStorage);
  v12 = _mm_loadu_si128((const int *)(this + 68));
  *(unsigned long *)(this + 88) = Subdiv2D;
  cvInitSubdivDelaunay2D(Subdiv2D, v12.m128i_i32[0], v12.m128i_i32[1], v12.m128i_i32[2], v12.m128i_i32[3]);
  if ( v10 > 0 )
  {
    v13 = v4;
    v14 = (unsigned long *)(this + 92);
    v15 = 0;
    do
    {
      v18 = (void *)(int)(float)((float)(v13[1] * 10.0) + (float)(*v13 * 100000.0));
      *sub_4273C0(v14, &v18) = v15;
      cvSubdivDelaunay2DInsert(*(unsigned long *)(this + 88), *(unsigned long *)v13, *((unsigned long *)v13 + 1));
      ++v15;
      v14 = (unsigned long *)(this + 92);
      v13 += 2;
    }
    while ( v15 < v19 );
    v4 = v17;
  }
  sub_42D810((int *)(this + 60));
  operator delete[](v4);
}

void  sub_42AD80(unsigned long *a1, unsigned long *a2)
{
  unsigned long *v2; 
  unsigned long *v3; 
  unsigned long *v4; 

  v2 = operator new(0xCu);
  if ( !v2 )
    std::_Xbad_alloc();
  v3 = a1;
  if ( a1 )
  {
    v4 = a2;
  }
  else
  {
    v3 = v2;
    v4 = v2;
  }
  *v2 = v3;
  if ( v2 != (unsigned long *)-4 )
    v2[1] = v4;
}
void  sub_42ADC0(unsigned long *a1, unsigned long *a2)
{
  unsigned long *v2; 
  unsigned long *v3; 
  unsigned long *v4; 

  v2 = operator new(0x10u);
  if ( !v2 )
    std::_Xbad_alloc();
  v3 = a1;
  if ( a1 )
  {
    v4 = a2;
  }
  else
  {
    v3 = v2;
    v4 = v2;
  }
  *v2 = v3;
  if ( v2 != (unsigned long *)-4 )
    v2[1] = v4;
}
unsigned long * sub_42AE00()
{
  unsigned long *v2; 

  v2 = operator new(0x18u);
  if ( !v2 )
    std::_Xbad_alloc();
  *v2 = *this;
  if ( v2 != (unsigned long *)-4 )
    v2[1] = *this;
  if ( v2 != (unsigned long *)-8 )
    v2[2] = *this;
  return v2;
}
void  sub_42AE40(void **a1)
{
  void **v1; 
  void **i; 

  v1 = a1;
  for ( i = a1; !*((unsigned char *)i + 13); v1 = i )
  {
    sub_42AE40(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
unsigned int  sub_42AE80( unsigned int a2)
{
  unsigned int v2; 
  int v3; 
  unsigned int v5; 

  v2 = (this[2] - *this) / 56;
  if ( 76695844 - (v2 >> 1) >= v2 )
  {
    v5 = (v2 >> 1) + v2;
    if ( v5 < a2 )
      return a2;
    return v5;
  }
  else
  {
    v3 = 0;
    if ( a2 )
      return a2;
    return v3;
  }
}
void  sub_42AED0( unsigned int a2)
{
  unsigned int v3; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  const void *v8; 
  unsigned int v9; 
  char *v10; 
  const void *v11; 
  char *v12; 
  unsigned int v13; 
  char *v14; 
  char *v15; 
  unsigned int v16; 
  char *v17; 
  unsigned int v19; 
  int v20; 
  char *v21; 

  v3 = 1;
  v4 = *(unsigned long *)(this + 8);
  if ( v4 )
    v3 = *(unsigned long *)(this + 8);
  while ( v3 - v4 < a2 || v3 < 8 )
  {
    if ( 0xFFFFFFF - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2;
  }
  v5 = v3 - v4;
  v6 = *(unsigned long *)(this + 12) >> 1;
  v19 = v6;
  v21 = 0;
  v7 = v4 + v5;
  if ( v4 + v5 )
  {
    if ( v7 > 0x3FFFFFFF || (v21 = (char *)operator new(4 * v7)) == 0 )
      std::_Xbad_alloc();
  }
  v20 = 4 * v6;
  v8 = (const void *)(4 * v6 + *(unsigned long *)(this + 4));
  v9 = 4 * ((int)(4 * *(unsigned long *)(this + 8) - 4 * v6) >> 2);
  v10 = (char *)memmove(&v21[v20], v8, v9);
  v11 = *(const void **)(this + 4);
  v12 = &v10[v9];
  v13 = v19;
  if ( v19 > v5 )
  {
    memmove(v12, v11, 4 * v5);
    v17 = (char *)memmove(v21, (const void *)(4 * v5 + *(unsigned long *)(this + 4)), 4 * ((int)(v20 - 4 * v5) >> 2))
        + 4 * ((int)(v20 - 4 * v5) >> 2);
    v15 = v21;
    if ( !v5 )
      goto LABEL_19;
    v16 = v5;
    goto LABEL_18;
  }
  v14 = (char *)memmove(v12, v11, 4 * ((int)(4 * v19) >> 2));
  if ( v5 != v19 )
  {
    memset(&v14[4 * ((int)(4 * v19) >> 2)], 0, 4 * (v5 - v19));
    v13 = v19;
  }
  v15 = v21;
  if ( v13 )
  {
    v16 = v13;
    v17 = v21;
LABEL_18:
    memset(v17, 0, 4 * v16);
  }
LABEL_19:
  if ( *(unsigned long *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(unsigned long *)(this + 8) += v5;
  *(unsigned long *)(this + 4) = v15;
}
unsigned long * sub_42B050( int a2)
{
  unsigned long *v2; 
  unsigned long *result; 

  v2 = *(unsigned long **)(a2 + 8);
  *(unsigned long *)(a2 + 8) = *v2;
  if ( !*(unsigned char *)(*v2 + 13) )
    *(unsigned long *)(*v2 + 4) = a2;
  v2[1] = *(unsigned long *)(a2 + 4);
  result = *(unsigned long **)this;
  if ( a2 == *(unsigned long *)(*(unsigned long *)this + 4) )
  {
    result[1] = v2;
    *v2 = a2;
    *(unsigned long *)(a2 + 4) = v2;
  }
  else
  {
    result = *(unsigned long **)(a2 + 4);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
    *v2 = a2;
    *(unsigned long *)(a2 + 4) = v2;
  }
  return result;
}
char * sub_42B0B0(unsigned int a2)
{
  char *v3; 
  void *v4; 
  char *v5; 
  int v6; 
  void **v7; 
  char *result; 
  int v9; 
  int v10; 
  void **v11; 
  void *v12; 
  int *v13; 
  int v14; 

  v13 = &v9;
  v11 = (void **)this;
  v3 = 0;
  v12 = 0;
  if ( a2 )
  {
    if ( a2 > 0x4924924 || (v3 = (char *)operator new(56 * a2), (v12 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v14 = 0;
  sub_426C20(*this, this[1], (int)v3);
  v4 = (void *)this[1];
  v5 = (char *)*this;
  v12 = v4;
  v14 = -1;
  v6 = ((unsigned char *)v4 - v5) / 56;
  v10 = v6;
  if ( v5 )
  {
    for ( ; v5 != v12; v5 += 56 )
      (**(void ( ***)(void *, unsigned long))v5)(v5, 0);
    v7 = v11;
    operator delete(*v11);
    v6 = v10;
  }
  else
  {
    v7 = v11;
  }
  *v7 = v3;
  v7[2] = &v3[56 * a2];
  result = &v3[56 * v6];
  v7[1] = result;
  return result;
}
int * sub_42B1E0(unsigned int a2)
{
  char *v3; 
  int v4; 
  int v5; 
  int v6; 
  int *result; 
  int v8; 
  int *v9; 
  void *v10; 
  int *v11; 
  int v12; 

  v11 = &v8;
  v9 = this;
  v3 = 0;
  v10 = 0;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFF || (v3 = (char *)operator new(32 * a2), (v10 = v3) == 0) )
      std::_Xbad_alloc();
  }
  v12 = 0;
  sub_426AB0(*this, this[1], (int)v3);
  v4 = *this;
  v5 = this[1];
  v6 = v5 - *this;
  if ( v4 )
  {
    sub_404130(v4, v5);
    operator delete((void *)*v9);
  }
  result = v9;
  v9[2] = (int)&v3[32 * a2];
  result[1] = (int)&v3[v6 & 0xFFFFFFE0];
  *result = (int)v3;
  return result;
}
char * sub_42B2D0(unsigned int a2)
{
  int v3; 
  char *result; 
  int v5; 
  unsigned int v6; 

  v3 = this[1];
  result = (char *)(-1840700269 * (this[2] - v3));
  if ( (this[2] - v3) / 56 < a2 )
  {
    v5 = (v3 - *this) / 56;
    if ( 76695844 - v5 < a2 )
      std::_Xlength_error("vector<T> too long");
    v6 = sub_42AE80(this, v5 + a2);
    return sub_42B0B0(this, v6);
  }
  return result;
}
unsigned int  sub_42B340(unsigned int a2)
{
  int v2; 
  unsigned int result; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v2 = this[1];
  result = (this[2] - v2) >> 5;
  if ( result < a2 )
  {
    v4 = (v2 - *this) >> 5;
    if ( 0x7FFFFFF - v4 < a2 )
      std::_Xlength_error("vector<T> too long");
    v5 = a2 + v4;
    v6 = (this[2] - *this) >> 5;
    if ( 0x7FFFFFF - (v6 >> 1) >= v6 )
    {
      v7 = (v6 >> 1) + v6;
      if ( v7 < v5 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
      if ( v5 )
        v7 = v5;
    }
    return (unsigned int)sub_42B1E0(this, v7);
  }
  return result;
}
unsigned long * sub_42B3C0( unsigned long *a2)
{
  int v2; 
  int v3; 
  unsigned long *result; 

  v2 = *a2;
  *a2 = *(unsigned long *)(*a2 + 8);
  v3 = *(unsigned long *)(v2 + 8);
  if ( !*(unsigned char *)(v3 + 13) )
    *(unsigned long *)(v3 + 4) = a2;
  *(unsigned long *)(v2 + 4) = a2[1];
  result = *(unsigned long **)this;
  if ( a2 == *(unsigned long **)(*(unsigned long *)this + 4) )
  {
    result[1] = v2;
    *(unsigned long *)(v2 + 8) = a2;
    a2[1] = v2;
  }
  else
  {
    result = (unsigned long *)a2[1];
    if ( a2 == (unsigned long *)result[2] )
      result[2] = v2;
    else
      *result = v2;
    *(unsigned long *)(v2 + 8) = a2;
    a2[1] = v2;
  }
  return result;
}
void  sub_42B420()
{
  int v2; 
  int v3; 

  v2 = *(unsigned long *)(this + 16);
  if ( v2 )
  {
    do
      --v2;
    while ( v2 );
    *(unsigned long *)(this + 12) = 0;
    *(unsigned long *)(this + 16) = 0;
  }
  v3 = *(unsigned long *)(this + 8);
  while ( v3 )
  {
    --v3;
    if ( *(unsigned long *)(*(unsigned long *)(this + 4) + 4 * v3) )
      operator delete(*(void **)(*(unsigned long *)(this + 4) + 4 * v3));
  }
  if ( *(unsigned long *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(unsigned long *)(this + 4) = 0;
  *(unsigned long *)(this + 8) = 0;
}
void  sub_42B480()
{
  void ( ***v2)(void *, unsigned long); 
  void ( ***i)(void *, unsigned long); 

  v2 = *(void ( ****)(void *, unsigned long))this;
  if ( *(unsigned long *)this )
  {
    for ( i = *(void ( ****)(void *, unsigned long))(this + 4); v2 != i; v2 += 14 )
      (**v2)(v2, 0);
    operator delete(*(void **)this);
    *(unsigned long *)this = 0;
    *(unsigned long *)(this + 4) = 0;
    *(unsigned long *)(this + 8) = 0;
  }
}
unsigned long * sub_42B4D0(unsigned long *a2)
{
  unsigned long *result; 
  int v3; 
  int v4; 

  result = a2;
  v3 = this[3];
  v4 = *this;
  a2[1] = 0;
  *a2 = v4;
  a2[2] = v3;
  return result;
}
int  sub_42B4F0()
{
  unsigned long *v2; 
  unsigned long *i; 
  int result; 

  v2 = *(unsigned long **)(*this + 4);
  for ( i = v2; !*((unsigned char *)i + 13); v2 = i )
  {
    sub_42AE40((void **)i[2]);
    i = (unsigned long *)*i;
    operator delete(v2);
  }
  *(unsigned long *)(*this + 4) = *this;
  *(unsigned long *)*this = *this;
  result = *this;
  *(unsigned long *)(*this + 8) = *this;
  this[1] = 0;
  return result;
}
unsigned long * sub_42B540()
{
  unsigned long *result; 
  unsigned long *v3; 

  result = *(unsigned long **)*this;
  *(unsigned long *)*this = *this;
  *(unsigned long *)(*this + 4) = *this;
  this[1] = 0;
  if ( result != (unsigned long *)*this )
  {
    do
    {
      v3 = (unsigned long *)*result;
      operator delete(result);
      result = v3;
    }
    while ( v3 != (unsigned long *)*this );
  }
  return result;
}
int * sub_42B580( int *a2, int *a3, int *a4)
{
  int *v4; 
  int *result; 
  int *v7; 
  int *v8; 
  int *v9; 
  int *i; 
  int v11; 
  int *v12; 

  v4 = a3;
  result = a2;
  v12 = a2;
  if ( a3 == (int *)**this && a4 == *this )
  {
    sub_42B4F0(this);
    result = v12;
    *v12 = **this;
  }
  else
  {
    if ( a3 != a4 )
    {
      do
      {
        v7 = v4;
        if ( !*((unsigned char *)v4 + 13) )
        {
          v8 = (int *)v4[2];
          if ( *((unsigned char *)v8 + 13) )
          {
            for ( i = (int *)v4[1]; !*((unsigned char *)i + 13); i = (int *)i[1] )
            {
              if ( v4 != (int *)i[2] )
                break;
              v4 = i;
            }
            a3 = i;
          }
          else
          {
            v9 = (int *)*v8;
            if ( !*(unsigned char *)(*v8 + 13) )
            {
              do
              {
                v8 = v9;
                v9 = (int *)*v9;
              }
              while ( !*((unsigned char *)v9 + 13) );
            }
            a3 = v8;
          }
        }
        sub_42B630(this, &v11, v7);
        v4 = a3;
      }
      while ( a3 != a4 );
      result = v12;
    }
    *result = (int)v4;
  }
  return result;
}
unsigned long * sub_42B630( unsigned long *a2, unsigned long *a3)
{
  unsigned char *v4; 
  int v5; 
  int v6; 
  int v7; 
  int *v8; 
  int i; 
  int v10; 
  int v11; 
  int j; 
  void **v13; 
  char v14; 
  unsigned char *v15; 
  int *v16; 
  unsigned long *result; 
  unsigned long *v18; 

  v18 = a3;
  sub_427450((int *)&a3);
  v4 = v18;
  if ( *(unsigned char *)(*v18 + 13) )
  {
    v5 = v18[2];
  }
  else if ( *(unsigned char *)(v18[2] + 13) )
  {
    v5 = *v18;
  }
  else
  {
    v6 = (int)a3;
    v5 = a3[2];
    if ( a3 != v18 )
    {
      *(unsigned long *)(*v18 + 4) = a3;
      *(unsigned long *)v6 = *v18;
      if ( v6 == v18[2] )
      {
        v7 = v6;
      }
      else
      {
        v7 = *(unsigned long *)(v6 + 4);
        if ( !*(unsigned char *)(v5 + 13) )
          *(unsigned long *)(v5 + 4) = v7;
        *(unsigned long *)v7 = v5;
        *(unsigned long *)(v6 + 8) = v18[2];
        *(unsigned long *)(v18[2] + 4) = v6;
      }
      if ( (unsigned long *)(*this)[1] == v18 )
      {
        (*this)[1] = v6;
      }
      else
      {
        v13 = (void **)v18[1];
        if ( *v13 == v18 )
          *v13 = (void *)v6;
        else
          v13[2] = (void *)v6;
      }
      *(unsigned long *)(v6 + 4) = v18[1];
      v14 = *(unsigned char *)(v6 + 12);
      *(unsigned char *)(v6 + 12) = *((unsigned char *)v18 + 12);
      *((unsigned char *)v18 + 12) = v14;
      v4 = v18;
      goto LABEL_37;
    }
  }
  v7 = v18[1];
  if ( !*(unsigned char *)(v5 + 13) )
    *(unsigned long *)(v5 + 4) = v7;
  if ( (unsigned long *)(*this)[1] == v18 )
  {
    (*this)[1] = v5;
  }
  else if ( *(unsigned long **)v7 == v18 )
  {
    *(unsigned long *)v7 = v5;
  }
  else
  {
    *(unsigned long *)(v7 + 8) = v5;
  }
  v8 = *this;
  if ( (unsigned long *)**this == v18 )
  {
    if ( *(unsigned char *)(v5 + 13) )
    {
      i = v7;
    }
    else
    {
      v10 = *(unsigned long *)v5;
      for ( i = v5; !*(unsigned char *)(v10 + 13); v10 = *(unsigned long *)v10 )
        i = v10;
      v8 = *this;
    }
    *v8 = i;
  }
  if ( (unsigned long *)(*this)[2] == v18 )
  {
    if ( *(unsigned char *)(v5 + 13) )
    {
      (*this)[2] = v7;
    }
    else
    {
      v11 = *(unsigned long *)(v5 + 8);
      for ( j = v5; !*(unsigned char *)(v11 + 13); v11 = *(unsigned long *)(v11 + 8) )
        j = v11;
      (*this)[2] = j;
    }
  }
LABEL_37:
  if ( v4[12] != 1 )
    goto LABEL_62;
  if ( v5 == (*this)[1] )
    goto LABEL_61;
  while ( *(unsigned char *)(v5 + 12) == 1 )
  {
    v15 = *(unsigned char **)v7;
    if ( v5 == *(unsigned long *)v7 )
    {
      v15 = *(unsigned char **)(v7 + 8);
      if ( !v15[12] )
      {
        v15[12] = 1;
        *(unsigned char *)(v7 + 12) = 0;
        sub_42B050(this, v7);
        v15 = *(unsigned char **)(v7 + 8);
      }
      if ( v15[13] )
        goto LABEL_55;
      if ( *(unsigned char *)(*(unsigned long *)v15 + 12) != 1 || *(unsigned char *)(*((unsigned long *)v15 + 2) + 12) != 1 )
      {
        if ( *(unsigned char *)(*((unsigned long *)v15 + 2) + 12) == 1 )
        {
          *(unsigned char *)(*(unsigned long *)v15 + 12) = 1;
          v15[12] = 0;
          sub_42B3C0(this, v15);
          v15 = *(unsigned char **)(v7 + 8);
        }
        v15[12] = *(unsigned char *)(v7 + 12);
        *(unsigned char *)(v7 + 12) = 1;
        *(unsigned char *)(*((unsigned long *)v15 + 2) + 12) = 1;
        sub_42B050(this, v7);
        break;
      }
    }
    else
    {
      if ( !v15[12] )
      {
        v15[12] = 1;
        *(unsigned char *)(v7 + 12) = 0;
        sub_42B3C0(this, (unsigned long *)v7);
        v15 = *(unsigned char **)v7;
      }
      if ( v15[13] )
        goto LABEL_55;
      if ( *(unsigned char *)(*((unsigned long *)v15 + 2) + 12) != 1 || *(unsigned char *)(*(unsigned long *)v15 + 12) != 1 )
      {
        if ( *(unsigned char *)(*(unsigned long *)v15 + 12) == 1 )
        {
          *(unsigned char *)(*((unsigned long *)v15 + 2) + 12) = 1;
          v15[12] = 0;
          sub_42B050(this, (int)v15);
          v15 = *(unsigned char **)v7;
        }
        v15[12] = *(unsigned char *)(v7 + 12);
        *(unsigned char *)(v7 + 12) = 1;
        *(unsigned char *)(*(unsigned long *)v15 + 12) = 1;
        sub_42B3C0(this, (unsigned long *)v7);
        break;
      }
    }
    v15[12] = 0;
LABEL_55:
    v5 = v7;
    v7 = *(unsigned long *)(v7 + 4);
    if ( v5 == (*this)[1] )
      break;
  }
  v4 = v18;
LABEL_61:
  *(unsigned char *)(v5 + 12) = 1;
LABEL_62:
  operator delete(v4);
  v16 = this[1];
  if ( v16 )
  {
    result = a2;
    this[1] = (int *)((char *)v16 - 1);
    *a2 = a3;
  }
  else
  {
    *a2 = a3;
    return a2;
  }
  return result;
}
unsigned long * sub_42B8B0( unsigned long *a2, unsigned long **a3, unsigned long **a4)
{
  void *v4; 
  unsigned long *v6; 
  unsigned long **v7; 
  unsigned long *result; 
  unsigned long **v9; 

  v4 = a4;
  v6 = a2;
  v7 = a3;
  if ( a3 == *(unsigned long ***)*this && a4 == (unsigned long **)*this )
  {
    sub_42B540(this);
    result = a2;
    *a2 = *this;
  }
  else
  {
    if ( a3 != a4 )
    {
      do
      {
        v9 = (unsigned long **)*v7;
        *v7[1] = *v7;
        (*v7)[1] = v7[1];
        --this[1];
        operator delete(v7);
        v4 = a4;
        v7 = v9;
      }
      while ( v9 != a4 );
      v6 = a2;
    }
    *v6 = v4;
    return v6;
  }
  return result;
}
int  sub_42B920()
{
  return this[10];
}
int  sub_42B930( int a2)
{
  return *(unsigned long *)(this[10] + 4 * a2);
}
int sub_42B950()
{
  return 1;
}
double sub_42B960()
{
  return 0.0;
}
int  sub_42B970( unsigned long *a2)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  void *v9; 
  int result; 
  unsigned long *v11; 

  v3 = this[3];
  v4 = this[4];
  if ( (((unsigned char)v4 + (unsigned char)v3) & 1) == 0 && this[2] <= (unsigned int)(v4 + 2) >> 1 )
    sub_42AED0((int)this, 1u);
  v5 = this[2];
  v6 = this[4];
  this[3] &= 2 * v5 - 1;
  v7 = this[3] + v6;
  v8 = 4 * ((v7 >> 1) & (v5 - 1));
  if ( !*(unsigned long *)(v8 + this[1]) )
  {
    v9 = operator new(0x10u);
    if ( !v9 )
      std::_Xbad_alloc();
    *(unsigned long *)(v8 + this[1]) = v9;
  }
  result = *(unsigned long *)(this[1] + v8);
  v11 = (unsigned long *)(result + 8 * (v7 & 1));
  if ( v11 )
  {
    *v11 = *a2;
    result = a2[1];
    v11[1] = result;
  }
  ++this[4];
  return result;
}
int * sub_42BA10( unsigned long *a2)
{
  unsigned long *v3; 
  int v4; 
  int v5; 
  int *result; 

  v3 = (unsigned long *)*this;
  v4 = sub_426520((unsigned long *)*this, *(unsigned long **)(*this + 4), a2);
  v5 = this[1];
  if ( v5 == 357913940 )
    std::_Xlength_error("list<T> too long");
  this[1] = v5 + 1;
  v3[1] = v4;
  result = *(int **)(v4 + 4);
  *result = v4;
  return result;
}
int  sub_42BA60( unsigned int a2)
{
  int v3; 
  int result; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  unsigned long v8[9]; 

  v8[5] = v8;
  v8[4] = this;
  v3 = this[1];
  result = 1717986919 * (v3 - *this);
  v5 = (v3 - *this) / 40;
  if ( v5 > a2 )
  {
    v6 = a2 - v5;
LABEL_3:
    result = v3 + 40 * v6;
    this[1] = result;
    return result;
  }
  if ( v5 < a2 )
  {
    sub_4211E0(this, a2 - v5);
    v7 = this[1];
    v8[8] = 0;
    sub_426B70(v7, a2 - (v7 - *this) / 40);
    v3 = this[1];
    v6 = a2 - (v3 - *this) / 40;
    goto LABEL_3;
  }
  return result;
}
int  sub_42BB40(unsigned int a2)
{
  void ( ***v2)(unsigned long, unsigned long); 
  unsigned int v3; 
  int result; 
  unsigned int v5; 
  int v6; 
  void ( ***i)(unsigned long, unsigned long); 
  int *v8; 
  int v9; 
  int v10; 
  int *v11; 
  int *v12; 
  int v13; 

  v12 = &v10;
  v11 = this;
  v2 = (void ( ***)(unsigned long, unsigned long))this[1];
  v3 = a2;
  result = -1840700269 * ((unsigned long)v2 - *this);
  v5 = ((int)v2 - *this) / 56;
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      v8 = v11;
      sub_42B2D0(v11, a2 - v5);
      v9 = v8[1];
      v13 = 0;
      sub_426BA0((unsigned int *)((char *)&a2 + 3), v9, v3 - (v9 - *v8) / 56);
      result = v8[1] + 56 * (v3 - (v8[1] - *v8) / 56);
      v8[1] = result;
    }
  }
  else
  {
    v6 = (int)&v2[14 * (a2 - v5)];
    for ( i = (void ( ***)(unsigned long, unsigned long))v6; i != v2; i += 14 )
      (**i)(i, 0);
    result = (int)v11;
    v11[1] = v6;
  }
  return result;
}
void  sub_42BC70(unsigned int a2)
{
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  unsigned long v8[9]; 

  v8[5] = v8;
  v8[4] = this;
  v3 = this[1];
  v4 = a2;
  v5 = (v3 - *this) >> 5;
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      sub_42B340(this, a2 - v5);
      v7 = this[1];
      v8[8] = 0;
      sub_426BE0((unsigned int *)((char *)&a2 + 3), v7, v4 - ((v7 - *this) >> 5));
      this[1] += 32 * (v4 - ((this[1] - *this) >> 5));
    }
  }
  else
  {
    v6 = v3 + 32 * (a2 - v5);
    sub_404130(v6, v3);
    this[1] = v6;
  }
}
int  sub_42BD50( int a2, int a3)
{
  int result; 

  result = a2;
  *(unsigned long *)(this[10] + 4 * a2) = a3;
  return result;
}
unsigned long * sub_42BD70()
{
  *this = &CCurveFit::`vftable`;
  this[2] = 0;
  this[3] = 0;
  memset(this + 14, 0, 0x320u);
  return this;
}
void  sub_42BDA0()
{
  void *v2; 

  v2 = (void *)*((unsigned long *)this + 2);
  *(unsigned long *)this = &CCurveFit::`vftable`;
  operator delete[](v2);
  operator delete[](*((void **)this + 3));
}
void * sub_42BDC0( char a2)
{
  void *v4; 

  v4 = (void *)*((unsigned long *)this + 2);
  *(unsigned long *)this = &CCurveFit::`vftable`;
  operator delete[](v4);
  operator delete[](*((void **)this + 3));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
void  sub_42BE00( double a2, long long a3, int a4)
{
  double v5; 
  int v6; 
  int v7; 
  int v8; 
  int Mat; 
  int v10; 
  int v11; 
  float v12; 
  int v13; 
  int v14; 
  double v15; 
  double v16; 
  float v17; 
  double v18; 
  long long *v19; 
  double v20; 
  int v21; 
  double v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  float v28; 
  int v29; 
  int v30; 
  float v31; 
  float v32; 
  double v33; 
  double v34; 
  float v35; 
  double v36; 
  double v37; 
  double v38; 
  int i; 
  int v40; 
  float v41; 
  int v42; 
  int v43; 
  float v44; 
  float v45; 
  double v46; 
  double v47; 
  double v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  float v58; 
  double v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  long long v83; 
  int v84; 
  long long v85; 
  int v86; 
  long long v87; 
  int v88; 
  long long v89; 
  int v90; 
  long long v91; 
  int v92; 
  long long v93; 
  int v94; 
  long long v95; 
  int v96; 
  long long v97; 
  int v98; 
  long long v99; 
  int v100; 
  long long v101; 
  int v102; 
  long long v103; 
  int v104; 
  long long v105; 
  int v106; 
  int v107; 

  *(unsigned long long *)(this + 872) = a3;
  sub_42D580(this, this, a4);
  *(unsigned long long *)(this + 16) = libm_sse2_cos_precise(v63, v64).m128_u64[0];
  *(unsigned long long *)(this + 24) = libm_sse2_sin_precise().m128_u64[0];
  *(unsigned long *)(this + 36) = a4;
  switch ( a4 )
  {
    case 4:
      v5 = *(float *)(this + 40);
      v6 = *(unsigned long *)(this + 32);
      v106 = 0;
      v72 = *(float *)(this + 48);
      v80 = *(float *)(this + 44);
      v105 = 0i64;
      LODWORD(v105) = &CMyMatrix::`vftable`;
      DWORD2(v105) = 0;
      sub_403EE0(&v105);
      HIDWORD(v105) = v6;
      v106 = 5;
      DWORD2(v105) = cvCreateMat(v6, 5, 5);
      DWORD1(v105) = *(unsigned long *)(DWORD2(v105) + 16);
      v7 = *(unsigned long *)(this + 32);
      v107 = 0;
      v99 = 0i64;
      v100 = 0;
      LODWORD(v99) = &CMyMatrix::`vftable`;
      DWORD2(v99) = 0;
      sub_403EE0(&v99);
      HIDWORD(v99) = v7;
      v100 = 1;
      DWORD2(v99) = cvCreateMat(v7, 1, 5);
      DWORD1(v99) = *(unsigned long *)(DWORD2(v99) + 16);
      LOBYTE(v107) = 1;
      v101 = 0i64;
      v102 = 0;
      LODWORD(v101) = &CMyMatrix::`vftable`;
      DWORD2(v101) = 0;
      sub_403EE0(&v101);
      HIDWORD(v101) = 5;
      v102 = 5;
      DWORD2(v101) = cvCreateMat(5, 5, 5);
      DWORD1(v101) = *(unsigned long *)(DWORD2(v101) + 16);
      LOBYTE(v107) = 2;
      v95 = 0i64;
      v96 = 0;
      LODWORD(v95) = &CMyMatrix::`vftable`;
      DWORD2(v95) = 0;
      sub_403EE0(&v95);
      HIDWORD(v95) = 5;
      v96 = 5;
      DWORD2(v95) = cvCreateMat(5, 5, 5);
      DWORD1(v95) = *(unsigned long *)(DWORD2(v95) + 16);
      v8 = *(unsigned long *)(this + 32);
      LOBYTE(v107) = 3;
      v97 = 0i64;
      v98 = 0;
      LODWORD(v97) = &CMyMatrix::`vftable`;
      DWORD2(v97) = 0;
      sub_403EE0(&v97);
      HIDWORD(v97) = 5;
      v98 = v8;
      DWORD2(v97) = cvCreateMat(5, v8, 5);
      DWORD1(v97) = *(unsigned long *)(DWORD2(v97) + 16);
      LOBYTE(v107) = 4;
      v103 = 0i64;
      v104 = 0;
      LODWORD(v103) = &CMyMatrix::`vftable`;
      DWORD2(v103) = 0;
      sub_403EE0(&v103);
      HIDWORD(v103) = 5;
      v104 = 1;
      Mat = cvCreateMat(5, 1, 5);
      v10 = 0;
      DWORD2(v103) = Mat;
      for ( DWORD1(v103) = *(unsigned long *)(Mat + 16); v10 < *(unsigned long *)(this + 32); *(unsigned long *)(DWORD1(v99) + 4 * v14) = v13 )
      {
        v11 = *(unsigned long *)(this + 8);
        v12 = *(float *)(v11 + 8 * v10);
        v13 = *(unsigned long *)(v11 + 8 * v10 + 4);
        *(unsigned long *)(DWORD1(v105) + 4 * v10 * v106 + 16) = 1065353216;
        *(float *)(DWORD1(v105) + 4 * v10 * v106 + 12) = v12;
        *(float *)(DWORD1(v105) + 4 * v10 * v106 + 8) = v12 * v12;
        *(float *)(DWORD1(v105) + 4 * v10 * v106 + 4) = *(float *)(DWORD1(v105) + 4 * v10 * v106 + 8) * v12;
        *(float *)(DWORD1(v105) + 4 * v10 * v106) = *(float *)(DWORD1(v105) + 4 * v10 * v106 + 4) * v12;
        v14 = v10 * v100;
        ++v10;
      }
      cvGEMM(DWORD2(v105), DWORD2(v105), 0, 1072693248, 0, 0, 0, DWORD2(v101), 1);
      cvInvert(DWORD2(v101), DWORD2(v95), 0);
      cvGEMM(DWORD2(v95), DWORD2(v105), 0, 1072693248, 0, 0, 0, DWORD2(v97), 2);
      cvGEMM(DWORD2(v97), DWORD2(v99), 0, 1072693248, 0, 0, 0, DWORD2(v103), 0);
      v65 = *(float *)(DWORD1(v103) + 8 * v104);
      v15 = v5 * v5 * v5;
      v76 = *(float *)(DWORD1(v103) + 12 * v104);
      v16 = v80 * v80 * v80;
      v17 = *(float *)(DWORD1(v103) + 16 * v104);
      v66 = *(float *)DWORD1(v103);
      v70 = *(float *)(DWORD1(v103) + 4 * v104);
      *(double *)(this + 88) = v66 * v80 / (v16 * v80);
      v18 = v70 * 3.0 * v5;
      *(double *)(this + 80) = v70 * v80 / v16 - v66 * 4.0 * v5 * v80 / (v16 * v80);
      *(double *)(this + 72) = v65 * v80 / v80 / v80 - v18 * v80 / v16 + v66 * 6.0 * v5 * v5 * v80 / (v16 * v80);
      *(double *)(this + 64) = v76 * v80 / v80
                             - v65 * 2.0 * v5 * v80 / v80 / v80
                             + v18 * v5 * v80 / v16
                             - v66 * 4.0 * v15 * v80 / (v16 * v80);
      *(double *)(this + 56) = v15 * v5 * v66 * v80 / (v16 * v80)
                             + v17 * v80
                             + v72
                             - v15 * v70 * v80 / v16
                             + v65 * v5 * v5 * v80 / v80 / v80
                             - v76 * v5 * v80 / v80;
      sub_403E70(&v103);
      LOBYTE(v107) = 3;
      sub_403E70(&v97);
      LOBYTE(v107) = 2;
      sub_403E70(&v95);
      LOBYTE(v107) = 1;
      sub_403E70(&v101);
      LOBYTE(v107) = 0;
      sub_403E70(&v99);
      v19 = &v105;
      break;
    case 3:
      v20 = *(double *)(this + 864) * 1.2;
      v21 = *(unsigned long *)(this + 32);
      v22 = *(double *)(this + 856) * 1.2;
      v106 = 0;
      v68 = (v20 - v22) * 4.0;
      v82 = *(float *)(this + 40);
      v71 = (v22 * v20 + v20 * v20 + v22 * v22) * (v68 * 3.0);
      v67 = *(float *)(this + 48);
      v73 = (v22 + v20) * (v68 * 3.0);
      v81 = *(float *)(this + 44);
      v105 = 0i64;
      LODWORD(v105) = &CMyMatrix::`vftable`;
      DWORD2(v105) = 0;
      sub_403EE0(&v105);
      HIDWORD(v105) = v21;
      v106 = 4;
      DWORD2(v105) = cvCreateMat(v21, 4, 5);
      DWORD1(v105) = *(unsigned long *)(DWORD2(v105) + 16);
      v23 = *(unsigned long *)(this + 32);
      v107 = 5;
      v97 = 0i64;
      v98 = 0;
      LODWORD(v97) = &CMyMatrix::`vftable`;
      DWORD2(v97) = 0;
      sub_403EE0(&v97);
      HIDWORD(v97) = v23;
      v98 = 1;
      DWORD2(v97) = cvCreateMat(v23, 1, 5);
      DWORD1(v97) = *(unsigned long *)(DWORD2(v97) + 16);
      LOBYTE(v107) = 6;
      v103 = 0i64;
      v104 = 0;
      LODWORD(v103) = &CMyMatrix::`vftable`;
      DWORD2(v103) = 0;
      sub_403EE0(&v103);
      HIDWORD(v103) = 4;
      v104 = 4;
      DWORD2(v103) = cvCreateMat(4, 4, 5);
      DWORD1(v103) = *(unsigned long *)(DWORD2(v103) + 16);
      LOBYTE(v107) = 7;
      v95 = 0i64;
      v96 = 0;
      LODWORD(v95) = &CMyMatrix::`vftable`;
      DWORD2(v95) = 0;
      sub_403EE0(&v95);
      HIDWORD(v95) = 4;
      v96 = 4;
      DWORD2(v95) = cvCreateMat(4, 4, 5);
      DWORD1(v95) = *(unsigned long *)(DWORD2(v95) + 16);
      v24 = *(unsigned long *)(this + 32);
      LOBYTE(v107) = 8;
      v101 = 0i64;
      v102 = 0;
      LODWORD(v101) = &CMyMatrix::`vftable`;
      DWORD2(v101) = 0;
      sub_403EE0(&v101);
      HIDWORD(v101) = 4;
      v102 = v24;
      DWORD2(v101) = cvCreateMat(4, v24, 5);
      DWORD1(v101) = *(unsigned long *)(DWORD2(v101) + 16);
      LOBYTE(v107) = 9;
      v99 = 0i64;
      v100 = 0;
      LODWORD(v99) = &CMyMatrix::`vftable`;
      DWORD2(v99) = 0;
      sub_403EE0(&v99);
      HIDWORD(v99) = 4;
      v100 = 1;
      v25 = cvCreateMat(4, 1, 5);
      v26 = 0;
      DWORD2(v99) = v25;
      for ( DWORD1(v99) = *(unsigned long *)(v25 + 16); v26 < *(unsigned long *)(this + 32); *(unsigned long *)(DWORD1(v97) + 4 * v30) = v29 )
      {
        v27 = *(unsigned long *)(this + 8);
        v28 = *(float *)(v27 + 8 * v26);
        v29 = *(unsigned long *)(v27 + 8 * v26 + 4);
        *(unsigned long *)(DWORD1(v105) + 4 * v26 * v106 + 12) = 1065353216;
        *(float *)(DWORD1(v105) + 4 * v26 * v106 + 8) = v28;
        *(float *)(DWORD1(v105) + 4 * v26 * v106 + 4) = v28 * v28;
        *(float *)(DWORD1(v105) + 4 * v26 * v106) = *(float *)(DWORD1(v105) + 4 * v26 * v106 + 4) * v28;
        v30 = v26 * v98;
        ++v26;
      }
      cvGEMM(DWORD2(v105), DWORD2(v105), 0, 1072693248, 0, 0, 0, DWORD2(v103), 1);
      v31 = v71 * a2;
      *(float *)DWORD1(v103) = v31 + *(float *)DWORD1(v103);
      v32 = v73 * a2 * 0.5;
      *(float *)(DWORD1(v103) + 4) = v32 + *(float *)(DWORD1(v103) + 4);
      *(float *)(DWORD1(v103) + 4 * v104) = v32 + *(float *)(DWORD1(v103) + 4 * v104);
      *(float *)(DWORD1(v103) + 4 * v104 + 4) = (float)(v68 * a2) + *(float *)(DWORD1(v103) + 4 * v104 + 4);
      cvInvert(DWORD2(v103), DWORD2(v95), 0);
      cvGEMM(DWORD2(v95), DWORD2(v105), 0, 1072693248, 0, 0, 0, DWORD2(v101), 2);
      cvGEMM(DWORD2(v101), DWORD2(v97), 0, 1072693248, 0, 0, 0, DWORD2(v99), 0);
      v33 = *(float *)DWORD1(v99);
      v34 = *(float *)(DWORD1(v99) + 4 * v100);
      v77 = *(float *)(DWORD1(v99) + 8 * v100);
      v35 = *(float *)(DWORD1(v99) + 12 * v100);
      v36 = v81 * v81 * v81;
      *(unsigned long long *)(this + 88) = 0i64;
      v37 = v33 * 3.0 * v82;
      *(double *)(this + 80) = v33 * v81 / v36;
      *(double *)(this + 72) = v34 * v81 / v81 / v81 - v81 * v37 / v36;
      *(double *)(this + 64) = v77 * v81 / v81 - v34 * 2.0 * v82 * v81 / v81 / v81 + v82 * v37 * v81 / v36;
      *(double *)(this + 56) = v35 * v81
                             + v67
                             - v82 * v82 * v82 * v33 * v81 / v36
                             + v34 * v82 * v82 * v81 / v81 / v81
                             - v77 * v82 * v81 / v81;
      sub_403E70(&v99);
      LOBYTE(v107) = 8;
      sub_403E70(&v101);
      LOBYTE(v107) = 7;
      sub_403E70(&v95);
      LOBYTE(v107) = 6;
      sub_403E70(&v103);
      LOBYTE(v107) = 5;
      sub_403E70(&v97);
      v19 = &v105;
      break;
    case 2:
      v38 = *(float *)(this + 40);
      v102 = 0;
      v60 = *(unsigned long *)(this + 32);
      v78 = *(float *)(this + 48);
      v74 = *(float *)(this + 44);
      v101 = 0i64;
      sub_4270F0(&v101, v60, 3);
      v61 = *(unsigned long *)(this + 32);
      v107 = 10;
      v98 = 0;
      v97 = 0i64;
      sub_4270F0(&v97, v61, 1);
      LOBYTE(v107) = 11;
      v106 = 0;
      v105 = 0i64;
      sub_4270F0(&v105, 3, 3);
      LOBYTE(v107) = 12;
      v104 = 0;
      v103 = 0i64;
      sub_4270F0(&v103, 3, 3);
      v62 = *(unsigned long *)(this + 32);
      LOBYTE(v107) = 13;
      v100 = 0;
      v99 = 0i64;
      sub_4270F0(&v99, 3, v62);
      LOBYTE(v107) = 14;
      v96 = 0;
      v95 = 0i64;
      sub_4270F0(&v95, 3, 1);
      for ( i = 0; i < *(unsigned long *)(this + 32); *(unsigned long *)(DWORD1(v97) + 4 * v43) = v42 )
      {
        v40 = *(unsigned long *)(this + 8);
        v41 = *(float *)(v40 + 8 * i);
        v42 = *(unsigned long *)(v40 + 8 * i + 4);
        *(unsigned long *)(DWORD1(v101) + 4 * i * v102 + 8) = 1065353216;
        *(float *)(DWORD1(v101) + 4 * i * v102 + 4) = v41;
        *(float *)(DWORD1(v101) + 4 * i * v102) = *(float *)(DWORD1(v101) + 4 * i * v102 + 4) * v41;
        v43 = i * v98;
        ++i;
      }
      cvGEMM(DWORD2(v101), DWORD2(v101), 0, 1072693248, 0, 0, 0, DWORD2(v105), 1);
      cvInvert(DWORD2(v105), DWORD2(v103), 0);
      cvGEMM(DWORD2(v103), DWORD2(v101), 0, 1072693248, 0, 0, 0, DWORD2(v99), 2);
      cvGEMM(DWORD2(v99), DWORD2(v97), 0, 1072693248, 0, 0, 0, DWORD2(v95), 0);
      v44 = *(float *)(DWORD1(v95) + 4 * v96);
      v45 = *(float *)(DWORD1(v95) + 8 * v96);
      v46 = *(float *)DWORD1(v95);
      *(unsigned long long *)(this + 80) = 0i64;
      v47 = v44;
      *(double *)(this + 72) = v46 * v74 / v74 / v74;
      *(double *)(this + 64) = v47 * v74 / v74 - v46 * 2.0 * v38 * v74 / v74 / v74;
      *(double *)(this + 56) = v46 * v38 * v38 * v74 / v74 / v74 + v45 * v74 + v78 - v47 * v38 * v74 / v74;
      sub_403E70(&v95);
      LOBYTE(v107) = 13;
      sub_403E70(&v99);
      LOBYTE(v107) = 12;
      sub_403E70(&v103);
      LOBYTE(v107) = 11;
      sub_403E70(&v105);
      LOBYTE(v107) = 10;
      sub_403E70(&v97);
      v19 = &v101;
      break;
    case 1:
      v48 = *(float *)(this + 40);
      v49 = *(unsigned long *)(this + 32);
      v94 = 0;
      v79 = v48;
      v69 = *(float *)(this + 48);
      v75 = *(float *)(this + 44);
      v93 = 0i64;
      LODWORD(v93) = &CMyMatrix::`vftable`;
      DWORD2(v93) = 0;
      sub_403EE0(&v93);
      HIDWORD(v93) = v49;
      v94 = 2;
      DWORD2(v93) = cvCreateMat(v49, 2, 5);
      DWORD1(v93) = *(unsigned long *)(DWORD2(v93) + 16);
      v50 = *(unsigned long *)(this + 32);
      v107 = 15;
      v91 = 0i64;
      v92 = 0;
      LODWORD(v91) = &CMyMatrix::`vftable`;
      DWORD2(v91) = 0;
      sub_403EE0(&v91);
      HIDWORD(v91) = v50;
      v92 = 1;
      DWORD2(v91) = cvCreateMat(v50, 1, 5);
      DWORD1(v91) = *(unsigned long *)(DWORD2(v91) + 16);
      LOBYTE(v107) = 16;
      v87 = 0i64;
      v88 = 0;
      LODWORD(v87) = &CMyMatrix::`vftable`;
      DWORD2(v87) = 0;
      sub_403EE0(&v87);
      HIDWORD(v87) = 2;
      v88 = 2;
      DWORD2(v87) = cvCreateMat(2, 2, 5);
      DWORD1(v87) = *(unsigned long *)(DWORD2(v87) + 16);
      LOBYTE(v107) = 17;
      v83 = 0i64;
      v84 = 0;
      LODWORD(v83) = &CMyMatrix::`vftable`;
      DWORD2(v83) = 0;
      sub_403EE0(&v83);
      HIDWORD(v83) = 2;
      v84 = 2;
      DWORD2(v83) = cvCreateMat(2, 2, 5);
      DWORD1(v83) = *(unsigned long *)(DWORD2(v83) + 16);
      v51 = *(unsigned long *)(this + 32);
      LOBYTE(v107) = 18;
      v85 = 0i64;
      v86 = 0;
      LODWORD(v85) = &CMyMatrix::`vftable`;
      DWORD2(v85) = 0;
      sub_403EE0(&v85);
      HIDWORD(v85) = 2;
      v86 = v51;
      DWORD2(v85) = cvCreateMat(2, v51, 5);
      DWORD1(v85) = *(unsigned long *)(DWORD2(v85) + 16);
      LOBYTE(v107) = 19;
      v89 = 0i64;
      v90 = 0;
      LODWORD(v89) = &CMyMatrix::`vftable`;
      DWORD2(v89) = 0;
      sub_403EE0(&v89);
      HIDWORD(v89) = 2;
      v90 = 1;
      v52 = cvCreateMat(2, 1, 5);
      v53 = 0;
      DWORD2(v89) = v52;
      for ( DWORD1(v89) = *(unsigned long *)(v52 + 16); v53 < *(unsigned long *)(this + 32); *(unsigned long *)(DWORD1(v91) + 4 * v57) = v56 )
      {
        v54 = *(unsigned long *)(this + 8);
        v55 = *(unsigned long *)(v54 + 8 * v53);
        v56 = *(unsigned long *)(v54 + 8 * v53 + 4);
        *(unsigned long *)(DWORD1(v93) + 4 * v53 * v94 + 4) = 1065353216;
        *(unsigned long *)(DWORD1(v93) + 4 * v53 * v94) = v55;
        v57 = v53 * v92;
        ++v53;
      }
      cvGEMM(DWORD2(v93), DWORD2(v93), 0, 1072693248, 0, 0, 0, DWORD2(v87), 1);
      cvInvert(DWORD2(v87), DWORD2(v83), 0);
      cvGEMM(DWORD2(v83), DWORD2(v93), 0, 1072693248, 0, 0, 0, DWORD2(v85), 2);
      cvGEMM(DWORD2(v85), DWORD2(v91), 0, 1072693248, 0, 0, 0, DWORD2(v89), 0);
      v58 = *(float *)(DWORD1(v89) + 4 * v90);
      v59 = *(float *)DWORD1(v89);
      *(unsigned long long *)(this + 80) = 0i64;
      *(unsigned long long *)(this + 72) = 0i64;
      *(double *)(this + 64) = v59 * v75 / v75;
      *(double *)(this + 56) = v58 * v75 + v69 - v59 * v79 * v75 / v75;
      sub_403E70(&v89);
      LOBYTE(v107) = 18;
      sub_403E70(&v85);
      LOBYTE(v107) = 17;
      sub_403E70(&v83);
      LOBYTE(v107) = 16;
      sub_403E70(&v87);
      LOBYTE(v107) = 15;
      sub_403E70(&v91);
      v19 = &v93;
      break;
    default:
      return;
  }
  v107 = -1;
  sub_403E70(v19);
}
double  sub_42D210@<st0>(int a1, int a2@<esi>)
{
  int v2; 
  int v3; 
  double v4; 
  int v5; 
  double v6; 
  float v7; 
  double v8; 
  int v11; 
  int v12; 
  int v13; 

  v2 = *(unsigned long *)(a1 + 32);
  if ( v2 > 6000 || !v2 )
    return 0.0;
  v3 = 0;
  v4 = 0.0;
  if ( v2 > 0 )
  {
    v5 = *(unsigned long *)(a1 + 12);
    do
    {
      v6 = *(float *)(v5 + 8 * v3);
      v7 = *(float *)(v5 + 8 * v3++ + 4);
      v8 = (((v6 * *(double *)(a1 + 88) + *(double *)(a1 + 80)) * v6 + *(double *)(a1 + 72)) * v6 + *(double *)(a1 + 64))
         * v6
         + *(double *)(a1 + 56);
      v4 = v4 + (v7 - v8) * (v7 - v8);
    }
    while ( v3 < v2 );
  }
  return *(double *)libm_sse2_sqrt_precise(a2, v11, v12, v13).m128_u64;
}
double  sub_42D2D0@<st0>(int a1, int a2, int a3@<esi>, int a4, unsigned long **a5)
{
  unsigned long *v5; 
  float *v6; 
  int v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  float v21; 
  double v22; 
  double v23; 
  int v25; 
  int v26; 
  unsigned long *v28; 
  int v29; 
  unsigned long *v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  int _70; 

  *(unsigned long long *)&v33 = libm_sse2_cos_precise(a2, a3).m128_u64[0];
  *(unsigned long long *)&v31 = libm_sse2_sin_precise().m128_u64[0];
  v35 = 0.0;
  v30 = *a5;
  v5 = (unsigned long *)**a5;
  v28 = v5;
  if ( v5 != *a5 )
  {
    do
    {
      v6 = (float *)(a4 + (v5[2] << 6));
      v7 = 0;
      v8 = v6[13];
      v9 = (float)(v6[8] - *(float *)(v29 + 40));
      v10 = v6[12];
      v11 = v6[15];
      v38 = (float)(v6[9] - *(float *)(v29 + 48)) * v31 + v9 * v33 + *(float *)(v29 + 40);
      v12 = v11 * v31;
      v41 = v9 * v31 - (float)(v6[9] - *(float *)(v29 + 48)) * v33 + *(float *)(v29 + 48);
      v13 = v8 * v31 + v10 * v33;
      v14 = v6[14];
      v15 = v10 * v31 - v8 * v33;
      v16 = v14 * v31 - v11 * v33;
      v17 = v6[10];
      v18 = v6[11];
      v34 = 0.0;
      v32 = 0.0;
      v36 = v17 * v13;
      v39 = v18 * (v12 + v14 * v33);
      v40 = v17 * v15;
      *(double *)&_70 = v18 * v16;
      do
      {
        v37 = *(double *)libm_sse2_cos_precise(v25, v26).m128_u64;
        v19 = *(double *)libm_sse2_sin_precise().m128_u64;
        ++v7;
        v20 = (float)(v36 * v37 + v38 + v39 * v19);
        v21 = v40 * v37 + v41 + *(double *)&_70 * v19;
        v22 = (((v20 * *(double *)(v29 + 88) + *(double *)(v29 + 80)) * v20 + *(double *)(v29 + 72)) * v20
             + *(double *)(v29 + 64))
            * v20
            + *(double *)(v29 + 56)
            - v21;
        v32 = v32 + 0.1;
        v23 = v22 * v22 + v34;
        v34 = v23;
      }
      while ( v32 < 6.283185307179586 );
      v5 = (unsigned long *)*v28;
      v28 = v5;
      v35 = v23 / (double)v7 + v35;
    }
    while ( v5 != v30 );
  }
  return *(double *)libm_sse2_sqrt_precise(v25, v26, a1, v28).m128_u64;
}
void  sub_42D580(int a1, int a2, int a3@<esi>)
{
  float v3; 
  int v4; 
  float v5; 
  int v7; 
  int v8; 
  double v9; 
  unsigned long long v10; 
  int v11; 
  double v12; 
  int v13; 
  double v14; 
  double v15; 
  float v16; 
  float v17; 
  int v18; 
  int v19; 
  float v20; 
  float v21; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  int _20; 

  v3 = 0.0;
  v4 = 0;
  v5 = 0.0;
  v7 = *(unsigned long *)(a1 + 32);
  if ( v7 > 0 )
  {
    v8 = *(unsigned long *)(a1 + 8);
    do
    {
      v5 = v5 + *(float *)(v8 + 8 * v4);
      v3 = v3 + *(float *)(v8 + 8 * v4++ + 4);
    }
    while ( v4 < v7 );
  }
  v32 = (float)(v3 / (float)v7);
  *(double *)(a1 + 888) = v32;
  v9 = -*(double *)(a1 + 872);
  v31 = (float)(v5 / (float)v7);
  *(double *)(a1 + 880) = v31;
  v30 = v9;
  *(unsigned long long *)&_20 = libm_sse2_cos_precise(a2, a3).m128_u64[0];
  v10 = libm_sse2_sin_precise().m128_u64[0];
  v11 = 0;
  v12 = *(double *)&v10;
  if ( v7 > 0 )
  {
    do
    {
      v13 = *(unsigned long *)(a1 + 8);
      v14 = *(float *)(v13 + 8 * v11) - v32;
      v15 = *(float *)(v13 + 8 * v11 + 4) - v33;
      v16 = v14 * *(double *)&_20 - v15 * v12 + v32;
      *(float *)(v13 + 8 * v11) = v16;
      *(float *)(*(unsigned long *)(a1 + 8) + 8 * v11++ + 4) = v14 * v12 + v15 * *(double *)&_20 + v33;
    }
    while ( v11 < *(unsigned long *)(a1 + 32) );
  }
  memcpy(*(void **)(a1 + 12), *(const void **)(a1 + 8), 8 * *(unsigned long *)(a1 + 32));
  v17 = 0.0;
  v18 = *(unsigned long *)(a1 + 32);
  v19 = 0;
  v20 = 0.0;
  v21 = 0.0;
  *(unsigned long long *)(a1 + 856) = xmmword_43A370;
  if ( v18 > 0 )
  {
    v22 = *(unsigned long *)(a1 + 8);
    do
    {
      v23 = *(float *)(v22 + 8 * v19);
      if ( *(double *)(a1 + 856) > v23 )
        *(double *)(a1 + 856) = v23;
      v24 = *(float *)(v22 + 8 * v19);
      if ( v24 > *(double *)(a1 + 864) )
        *(double *)(a1 + 864) = v24;
      v20 = v20 + *(float *)(v22 + 8 * v19 + 4);
      v25 = *(float *)(v22 + 8 * v19++);
      v17 = v17 + v25;
      v21 = v21 + (float)(v25 * v25);
    }
    while ( v19 < v18 );
  }
  *(float *)(a1 + 40) = v17 / (float)v18;
  *(float *)(a1 + 48) = v20 / (float)v18;
  v26 = *(double *)libm_sse2_sqrt_precise(LODWORD(v30), HIDWORD(v30), LODWORD(v31), HIDWORD(v31)).m128_u64;
  v27 = 0;
  *(float *)(a1 + 44) = v26;
  if ( v18 > 0 )
  {
    do
    {
      *(float *)(*(unsigned long *)(a1 + 8) + 8 * v27) = (float)(*(float *)(*(unsigned long *)(a1 + 8) + 8 * v27) - *(float *)(a1 + 40))
                                                / *(float *)(a1 + 44);
      *(float *)(*(unsigned long *)(a1 + 8) + 8 * v27 + 4) = (float)(*(float *)(*(unsigned long *)(a1 + 8) + 8 * v27 + 4)
                                                            - *(float *)(a1 + 48))
                                                    / *(float *)(a1 + 44);
      ++v27;
    }
    while ( v27 < *(unsigned long *)(a1 + 32) );
  }
}
void  sub_42D7B0()
{
  char *v2; 
  char *v3; 
  int v4; 

  v2 = (char *)*((unsigned long *)this + 12);
  *(unsigned long *)this = &DwCDelaunayTriangulation::`vftable`;
  if ( v2 )
  {
    v3 = v2 - 4;
    `eh vector destructor iterator`(v2, 8u, *((unsigned long *)v2 - 1), (void ( *)(void *))sub_4271F0);
    operator delete[](v3);
  }
  cvReleaseMemStorage(this + 24);
  sub_42B580((int **)this + 8, &v4, **((int ***)this + 8), *((int **)this + 8));
  operator delete(*((void **)this + 8));
}
int  sub_42D810()
{
  int v2; 
  int v3; 
  int result; 
  unsigned int v5; 
  int v6; 
  int v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  int *v12; 
  float v13; 
  float v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  float v23; 
  float v24; 
  int v25; 
  float v26; 
  float v27; 
  int v28; 
  int v29; 
  int v30; 
  char v31[12]; 
  unsigned int v32; 
  unsigned int v33; 

  v2 = *(unsigned long *)(this[7] + 64);
  v3 = *(unsigned long *)(v2 + 24);
  v28 = *(unsigned long *)(v2 + 28);
  v30 = v3;
  result = cvStartReadSeq(v2, v31, 0);
  if ( v3 > 0 )
  {
    v5 = v32;
    do
    {
      if ( *(int *)v5 >= 0 )
      {
        v6 = *(unsigned long *)((v5 & 0xFFFFFFFC) + 4 * (v5 & 3) + 4);
        result = ((unsigned char)v5 - 2) & 3;
        v7 = *(unsigned long *)((v5 & 0xFFFFFFFC) + 4 * result + 4);
        if ( v6 )
        {
          if ( v7 )
          {
            v8 = *(float *)(v6 + 8);
            if ( v8 < 5000.0 )
            {
              v9 = *(float *)(v6 + 12);
              if ( v9 < 5000.0 )
              {
                v10 = *(float *)(v7 + 8);
                if ( v10 < 5000.0 )
                {
                  v11 = *(float *)(v7 + 12);
                  if ( v11 < 5000.0 && v8 > -5000.0 && v9 > -5000.0 && v10 > -5000.0 && v11 > -5000.0 )
                  {
                    v23 = *(float *)(v7 + 8);
                    v24 = *(float *)(v7 + 12);
                    v26 = *(float *)(v6 + 8);
                    v27 = *(float *)(v6 + 12);
                    v29 = (int)(float)((float)(v27 * 10.0) + (float)(v26 * 100000.0));
                    v12 = sub_42DA20(this + 8, &v22, &v29);
                    v13 = v23 * 100000.0;
                    v14 = v24 * 10.0;
                    this[10] = *v12;
                    v29 = (int)(float)(v13 + v14);
                    v15 = sub_42DA20(this + 8, &v21, &v29);
                    v16 = this[10];
                    v17 = this[8];
                    result = *v15;
                    this[11] = result;
                    if ( v16 != v17 && result != v17 )
                    {
                      v18 = *(unsigned long *)(v16 + 20);
                      if ( v18 >= 1 )
                      {
                        v19 = this[1];
                        if ( v18 < v19 )
                        {
                          result = *(unsigned long *)(result + 20);
                          if ( result >= 1 && result < v19 )
                          {
                            v29 = result;
                            v20 = this[12];
                            v25 = v18;
                            sub_42BA10((unsigned long *)(v20 + 8 * v18), &v29);
                            result = (int)sub_42BA10((unsigned long *)(this[12] + 8 * v29), &v25);
                            v5 = v32;
                          }
                        }
                      }
                    }
                    v3 = v30;
                  }
                }
              }
            }
          }
        }
      }
      v5 += v28;
      v32 = v5;
      if ( v5 >= v33 )
      {
        result = cvChangeSeqBlock(v31, 1);
        v5 = v32;
      }
      v30 = --v3;
    }
    while ( v3 );
  }
  return result;
}
unsigned long * sub_42DA20(unsigned long *a2, int *a3)
{
  int *v3; 
  int *v4; 
  int *v5; 
  int v6; 
  unsigned long *result; 
  int *v8; 

  v3 = (int *)*this;
  v4 = v3;
  v5 = (int *)v3[1];
  while ( !*((unsigned char *)v5 + 13) )
  {
    if ( v5[4] <= *a3 )
    {
      v4 = v5;
      v5 = (int *)*v5;
    }
    else
    {
      v5 = (int *)v5[2];
    }
  }
  if ( v4 == v3 || (v6 = *a3, v8 = v4, v6 > v4[4]) )
    v8 = v3;
  result = a2;
  *a2 = v8;
  return result;
}
int  sub_42DA70( void *a2, int a3, unsigned long *a4)
{
  void *v5; 
  FILE *v6; 
  int i; 

  sub_430F80((unsigned long *)this, (int)a2, a3, a4);
  *(unsigned long *)this = &GCoptimization::`vftable`;
  sub_42DE90(this, (int)a2, a3);
  v5 = operator new(4 * *(unsigned long *)(this + 12));
  *(unsigned long *)(this + 40) = v5;
  if ( !v5 )
  {
    v6 = _iob_func();
    printf(v6 + 2, "\n %s \n", "out of memory");
    exit(1);
  }
  for ( i = 0; i < (int)a2; ++i )
    *(unsigned long *)(*(unsigned long *)(this + 40) + 4 * i) = 0;
  *(_WORD *)(this + 44) = 1;
  sub_42E4B0((unsigned long *)this);
  return this;
}
void  sub_42DB50(unsigned )
{
  *(unsigned long *)this = 0;
  this[4] = 4;
}

unsigned long * sub_42DC20( char a2)
{
  *this = &MRF::`vftable`;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
int  sub_42DC50( float *a2, int a3, int a4, int a5)
{
  int i; 
  int v7; 
  int result; 
  float v9; 
  float v10; 

  for ( i = 0; i < a4; ++i )
  {
    v7 = *(unsigned long *)(a3 + 4 * i);
    v10 = ((double ( *)(unsigned long, int))this[20])(*(unsigned long *)(this[18] + 4 * i), a5);
    v9 = ((double ( *)(unsigned long, unsigned long))this[20])(
           *(unsigned long *)(this[18] + 4 * i),
           *(unsigned long *)(this[10] + 4 * *(unsigned long *)(this[18] + 4 * i)));
    result = sub_42F910(a2, v7, v9, v10);
  }
  return result;
}
unsigned long * sub_42DCC0( unsigned long *a2, int a3, float a4, float a5, float a6, float a7)
{
  float v7; 
  float v9; 
  int v10; 
  int v11; 
  bool v12; 
  float v14; 
  float v15; 

  v7 = a4;
  if ( (float)(a4 + a7) > (float)(a5 + a6) )
  {
    v9 = (float)((float)(a4 + a7) - a6) - a5;
    v7 = a4 - (float)(v9 / 3.0);
    a4 = v7;
    a6 = (float)(v9 / 3.0) + a6;
    a5 = a5 + (float)(v9 - (float)((float)(v9 / 3.0) * 2.0));
  }
  sub_42F910(this, (int)a2, a7, v7);
  *(float *)&v10 = a5 - a4;
  *(float *)&v11 = a6 - a7;
  v12 = (float)(a5 - a4) >= 0.0;
  v14 = a5 - a4;
  v15 = a6 - a7;
  if ( v12 )
  {
    if ( *(float *)&v11 >= 0.0 )
    {
      return sub_42F770(this, a2, a3, v10, v11);
    }
    else
    {
      sub_42F910(this, (int)a2, 0.0, -*(float *)&v11);
      sub_42F910(this, a3, 0.0, v15);
      return sub_42F770(this, a2, a3, COERCE_INT(v14 + v15), 0);
    }
  }
  else
  {
    sub_42F910(this, (int)a2, 0.0, *(float *)&v10);
    sub_42F910(this, a3, 0.0, -v14);
    return sub_42F770(this, a2, a3, 0, COERCE_INT(v14 + v15));
  }
}
void * sub_42DE60()
{
  void *v1; 

  v1 = (void *)this[10];
  if ( !v1 )
  {
    printf("First initialize algorithm");
    exit(0);
  }
  return memset(v1, 0, 4 * this[3]);
}
void  sub_42DE90( int a2, int a3)
{
  int v4; 
  int *v5; 
  unsigned long *v6; 
  FILE *v7; 
  const char *v8; 

  if ( a2 < 0 || a3 < 0 )
  {
    v8 = "Illegal negative parameters";
LABEL_8:
    v7 = _iob_func();
    printf(v7 + 2, "\n %s \n", v8);
    exit(1);
  }
  *(unsigned long *)(this + 16) = a3;
  *(unsigned long *)(this + 12) = a2;
  *(unsigned char *)(this + 20) = 0;
  v4 = (12 * (unsigned long long)(unsigned int)a2) >> 32 != 0 ? -1 : 12 * a2;
  v5 = (int *)operator new(__CFADD__(v4, 4) ? -1 : v4 + 4);
  if ( v5 )
  {
    v6 = v5 + 1;
    *v5 = a2;
    `eh vector constructor iterator`(
      v5 + 1,
      0xCu,
      a2,
      (void ( *)(void *))sub_42DB50,
      (void ( *)(void *))sub_42FE20);
  }
  else
  {
    v6 = 0;
  }
  *(unsigned long *)(this + 64) = v6;
  if ( !v6 )
  {
    v8 = "Not enough memory";
    goto LABEL_8;
  }
}
double  sub_42DF70()
{
  int v3; 
  double v4; 
  float i; 

  if ( this[7] == 1 )
    return sub_42DFC0(this);
  v3 = 0;
  for ( i = 0.0; v3 < this[3]; i = v4 + i )
  {
    v4 = ((double ( *)(int, unsigned long))this[20])(v3, *(unsigned long *)(this[10] + 4 * v3));
    ++v3;
  }
  return i;
}
double  sub_42DFC0(unsigned long *a1)
{
  int v1; 
  float v2; 
  int v3; 
  int v4; 
  int v5; 
  unsigned long *v6; 
  int v7; 
  int v8; 
  int v9; 
  float v10; 
  int v11; 
  float v12; 
  int v13; 
  float v14; 
  int v15; 
  int v16; 
  bool v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int *v23; 
  int v24; 
  int v25; 
  unsigned long *v27; 
  int v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  float v32; 
  int v33; 

  v1 = a1[3];
  v2 = 0.0;
  v3 = 0;
  v27 = a1;
  v32 = 0.0;
  v28 = v1;
  v30 = 0;
  if ( v1 >= 4 )
  {
    v4 = a1[4];
    v5 = a1[12];
    v6 = (unsigned long *)(a1[10] + 8);
    v31 = 3 * v4;
    v7 = 4 * v4;
    v33 = 2 * v4;
    v29 = ((unsigned int)(v1 - 4) >> 2) + 1;
    v8 = 0;
    v30 = 4 * v29;
    do
    {
      v9 = v8 + *(v6 - 2);
      v8 += v7;
      v10 = v2 + *(float *)(v5 + 4 * v9);
      v11 = v4 + *(v6 - 1);
      v4 += v7;
      v12 = v10 + *(float *)(v5 + 4 * v11);
      v13 = v33 + *v6;
      v33 += v7;
      v14 = v12 + *(float *)(v5 + 4 * v13);
      v15 = v6[1];
      v6 += 4;
      v16 = v31 + v15;
      v31 += v7;
      v17 = v29-- == 1;
      v2 = v14 + *(float *)(v5 + 4 * v16);
    }
    while ( !v17 );
    v1 = v28;
    a1 = v27;
    v3 = v30;
    v32 = v2;
  }
  if ( v3 < v1 )
  {
    v18 = a1[10];
    v19 = a1[4];
    v20 = a1[12];
    v21 = v3 * v19;
    v22 = v1 - v30;
    v23 = (int *)(v18 + 4 * v3);
    do
    {
      v24 = *v23++;
      v25 = v21 + v24;
      v21 += v19;
      v2 = v2 + *(float *)(v20 + 4 * v25);
      --v22;
    }
    while ( v22 );
    return v2;
  }
  return v32;
}
double  sub_42E0A0(unsigned long *a1)
{
  int v1; 
  float v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned long *v25; 
  float v26; 
  int v27; 

  v1 = a1[2];
  v2 = 0.0;
  v3 = 0;
  v25 = a1;
  v26 = 0.0;
  v22 = v1;
  v23 = 0;
  if ( v1 > 0 )
  {
    v4 = a1[1];
    v20 = v4;
    do
    {
      if ( v4 > 1 )
      {
        v5 = a1[10];
        v6 = a1[4];
        v27 = a1[13];
        v7 = v3 * v4;
        v8 = v4 - 1;
        v9 = 4 * v7 + 4;
        do
        {
          v10 = *(unsigned long *)(v9 + v5) + v6 * *(unsigned long *)(v9 + v5 - 4);
          v9 += 4;
          v2 = v2 + *(float *)(v27 + 4 * v10);
          --v8;
        }
        while ( v8 );
        v3 = v23;
        a1 = v25;
        v4 = v20;
        v1 = v22;
        v26 = v2;
      }
      v23 = ++v3;
    }
    while ( v3 < v1 );
  }
  v11 = 1;
  v24 = 1;
  if ( v1 > 1 )
  {
    v12 = a1[1];
    v19 = v12;
    do
    {
      if ( v12 > 0 )
      {
        v13 = a1[10];
        v21 = a1[13];
        v14 = 4 * v11 * v12;
        v15 = 4 * (v11 * v12 - v12);
        do
        {
          v16 = *(unsigned long *)(v15 + v13);
          v15 += 4;
          v17 = *(unsigned long *)(v14 + v13) + v25[4] * v16;
          v14 += 4;
          v2 = v2 + *(float *)(v21 + 4 * v17);
          --v12;
        }
        while ( v12 );
        v11 = v24;
        v12 = v19;
        a1 = v25;
        v1 = v22;
        v26 = v2;
      }
      v24 = ++v11;
    }
    while ( v11 < v1 );
  }
  return v26;
}
double  sub_42E1A0()
{
  unsigned long *v1; 
  float v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  float *v8; 
  int v9; 
  int v10; 
  int v11; 
  float v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  float v21; 
  bool v22; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  float v32; 
  int v33; 

  v1 = this;
  v2 = 0.0;
  v3 = 0;
  v4 = this[2];
  v32 = 0.0;
  v29 = v4;
  v30 = 0;
  if ( v4 > 0 )
  {
    v5 = this[1];
    v27 = v5;
    do
    {
      if ( v5 > 1 )
      {
        v6 = v1[10];
        v25 = v1[13];
        v7 = 4 * v3 * v5;
        v8 = (float *)(v7 + v1[15]);
        v9 = v5 - 1;
        v10 = v7 + 4;
        do
        {
          v11 = *(unsigned long *)(v10 + v6) + this[4] * *(unsigned long *)(v10 + v6 - 4);
          v10 += 4;
          v12 = *(float *)(v25 + 4 * v11) * *v8++;
          v2 = v2 + v12;
          --v9;
        }
        while ( v9 );
        v3 = v30;
        v1 = this;
        v5 = v27;
        v4 = v29;
        v32 = v2;
      }
      v30 = ++v3;
    }
    while ( v3 < v4 );
  }
  v13 = 1;
  v26 = 1;
  if ( v4 > 1 )
  {
    v14 = v1[1];
    v15 = v14;
    v24 = v14;
    do
    {
      if ( v15 > 0 )
      {
        v16 = v1[10];
        v17 = v13 * v14;
        v28 = v1[1];
        v33 = v1[13];
        v31 = v15;
        v18 = 4 * (v13 * v14 - v28);
        v19 = 4 * v17;
        do
        {
          v20 = *(unsigned long *)(v19 + v16) + this[4] * *(unsigned long *)(v18 + v16);
          v19 += 4;
          v21 = *(float *)(v33 + 4 * v20) * *(float *)(v18 + this[14]);
          v18 += 4;
          v22 = v31-- == 1;
          v2 = v2 + v21;
        }
        while ( !v22 );
        v13 = v26;
        v1 = this;
        v4 = v29;
        v15 = v24;
        v14 = v28;
        v32 = v2;
      }
      v26 = ++v13;
    }
    while ( v13 < v4 );
  }
  return v32;
}
double  sub_42E2C0()
{
  int v2; 
  int v3; 
  int i; 
  double v5; 
  int v6; 
  int v7; 
  int j; 
  double v9; 
  float v11; 

  v11 = 0.0;
  v2 = 0;
  if ( (int)this[2] > 0 )
  {
    v3 = this[1];
    do
    {
      for ( i = 1; i < v3; v11 = v5 + v11 )
      {
        v5 = ((double ( *)(int, int, unsigned long, unsigned long))this[21])(
               i + v2 * v3,
               i + v2 * v3 - 1,
               *(unsigned long *)(this[10] + 4 * (i + v2 * v3)),
               *(unsigned long *)(this[10] + 4 * (i + v2 * v3) - 4));
        v3 = this[1];
        ++i;
      }
      ++v2;
    }
    while ( v2 < this[2] );
  }
  v6 = 1;
  if ( (int)this[2] > 1 )
  {
    v7 = this[1];
    do
    {
      for ( j = 0; j < v7; v11 = v9 + v11 )
      {
        v9 = ((double ( *)(int, int, unsigned long, unsigned long))this[21])(
               j + v6 * this[1],
               j + v6 * this[1] - this[1],
               *(unsigned long *)(this[10] + 4 * (j + v6 * this[1])),
               *(unsigned long *)(this[10] + 4 * (j + v6 * this[1] - this[1])));
        v7 = this[1];
        ++j;
      }
      ++v6;
    }
    while ( v6 < this[2] );
  }
  return v11;
}
double  sub_42E380()
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  float v7; 

  v2 = 0;
  v7 = 0.0;
  if ( (int)this[3] > 0 )
  {
    v3 = 0;
    do
    {
      v4 = this[16];
      if ( *(unsigned long *)(v3 + v4) )
      {
        *(unsigned long *)(v3 + v4 + 8) = *(unsigned long *)(v3 + v4);
        *(unsigned char *)(v3 + v4 + 5) = 0;
        while ( sub_42FED0((unsigned long *)(v3 + this[16])) )
        {
          v5 = sub_42FEE0((unsigned char *)(v3 + this[16]));
          if ( v2 < *(unsigned long *)v5 )
            v7 = (float)(*(float *)(this[13]
                                  + 4
                                  * (*(unsigned long *)(this[10] + 4 * v2) + this[4]
                                                                    * *(unsigned long *)(this[10] + 4 * *(unsigned long *)v5)))
                       * *(float *)(v5 + 4))
               + v7;
        }
      }
      ++v2;
      v3 += 12;
    }
    while ( v2 < this[3] );
  }
  return v7;
}
double  sub_42E420()
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  float v7; 

  v7 = 0.0;
  v2 = 0;
  if ( (int)this[3] > 0 )
  {
    v3 = 0;
    do
    {
      v4 = this[16];
      if ( *(unsigned long *)(v3 + v4) )
      {
        *(unsigned long *)(v3 + v4 + 8) = *(unsigned long *)(v3 + v4);
        *(unsigned char *)(v3 + v4 + 5) = 0;
        while ( sub_42FED0((unsigned long *)(v3 + this[16])) )
        {
          v5 = *(unsigned long *)sub_42FEE0((unsigned char *)(v3 + this[16]));
          if ( v2 < v5 )
            v7 = ((double ( *)(int, int, unsigned long, unsigned long))this[21])(
                   v2,
                   v5,
                   *(unsigned long *)(this[10] + 4 * v2),
                   *(unsigned long *)(this[10] + 4 * v5))
               + v7;
        }
      }
      ++v2;
      v3 += 12;
    }
    while ( v2 < this[3] );
  }
  return v7;
}
int  sub_42E4B0()
{
  void *v2; 
  int result; 
  FILE *v4; 

  this[18] = operator new(4 * this[3]);
  v2 = operator new(4 * this[4]);
  this[17] = v2;
  if ( !this[18] || !v2 )
  {
    v4 = _iob_func();
    printf(v4 + 2, "\n %s \n", "Not enough memory");
    exit(1);
  }
  for ( result = 0; result < this[4]; ++result )
    *(unsigned long *)(this[17] + 4 * result) = result;
  return result;
}
void  sub_42E540( int a2)
{
  sub_42F590(this, a2);
}
void  sub_42E560( int a2)
{
  int v3; 
  float *v4; 
  float *v5; 
  int v6; 
  int i; 
  unsigned long *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  float v13; 
  int v14; 
  int *v15; 
  int v16; 
  bool v17; 
  float v18; 
  float *v19; 
  int *v20; 
  int v22; 
  int *v23; 

  v3 = 0;
  v4 = (float *)operator new(0x3Cu);
  v5 = v4;
  v19 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x3Cu);
    sub_42F6D0(v5, 0);
    v5[13] = 0.0;
    v5[14] = 0.0;
  }
  else
  {
    v5 = 0;
    v19 = 0;
  }
  v6 = 0;
  if ( (int)this[3] > 0 )
  {
    do
    {
      if ( *(unsigned long *)(this[10] + 4 * v6) != a2 )
        *(unsigned long *)(this[18] + 4 * v3++) = v6;
      ++v6;
    }
    while ( v6 < this[3] );
    if ( v3 > 0 )
    {
      v23 = (int *)operator new(4 * v3);
      if ( !v23 )
      {
        printf("\nOut of memory, exiting");
        exit(1);
      }
      for ( i = 0; i < v3; ++i )
        v23[i] = (int)sub_42F890((unsigned long **)v5);
      v8 = this;
      if ( this[7] == 1 )
      {
        v9 = 0;
        v22 = 0;
        do
        {
          v10 = v8[12];
          v11 = *(unsigned long *)(v8[18] + 4 * v9);
          v12 = v11 * v8[4];
          v18 = *(float *)(v10 + 4 * (v12 + a2));
          v13 = *(float *)(v10 + 4 * (v12 + *(unsigned long *)(v8[10] + 4 * v11)));
          v5 = v19;
          sub_42F910(v19, v23[v22], v13, v18);
          v9 = v22 + 1;
          v22 = v9;
        }
        while ( v9 < v3 );
      }
      else
      {
        sub_42DC50(this, v5, (int)v23, v3, a2);
      }
      if ( *((unsigned char *)v8 + 20) )
      {
        if ( v8[8] )
        {
          if ( *((unsigned char *)v8 + 21) )
            sub_42EC30(v8, v3, a2, v5, (int)v23);
          else
            sub_42E960(v8, v3, a2, v5, (int)v23);
        }
        else
        {
          sub_42EF70(v8, v3, a2, v5, (int)v23);
        }
      }
      else if ( v8[8] )
      {
        sub_42F260(v8, v3, a2, v5, (int)v23);
      }
      else
      {
        sub_42F3F0(v8, v3, a2, v5, (int)v23);
      }
      sub_4302B0((int)v5);
      v14 = 0;
      if ( (int)v8[3] > 0 )
      {
        v15 = v23;
        v16 = a2;
        v20 = v23;
        do
        {
          if ( *(unsigned long *)(v8[10] + 4 * v14) != v16 )
          {
            v17 = sub_430F50(*v15);
            v16 = a2;
            if ( !v17 )
              *(unsigned long *)(v8[10] + 4 * v14) = a2;
            v15 = ++v20;
          }
          ++v14;
        }
        while ( v14 < v8[3] );
      }
      operator delete(v23);
    }
  }
  if ( v5 )
  {
    sub_42F700((int)v5);
    operator delete(v5);
  }
}
int  sub_42E790( int a2, int a3)
{
  int result; 

  this[15] = a2;
  result = a3;
  this[14] = a3;
  return result;
}
int  sub_42E7B0( int a2)
{
  int result; 

  result = a2;
  this[20] = a2;
  return result;
}
int  sub_42E7C0( int a2)
{
  int result; 

  result = a2;
  this[12] = a2;
  return result;
}
int  sub_42E7D0( int a2, int a3, int a4)
{
  unsigned long *v4; 
  unsigned long *v5; 

  v4 = operator new(8u);
  v5 = operator new(8u);
  v4[1] = a4;
  *v4 = a3;
  *v5 = a2;
  v5[1] = a4;
  sub_42FE90((unsigned char *)(this[16] + 12 * a2), (int)v4);
  return sub_42FE90((unsigned char *)(this[16] + 12 * a3), (int)v5);
}
char  sub_42E840(unsigned int a2, char *a3)
{
  char result; 

  if ( a2 != 1 )
    return printf("\nInvalid number of parameters, can only set one parameter\\that is boolean label order\n");
  result = *a3;
  this[44] = *a3;
  return result;
}
float * sub_42E870( int a2, float a3, float a4)
{
  int v5; 
  float *result; 
  FILE *v7; 
  int i; 
  int v9; 
  int v10; 
  int v11; 
  float v12; 
  float v13; 
  int v14; 

  v5 = *(unsigned long *)(this + 16) * *(unsigned long *)(this + 16);
  *(unsigned char *)(this + 45) = 1;
  result = (float *)operator new(4 * v5);
  *(unsigned long *)(this + 52) = result;
  if ( !result )
  {
    v7 = _iob_func();
    printf(v7 + 2, "Not enough memory!\n");
    exit(1);
  }
  for ( i = 0; i < *(unsigned long *)(this + 16); ++i )
  {
    v9 = i;
    if ( i < *(unsigned long *)(this + 16) )
    {
      v10 = 0;
      do
      {
        v11 = v10;
        if ( a2 != 1 )
          v11 = v10 * v10;
        v12 = (float)v11;
        if ( (float)v11 > a3 )
          v12 = a3;
        ++v10;
        v13 = v12 * a4;
        *(float *)(*(unsigned long *)(this + 52) + 4 * (i + v9 * *(unsigned long *)(this + 16))) = v13;
        result = *(float **)(this + 52);
        v14 = v9 + i * *(unsigned long *)(this + 16);
        ++v9;
        result[v14] = v13;
      }
      while ( v9 < *(unsigned long *)(this + 16) );
    }
  }
  return result;
}
int  sub_42E940( int a2)
{
  int result; 

  result = a2;
  this[21] = a2;
  return result;
}
int  sub_42E960( int a2, int a3, float *a4, int a5)
{
  bool v5; 
  int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  float v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  float v25; 
  int v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 

  result = a2 - 1;
  v5 = a2 - 1 < 0;
  v38 = a2 - 1;
  if ( !v5 )
  {
    v8 = a3;
    do
    {
      v9 = this[18];
      v10 = this[1];
      v37 = *(unsigned long *)(v9 + 4 * result);
      v11 = v37;
      v35 = v37 / v10;
      v36 = v37 % v10;
      *(unsigned long *)(4 * v37 + v9) = v38;
      if ( v37 % v10 >= this[1] - 1 )
      {
        v18 = v38;
      }
      else
      {
        v12 = this[10];
        v13 = *(unsigned long *)(v12 + 4 * v37 + 4);
        if ( v13 == v8 )
        {
          v19 = *(unsigned long *)(v12 + 4 * v37) + v8 * this[4];
          v18 = v38;
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v38),
            *(float *)(this[13] + 4 * v19),
            *(float *)(this[13] + 4 * (v8 + v13 * this[4])));
        }
        else
        {
          v14 = v13 * this[4];
          v15 = *(unsigned long *)(v12 + 4 * v37);
          v16 = this[13];
          v31 = *(float *)(v16 + 4 * (v15 + v14));
          v29 = *(float *)(v16 + 4 * (v15 + a3 * this[4]));
          v8 = a3;
          v27 = *(float *)(v16 + 4 * (v14 + a3));
          v17 = *(float *)(v16 + 4 * a3 * (this[4] + 1));
          v18 = v38;
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * v38),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v37 + 4)),
            v17,
            v27,
            v29,
            v31);
        }
        v11 = v37;
      }
      if ( v35 < this[2] - 1 )
      {
        v20 = this[10];
        v34 = v11 + this[1];
        v21 = *(unsigned long *)(v20 + 4 * v34);
        if ( v21 == v8 )
        {
          v18 = v38;
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v38),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v37) + v8 * this[4])),
            *(float *)(this[13] + 4 * (v8 + v21 * this[4])));
        }
        else
        {
          v22 = this[13];
          v23 = v21 * this[4];
          v24 = *(unsigned long *)(v20 + 4 * v37);
          v32 = *(float *)(v22 + 4 * (v24 + v23));
          v30 = *(float *)(v22 + 4 * (v24 + a3 * this[4]));
          v8 = a3;
          v28 = *(float *)(v22 + 4 * (v23 + a3));
          v25 = *(float *)(v22 + 4 * a3 * (this[4] + 1));
          v18 = v38;
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * v38),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v34)),
            v25,
            v28,
            v30,
            v32);
        }
      }
      v26 = v37;
      if ( v36 > 0 )
      {
        v33 = *(unsigned long *)(this[10] + 4 * v37 - 4);
        if ( v33 == v8 )
        {
          v18 = v38;
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v38),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v37) + v8 * this[4])),
            *(float *)(this[13] + 4 * (v8 + v33 * this[4])));
          v26 = v37;
        }
      }
      if ( v35 > 0 && *(unsigned long *)(this[10] + 4 * (v26 - this[1])) == v8 )
      {
        v18 = v38;
        sub_42F910(
          a4,
          *(unsigned long *)(a5 + 4 * v38),
          *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v37) + v8 * this[4])),
          *(float *)(this[13] + 4 * v8 * (this[4] + 1)));
      }
      v38 = v18 - 1;
      result = v18 - 1;
    }
    while ( v18 - 1 >= 0 );
  }
  return result;
}
int  sub_42EC30( int a2, int a3, float *a4, int a5)
{
  bool v5; 
  int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  float v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  float v18; 
  int v19; 
  float v20; 
  int v21; 
  int v22; 
  float v23; 
  int v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 

  result = a2 - 1;
  v5 = a2 - 1 < 0;
  v35 = a2 - 1;
  if ( !v5 )
  {
    v8 = a3;
    do
    {
      v9 = this[18];
      v10 = this[1];
      v34 = *(unsigned long *)(v9 + 4 * result);
      v11 = v34;
      v30 = v34 / v10;
      v31 = v34 % v10;
      *(unsigned long *)(4 * v34 + v9) = v35;
      v33 = 4 * v34;
      if ( v34 % v10 >= this[1] - 1 )
      {
        v19 = v35;
      }
      else
      {
        v12 = *(float *)(v33 + this[15]);
        v13 = this[10];
        v14 = *(unsigned long *)(v13 + 4 * v34 + 4);
        if ( v14 == v8 )
        {
          v19 = v35;
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v35),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v34) + v8 * this[4])) * v12,
            *(float *)(this[13] + 4 * (v8 + v14 * this[4])) * v12);
        }
        else
        {
          v15 = v14 * this[4];
          v16 = *(unsigned long *)(v13 + 4 * v34);
          v17 = this[13];
          v28 = *(float *)(v17 + 4 * (v16 + v15)) * v12;
          v27 = *(float *)(v17 + 4 * (v16 + a3 * this[4])) * v12;
          v8 = a3;
          v26 = *(float *)(v17 + 4 * (v15 + a3)) * v12;
          v18 = *(float *)(v17 + 4 * a3 * (this[4] + 1));
          v19 = v35;
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * v35),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v34 + 4)),
            v18 * v12,
            v26,
            v27,
            v28);
        }
        v11 = v34;
      }
      if ( v30 < this[2] - 1 )
      {
        v32 = v11 + this[1];
        v20 = *(float *)(v33 + this[14]);
        v21 = *(unsigned long *)(this[10] + 4 * v32);
        if ( v21 == v8 )
        {
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v19),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v34) + v8 * this[4])) * v20,
            *(float *)(this[13] + 4 * (v8 + v21 * this[4])) * v20);
          v8 = a3;
        }
        else
        {
          v22 = this[13];
          v8 = a3;
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * v35),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v32)),
            *(float *)(v22 + 4 * a3 * (this[4] + 1)) * v20,
            *(float *)(v22 + 4 * (v21 * this[4] + a3)) * v20,
            *(float *)(v22 + 4 * (*(unsigned long *)(this[10] + 4 * v34) + a3 * this[4])) * v20,
            *(float *)(v22 + 4 * (*(unsigned long *)(this[10] + 4 * v34) + v21 * this[4])) * v20);
        }
      }
      if ( v31 > 0 )
      {
        v29 = *(unsigned long *)(this[10] + 4 * v34 - 4);
        if ( v29 == v8 )
        {
          v23 = *(float *)(this[15] + 4 * v34 - 4);
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v35),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v34) + v8 * this[4])) * v23,
            *(float *)(this[13] + 4 * (v8 + v29 * this[4])) * v23);
          v8 = a3;
        }
      }
      if ( v30 > 0 )
      {
        v24 = v34 - this[1];
        if ( *(unsigned long *)(this[10] + 4 * v24) == v8 )
        {
          v25 = *(float *)(this[14] + 4 * v24);
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * v35),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v34) + v8 * this[4])) * v25,
            *(float *)(this[13] + 4 * v8 * (this[4] + 1)) * v25);
        }
      }
      result = --v35;
    }
    while ( v35 >= 0 );
  }
  return result;
}
int  sub_42EF70( int a2, int a3, float *a4, int a5)
{
  bool v5; 
  int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  double v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  int v30; 
  int v31; 
  float v32; 
  int v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  int v39; 
  float v40; 
  int v41; 
  float v42; 
  int v43; 

  result = a2 - 1;
  v5 = a2 - 1 < 0;
  v43 = a2 - 1;
  if ( !v5 )
  {
    do
    {
      v8 = this[18];
      v9 = this[1];
      v10 = *(unsigned long *)(v8 + 4 * result);
      v11 = v43;
      v39 = v10 / v9;
      *(unsigned long *)(v8 + 4 * v10) = v43;
      v12 = a3;
      v30 = v10 % v9;
      if ( v10 % v9 < this[1] - 1 )
      {
        if ( *(unsigned long *)(this[10] + 4 * (v10 + 1)) == a3 )
        {
          v13 = *(unsigned long *)(a5 + 4 * v43);
          v40 = ((double ( *)(int, int, int, unsigned long))this[21])(
                  v10,
                  v10 + 1,
                  a3,
                  *(unsigned long *)(this[10] + 4 * (v10 + 1)));
          v35 = ((double ( *)(int, int, unsigned long, int))this[21])(v10, v10 + 1, *(unsigned long *)(this[10] + 4 * v10), a3);
          sub_42F910(a4, v13, v35, v40);
          v12 = a3;
        }
        else
        {
          v28 = ((double ( *)(int, int, unsigned long, unsigned long))this[21])(
                  v10,
                  v10 + 1,
                  *(unsigned long *)(this[10] + 4 * v10),
                  *(unsigned long *)(this[10] + 4 * (v10 + 1)));
          v26 = ((double ( *)(int, int, unsigned long, int))this[21])(v10, v10 + 1, *(unsigned long *)(this[10] + 4 * v10), a3);
          v24 = ((double ( *)(int, int, int))this[21])(v10, v10 + 1, a3);
          v22 = ((double ( *)(int, int, int))this[21])(v10, v10 + 1, a3);
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * v43),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v10 + 4)),
            v22,
            v24,
            v26,
            v28);
        }
        v11 = v43;
      }
      if ( v39 < this[2] - 1 )
      {
        v14 = v10 + this[1];
        v41 = v14;
        if ( *(unsigned long *)(this[10] + 4 * v14) != v12 )
        {
          v29 = ((double ( *)(int, int, unsigned long))this[21])(v10, v14, *(unsigned long *)(this[10] + 4 * v10));
          v27 = ((double ( *)(int, int, unsigned long))this[21])(v10, v41, *(unsigned long *)(this[10] + 4 * v10));
          v25 = ((double ( *)(int, int, int))this[21])(v10, v41, v12);
          v15 = ((double ( *)(int, int, int))this[21])(v10, v41, v12);
          v16 = v43;
          v23 = v15;
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * v43),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v41)),
            v23,
            v25,
            v27,
            v29);
          goto LABEL_12;
        }
        v17 = *(unsigned long *)(a5 + 4 * v11);
        v36 = ((double ( *)(int, int, int, unsigned long))this[21])(v10, v14, a3, *(unsigned long *)(this[10] + 4 * v14));
        v42 = ((double ( *)(int, int, unsigned long, int))this[21])(v10, v41, *(unsigned long *)(this[10] + 4 * v10), a3);
        sub_42F910(a4, v17, v42, v36);
      }
      v16 = v43;
LABEL_12:
      v18 = a3;
      if ( v30 > 0 )
      {
        v31 = *(unsigned long *)(this[10] + 4 * (v10 - 1));
        if ( v31 == a3 )
        {
          v19 = *(unsigned long *)(a5 + 4 * v16);
          v32 = ((double ( *)(int, int, int, int))this[21])(v10, v10 - 1, a3, v31);
          v37 = ((double ( *)(int, int, unsigned long, int))this[21])(v10, v10 - 1, *(unsigned long *)(this[10] + 4 * v10), a3);
          sub_42F910(a4, v19, v37, v32);
          v18 = a3;
        }
      }
      if ( v39 > 0 )
      {
        v20 = v10 - this[1];
        v33 = v20;
        if ( *(unsigned long *)(this[10] + 4 * v20) == v18 )
        {
          v21 = *(unsigned long *)(a5 + 4 * v43);
          v38 = ((double ( *)(int, int, int, int))this[21])(v10, v20, v18, v18);
          v34 = ((double ( *)(int, int, unsigned long, int))this[21])(v10, v33, *(unsigned long *)(this[10] + 4 * v10), a3);
          sub_42F910(a4, v21, v34, v38);
        }
      }
      result = --v43;
    }
    while ( v43 >= 0 );
  }
  return result;
}
void  sub_42F260( int a2, int a3, float *a4, int a5)
{
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  float v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int i; 

  v6 = a2 - 1;
  for ( i = a2 - 1; i >= 0; --i )
  {
    v7 = this[18];
    v8 = *(unsigned long *)(v7 + 4 * v6);
    v18 = v8;
    *(unsigned long *)(v7 + 4 * v8) = v6;
    v9 = this[16];
    v10 = 12 * v8;
    v17 = 12 * v8;
    if ( *(unsigned long *)(12 * v8 + v9) )
    {
      *(unsigned long *)(v10 + v9 + 8) = *(unsigned long *)(v10 + v9);
      *(unsigned char *)(v10 + v9 + 5) = 0;
      while ( sub_42FED0((unsigned long *)(v10 + this[16])) )
      {
        v11 = sub_42FEE0((unsigned char *)(v10 + this[16]));
        v12 = *(unsigned long *)v11;
        v13 = *(float *)(v11 + 4);
        v14 = this[10];
        if ( *(unsigned long *)(v14 + 4 * v12) == a3 )
        {
          sub_42F910(
            a4,
            *(unsigned long *)(a5 + 4 * i),
            *(float *)(this[13] + 4 * (*(unsigned long *)(this[10] + 4 * v8) + a3 * this[4])) * v13,
            *(float *)(this[13] + 4 * a3 * (this[4] + 1)) * v13);
        }
        else if ( v8 < v12 )
        {
          v15 = this[13];
          v16 = *(unsigned long *)(v14 + 4 * v12) * this[4];
          sub_42DCC0(
            a4,
            *(unsigned long **)(a5 + 4 * i),
            *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v12)),
            *(float *)(v15 + 4 * a3 * (this[4] + 1)) * v13,
            *(float *)(v15 + 4 * (v16 + a3)) * v13,
            *(float *)(v15 + 4 * (*(unsigned long *)(v14 + 4 * v18) + a3 * this[4])) * v13,
            *(float *)(v15 + 4 * (*(unsigned long *)(v14 + 4 * v18) + v16)) * v13);
          v10 = v17;
          v8 = v18;
        }
      }
    }
    v6 = i - 1;
  }
}
void  sub_42F3F0( int a2, int a3, float *a4, int a5)
{
  bool v5; 
  int v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int *v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  float v22; 
  float v23; 
  int v24; 
  int v25; 

  v6 = a2 - 1;
  v5 = a2 - 1 < 0;
  v25 = a2 - 1;
  if ( !v5 )
  {
    do
    {
      v8 = this[18];
      v9 = *(unsigned long *)(v8 + 4 * v6);
      v24 = v9;
      *(unsigned long *)(v8 + 4 * v9) = v6;
      v10 = this[16];
      v11 = 12 * v9;
      v21 = 12 * v9;
      if ( *(unsigned long *)(12 * v9 + v10) )
      {
        *(unsigned long *)(v11 + v10 + 8) = *(unsigned long *)(v11 + v10);
        *(unsigned char *)(v11 + v10 + 5) = 0;
        if ( sub_42FED0((unsigned long *)(v11 + this[16])) )
        {
          do
          {
            v12 = (int *)sub_42FEE0((unsigned char *)(v11 + this[16]));
            v13 = this[10];
            v14 = *v12;
            v15 = *(unsigned long *)(v13 + 4 * *v12);
            if ( v15 == a3 )
            {
              v16 = *(unsigned long *)(a5 + 4 * v25);
              v23 = ((double ( *)(int, int, int, int))this[21])(v24, v14, a3, v15);
              v22 = ((double ( *)(int, int, unsigned long, int))this[21])(v24, v14, *(unsigned long *)(this[10] + 4 * v24), a3);
              sub_42F910(a4, v16, v22, v23);
              v9 = v24;
            }
            else if ( v9 < v14 )
            {
              v20 = ((double ( *)(int, int, unsigned long))this[21])(v9, v14, *(unsigned long *)(v13 + 4 * v9));
              v19 = ((double ( *)(int, int, unsigned long))this[21])(v9, v14, *(unsigned long *)(this[10] + 4 * v9));
              v18 = ((double ( *)(int, int, int))this[21])(v9, v14, a3);
              v17 = ((double ( *)(int, int, int))this[21])(v9, v14, a3);
              sub_42DCC0(
                a4,
                *(unsigned long **)(a5 + 4 * v25),
                *(unsigned long *)(a5 + 4 * *(unsigned long *)(this[18] + 4 * v14)),
                v17,
                v18,
                v19,
                v20);
            }
            v11 = v21;
          }
          while ( sub_42FED0((unsigned long *)(v21 + this[16])) );
        }
      }
      v6 = --v25;
    }
    while ( v25 >= 0 );
  }
}
double  sub_42F560(unsigned long *a1)
{
  if ( *((unsigned char *)a1 + 20) )
  {
    if ( a1[8] )
    {
      if ( *((unsigned char *)a1 + 21) )
        return sub_42E1A0(a1);
      else
        return sub_42E0A0(a1);
    }
    else
    {
      return sub_42E2C0(a1);
    }
  }
  else if ( a1[8] )
  {
    return sub_42E380(a1);
  }
  else
  {
    return sub_42E420(a1);
  }
}
double  sub_42F590( int a2)
{
  int v3; 
  double v4; 
  float i; 
  int ( *v6)(); 
  float v7; 
  int v8; 
  int v9; 
  bool v10; 
  int v11; 
  int v12; 
  int j; 
  FILE *v15; 
  const char *v16; 
  int v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 

  v3 = 1;
  v17 = 1;
  v19 = ((double ( *)(unsigned long *))*(unsigned long *)(*this + 12))(this);
  v4 = ((double ( *)(unsigned long *))*(unsigned long *)(*this + 8))(this) + v19;
  for ( i = -1.0; ; i = v7 )
  {
    v6 = rand;
    v20 = v4;
    v7 = v20;
    if ( i >= 0.0 && (i <= v20 || v3 > a2) )
      break;
    if ( this[7] == 3 )
    {
      v16 = "You have to set up the data cost before running optimization";
LABEL_16:
      v15 = _iob_func();
      printf(v15 + 2, "\n %s \n", v16);
      exit(1);
    }
    if ( this[8] == 3 )
    {
      v16 = "You have to set up the smoothness cost before running optimization";
      goto LABEL_16;
    }
    if ( *((unsigned char *)this + 44) )
    {
      v21 = 2 * this[4];
      if ( v21 > 0 )
      {
        do
        {
          v8 = v6() % this[4];
          v9 = v6() % this[4];
          v10 = v21-- == 1;
          v11 = this[17];
          v12 = *(unsigned long *)(v11 + 4 * v8);
          *(unsigned long *)(v11 + 4 * v8) = *(unsigned long *)(v11 + 4 * v9);
          *(unsigned long *)(this[17] + 4 * v9) = v12;
          v6 = rand;
        }
        while ( !v10 );
        v3 = v17;
      }
    }
    for ( j = 0; j < this[4]; ++j )
      sub_42E560(this, *(unsigned long *)(this[17] + 4 * j));
    v18 = ((double ( *)(unsigned long *))*(unsigned long *)(*this + 12))(this);
    v4 = ((double ( *)(unsigned long *))*(unsigned long *)(*this + 8))(this) + v18;
    v17 = ++v3;
  }
  return v20;
}
unsigned long * sub_42F6D0( int a2)
{
  unsigned long *result; 

  this[4] = a2;
  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[5] = 0;
  return result;
}
void  sub_42F700()
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 

  if ( *(unsigned long *)this )
  {
    do
    {
      v2 = *(unsigned long *)(*(unsigned long *)this + 4);
      operator delete(*(void **)this);
      *(unsigned long *)this = v2;
    }
    while ( v2 );
  }
  if ( *(unsigned long *)(this + 4) )
  {
    do
    {
      v3 = *(unsigned long *)(this + 4);
      v4 = *(unsigned long *)(v3 + 8);
      operator delete(*(void **)v3);
      *(unsigned long *)(this + 4) = v4;
    }
    while ( v4 );
  }
  if ( *(unsigned long *)(this + 8) )
  {
    do
    {
      v5 = *(unsigned long *)(this + 8);
      v6 = *(unsigned long *)(v5 + 8);
      operator delete(*(void **)v5);
      *(unsigned long *)(this + 8) = v6;
    }
    while ( v6 );
  }
}
unsigned long * sub_42F770( unsigned long *a2, int a3, int a4, int a5)
{
  int v6; 
  char *v7; 
  void ( *v8)(const char *); 
  int v9; 
  char *v10; 
  void ( *v11)(const char *); 
  int v12; 
  unsigned long *v13; 
  int v14; 
  unsigned long *v15; 
  unsigned long *result; 

  v6 = this[1];
  if ( !v6 || *(unsigned long *)(v6 + 4) + 12 > (unsigned int)(v6 + 12300) )
  {
    v7 = (char *)operator new(0x3019u);
    if ( !v7 )
    {
      v8 = (void ( *)(const char *))this[4];
      if ( v8 )
        v8("Not enough memory!");
      exit(1);
    }
    if ( ((unsigned char)v7 & 1) != 0 )
      this[1] = v7 + 1;
    else
      this[1] = v7;
    *(unsigned long *)this[1] = v7;
    *(unsigned long *)(this[1] + 4) = this[1] + 12;
    *(unsigned long *)(this[1] + 8) = v6;
  }
  v9 = this[2];
  if ( !v9 || *(unsigned long *)(v9 + 4) + 4 > (unsigned int)(v9 + 4108) )
  {
    v10 = (char *)operator new(0x1011u);
    if ( !v10 )
    {
      v11 = (void ( *)(const char *))this[4];
      if ( v11 )
        v11("Not enough memory!");
      exit(1);
    }
    if ( ((unsigned char)v10 & 1) != 0 )
      this[2] = v10 + 1;
    else
      this[2] = v10;
    *(unsigned long *)this[2] = v10;
    *(unsigned long *)(this[2] + 4) = this[2] + 12;
    *(unsigned long *)(this[2] + 8) = v9;
  }
  v12 = this[1];
  v13 = *(unsigned long **)(v12 + 4);
  *(unsigned long *)(v12 + 4) = v13 + 3;
  v14 = this[2];
  v15 = *(unsigned long **)(v14 + 4);
  *(unsigned long *)(v14 + 4) = v15 + 1;
  result = a2;
  *v15 = a2;
  v13[1] = a4;
  *v13 = a3;
  v13[2] = a5;
  ++*a2;
  ++*(unsigned long *)(a3 + 4);
  return result;
}
unsigned long * sub_42F890()
{
  unsigned long *v2; 
  unsigned long *v3; 
  void ( *v4)(const char *); 
  unsigned long *result; 

  v2 = *this;
  if ( !*this || *v2 + 32 > (unsigned int)(v2 + 4090) )
  {
    v3 = operator new(0x4008u);
    *this = v3;
    if ( !v3 )
    {
      v4 = (void ( *)(const char *))this[4];
      if ( v4 )
        v4("Not enough memory!");
      exit(1);
    }
    *v3 = v3 + 2;
    (*this)[1] = v2;
  }
  result = (unsigned long *)**this;
  **this = result + 8;
  *result = 0;
  result[1] = 0;
  result[7] = 0;
  return result;
}
int  sub_42F910( int a2, float a3, float a4)
{
  int result; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  result = a2;
  v5 = a4;
  v6 = *(float *)(a2 + 28);
  if ( v6 <= 0.0 )
  {
    v5 = a4 - v6;
    v7 = a3;
  }
  else
  {
    v7 = v6 + a3;
  }
  if ( v5 <= v7 )
    v8 = v5;
  else
    v8 = v7;
  this[5] = this[5] + v8;
  *(float *)(a2 + 28) = v7 - v5;
  return result;
}
unsigned long * sub_42F970()
{
  unsigned long *v2; 
  unsigned long *v3; 
  int v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  unsigned long *v7; 
  unsigned long *v8; 
  int v9; 
  unsigned long *result; 
  unsigned long *v11; 
  int *v12; 
  int v13; 
  unsigned long *v14; 
  unsigned long *v15; 
  char *v16; 
  int *v17; 
  unsigned long *v18; 
  int v19; 
  char *v20; 
  unsigned long *v21; 
  int v22; 
  int i; 
  int *v24; 
  int *v25; 
  int **v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int *v33; 
  int k; 
  unsigned long **v35; 
  unsigned long *v36; 
  unsigned long *m; 
  unsigned long *v38; 
  unsigned long *n; 
  unsigned long *v40; 
  unsigned int v41; 
  void ( *v42)(const char *); 
  void ( *v43)(const char *); 
  void ( *v44)(const char *); 
  void ( *v45)(const char *); 
  int v46; 
  int ii; 
  int v48; 
  unsigned long *v49; 
  unsigned long *v50; 
  int *v51; 
  unsigned long *v52; 
  unsigned long *v53; 
  unsigned long *v54; 
  unsigned long *v55; 
  int *j; 
  int v57; 
  int v58; 
  unsigned long *v59; 
  int v60; 
  int v61; 
  int v62; 
  int *v63; 
  char v65; 
  char v66; 
  int v67; 

  v65 = 0;
  v66 = 0;
  if ( !*(unsigned long *)(this + 8) )
  {
    v2 = sub_42F890((unsigned long **)this);
    v3 = sub_42F890((unsigned long **)this);
    sub_42F770((unsigned long *)this, v2, (int)v3, 1065353216, 0);
  }
  v4 = *(unsigned long *)(this + 8);
  v67 = 0;
  v5 = *(unsigned long **)(v4 + 4);
  if ( (unsigned int)v5 < v4 + 4108 )
  {
    do
      *v5++ = 0;
    while ( (unsigned int)v5 < *(unsigned long *)(this + 8) + 4108 );
  }
  v6 = *(unsigned long **)(this + 4);
  v7 = v6;
  v8 = *(unsigned long **)(this + 8);
  v53 = v8;
  v50 = v8;
  v9 = (int)(v8 + 3);
  v52 = v6;
  v59 = v6 + 3;
  result = (unsigned long *)this;
  v51 = v8 + 3;
  v54 = v8 + 3;
  v11 = *(unsigned long **)this;
  v55 = *(unsigned long **)this;
  if ( *(unsigned long *)this )
  {
    result = v6 + 3;
    do
    {
      v12 = v11 + 2;
      if ( (unsigned int)(v11 + 2) < *v11 )
      {
        do
        {
          v13 = *v12;
          v57 = *v12;
          v61 = 3 * *v12;
          if ( &result[v61] <= v7 + 3075 )
          {
            v15 = v59;
          }
          else
          {
            if ( v13 > 1024 )
            {
              v43 = *(void ( **)(const char *))(this + 16);
              if ( v43 )
                v43("# of arcs per node exceeds block size!");
              exit(1);
            }
            if ( v65 || (v7 = (unsigned long *)v7[2], v14 = (unsigned long *)v53[2], v53 = v14, !v7) )
            {
              v60 = *(unsigned long *)(this + 4);
              v16 = (char *)operator new(0x3019u);
              if ( !v16 )
              {
                v42 = *(void ( **)(const char *))(this + 16);
                if ( v42 )
                  v42("Not enough memory!");
                exit(1);
              }
              if ( ((unsigned char)v16 & 1) != 0 )
                *(unsigned long *)(this + 4) = v16 + 1;
              else
                *(unsigned long *)(this + 4) = v16;
              v65 = 1;
              **(unsigned long **)(this + 4) = v16;
              v13 = v57;
              *(unsigned long *)(*(unsigned long *)(this + 4) + 4) = *(unsigned long *)(this + 4) + 12;
              *(unsigned long *)(*(unsigned long *)(this + 4) + 8) = v60;
              v7 = *(unsigned long **)(this + 4);
              v15 = v7 + 3;
            }
            else
            {
              v51 = v14 + 3;
              v15 = v7 + 3;
            }
          }
          if ( v53 )
          {
            v17 = &v51[v13];
            v51 = v17;
          }
          else
          {
            v17 = &v67;
          }
          v18 = &v15[v61];
          v12[2] = (int)v17;
          *v12 = (int)v18;
          v7[3075] = v12;
          v19 = v12[1];
          v59 = v18;
          v58 = v19;
          if ( &v54[v19] <= v8 + 1027 )
          {
            v21 = v54;
          }
          else
          {
            if ( v19 > 1024 )
            {
              v45 = *(void ( **)(const char *))(this + 16);
              if ( v45 )
                v45("# of arcs per node exceeds block size!");
              exit(1);
            }
            if ( v66 || (v8 = (unsigned long *)v8[2]) == 0 )
            {
              v62 = *(unsigned long *)(this + 8);
              v20 = (char *)operator new(0x1011u);
              if ( !v20 )
              {
                v44 = *(void ( **)(const char *))(this + 16);
                if ( v44 )
                  v44("Not enough memory!");
                exit(1);
              }
              if ( ((unsigned char)v20 & 1) != 0 )
                *(unsigned long *)(this + 8) = v20 + 1;
              else
                *(unsigned long *)(this + 8) = v20;
              v66 = 1;
              **(unsigned long **)(this + 8) = v20;
              *(unsigned long *)(*(unsigned long *)(this + 8) + 4) = *(unsigned long *)(this + 8) + 12;
              *(unsigned long *)(*(unsigned long *)(this + 8) + 8) = v62;
              v8 = *(unsigned long **)(this + 8);
            }
            v21 = v8 + 3;
          }
          v9 = (int)&v21[v58];
          v11 = v55;
          result = v59;
          v12[1] = v9;
          v8[1027] = v12;
          v12 += 8;
          v54 = (unsigned long *)v9;
        }
        while ( (unsigned int)v12 < *v55 );
      }
      *v12 = (int)result;
      v12[1] = v9;
      v11 = (unsigned long *)v11[1];
      v55 = v11;
    }
    while ( v11 );
    v6 = v52;
  }
  v22 = this;
  for ( i = *(unsigned long *)(this + 4); i; i = *(unsigned long *)(i + 8) )
  {
    result = **(unsigned long ***)(i + 12300);
    *(unsigned long *)(i + 4) = result;
  }
  if ( v6 )
  {
    result = v50;
    do
    {
      v24 = result + 3;
      v25 = v6 + 3;
      v63 = result + 3;
      for ( j = v6 + 3; v25 < v6 + 3075; v63 = v24 )
      {
        v26 = (int **)*v24;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        if ( *v24 )
        {
          do
          {
            *v24 = 0;
            v30 = v25[1];
            v31 = *v25 - (unsigned long)v26;
            v32 = v25[2];
            if ( v27 )
            {
              *v25 = v27;
              v25[1] = v28;
              v25[2] = v29;
            }
            *v26 -= 3;
            v27 = v31;
            v33 = v26[2];
            v25 = *v26;
            v28 = v30;
            v29 = v32;
            if ( v33 != &v67 )
            {
              v24 = v33 - 1;
              v26[2] = v33 - 1;
            }
            v26 = (int **)*v24;
          }
          while ( *v24 );
          v24 = v63;
          v6 = v52;
          *v25 = v31;
          v25[1] = v30;
          v25[2] = v32;
          v25 = j;
        }
        v25 += 3;
        ++v24;
        j = v25;
      }
      v6 = (unsigned long *)v6[2];
      v52 = v6;
      result = (unsigned long *)v50[2];
      v50 = result;
    }
    while ( v6 );
    v22 = this;
  }
  for ( k = *(unsigned long *)(v22 + 4); k; k = *(unsigned long *)(k + 8) )
  {
    v35 = *(unsigned long ***)(k + 12300);
    v36 = *v35;
    **(unsigned long **)(k + 4) = **v35;
    *(unsigned long *)(*(unsigned long *)(k + 4) + 4) = v36[1];
    *(unsigned long *)(*(unsigned long *)(k + 4) + 8) = v36[2];
    *v36 = *(unsigned long *)(k + 4) + 12;
    result = (unsigned long *)((char *)v36 - 1);
    *v35 = (unsigned long *)((char *)v36 - 1);
  }
  for ( m = *(unsigned long **)(v22 + 8); m; m = (unsigned long *)m[2] )
  {
    result = *(unsigned long **)(m[1027] + 4);
    m[1] = result;
  }
  v38 = *(unsigned long **)v22;
  if ( *(unsigned long *)v22 )
  {
    do
    {
      for ( n = v38 + 2; (unsigned int)n < *v38; n += 8 )
      {
        v40 = (unsigned long *)*n;
        if ( (*n & 1) != 0 )
        {
          v41 = *(unsigned long *)((char *)v40 + 1);
          v40 = (unsigned long *)((char *)v40 + 13);
        }
        else
        {
          v41 = n[8];
        }
        for ( ; (unsigned int)v40 < v41; v40 += 3 )
        {
          v46 = *v40;
          *(unsigned long *)((char *)n + v46 + 4) -= 4;
          result = *(unsigned long **)((char *)n + v46 + 4);
          *result = v40;
        }
      }
      v38 = (unsigned long *)v38[1];
    }
    while ( v38 );
  }
  for ( ii = *(unsigned long *)(v22 + 8); ii; ii = *(unsigned long *)(ii + 8) )
  {
    v48 = *(unsigned long *)(ii + 4108);
    v49 = *(unsigned long **)(v48 + 4);
    **(unsigned long **)(ii + 4) = *v49;
    *v49 = *(unsigned long *)(ii + 4) + 4;
    result = (unsigned long *)((char *)v49 - 1);
    *(unsigned long *)(v48 + 4) = (char *)v49 - 1;
  }
  return result;
}
void  sub_42FE20()
{
  unsigned char *v1; 
  char i; 
  void **v3; 
  int v4; 
  int v5; 
  void **v7; 

  v1 = this;
  for ( i = 1; *(unsigned long *)v1; i = 0 )
  {
    v3 = *(void ***)v1;
    v7 = *(void ***)v1;
    if ( i == 1 )
      v4 = v1[4];
    else
      v4 = 4;
    v5 = 0;
    if ( v4 > 0 )
    {
      do
        operator delete(v7[v5++]);
      while ( v5 < v4 );
      v1 = this;
      v3 = v7;
    }
    *(unsigned long *)v1 = *(unsigned long *)(*(unsigned long *)v1 + 16);
    operator delete(v3);
  }
}
int  sub_42FE90(unsigned int a2)
{
  unsigned long *v3; 
  int result; 

  if ( this[4] == 4 )
  {
    v3 = operator new(0x14u);
    v3[4] = *(unsigned long *)this;
    *(unsigned long *)this = v3;
    this[4] = 0;
  }
  result = a2;
  *(unsigned long *)(*(unsigned long *)this + 4 * (unsigned char)this[4]++) = a2;
  return result;
}
bool  sub_42FED0()
{
  return this[2] != 0;
}
int  sub_42FEE0(unsigned )
{
  unsigned char v2; 
  int v3; 
  int v4; 
  unsigned char v5; 
  int v6; 
  int result; 

  v2 = this[5];
  v3 = *((unsigned long *)this + 2);
  v4 = v2;
  v5 = v2 + 1;
  v6 = *(unsigned long *)(v3 + 4 * v4);
  this[5] = v5;
  if ( v3 == *(unsigned long *)this && v5 >= this[4] )
  {
    result = v6;
    *((unsigned long *)this + 2) = *(unsigned long *)(v3 + 16);
    this[5] = 0;
  }
  else
  {
    if ( v5 == 4 )
    {
      *((unsigned long *)this + 2) = *(unsigned long *)(v3 + 16);
      this[5] = 0;
    }
    return v6;
  }
  return result;
}
unsigned long * sub_42FF30()
{
  int v2; 
  char *v3; 
  void ( *v4)(const char *); 
  unsigned long *v5; 
  int v6; 
  unsigned long *result; 

  if ( !this[2] )
  {
    v2 = this[1];
    v3 = (char *)operator new(8 * *this + 4);
    this[1] = v3;
    if ( !v3 )
    {
      v4 = (void ( *)(const char *))this[3];
      if ( v4 )
        v4("Not enough memory!");
      exit(1);
    }
    v5 = v3 + 4;
    v6 = *this - 1;
    this[2] = v5;
    if ( v5 < &v5[2 * v6] )
    {
      do
      {
        *v5 = v5 + 2;
        v5 += 2;
      }
      while ( (unsigned int)v5 < this[2] + 8 * *this - 8 );
    }
    *v5 = 0;
    *(unsigned long *)this[1] = v2;
  }
  result = (unsigned long *)this[2];
  this[2] = *result;
  return result;
}
unsigned int  sub_42FFB0(int a1, char a2, int a3, int a4, float *a5, float *a6)
{
  int v7; 
  float v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  float v18; 
  unsigned long *v19; 
  float v20; 
  unsigned long *v21; 
  float v22; 
  unsigned long *v23; 
  unsigned int result; 
  float v25; 
  unsigned long *v26; 
  float v27; 
  unsigned long *v28; 
  float v29; 
  bool v30; 
  bool v31; 
  char v32; 
  char v33; 
  char v34; 
  float v35; 
  unsigned long *i; 
  unsigned int v37; 
  unsigned long *v38; 
  unsigned int v39; 

  v7 = a3;
  v8 = *a5;
  v9 = a3;
  v35 = *a5;
  v10 = *(unsigned long *)(a3 + 8);
  if ( v10 != 1 )
  {
    do
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFE;
        if ( v8 > *(float *)(v11 + 4) )
          v8 = *(float *)(v11 + 4);
        v9 -= *(unsigned long *)v11;
      }
      else
      {
        if ( v8 > *(float *)(v10 + 8) )
          v8 = *(float *)(v10 + 8);
        v9 += *(unsigned long *)v10;
      }
      v10 = *(unsigned long *)(v9 + 8);
    }
    while ( v10 != 1 );
    v35 = v8;
  }
  if ( v8 > *(float *)(v9 + 28) )
  {
    v8 = *(float *)(v9 + 28);
    v35 = v8;
  }
  v12 = a4;
  v13 = a4;
  v14 = *(unsigned long *)(a4 + 8);
  if ( v14 != 1 )
  {
    do
    {
      if ( (v14 & 1) != 0 )
      {
        v15 = v14 & 0xFFFFFFFE;
        if ( v8 > *(float *)(v15 + 8) )
          v8 = *(float *)(v15 + 8);
        v13 -= *(unsigned long *)v15;
      }
      else
      {
        if ( v8 > *(float *)(v14 + 4) )
          v8 = *(float *)(v14 + 4);
        v13 += *(unsigned long *)v14;
      }
      v14 = *(unsigned long *)(v13 + 8);
    }
    while ( v14 != 1 );
    v35 = v8;
  }
  if ( v8 > (float)-*(float *)(v13 + 28) )
  {
    v8 = -*(float *)(v13 + 28);
    v35 = v8;
  }
  *a6 = *a6 + v8;
  *a5 = *a5 - v8;
  v16 = *(unsigned long *)(a3 + 8);
  v38 = (unsigned long *)v16;
  if ( v16 != 1 )
  {
    v17 = a3;
    do
    {
      if ( (v16 & 1) != 0 )
      {
        v39 = v16 & 0xFFFFFFFE;
        *(float *)(v39 + 8) = v8 + *(float *)(v39 + 8);
        v18 = *(float *)((v16 & 0xFFFFFFFE) + 4) - v8;
        *(float *)(v39 + 4) = v18;
        if ( v18 == 0.0 )
        {
          *(unsigned long *)(v17 + 8) = 2;
          v19 = sub_42FF30(*(unsigned long **)(a1 + 12));
          v8 = v35;
          *v19 = v17;
          v19[1] = *(unsigned long *)(a1 + 40);
          *(unsigned long *)(a1 + 40) = v19;
        }
        v17 -= *(unsigned long *)v39;
      }
      else
      {
        *(float *)(v16 + 4) = *(float *)(v16 + 4) + v8;
        v20 = *(float *)(v16 + 8) - v8;
        *(float *)(v16 + 8) = v20;
        if ( v20 == 0.0 )
        {
          *(unsigned long *)(v17 + 8) = 2;
          v21 = sub_42FF30(*(unsigned long **)(a1 + 12));
          v8 = v35;
          *v21 = v17;
          v21[1] = *(unsigned long *)(a1 + 40);
          *(unsigned long *)(a1 + 40) = v21;
        }
        v17 += *v38;
      }
      v16 = *(unsigned long *)(v17 + 8);
      v38 = (unsigned long *)v16;
    }
    while ( v16 != 1 );
    a3 = v17;
    v12 = a4;
    v7 = a3;
  }
  v22 = *(float *)(v7 + 28) - v8;
  *(float *)(v7 + 28) = v22;
  if ( v22 == 0.0 )
  {
    *(unsigned long *)(v7 + 8) = 2;
    v23 = sub_42FF30(*(unsigned long **)(a1 + 12));
    v8 = v35;
    *v23 = a3;
    v23[1] = *(unsigned long *)(a1 + 40);
    *(unsigned long *)(a1 + 40) = v23;
  }
  result = *(unsigned long *)(v12 + 8);
  for ( i = (unsigned long *)result; result != 1; i = (unsigned long *)result )
  {
    if ( (result & 1) != 0 )
    {
      v37 = result & 0xFFFFFFFE;
      *(float *)(v37 + 4) = *(float *)(v37 + 4) + v8;
      v25 = *(float *)((result & 0xFFFFFFFE) + 8) - v8;
      *(float *)(v37 + 8) = v25;
      if ( v25 == 0.0 )
      {
        *(unsigned long *)(v12 + 8) = 2;
        v26 = sub_42FF30(*(unsigned long **)(a1 + 12));
        v8 = v35;
        *v26 = v12;
        v26[1] = *(unsigned long *)(a1 + 40);
        *(unsigned long *)(a1 + 40) = v26;
      }
      v12 -= *(unsigned long *)v37;
    }
    else
    {
      *(float *)(result + 8) = v8 + *(float *)(result + 8);
      v27 = *(float *)(result + 4) - v8;
      *(float *)(result + 4) = v27;
      if ( v27 == 0.0 )
      {
        *(unsigned long *)(v12 + 8) = 2;
        v28 = sub_42FF30(*(unsigned long **)(a1 + 12));
        v8 = v35;
        *v28 = v12;
        v28[1] = *(unsigned long *)(a1 + 40);
        *(unsigned long *)(a1 + 40) = v28;
      }
      v12 += *i;
    }
    result = *(unsigned long *)(v12 + 8);
  }
  v29 = *(float *)(v12 + 28) + v8;
  v30 = v29 < 0.0;
  v34 = 0;
  v31 = v29 == 0.0;
  v32 = 0;
  v33 = 0;
  *(float *)(v12 + 28) = v29;
  BYTE1(result) = a2;
  if ( v29 == 0.0 )
  {
    *(unsigned long *)(v12 + 8) = 2;
    result = (unsigned int)sub_42FF30(*(unsigned long **)(a1 + 12));
    v8 = v35;
    *(unsigned long *)result = v12;
    *(unsigned long *)(result + 4) = *(unsigned long *)(a1 + 40);
    *(unsigned long *)(a1 + 40) = result;
  }
  *(float *)(a1 + 20) = *(float *)(a1 + 20) + v8;
  return result;
}
double  sub_4302B0()
{
  int v1; 
  unsigned long *v3; 
  char v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  unsigned long *v12; 
  int v13; 
  float *v14; 
  float *v15; 
  int v16; 
  char v17; 
  bool v18; 
  bool v19; 
  char v20; 
  bool v21; 
  int i; 
  unsigned long *v23; 
  int *v24; 
  int v25; 
  int v26; 
  char v27; 
  bool v28; 
  bool v29; 
  char v30; 
  bool v31; 
  int v32; 
  int v33; 
  unsigned long *v34; 
  int v35; 
  int v36; 
  unsigned long *v37; 
  int v38; 
  int *v40; 
  unsigned int v41; 
  int v42; 
  int v43; 
  float *v44; 
  unsigned int v45; 
  float *v46; 
  int v47; 

  v1 = 0;
  v47 = 0;
  v44 = 0;
  v46 = 0;
  sub_42F970(this);
  sub_430740((unsigned long *)this);
  v3 = operator new(0x10u);
  if ( v3 )
  {
    *(unsigned long long *)v3 = 0i64;
    v5 = *(unsigned long *)(this + 16);
    v3[1] = 0;
    v3[2] = 0;
    *v3 = 128;
    v3[3] = v5;
  }
  else
  {
    v3 = 0;
  }
  *(unsigned long *)(this + 12) = v3;
  while ( 1 )
  {
    if ( !v1 || (v18 = *(unsigned long *)(v1 + 8) == 0, *(unsigned long *)(v1 + 12) = 0, v18) )
    {
      v1 = sub_4307F0((unsigned long *)this);
      if ( !v1 )
        break;
    }
    v6 = *(unsigned long *)v1;
    v43 = 0;
    if ( (*(unsigned long *)v1 & 1) != 0 )
    {
      v7 = *(unsigned long *)(v6 + 1);
      v6 += 13;
    }
    else
    {
      v7 = *(unsigned long *)(v1 + 32);
    }
    v8 = *(unsigned long *)(v1 + 4);
    v45 = v8;
    if ( (v8 & 1) != 0 )
    {
      v9 = *(unsigned long *)(v8 + 1);
      v8 += 5;
      v45 = v8;
    }
    else
    {
      v9 = *(unsigned long *)(v1 + 36);
    }
    v41 = v9;
    if ( *(_WORD *)(v1 + 24) )
    {
      if ( v6 >= v7 )
        goto LABEL_67;
      do
      {
        if ( *(float *)(v6 + 8) != 0.0 )
        {
          v32 = v1 + *(unsigned long *)v6;
          if ( *(unsigned long *)(v32 + 8) )
          {
            if ( !*(_WORD *)(v32 + 24) )
            {
              v43 = v1 + *(unsigned long *)v6;
              v10 = v1;
              v44 = (float *)(v6 + 8);
              v8 = v45;
              v15 = (float *)(v6 + 4);
              v47 = v1;
              v46 = v15;
              goto LABEL_68;
            }
            if ( *(unsigned long *)(v32 + 16) <= *(unsigned long *)(v1 + 16) && *(unsigned long *)(v32 + 20) > *(unsigned long *)(v1 + 20) )
            {
              *(unsigned long *)(v32 + 8) = v6 | 1;
              *(unsigned long *)(v32 + 16) = *(unsigned long *)(v1 + 16);
              *(unsigned long *)(v32 + 20) = *(unsigned long *)(v1 + 20) + 1;
            }
          }
          else
          {
            *(_WORD *)(v32 + 24) = 1;
            *(unsigned long *)(v32 + 8) = v6 | 1;
            *(unsigned long *)(v32 + 16) = *(unsigned long *)(v1 + 16);
            v18 = *(unsigned long *)(v32 + 12) == 0;
            *(unsigned long *)(v32 + 20) = *(unsigned long *)(v1 + 20) + 1;
            if ( v18 )
            {
              v33 = *(unsigned long *)(this + 36);
              if ( v33 )
                *(unsigned long *)(v33 + 12) = v32;
              else
                *(unsigned long *)(this + 28) = v32;
              *(unsigned long *)(this + 36) = v32;
              *(unsigned long *)(v32 + 12) = v32;
            }
          }
        }
        v6 += 12;
      }
      while ( v6 < v7 );
      v8 = v45;
LABEL_67:
      v15 = v46;
      v10 = v47;
LABEL_68:
      if ( v8 < v41 )
      {
        do
        {
          v34 = *(unsigned long **)v8;
          if ( *(float *)(*(unsigned long *)v8 + 4) != 0.0 )
          {
            v35 = v1 - *v34;
            if ( *(unsigned long *)(v35 + 8) )
            {
              if ( !*(_WORD *)(v35 + 24) )
              {
                v14 = (float *)(v34 + 1);
                v16 = v1 - *v34;
                v10 = v1;
                v44 = (float *)(v34 + 1);
                v15 = (float *)(v34 + 2);
                v47 = v1;
                v46 = v15;
                goto LABEL_45;
              }
              if ( *(unsigned long *)(v35 + 16) <= *(unsigned long *)(v1 + 16) && *(unsigned long *)(v35 + 20) > *(unsigned long *)(v1 + 20) )
              {
                *(unsigned long *)(v35 + 8) = v34;
                *(unsigned long *)(v35 + 16) = *(unsigned long *)(v1 + 16);
                *(unsigned long *)(v35 + 20) = *(unsigned long *)(v1 + 20) + 1;
              }
            }
            else
            {
              *(unsigned long *)(v35 + 8) = v34;
              *(_WORD *)(v35 + 24) = 1;
              *(unsigned long *)(v35 + 16) = *(unsigned long *)(v1 + 16);
              v18 = *(unsigned long *)(v35 + 12) == 0;
              *(unsigned long *)(v35 + 20) = *(unsigned long *)(v1 + 20) + 1;
              if ( v18 )
              {
                v36 = *(unsigned long *)(this + 36);
                if ( v36 )
                  *(unsigned long *)(v36 + 12) = v35;
                else
                  *(unsigned long *)(this + 28) = v35;
                *(unsigned long *)(this + 36) = v35;
                *(unsigned long *)(v35 + 12) = v35;
              }
            }
          }
          v8 = v45 + 4;
          v45 = v8;
        }
        while ( v8 < v41 );
        goto LABEL_43;
      }
LABEL_44:
      v14 = v44;
      v16 = v43;
      goto LABEL_45;
    }
    if ( v6 >= v7 )
    {
LABEL_29:
      while ( v8 < v41 )
      {
        v12 = *(unsigned long **)v8;
        if ( *(float *)(*(unsigned long *)v8 + 8) != 0.0 )
        {
          v10 = v1 - *v12;
          if ( *(unsigned long *)(v10 + 8) )
          {
            if ( *(_WORD *)(v10 + 24) )
            {
              v14 = (float *)(v12 + 2);
              v47 = v1 - *v12;
              v15 = (float *)(v12 + 1);
              v44 = v14;
              v16 = v1;
              v46 = v15;
              goto LABEL_45;
            }
            if ( *(unsigned long *)(v10 + 16) <= *(unsigned long *)(v1 + 16) && *(unsigned long *)(v10 + 20) > *(unsigned long *)(v1 + 20) )
            {
              *(unsigned long *)(v10 + 8) = v12;
              *(unsigned long *)(v10 + 16) = *(unsigned long *)(v1 + 16);
              *(unsigned long *)(v10 + 20) = *(unsigned long *)(v1 + 20) + 1;
            }
          }
          else
          {
            *(unsigned long *)(v10 + 8) = v12;
            *(_WORD *)(v10 + 24) = 0;
            *(unsigned long *)(v10 + 16) = *(unsigned long *)(v1 + 16);
            v18 = *(unsigned long *)(v10 + 12) == 0;
            *(unsigned long *)(v10 + 20) = *(unsigned long *)(v1 + 20) + 1;
            if ( v18 )
            {
              v13 = *(unsigned long *)(this + 36);
              if ( v13 )
                *(unsigned long *)(v13 + 12) = v10;
              else
                *(unsigned long *)(this + 28) = v10;
              *(unsigned long *)(this + 36) = v10;
              *(unsigned long *)(v10 + 12) = v10;
            }
          }
        }
        v8 = v45 + 4;
        v45 = v8;
      }
LABEL_43:
      v10 = v47;
      v15 = v46;
      goto LABEL_44;
    }
    while ( *(float *)(v6 + 4) == 0.0 )
    {
LABEL_27:
      v6 += 12;
      if ( v6 >= v7 )
      {
        v8 = v45;
        goto LABEL_29;
      }
    }
    v10 = v1 + *(unsigned long *)v6;
    if ( !*(unsigned long *)(v10 + 8) )
    {
      *(_WORD *)(v10 + 24) = 0;
      *(unsigned long *)(v10 + 8) = v6 | 1;
      *(unsigned long *)(v10 + 16) = *(unsigned long *)(v1 + 16);
      v18 = *(unsigned long *)(v10 + 12) == 0;
      *(unsigned long *)(v10 + 20) = *(unsigned long *)(v1 + 20) + 1;
      if ( v18 )
      {
        v11 = *(unsigned long *)(this + 36);
        if ( v11 )
          *(unsigned long *)(v11 + 12) = v10;
        else
          *(unsigned long *)(this + 28) = v10;
        *(unsigned long *)(this + 36) = v10;
        *(unsigned long *)(v10 + 12) = v10;
      }
      goto LABEL_27;
    }
    if ( !*(_WORD *)(v10 + 24) )
    {
      if ( *(unsigned long *)(v10 + 16) <= *(unsigned long *)(v1 + 16) && *(unsigned long *)(v10 + 20) > *(unsigned long *)(v1 + 20) )
      {
        *(unsigned long *)(v10 + 8) = v6 | 1;
        *(unsigned long *)(v10 + 16) = *(unsigned long *)(v1 + 16);
        *(unsigned long *)(v10 + 20) = *(unsigned long *)(v1 + 20) + 1;
      }
      goto LABEL_27;
    }
    v14 = (float *)(v6 + 4);
    v47 = v1 + *(unsigned long *)v6;
    v15 = (float *)(v6 + 8);
    v44 = v14;
    v16 = v1;
    v46 = v15;
LABEL_45:
    ++*(unsigned long *)(this + 48);
    v17 = 0;
    v20 = 0;
    v18 = v16 == 0;
    v21 = __SETP__(v16, 0);
    v19 = v16 < 0;
    if ( v16 )
    {
      *(unsigned long *)(v1 + 12) = v1;
      sub_42FFB0(this, v4, v16, v10, v14, v15);
      for ( i = *(unsigned long *)(this + 40); i; *(unsigned long *)(this + 40) = i )
      {
        v23 = (unsigned long *)(i + 4);
        i = *(unsigned long *)(i + 4);
        *v23 = 0;
        v24 = *(int **)(this + 40);
        v42 = i;
        if ( v24 )
        {
          do
          {
            v25 = *(unsigned long *)(this + 12);
            *(unsigned long *)(this + 40) = v24[1];
            v26 = *v24;
            *v24 = *(unsigned long *)(v25 + 8);
            *(unsigned long *)(v25 + 8) = v24;
            if ( !*(unsigned long *)(this + 40) )
              *(unsigned long *)(this + 44) = 0;
            v27 = 0;
            v30 = 0;
            v28 = *(_WORD *)(v26 + 24) == 0;
            v31 = __SETP__(*(_WORD *)(v26 + 24), 0);
            v29 = *(__int16 *)(v26 + 24) < 0;
            if ( *(_WORD *)(v26 + 24) )
              sub_430850(this, v4, (unsigned long *)v26);
            else
              sub_430BD0(this, v4, (unsigned long *)v26);
            v24 = *(int **)(this + 40);
          }
          while ( v24 );
          i = v42;
        }
      }
    }
    else
    {
      v1 = 0;
    }
  }
  v37 = *(unsigned long **)(this + 12);
  if ( v37 )
  {
    if ( v37[1] )
    {
      do
      {
        v40 = (int *)v37[1];
        v38 = *v40;
        operator delete(v40);
        v37[1] = v38;
      }
      while ( v38 );
    }
    operator delete(v37);
  }
  return *(float *)(this + 20);
}
void  sub_430740()
{
  unsigned long *v1; 
  float *v2; 
  float v3; 
  int v4; 

  v1 = (unsigned long *)*this;
  this[8] = 0;
  this[6] = 0;
  this[9] = 0;
  this[7] = 0;
  this[10] = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v2 = (float *)(v1 + 2);
      if ( (unsigned int)(v1 + 2) < *v1 )
        break;
LABEL_13:
      v1 = (unsigned long *)v1[1];
      if ( !v1 )
        goto LABEL_14;
    }
    while ( 1 )
    {
      v3 = v2[7];
      v2[3] = 0.0;
      v2[4] = 0.0;
      if ( v3 > 0.0 )
        break;
      if ( v3 < 0.0 )
      {
        *((_WORD *)v2 + 12) = 1;
        goto LABEL_7;
      }
      v2[2] = 0.0;
LABEL_12:
      v2 += 8;
      if ( (unsigned int)v2 >= *v1 )
        goto LABEL_13;
    }
    *((_WORD *)v2 + 12) = 0;
LABEL_7:
    *((unsigned long *)v2 + 2) = 1;
    v4 = this[9];
    if ( v4 )
      *(unsigned long *)(v4 + 12) = v2;
    else
      this[7] = v2;
    this[9] = v2;
    *((unsigned long *)v2 + 3) = v2;
    v2[4] = 0.0;
    *((unsigned long *)v2 + 5) = 1;
    goto LABEL_12;
  }
LABEL_14:
  this[12] = 0;
}
int  sub_4307F0()
{
  int result; 
  int v3; 
  int v4; 
  bool v5; 

  while ( 1 )
  {
    result = this[6];
    if ( !result )
    {
      result = this[7];
      v3 = this[9];
      this[6] = result;
      this[8] = v3;
      this[7] = 0;
      this[9] = 0;
      if ( !result )
        break;
    }
    v4 = *(unsigned long *)(result + 12);
    if ( v4 == result )
    {
      this[8] = 0;
      this[6] = 0;
    }
    else
    {
      this[6] = v4;
    }
    v5 = *(unsigned long *)(result + 8) == 0;
    *(unsigned long *)(result + 12) = 0;
    if ( !v5 )
      return result;
  }
  return 0;
}
float * sub_430850(int a1, char a2, unsigned long *a3)
{
  unsigned long *v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned long *v8; 
  unsigned int v9; 
  unsigned int v10; 
  char *v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  unsigned long *v15; 
  unsigned int v16; 
  float *result; 
  unsigned int v18; 
  char *v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  unsigned long *v23; 
  unsigned int v24; 
  float *v25; 
  unsigned int v26; 
  char *v27; 
  int v28; 
  float v29; 
  bool v30; 
  bool v31; 
  char v32; 
  char v33; 
  char v34; 
  int v35; 
  float **v36; 
  char *v37; 
  unsigned long *v38; 
  float v39; 
  int v40; 
  unsigned int v41; 
  float *v42; 
  unsigned long **v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 

  v47 = 1000000000;
  v4 = a3;
  v5 = 0;
  v44 = 0;
  v6 = *a3;
  v41 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    v7 = *(unsigned long *)(v6 + 1);
    v6 += 13;
    v46 = v7;
    v41 = v6;
  }
  else
  {
    v46 = a3[8];
  }
  v8 = (unsigned long *)a3[1];
  v43 = (unsigned long **)v8;
  if ( ((unsigned char)v8 & 1) != 0 )
  {
    v9 = *(unsigned long *)((char *)v8 + 1);
    v8 = (unsigned long *)((char *)v8 + 5);
    v43 = (unsigned long **)v8;
  }
  else
  {
    v9 = a3[9];
  }
  v45 = v9;
  v10 = v6;
  if ( v6 < v46 )
  {
    do
    {
      if ( *(float *)(v10 + 4) != 0.0 )
      {
        v11 = (char *)v4 + *(unsigned long *)v10;
        if ( *((_WORD *)v11 + 12) )
        {
          if ( *((unsigned long *)v11 + 2) )
          {
            v12 = *(unsigned long *)(a1 + 48);
            v13 = 0;
            if ( *((unsigned long *)v11 + 4) == v12 )
            {
LABEL_18:
              v13 += *((unsigned long *)v11 + 5);
            }
            else
            {
              while ( 1 )
              {
                v14 = *((unsigned long *)v11 + 2);
                ++v13;
                if ( v14 == 1 )
                  break;
                if ( v14 == 2 )
                  goto LABEL_28;
                if ( (v14 & 1) != 0 )
                  v11 -= *(unsigned long *)(v14 & 0xFFFFFFFE);
                else
                  v11 += *(unsigned long *)v14;
                if ( *((unsigned long *)v11 + 4) == v12 )
                  goto LABEL_18;
              }
              *((unsigned long *)v11 + 4) = v12;
              *((unsigned long *)v11 + 5) = 1;
            }
            if ( v13 < 1000000000 )
            {
              if ( v13 < v47 )
              {
                v44 = v10;
                v47 = v13;
              }
              v15 = (unsigned long *)((char *)a3 + *(unsigned long *)v10);
              while ( v15[4] != *(unsigned long *)(a1 + 48) )
              {
                v15[4] = *(unsigned long *)(a1 + 48);
                v16 = v15[2];
                v15[5] = v13--;
                if ( (v16 & 1) != 0 )
                  v15 = (unsigned long *)((char *)v15 - *(unsigned long *)(v16 & 0xFFFFFFFE));
                else
                  v15 = (unsigned long *)((char *)v15 + *(unsigned long *)v16);
              }
            }
LABEL_28:
            v4 = a3;
          }
        }
      }
      v10 += 12;
    }
    while ( v10 < v46 );
    v8 = v43;
    v5 = v44;
  }
  result = (float *)v8;
  v42 = (float *)v8;
  if ( (unsigned int)v8 < v45 )
  {
    do
    {
      v18 = *(unsigned long *)result;
      if ( *(float *)(*(unsigned long *)result + 8) != 0.0 )
      {
        v19 = (char *)v4 - *(unsigned long *)v18;
        if ( *((_WORD *)v19 + 12) )
        {
          if ( *((unsigned long *)v19 + 2) )
          {
            v20 = *(unsigned long *)(a1 + 48);
            v21 = 0;
            if ( *((unsigned long *)v19 + 4) == v20 )
            {
LABEL_42:
              v21 += *((unsigned long *)v19 + 5);
            }
            else
            {
              while ( 1 )
              {
                v22 = *((unsigned long *)v19 + 2);
                ++v21;
                if ( v22 == 1 )
                  break;
                if ( v22 == 2 )
                  goto LABEL_52;
                if ( (v22 & 1) != 0 )
                  v19 -= *(unsigned long *)(v22 & 0xFFFFFFFE);
                else
                  v19 += *(unsigned long *)v22;
                if ( *((unsigned long *)v19 + 4) == v20 )
                  goto LABEL_42;
              }
              *((unsigned long *)v19 + 4) = v20;
              *((unsigned long *)v19 + 5) = 1;
            }
            if ( v21 < 1000000000 )
            {
              if ( v21 < v47 )
              {
                v47 = v21;
                v44 = v18 | 1;
              }
              v23 = (unsigned long *)((char *)a3 - *(unsigned long *)v18);
              while ( v23[4] != *(unsigned long *)(a1 + 48) )
              {
                v23[4] = *(unsigned long *)(a1 + 48);
                v24 = v23[2];
                v23[5] = v21--;
                if ( (v24 & 1) != 0 )
                  v23 = (unsigned long *)((char *)v23 - *(unsigned long *)(v24 & 0xFFFFFFFE));
                else
                  v23 = (unsigned long *)((char *)v23 + *(unsigned long *)v24);
              }
            }
          }
        }
      }
LABEL_52:
      v4 = a3;
      result = v42 + 1;
      v42 = result;
    }
    while ( (unsigned int)result < v45 );
    v5 = v44;
  }
  v25 = (float *)a3;
  a3[2] = v5;
  if ( v5 )
  {
    a3[4] = *(unsigned long *)(a1 + 48);
    result = (float *)(v47 + 1);
    a3[5] = v47 + 1;
  }
  else
  {
    v26 = v41;
    for ( a3[4] = 0; v26 < v46; v26 += 12 )
    {
      v27 = (char *)v25 + *(unsigned long *)v26;
      if ( *((_WORD *)v27 + 12) )
      {
        v28 = *((unsigned long *)v27 + 2);
        if ( v28 )
        {
          v29 = *(float *)(v26 + 4);
          v30 = v29 < 0.0;
          v34 = 0;
          v31 = v29 == 0.0;
          v32 = 0;
          v33 = 0;
          BYTE1(result) = a2;
          if ( v29 != 0.0 && !*((unsigned long *)v27 + 3) )
          {
            result = *(float **)(a1 + 36);
            if ( result )
              *((unsigned long *)result + 3) = v27;
            else
              *(unsigned long *)(a1 + 28) = v27;
            *(unsigned long *)(a1 + 36) = v27;
            *((unsigned long *)v27 + 3) = v27;
          }
          if ( v28 != 1 && v28 != 2 && (v28 & 1) != 0 )
          {
            result = (float *)&v27[-*(unsigned long *)(v28 & 0xFFFFFFFE)];
            if ( result == v25 )
            {
              *((unsigned long *)v27 + 2) = 2;
              result = (float *)sub_42FF30(*(unsigned long **)(a1 + 12));
              *(unsigned long *)result = v27;
              v35 = *(unsigned long *)(a1 + 44);
              if ( v35 )
                *(unsigned long *)(v35 + 4) = result;
              else
                *(unsigned long *)(a1 + 40) = result;
              v25 = (float *)a3;
              *(unsigned long *)(a1 + 44) = result;
              result[1] = 0.0;
            }
          }
        }
      }
    }
    v36 = (float **)v43;
    if ( (unsigned int)v43 < v45 )
    {
      do
      {
        result = *v36;
        v37 = (char *)v25 - *(unsigned long *)*v36;
        if ( *((_WORD *)v37 + 12) )
        {
          v38 = (unsigned long *)*((unsigned long *)v37 + 2);
          if ( v38 )
          {
            v39 = result[2];
            v30 = v39 < 0.0;
            v34 = 0;
            v31 = v39 == 0.0;
            v32 = 0;
            v33 = 0;
            BYTE1(result) = a2;
            if ( v39 != 0.0 && !*((unsigned long *)v37 + 3) )
            {
              result = *(float **)(a1 + 36);
              if ( result )
                *((unsigned long *)result + 3) = v37;
              else
                *(unsigned long *)(a1 + 28) = v37;
              *(unsigned long *)(a1 + 36) = v37;
              *((unsigned long *)v37 + 3) = v37;
            }
            if ( v38 != (unsigned long *)1 && v38 != (unsigned long *)2 && ((unsigned char)v38 & 1) == 0 )
            {
              result = (float *)&v37[*v38];
              if ( result == v25 )
              {
                *((unsigned long *)v37 + 2) = 2;
                result = (float *)sub_42FF30(*(unsigned long **)(a1 + 12));
                *(unsigned long *)result = v37;
                v40 = *(unsigned long *)(a1 + 44);
                if ( v40 )
                  *(unsigned long *)(v40 + 4) = result;
                else
                  *(unsigned long *)(a1 + 40) = result;
                v25 = (float *)a3;
                *(unsigned long *)(a1 + 44) = result;
                result[1] = 0.0;
              }
            }
          }
        }
        ++v36;
      }
      while ( (unsigned int)v36 < v45 );
    }
  }
  return result;
}
float * sub_430BD0(int a1, char a2, unsigned long *a3)
{
  unsigned long *v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned long *v8; 
  unsigned int v9; 
  unsigned int v10; 
  char *v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  unsigned long *v15; 
  unsigned int v16; 
  float *result; 
  unsigned int v18; 
  char *v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  unsigned long *v23; 
  unsigned int v24; 
  float *v25; 
  unsigned int v26; 
  char *v27; 
  int v28; 
  float v29; 
  bool v30; 
  bool v31; 
  char v32; 
  char v33; 
  char v34; 
  int v35; 
  float **v36; 
  char *v37; 
  unsigned long *v38; 
  float v39; 
  int v40; 
  unsigned int v41; 
  float *v42; 
  unsigned long **v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 

  v47 = 1000000000;
  v4 = a3;
  v5 = 0;
  v44 = 0;
  v6 = *a3;
  v41 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    v7 = *(unsigned long *)(v6 + 1);
    v6 += 13;
    v46 = v7;
    v41 = v6;
  }
  else
  {
    v46 = a3[8];
  }
  v8 = (unsigned long *)a3[1];
  v43 = (unsigned long **)v8;
  if ( ((unsigned char)v8 & 1) != 0 )
  {
    v9 = *(unsigned long *)((char *)v8 + 1);
    v8 = (unsigned long *)((char *)v8 + 5);
    v43 = (unsigned long **)v8;
  }
  else
  {
    v9 = a3[9];
  }
  v45 = v9;
  v10 = v6;
  if ( v6 < v46 )
  {
    do
    {
      if ( *(float *)(v10 + 8) != 0.0 )
      {
        v11 = (char *)v4 + *(unsigned long *)v10;
        if ( !*((_WORD *)v11 + 12) )
        {
          if ( *((unsigned long *)v11 + 2) )
          {
            v12 = *(unsigned long *)(a1 + 48);
            v13 = 0;
            if ( *((unsigned long *)v11 + 4) == v12 )
            {
LABEL_18:
              v13 += *((unsigned long *)v11 + 5);
            }
            else
            {
              while ( 1 )
              {
                v14 = *((unsigned long *)v11 + 2);
                ++v13;
                if ( v14 == 1 )
                  break;
                if ( v14 == 2 )
                  goto LABEL_28;
                if ( (v14 & 1) != 0 )
                  v11 -= *(unsigned long *)(v14 & 0xFFFFFFFE);
                else
                  v11 += *(unsigned long *)v14;
                if ( *((unsigned long *)v11 + 4) == v12 )
                  goto LABEL_18;
              }
              *((unsigned long *)v11 + 4) = v12;
              *((unsigned long *)v11 + 5) = 1;
            }
            if ( v13 < 1000000000 )
            {
              if ( v13 < v47 )
              {
                v44 = v10;
                v47 = v13;
              }
              v15 = (unsigned long *)((char *)a3 + *(unsigned long *)v10);
              while ( v15[4] != *(unsigned long *)(a1 + 48) )
              {
                v15[4] = *(unsigned long *)(a1 + 48);
                v16 = v15[2];
                v15[5] = v13--;
                if ( (v16 & 1) != 0 )
                  v15 = (unsigned long *)((char *)v15 - *(unsigned long *)(v16 & 0xFFFFFFFE));
                else
                  v15 = (unsigned long *)((char *)v15 + *(unsigned long *)v16);
              }
            }
LABEL_28:
            v4 = a3;
          }
        }
      }
      v10 += 12;
    }
    while ( v10 < v46 );
    v8 = v43;
    v5 = v44;
  }
  result = (float *)v8;
  v42 = (float *)v8;
  if ( (unsigned int)v8 < v45 )
  {
    do
    {
      v18 = *(unsigned long *)result;
      if ( *(float *)(*(unsigned long *)result + 4) != 0.0 )
      {
        v19 = (char *)v4 - *(unsigned long *)v18;
        if ( !*((_WORD *)v19 + 12) )
        {
          if ( *((unsigned long *)v19 + 2) )
          {
            v20 = *(unsigned long *)(a1 + 48);
            v21 = 0;
            if ( *((unsigned long *)v19 + 4) == v20 )
            {
LABEL_42:
              v21 += *((unsigned long *)v19 + 5);
            }
            else
            {
              while ( 1 )
              {
                v22 = *((unsigned long *)v19 + 2);
                ++v21;
                if ( v22 == 1 )
                  break;
                if ( v22 == 2 )
                  goto LABEL_52;
                if ( (v22 & 1) != 0 )
                  v19 -= *(unsigned long *)(v22 & 0xFFFFFFFE);
                else
                  v19 += *(unsigned long *)v22;
                if ( *((unsigned long *)v19 + 4) == v20 )
                  goto LABEL_42;
              }
              *((unsigned long *)v19 + 4) = v20;
              *((unsigned long *)v19 + 5) = 1;
            }
            if ( v21 < 1000000000 )
            {
              if ( v21 < v47 )
              {
                v47 = v21;
                v44 = v18 | 1;
              }
              v23 = (unsigned long *)((char *)a3 - *(unsigned long *)v18);
              while ( v23[4] != *(unsigned long *)(a1 + 48) )
              {
                v23[4] = *(unsigned long *)(a1 + 48);
                v24 = v23[2];
                v23[5] = v21--;
                if ( (v24 & 1) != 0 )
                  v23 = (unsigned long *)((char *)v23 - *(unsigned long *)(v24 & 0xFFFFFFFE));
                else
                  v23 = (unsigned long *)((char *)v23 + *(unsigned long *)v24);
              }
            }
          }
        }
      }
LABEL_52:
      v4 = a3;
      result = v42 + 1;
      v42 = result;
    }
    while ( (unsigned int)result < v45 );
    v5 = v44;
  }
  v25 = (float *)a3;
  a3[2] = v5;
  if ( v5 )
  {
    a3[4] = *(unsigned long *)(a1 + 48);
    result = (float *)(v47 + 1);
    a3[5] = v47 + 1;
  }
  else
  {
    v26 = v41;
    for ( a3[4] = 0; v26 < v46; v26 += 12 )
    {
      v27 = (char *)v25 + *(unsigned long *)v26;
      if ( !*((_WORD *)v27 + 12) )
      {
        v28 = *((unsigned long *)v27 + 2);
        if ( v28 )
        {
          v29 = *(float *)(v26 + 8);
          v30 = v29 < 0.0;
          v34 = 0;
          v31 = v29 == 0.0;
          v32 = 0;
          v33 = 0;
          BYTE1(result) = a2;
          if ( v29 != 0.0 && !*((unsigned long *)v27 + 3) )
          {
            result = *(float **)(a1 + 36);
            if ( result )
              *((unsigned long *)result + 3) = v27;
            else
              *(unsigned long *)(a1 + 28) = v27;
            *(unsigned long *)(a1 + 36) = v27;
            *((unsigned long *)v27 + 3) = v27;
          }
          if ( v28 != 1 && v28 != 2 && (v28 & 1) != 0 )
          {
            result = (float *)&v27[-*(unsigned long *)(v28 & 0xFFFFFFFE)];
            if ( result == v25 )
            {
              *((unsigned long *)v27 + 2) = 2;
              result = (float *)sub_42FF30(*(unsigned long **)(a1 + 12));
              *(unsigned long *)result = v27;
              v35 = *(unsigned long *)(a1 + 44);
              if ( v35 )
                *(unsigned long *)(v35 + 4) = result;
              else
                *(unsigned long *)(a1 + 40) = result;
              v25 = (float *)a3;
              *(unsigned long *)(a1 + 44) = result;
              result[1] = 0.0;
            }
          }
        }
      }
    }
    v36 = (float **)v43;
    if ( (unsigned int)v43 < v45 )
    {
      do
      {
        result = *v36;
        v37 = (char *)v25 - *(unsigned long *)*v36;
        if ( !*((_WORD *)v37 + 12) )
        {
          v38 = (unsigned long *)*((unsigned long *)v37 + 2);
          if ( v38 )
          {
            v39 = result[1];
            v30 = v39 < 0.0;
            v34 = 0;
            v31 = v39 == 0.0;
            v32 = 0;
            v33 = 0;
            BYTE1(result) = a2;
            if ( v39 != 0.0 && !*((unsigned long *)v37 + 3) )
            {
              result = *(float **)(a1 + 36);
              if ( result )
                *((unsigned long *)result + 3) = v37;
              else
                *(unsigned long *)(a1 + 28) = v37;
              *(unsigned long *)(a1 + 36) = v37;
              *((unsigned long *)v37 + 3) = v37;
            }
            if ( v38 != (unsigned long *)1 && v38 != (unsigned long *)2 && ((unsigned char)v38 & 1) == 0 )
            {
              result = (float *)&v37[*v38];
              if ( result == v25 )
              {
                *((unsigned long *)v37 + 2) = 2;
                result = (float *)sub_42FF30(*(unsigned long **)(a1 + 12));
                *(unsigned long *)result = v37;
                v40 = *(unsigned long *)(a1 + 44);
                if ( v40 )
                  *(unsigned long *)(v40 + 4) = result;
                else
                  *(unsigned long *)(a1 + 40) = result;
                v25 = (float *)a3;
                *(unsigned long *)(a1 + 44) = result;
                result[1] = 0.0;
              }
            }
          }
        }
        ++v36;
      }
      while ( (unsigned int)v36 < v45 );
    }
  }
  return result;
}
bool  sub_430F50(int a1)
{
  return !*(unsigned long *)(a1 + 8) || *(_WORD *)(a1 + 24);
}
unsigned long * sub_430F80( int a2, int a3, unsigned long *a4)
{
  unsigned long *result; 

  this[4] = a3;
  this[3] = a2;
  *this = &MRF::`vftable`;
  *((unsigned char *)this + 20) = 0;
  this[7] = *(unsigned long *)(*a4 + 8);
  this[8] = *(unsigned long *)(a4[1] + 16);
  *((unsigned char *)this + 21) = *(unsigned char *)(a4[1] + 32);
  result = this;
  *((unsigned char *)this + 22) = 0;
  this[6] = a4;
  *((unsigned char *)this + 36) = 1;
  return result;
}
unsigned long * sub_430FD0( int a2)
{
  unsigned long *result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  float *v7; 
  FILE *v8; 
  int v10; 

  result = this;
  v3 = 0;
  v4 = this[4];
  v10 = v4;
  if ( v4 > 0 )
  {
    do
    {
      v5 = v3;
      if ( v3 < v4 )
      {
        v6 = result[4];
        v7 = (float *)(a2 + 4 * v3 * (v6 + 1));
        do
        {
          v4 = v10;
          if ( *v7 != *(float *)(a2 + 4 * (v3 + v5 * v6)) )
          {
            v8 = _iob_func();
            printf(v8 + 2, "Error in setSmoothness(): V is not symmetric!\n");
            exit(1);
          }
          ++v5;
          ++v7;
        }
        while ( v5 < v10 );
        result = this;
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
  return result;
}
char  sub_431060(unsigned )
{
  FILE *v1; 

  if ( !this[22] )
  {
    v1 = _iob_func();
    printf(v1 + 2, "Call initialize() first,exiting!");
    exit(1);
  }
  return 2;
}
int  sub_431090()
{
  bool v2; 
  unsigned long *v3; 
  int v4; 
  unsigned long *v5; 
  int v6; 
  int v7; 
  unsigned long *v8; 
  int v9; 
  FILE *v10; 
  int v11; 
  const char *v13; 

  v2 = this[7] == 1;
  v3 = (unsigned long *)this[6];
  v4 = *this;
  *((unsigned char *)this + 22) = 1;
  v5 = (unsigned long *)*v3;
  if ( v2 )
    (*(void ( **)(unsigned long))(v4 + 52))(*v5);
  else
    (*(void ( **)(unsigned long))(v4 + 56))(v5[1]);
  v6 = this[8];
  if ( v6 )
  {
    v2 = v6 == 1;
    v7 = this[6];
    if ( v2 )
    {
      sub_430FD0(this, **(unsigned long **)(v7 + 4));
      (*(void ( **)(int *, unsigned long))(*this + 68))(this, **(unsigned long **)(this[6] + 4));
    }
    else
    {
      v8 = *(unsigned long **)(v7 + 4);
      v9 = v8[5];
      if ( v9 != 1 && v9 != 2 )
      {
        v13 = "Wrong exponent in setSmoothness()!\n";
        goto LABEL_11;
      }
      (*(void ( **)(int *, int, unsigned long, unsigned long))(*this + 60))(this, v9, v8[6], v8[7]);
    }
    v11 = *(unsigned long *)(this[6] + 4);
    if ( !*(unsigned char *)(v11 + 32) )
      return (*(int ( **)(int *))(*this + 76))(this);
    if ( *((unsigned char *)this + 20) )
    {
      (*(void ( **)(int *, unsigned long, unsigned long))(*this + 72))(this, *(unsigned long *)(v11 + 4), *(unsigned long *)(v11 + 8));
      return (*(int ( **)(int *))(*this + 76))(this);
    }
    v13 = "Edge multiplier cannot be used with non-grid graphs\n";
LABEL_11:
    v10 = _iob_func();
    printf(v10 + 2, v13);
    exit(1);
  }
  (*(void ( **)(int *, unsigned long))(*this + 64))(this, *(unsigned long *)(*(unsigned long *)(this[6] + 4) + 12));
  return (*(int ( **)(int *))(*this + 76))(this);
}
float * sub_431170(unsigned int a2, float *a3)
{
  FILE *v4; 
  clock_t v5; 
  double v6; 
  float *result; 
  const char *v8; 

  if ( !(*(int ( **)(unsigned char *))(*(unsigned long *)this + 4))(this) )
  {
    v8 = "optimize() cannot be called for invalid energy!\n";
    goto LABEL_3;
  }
  if ( !this[22] )
  {
    v8 = "run initialize() first!\n";
LABEL_3:
    v4 = _iob_func();
    printf(v4 + 2, v8);
    exit(1);
  }
  v5 = clock();
  (*(void ( **)(unsigned char *, int))(*(unsigned long *)this + 20))(this, a2);
  v6 = (double)(clock() - v5);
  result = a3;
  *a3 = v6 / 1000.0;
  return result;
}
double  sub_4311F0(unsigned )
{
  FILE *v2; 
  const char *v4; 
  float v5; 

  if ( !(*(int ( **)(unsigned char *))(*(unsigned long *)this + 4))(this) )
  {
    v4 = "totalEnergy() cannot be called for invalid energy!\n";
    goto LABEL_3;
  }
  if ( !this[22] )
  {
    v4 = "Call initialize() first!\n";
LABEL_3:
    v2 = _iob_func();
    printf(v2 + 2, v4);
    exit(1);
  }
  v5 = ((double ( *)(unsigned char *))*(unsigned long *)(*(unsigned long *)this + 12))(this);
  return ((double ( *)(unsigned char *))*(unsigned long *)(*(unsigned long *)this + 8))(this) + v5;
}
void  sub_431250()
{
  int v2; 
  int v3; 
  int v4; 

  *this = &TdCParagraph::`vftable`;
  this[21] = &DwCTwoDimArray<float>::`vftable`;
  this[22] = 0;
  this[23] = 0;
  this[25] = 0;
  this[24] = 0;
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  this[29] = 0;
  this[30] = &DwCTwoDimArray<int>::`vftable`;
  this[31] = 0;
  this[32] = 0;
  this[34] = 0;
  this[33] = 0;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  this[38] = 0;
  this[9] = 0;
  this[10] = 0;
  this[8] = 0;
  this[5] = 0;
  this[3] = 0;
  this[2] = 0;
  *((unsigned char *)this + 80) = 1;
  v4 = (int)COERCE_UNSIGNED_INT64((double)(rand() % 128));
  v2 = rand() % 128;
  v3 = rand() % 128;
  *((int *)this + 3) = _mm_unpacklo_pd((_int)_mm_loadu_si128(&v4), (_int)COERCE_UNSIGNED_INT64((double)v2));
  *((int *)this + 4) = _mm_unpacklo_pd((_int)COERCE_UNSIGNED_INT64((double)v3), (_int)0i64);
}
void  sub_4313A0()
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  *this = &TdCTextLine::`vftable`;
  sub_42BD70(this + 12);
  this[2] = 0;
  v5 = (int)COERCE_UNSIGNED_INT64((double)(rand() % 128 + 64));
  v2 = rand() % 128;
  v3 = rand() % 128;
  v4 = (_int)_mm_loadu_si128(&v5);
  *((unsigned char *)this + 960) = 1;
  *((int *)this + 1) = _mm_unpacklo_pd(v4, (_int)COERCE_UNSIGNED_INT64((double)(v2 + 64)));
  *((int *)this + 2) = _mm_unpacklo_pd((_int)COERCE_UNSIGNED_INT64((double)(v3 + 64)), (_int)0i64);
}
void  sub_431480()
{
  int v2; 
  int v3; 
  int v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  void **v7; 
  unsigned long *v8; 
  unsigned long *v9; 
  void ( ***v10)(unsigned long, int); 
  void *v11; 
  void *v12; 
  int v13; 
  int v14; 

  *(unsigned long *)this = &TdCParagraph::`vftable`;
  v2 = 0;
  v13 = 0;
  if ( *((int *)this + 2) > 0 )
  {
    v3 = 0;
    v14 = 0;
    do
    {
      v4 = *(unsigned long *)(v3 + *((unsigned long *)this + 5) + 8);
      if ( v4 )
      {
        v5 = **(unsigned long ***)v4;
        **(unsigned long **)v4 = *(unsigned long *)v4;
        *(unsigned long *)(*(unsigned long *)v4 + 4) = *(unsigned long *)v4;
        *(unsigned long *)(v4 + 4) = 0;
        if ( v5 != *(unsigned long **)v4 )
        {
          do
          {
            v6 = (unsigned long *)*v5;
            operator delete(v5);
            v5 = v6;
          }
          while ( v6 != *(unsigned long **)v4 );
          v3 = v14;
        }
        v7 = *(void ***)(v3 + *((unsigned long *)this + 5) + 8);
        if ( v7 )
        {
          v8 = *(unsigned long **)*v7;
          *(unsigned long *)*v7 = *v7;
          *((unsigned long *)*v7 + 1) = *v7;
          v7[1] = 0;
          if ( v8 != *v7 )
          {
            do
            {
              v9 = (unsigned long *)*v8;
              operator delete(v8);
              v8 = v9;
            }
            while ( v9 != *v7 );
            v3 = v14;
          }
          operator delete(*v7);
          operator delete(v7);
        }
        v2 = v13;
        *(unsigned long *)(v3 + *((unsigned long *)this + 5) + 8) = 0;
      }
      ++v2;
      v3 += 984;
      v13 = v2;
      v14 = v3;
    }
    while ( v2 < *((unsigned long *)this + 2) );
  }
  v10 = (void ( ***)(unsigned long, int))*((unsigned long *)this + 5);
  if ( v10 )
  {
    if ( *(v10 - 1) )
      (**v10)(v10, 3);
    else
      operator delete[](v10 - 1);
  }
  operator delete[](*((void **)this + 8));
  if ( *((unsigned long *)this + 9) )
    operator delete[](*((void **)this + 9));
  operator delete[](*((void **)this + 3));
  v11 = (void *)*((unsigned long *)this + 36);
  *((unsigned long *)this + 30) = &DwCTwoDimArray<int>::`vftable`;
  if ( v11 )
    operator delete[](v11);
  if ( *((unsigned long *)this + 38) )
    operator delete[](*((void **)this + 38));
  if ( *((unsigned long *)this + 37) )
    operator delete[](*((void **)this + 37));
  *((unsigned long *)this + 36) = 0;
  *((unsigned long *)this + 37) = 0;
  *((unsigned long *)this + 38) = 0;
  *((unsigned long *)this + 35) = 0;
  *((unsigned long *)this + 34) = 0;
  *((unsigned long *)this + 33) = 0;
  *((unsigned long *)this + 32) = 0;
  *((unsigned long *)this + 31) = 0;
  v12 = (void *)*((unsigned long *)this + 27);
  *((unsigned long *)this + 21) = &DwCTwoDimArray<float>::`vftable`;
  if ( v12 )
    operator delete[](v12);
  if ( *((unsigned long *)this + 29) )
    operator delete[](*((void **)this + 29));
  if ( *((unsigned long *)this + 28) )
    operator delete[](*((void **)this + 28));
  *((unsigned long *)this + 27) = 0;
  *((unsigned long *)this + 28) = 0;
  *((unsigned long *)this + 29) = 0;
  *((unsigned long *)this + 26) = 0;
  *((unsigned long *)this + 25) = 0;
  *((unsigned long *)this + 24) = 0;
  *((unsigned long *)this + 23) = 0;
  *((unsigned long *)this + 22) = 0;
}
void  sub_4316D0()
{
  *this = &TdCTextLine::`vftable`;
  sub_42BDA0(this + 12);
}
char * sub_4316E0(char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator`(this, 0x3D8u, *((unsigned long *)this - 1), (void ( *)(void *))sub_4316D0);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(unsigned long *)this = &TdCTextLine::`vftable`;
    sub_42BDA0(this + 48);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}

int  sub_4317A0( int a2, int a3, double a4)
{
  int v4; 
  int v5; 
  float v6; 
  int result; 

  v4 = this[28];
  v5 = *(unsigned long *)(v4 + 4 * a2);
  v6 = *(float *)(v5 + 4 * a3) + a4;
  *(float *)(v5 + 4 * a3) = v6;
  result = *(unsigned long *)(v4 + 4 * a3);
  *(float *)(result + 4 * a2) = v6;
  return result;
}
void * sub_4317E0( int a2)
{
  void *result; 

  *(unsigned long *)(this + 32) = a2;
  if ( a2 > 20000 )
    exit(0);
  operator delete[](*(void **)(this + 8));
  operator delete[](*(void **)(this + 12));
  *(unsigned long *)(this + 8) = operator new[](8 * a2);
  result = operator new[](8 * a2);
  *(unsigned long *)(this + 12) = result;
  return result;
}
void  sub_431850( float a2)
{
  sub_432D20((int)this, a2);
}
void  sub_431870( float a2)
{
  int v3; 
  int v4; 

  if ( *(unsigned long *)(*(unsigned long *)(this + 40) + 4) >= 0xAu )
  {
    sub_431D80(this);
    v3 = 0;
    if ( *(int *)(this + 8) > 0 )
    {
      v4 = 0;
      do
      {
        sub_434990(v4 + *(unsigned long *)(this + 20), *(unsigned long *)(this + 16), *(unsigned long *)(this + 24));
        sub_4348C0((unsigned long *)(v4 + *(unsigned long *)(this + 20)), *(unsigned long long *)(this + 160), *(unsigned long *)(this + 16));
        ++v3;
        v4 += 984;
      }
      while ( v3 < *(unsigned long *)(this + 8) );
    }
    sub_432D20(this, a2);
  }
  else
  {
    *(unsigned long *)(this + 8) = 0;
    *(unsigned char *)(this + 80) = 0;
  }
}

void  sub_431970( int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; 
  int v8; 
  int v9; 
  unsigned long *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int *v19; 
  int v20; 
  unsigned long *v21; 
  int v22; 
  unsigned long *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v31; 

  v7 = this;
  if ( *(unsigned char *)(this + 80) )
  {
    v8 = 0;
    if ( *(int *)(this + 8) > 0 )
    {
      v9 = 0;
      do
      {
        v10 = (unsigned long *)(v9 + *(unsigned long *)(v7 + 20));
        v11 = v10[2];
        if ( v11 )
        {
          v12 = *(unsigned long *)(v11 + 4);
          if ( v12 )
          {
            if ( v12 < a7 )
            {
              sub_434AE0(v10, a2);
              sub_4320C0(v9 + *(unsigned long *)(v7 + 20));
            }
          }
        }
        if ( *(unsigned long *)(*(unsigned long *)(v7 + 32) + 4 * v8) == 1 )
          sub_4320C0(v9 + *(unsigned long *)(v7 + 20));
        ++v8;
        v9 += 984;
      }
      while ( v8 < *(unsigned long *)(v7 + 8) );
    }
    sub_4340F0(v7);
    v13 = *(unsigned long *)(v7 + 8);
    v14 = *(unsigned long *)(*(unsigned long *)(v7 + 40) + 4);
    if ( v13 == 1 )
      goto LABEL_14;
    if ( v13 == 2 )
    {
      if ( v14 < 15 )
      {
LABEL_14:
        *(unsigned char *)(v7 + 80) = 0;
        return;
      }
    }
    else if ( v13 == 3 && v14 < 15 )
    {
      goto LABEL_14;
    }
    v15 = 0;
    v16 = 0;
    if ( v13 <= 0 )
      goto LABEL_46;
    v17 = *(unsigned long *)(v7 + 20);
    v18 = *(unsigned long *)(v7 + 8);
    v31 = v17 + 8;
    v19 = (int *)(v17 + 8);
    do
    {
      v20 = *v19;
      if ( *v19 )
        v20 = *(unsigned long *)(v20 + 4);
      if ( v15 >= v20 )
      {
        if ( v16 < v20 )
          v16 = v20;
      }
      else
      {
        v16 = v15;
        v15 = v20;
      }
      v19 += 246;
      --v18;
    }
    while ( v18 );
    if ( (v7 = this, v15 < 20) && v16 < 10 || v16 < 5 )
    {
LABEL_46:
      v28 = 0;
      *(unsigned char *)(v7 + 80) = 0;
      if ( v13 > 0 )
      {
        v29 = 0;
        do
        {
          sub_434AE0((unsigned long *)(v29 + *(unsigned long *)(v7 + 20)), *(unsigned long *)(v7 + 16));
          ++v28;
          v29 += 984;
        }
        while ( v28 < *(unsigned long *)(v7 + 8) );
      }
    }
    else
    {
      v21 = *(unsigned long **)(this + 32);
      v22 = 0;
      v23 = v21;
      v24 = v13;
      do
      {
        if ( *v23 == 1 )
          ++v22;
        ++v23;
        --v24;
      }
      while ( v24 );
      if ( v22 )
      {
        v25 = v31;
        v26 = 0;
        do
        {
          if ( !*v21 )
          {
            if ( *(unsigned long *)v25 )
            {
              v27 = *(unsigned long *)(*(unsigned long *)v25 + 4);
              if ( v27 > 0 )
              {
                ++v26;
                v24 += v27;
              }
            }
          }
          ++v21;
          v25 += 984;
          --v13;
        }
        while ( v13 );
        v7 = this;
        if ( v26 == 1 )
          goto LABEL_14;
        if ( (v26 == 2 || v26 == 3) && v24 < 15 )
          *(unsigned char *)(this + 80) = 0;
      }
    }
  }
}
double  sub_431B10( int a2, int a3, int a4, double a5)
{
  int v6; 
  int v7; 
  int v8; 
  double v9; 
  double v10; 
  int v11; 
  int v12; 
  unsigned long *i; 
  unsigned long *v14; 
  double v15; 
  int v17; 
  int v18; 
  unsigned long **v19; 
  double v20; 
  unsigned long **v21; 
  int v22[224]; 
  int v23; 

  v18 = 984 * a3;
  v6 = *(unsigned long *)(984 * a3 + a2 + 8);
  if ( v6 )
    v7 = *(unsigned long *)(v6 + 4);
  else
    v7 = 0;
  v8 = *(unsigned long *)(984 * a4 + a2 + 8);
  if ( v8 )
    v8 = *(unsigned long *)(v8 + 4);
  v17 = v7 + v8;
  memset(v22, 0, sizeof(v22));
  sub_42BD70(v22);
  v23 = 0;
  sub_4317E0((int)v22, v17);
  v9 = *(double *)(v18 + a2 + 952);
  v19 = *(unsigned long ***)(v18 + a2 + 8);
  v20 = v9;
  v10 = *(double *)(984 * a4 + a2 + 952);
  v11 = 0;
  v12 = v22[2];
  for ( i = (unsigned long *)**v19; i != *v19; i = (unsigned long *)*i )
  {
    *(unsigned long *)(v12 + 8 * v11) = *(unsigned long *)((i[2] << 6) + *(unsigned long *)(this + 16) + 32);
    *(unsigned long *)(v12 + 8 * v11++ + 4) = *(unsigned long *)((i[2] << 6) + *(unsigned long *)(this + 16) + 36);
  }
  v21 = *(unsigned long ***)(984 * a4 + a2 + 8);
  v14 = (unsigned long *)**v21;
  if ( v14 != *v21 )
  {
    v11 = v12 + 8 * v11;
    do
    {
      v11 += 8;
      *(unsigned long *)(v11 - 8) = *(unsigned long *)((v14[2] << 6) + *(unsigned long *)(this + 16) + 32);
      *(unsigned long *)(v11 - 4) = *(unsigned long *)((v14[2] << 6) + *(unsigned long *)(this + 16) + 36);
      v14 = (unsigned long *)*v14;
    }
    while ( v14 != *v21 );
  }
  sub_42BE00((int)v22, 0.0, *(unsigned long long *)(this + 160), 3);
  v15 = sub_42D210((int)v22, v11);
  v23 = -1;
  sub_42BDA0(v22);
  return ((v10 + v20) / a5 - v15) * (double)v17;
}
double  sub_431D50(int a1, int a2, int a3, int a4)
{
  if ( a3 == a4 )
    return 0.0;
  else
    return *(float *)(*(unsigned long *)(*(unsigned long *)(dword_50198C + 28) + 4 * a1) + 4 * a2);
}
int  sub_431D80()
{
  int v2; 
  double v3; 
  int v4; 
  double v5; 
  int v6; 
  int v7; 
  int v8; 
  double *v9; 
  int v10; 
  int v11; 
  int result; 
  long long v13[100]; 

  memset(v13, 0, sizeof(v13));
  v2 = 0;
  v3 = 0.0;
  if ( *(int *)(this + 8) > 0 )
  {
    v4 = 0;
    do
    {
      v5 = sub_434290((unsigned long *)(v4 + *(unsigned long *)(this + 20)), *(unsigned long *)(this + 16));
      if ( v5 <= 0.0 )
      {
        v6 = (int)((v5 - 5.0) / 10.0);
        if ( v6 == -9 )
          v6 = 9;
      }
      else
      {
        v6 = (int)((v5 + 5.0) / 10.0);
      }
      v7 = *(unsigned long *)(*(unsigned long *)(this + 20) + v4 + 8);
      if ( v7 )
        v7 = *(unsigned long *)(v7 + 4);
      ++v2;
      v4 += 984;
      *(double *)&v13[v6 + 50] = (double)v7 + *(double *)&v13[v6 + 50];
    }
    while ( v2 < *(unsigned long *)(this + 8) );
    v3 = 0.0;
  }
  v8 = 0;
  v9 = (double *)&v13[32];
  v10 = -20;
  v11 = -18;
  do
  {
    if ( *(v9 - 2) > v3 )
    {
      v3 = *(v9 - 2);
      v8 = v10;
    }
    if ( *(v9 - 1) > v3 )
    {
      v3 = *(v9 - 1);
      v8 = v11 - 1;
    }
    if ( *v9 > v3 )
    {
      v3 = *v9;
      v8 = v11;
    }
    if ( v9[1] > v3 )
    {
      v3 = v9[1];
      v8 = v11 + 1;
    }
    if ( v9[2] > v3 )
    {
      v3 = v9[2];
      v8 = v11 + 2;
    }
    if ( v9[3] > v3 )
    {
      v3 = v9[3];
      v8 = v11 + 3;
    }
    if ( v9[4] > v3 )
    {
      v3 = v9[4];
      v8 = v11 + 4;
    }
    if ( v9[5] > v3 )
    {
      v3 = v9[5];
      v8 = v11 + 5;
    }
    v11 += 8;
    v10 += 8;
    v9 += 8;
  }
  while ( v11 <= 15 );
  for ( ; v10 <= 20; ++v10 )
  {
    if ( *(double *)&v13[v10 + 50] > v3 )
    {
      v3 = *(double *)&v13[v10 + 50];
      v8 = v10;
    }
  }
  result = 10 * v8;
  *(double *)(this + 160) = (double)(10 * v8) / 180.0 * 3.141592653589793;
  return result;
}
char  sub_431F70( int a2, int a3, int a4)
{
  int v5; 
  int i; 
  int v7; 

  v5 = a4;
  *(unsigned long *)(this + 4) = a2;
  if ( !a4 )
    v5 = a2;
  *(unsigned long *)(this + 20) = 0;
  *(unsigned long *)(this + 8) = a3;
  *(unsigned long *)(this + 16) = v5;
  *(unsigned long *)(this + 12) = v5 * a3;
  *(unsigned long *)(this + 24) = operator new[](4 * v5 * a3);
  *(unsigned long *)(this + 28) = operator new[](4 * *(unsigned long *)(this + 8));
  *(unsigned long *)(this + 32) = operator new[](4 * (*(unsigned long *)(this + 8) + 1));
  memset(*(void **)(this + 24), 0, 4 * *(unsigned long *)(this + 12));
  for ( i = 0; i < *(unsigned long *)(this + 8); ++i )
    *(unsigned long *)(*(unsigned long *)(this + 28) + 4 * i) = *(unsigned long *)(this + 24) + 4 * i * *(unsigned long *)(this + 16);
  v7 = 1;
  if ( *(unsigned long *)(this + 8) + 1 <= 1 )
    return 1;
  do
  {
    *(unsigned long *)(*(unsigned long *)(this + 32) + 4 * v7) = *(unsigned long *)(this + 24) - 4 + 4 * *(unsigned long *)(this + 16) * (v7 - 1);
    ++v7;
  }
  while ( v7 < *(unsigned long *)(this + 8) + 1 );
  return 1;
}
int * sub_432060(int a1, int *a2, float *a3)
{
  long long v3; 
  int v4; 
  int *result; 

  v3 = a1 - a1 % dword_501978;
  *a3 = 3.141592653589793 / (double)dword_501978 * (double)(a1 % dword_501978);
  v4 = LODWORD(dword_43E048[v3 / dword_501978]);
  result = a2;
  *a2 = v4;
  return result;
}
void  sub_4320C0()
{
  int v2; 
  unsigned long *v3; 
  unsigned long *v4; 
  void **v5; 
  unsigned long *v6; 
  unsigned long *v7; 

  v2 = *(unsigned long *)(this + 8);
  if ( v2 )
  {
    v3 = **(unsigned long ***)v2;
    **(unsigned long **)v2 = *(unsigned long *)v2;
    *(unsigned long *)(*(unsigned long *)v2 + 4) = *(unsigned long *)v2;
    *(unsigned long *)(v2 + 4) = 0;
    if ( v3 != *(unsigned long **)v2 )
    {
      do
      {
        v4 = (unsigned long *)*v3;
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 != *(unsigned long **)v2 );
    }
    v5 = *(void ***)(this + 8);
    if ( v5 )
    {
      v6 = *(unsigned long **)*v5;
      *(unsigned long *)*v5 = *v5;
      *((unsigned long *)*v5 + 1) = *v5;
      v5[1] = 0;
      if ( v6 != *v5 )
      {
        do
        {
          v7 = (unsigned long *)*v6;
          operator delete(v6);
          v6 = v7;
        }
        while ( v7 != *v5 );
      }
      operator delete(*v5);
      operator delete(v5);
    }
    *(unsigned long *)(this + 8) = 0;
    *(unsigned char *)(this + 960) = 0;
  }
}
void  sub_432150(int a1, int a2, float a3, float a4, unsigned int a5)
{
  int v5; 
  void ***v6; 
  void ***v7; 
  void **v8; 
  void **v9; 
  unsigned long *v10; 
  double v11; 
  void **v12; 
  void *v13; 
  void *v14; 
  float v15; 
  int v16; 
  int v17; 
  double v18; 
  float v19; 
  void *v20; 
  long long v21; 
  void *v22; 
  int v23; 
  unsigned long *v24; 
  int v25; 
  int v26; 
  int *v27; 
  void *v28; 
  void ***v29; 
  void **v30; 
  int v31; 
  unsigned long *v32; 
  void *v33; 
  int v34; 
  int v35; 
  unsigned long *v36; 
  int i; 
  int v38; 
  unsigned long *v39; 
  void ***v40; 
  int v41; 
  int v42; 
  bool v43; 
  void ***v44; 
  int v45; 
  void **v46; 
  int v47; 
  unsigned long *v48; 
  unsigned long *v49; 
  unsigned long *v50; 
  void **v51; 
  unsigned long *v52; 
  void **v53; 
  unsigned long *v54; 
  void **v55; 
  unsigned long *v56; 
  void **v57; 
  unsigned long *v58; 
  int v59; 
  int v60; 
  char v61; 
  void *v62; 
  int v63; 
  unsigned int v64; 
  int v65; 
  int v66[2]; 
  float v67; 
  float v68; 
  int v69; 
  float v70; 
  long long v71; 
  int v72; 
  int v73; 
  unsigned long *v74; 
  void *v75; 
  void ***v76; 
  void *v77[2]; 
  int v78; 
  void *v79; 
  int v80; 
  int v81; 

  v5 = a1;
  v72 = a1;
  v64 = *(unsigned long *)(a1 + 28);
  v76 = *(void ****)(a1 + 40);
  v73 = (int)v76[1];
  *(unsigned long long *)v77 = 0i64;
  v78 = 0;
  sub_403D10((int *)v77, v64);
  v6 = (void ***)*v76;
  v7 = v76;
  v81 = 0;
  v8 = *v6;
  if ( *v6 != (void **)v6 )
  {
    do
    {
      if ( *(unsigned char *)(((unsigned long)v8[2] << 6) + *(unsigned long *)(v5 + 16) + 12) != 1 )
      {
        v9 = *v6;
        v80 = (*(unsigned long *)(*(unsigned long *)(v5 + 24) + 4 * (unsigned long)v8[2])
             - *(unsigned long *)(*(unsigned long *)(v5 + 24) + 4 * (unsigned long)v8[2]) % dword_501978)
            / dword_501978;
        if ( v9 == (void **)v6 )
        {
          v7 = v76;
        }
        else
        {
          do
          {
            if ( *(unsigned char *)(((unsigned long)v9[2] << 6) + *(unsigned long *)(v5 + 16) + 12) != 1 )
            {
              v10 = (unsigned long *)sub_403DF0(v77, (int)v8[2]);
              v65 = (int)v9[2];
              v74 = v10;
              v75 = (void *)sub_403DF0(v77, v65);
              if ( v74 != v75 )
              {
                v11 = (double)dword_501978;
                v12 = &v79;
                v79 = (void *)((*(unsigned long *)(*(unsigned long *)(v5 + 24) + 4 * (unsigned long)v9[2])
                              - *(unsigned long *)(*(unsigned long *)(v5 + 24) + 4 * (unsigned long)v9[2]) % dword_501978)
                             / dword_501978);
                if ( (int)v79 >= v80 )
                  v12 = (void **)&v80;
                v13 = *v12;
                v14 = v8[2];
                v15 = dword_43E048[(unsigned long)v13];
                v5 = v72;
                v16 = *(unsigned long *)(*(unsigned long *)(v72 + 24) + 4 * (unsigned long)v14) % dword_501978;
                v14 = (void *)((unsigned long)v14 << 6);
                v17 = *(unsigned long *)(v72 + 16);
                v18 = (double)v16;
                v19 = *(float *)((char *)v14 + v17 + 32);
                a2 = (_int)*(unsigned int *)((char *)v14 + v17 + 36);
                v20 = v9[2];
                v21 = *(int *)(*(unsigned long *)(v72 + 24) + 4 * (unsigned long)v20);
                v20 = (void *)((unsigned long)v20 << 6);
                HIDWORD(v21) = v21 % dword_501978;
                LODWORD(v21) = *(unsigned long *)(v72 + 16);
                v67 = v15 * a3;
                *((float *)&v71 + 1) = v15 * a3;
                *(float *)&v18 = v18 * 3.141592653589793 / v11 - 1.570796326794897;
                v66[1] = LODWORD(a2.m128d_f64[0]);
                v69 = LODWORD(v18);
                *(float *)v66 = v19;
                v68 = v15 * a4;
                *((float *)&v71 + 2) = v15 * a4;
                LODWORD(v71) = *(unsigned long *)((char *)v20 + v21 + 36);
                *(float *)&v18 = (double)SHIDWORD(v21) * 3.141592653589793 / v11 - 1.570796326794897;
                HIDWORD(v71) = LODWORD(v18);
                v70 = *(float *)((char *)v20 + v21 + 32);
                *(float *)a2.m128d_f64 = (float)((float)(*(float *)a2.m128d_f64 - *(float *)&v71)
                                               * (float)(*(float *)a2.m128d_f64 - *(float *)&v71))
                                       + (float)((float)(v19 - v70) * (float)(v19 - v70));
                if ( *(float *)a2.m128d_f64 <= (float)((float)((float)((float)(v67 + v67) + v68) + v68)
                                                     * (float)((float)((float)(v67 + v67) + v68) + v68))
                  && sub_4337C0((float *)v66, &v70) )
                {
                  sub_403E20((int *)v77, (int)v74, (int)v75);
                }
              }
            }
            v9 = (void **)*v9;
          }
          while ( v9 != *v76 );
          v7 = v76;
        }
      }
      v8 = (void **)*v8;
      v6 = (void ***)*v7;
    }
    while ( v8 != *v7 );
  }
  v75 = *(void **)(v5 + 28);
  v22 = v75;
  v23 = (984 * (unsigned long long)(unsigned int)v75) >> 32 != 0 ? -1 : 984 * (unsigned long)v75;
  v24 = operator new[](__CFADD__(v23, 4) ? -1 : v23 + 4);
  v79 = v24;
  LOBYTE(v81) = 1;
  if ( v24 )
  {
    v62 = v75;
    *v24 = v22;
    v25 = (int)(v24 + 1);
    v74 = v24 + 1;
    `eh vector constructor iterator`(
      v24 + 1,
      0x3D8u,
      (int)v62,
      (void ( *)(void *))sub_4313A0,
      (void ( *)(void *))sub_4316D0);
  }
  else
  {
    v25 = 0;
    v74 = 0;
  }
  LOBYTE(v81) = 0;
  v26 = (984 * (unsigned long long)(unsigned int)v73) >> 32 != 0 ? -1 : 984 * v73;
  v27 = (int *)operator new[](__CFADD__(v26, 4) ? -1 : v26 + 4);
  v79 = v27;
  LOBYTE(v81) = 2;
  if ( v27 )
  {
    v63 = v73;
    *v27 = v73;
    v75 = v27 + 1;
    `eh vector constructor iterator`(
      v27 + 1,
      0x3D8u,
      v63,
      (void ( *)(void *))sub_4313A0,
      (void ( *)(void *))sub_4316D0);
    v28 = v75;
  }
  else
  {
    v28 = 0;
  }
  *(unsigned long *)(v5 + 20) = v28;
  v29 = (void ***)*v7;
  LOBYTE(v81) = 0;
  v30 = *v29;
  if ( *v29 != (void **)v29 )
  {
    do
    {
      v31 = 984 * sub_403DF0(v77, (int)v30[2]);
      v79 = (void *)v31;
      if ( !*(unsigned long *)(v31 + v25 + 8) )
      {
        v32 = operator new(8u);
        v75 = v32;
        LOBYTE(v81) = 3;
        if ( v32 )
        {
          *(unsigned long long *)v32 = 0i64;
          *v32 = 0;
          v32[1] = 0;
          sub_42AD80(0, 0);
          v33 = v75;
          *(unsigned long *)v75 = v34;
        }
        else
        {
          v33 = 0;
        }
        v31 = (int)v79;
        LOBYTE(v81) = 0;
        *(unsigned long *)((char *)v79 + v25 + 8) = v33;
      }
      v75 = *(void **)(v31 + v25 + 8);
      v79 = *(void **)v75;
      v35 = sub_426520(v79, *((unsigned long **)v79 + 1), v30 + 2);
      v73 = v35;
      if ( *((unsigned long *)v75 + 1) == 357913940 )
        std::_Xlength_error("list<T> too long");
      v36 = v79;
      ++*((unsigned long *)v75 + 1);
      v36[1] = v35;
      **(unsigned long **)(v35 + 4) = v73;
      v30 = (void **)*v30;
    }
    while ( v30 != *v76 );
  }
  for ( i = 0; i < *(unsigned long *)(v5 + 28); v25 += 984 )
  {
    if ( *(unsigned long *)(v25 + 8) )
    {
      sub_434990(v25, *(unsigned long *)(v5 + 16), *(unsigned long *)(v5 + 24));
      sub_4345E0(v25, v25, i, a2, *(unsigned long *)(v5 + 160), *(unsigned long *)(v5 + 164), *(unsigned long *)(v5 + 16));
    }
    ++i;
  }
  v71 = xmmword_43A7A0;
  dword_50197C = 0;
  do
  {
    v38 = 0;
    v80 = 0;
    if ( *(int *)(v5 + 28) > 0 )
    {
      v39 = v74;
      v40 = (void ***)v74;
      v76 = (void ***)v74;
      do
      {
        v41 = (int)(v40 + 246);
        if ( v40[2] )
        {
          v42 = v38 + 1;
          if ( v38 + 1 < *(unsigned long *)(v5 + 28) )
          {
            do
            {
              if ( *(unsigned long *)(v41 + 8) )
              {
                if ( sub_4330F0((unsigned long *)v5, (int)v39, v38, v42, *((double *)&v71 + dword_50197C), 0.125, 16.0, 0) )
                {
                  sub_433490(v76, v41, *(unsigned long long *)(v5 + 160), *(unsigned long *)(v5 + 16), *(unsigned long *)(v5 + 24));
                  sub_4345E0((int)v76, v42, v41, a2, *(unsigned long *)(v5 + 160), *(unsigned long *)(v5 + 164), *(unsigned long *)(v5 + 16));
                }
                v39 = v74;
                v38 = v80;
              }
              ++v42;
              v41 += 984;
            }
            while ( v42 < *(unsigned long *)(v5 + 28) );
            v40 = v76;
          }
        }
        ++v38;
        v40 += 246;
        v80 = v38;
        v76 = v40;
      }
      while ( v38 < *(unsigned long *)(v5 + 28) );
    }
    ++dword_50197C;
  }
  while ( dword_50197C < 2 );
  v43 = *(unsigned long *)(v5 + 28) <= 0;
  *(unsigned long *)(v5 + 8) = 0;
  v80 = 0;
  if ( !v43 )
  {
    v76 = (void ***)(v74 + 2);
    v44 = (void ***)(v74 + 2);
    v45 = 0;
    do
    {
      v46 = *v44;
      if ( *v44 )
      {
        if ( (unsigned int)v46[1] < a5 )
        {
          v50 = *(unsigned long **)*v46;
          if ( v50 != *v46 )
          {
            do
            {
              *(unsigned char *)((v50[2] << 6) + *(unsigned long *)(v5 + 16) + 12) = 1;
              v50 = (unsigned long *)*v50;
            }
            while ( v50 != **v44 );
          }
          v51 = *v44;
          v75 = v51;
          v52 = *(unsigned long **)*v51;
          *(unsigned long *)*v51 = *v51;
          *((unsigned long *)*v51 + 1) = *v51;
          v51[1] = 0;
          if ( v52 != *v51 )
          {
            v53 = v51;
            do
            {
              v54 = (unsigned long *)*v52;
              operator delete(v52);
              v52 = v54;
            }
            while ( v54 != *v53 );
            v5 = v72;
          }
          v55 = *v44;
          v73 = (int)v55;
          if ( v55 )
          {
            v56 = *(unsigned long **)*v55;
            *(unsigned long *)*v55 = *v55;
            *((unsigned long *)*v55 + 1) = *v55;
            v55[1] = 0;
            if ( v56 != *v55 )
            {
              v57 = v55;
              do
              {
                v58 = (unsigned long *)*v56;
                operator delete(v56);
                v56 = v58;
              }
              while ( v58 != *v57 );
              v55 = (void **)v73;
              v44 = v76;
            }
            operator delete(*v55);
            operator delete(v55);
          }
        }
        else
        {
          *(unsigned long *)(984 * *(unsigned long *)(v5 + 8) + *(unsigned long *)(v5 + 20) + 8) = v46;
          v47 = *(unsigned long *)(v5 + 8);
          v75 = *(void **)(984 * v47 + *(unsigned long *)(v5 + 20) + 8);
          v48 = **(unsigned long ***)v75;
          if ( v48 != *(unsigned long **)v75 )
          {
            v49 = v75;
            do
            {
              *(unsigned long *)((v48[2] << 6) + *(unsigned long *)(v5 + 16) + 20) = v47;
              v48 = (unsigned long *)*v48;
            }
            while ( v48 != (unsigned long *)*v49 );
            v44 = v76;
          }
          ++*(unsigned long *)(v5 + 8);
        }
        v45 = v80;
        *v44 = 0;
      }
      ++v45;
      v44 += 246;
      v80 = v45;
      v76 = v44;
    }
    while ( v45 < *(unsigned long *)(v5 + 28) );
  }
  if ( v74 )
  {
    if ( *(v74 - 1) )
      (*(void ( **)(unsigned long *, int))*v74)(v74, 3);
    else
      operator delete[](v74 - 1);
  }
  v59 = *(unsigned long *)(*(unsigned long *)(v5 + 40) + 4);
  v60 = *(unsigned long *)(v5 + 8);
  if ( v60 == 1 )
  {
    v61 = 0;
    goto LABEL_83;
  }
  if ( v60 == 2 )
  {
    if ( v59 < 15 )
    {
      v61 = 0;
      goto LABEL_83;
    }
  }
  else if ( v60 == 3 && v59 < 15 )
  {
    v61 = 0;
    goto LABEL_83;
  }
  v61 = 1;
LABEL_83:
  *(unsigned char *)(v5 + 80) = v61;
  if ( v77[0] )
    operator delete(v77[0]);
}
void  sub_432870( float a2, float a3, int a4, int a5, int a6, int a7)
{
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  float v17; 
  int v18; 
  int v19; 
  int v20; 
  double v21; 
  int v22; 
  float v23; 
  int v24; 
  int v25; 
  int v26; 
  int *v27; 
  int v28; 
  unsigned int v29; 
  int v30[5]; 
  int v31[5]; 
  float v32; 
  int v33; 
  float v34; 
  float v35; 
  int *v36; 
  int v37; 
  float v38; 
  int v39; 
  int v40; 
  int v41; 
  unsigned long *v42; 
  void *v43[2]; 
  int v44; 
  int v45; 

  v7 = (int)this;
  v42 = this;
  v29 = this[7];
  v8 = a6;
  v40 = a6;
  v36 = (int *)a7;
  *(unsigned long long *)v43 = 0i64;
  v44 = 0;
  sub_403D10((int *)v43, v29);
  v9 = a5;
  v10 = 0;
  v45 = 0;
  v39 = 0;
  if ( a5 > 0 )
  {
    do
    {
      v11 = *(unsigned long *)(v8 + 4 * v10);
      v12 = *(unsigned long *)(v7 + 16);
      v13 = v11 << 6;
      v33 = v11;
      v41 = v12;
      if ( *(unsigned char *)((v11 << 6) + v12 + 12) != 1 )
      {
        v14 = *(unsigned long *)(*(unsigned long *)(v7 + 24) + 4 * v11);
        v15 = 0;
        *(float *)&v16 = (double)(v14 % dword_501978) * 3.141592653589793 / (double)dword_501978 - 1.570796326794897;
        v30[4] = v16;
        v34 = *(float *)(v13 + v41 + 32);
        *(float *)v30 = v34;
        v38 = *(float *)(v13 + v41 + 36);
        *(float *)&v30[1] = v38;
        v17 = dword_43E048[(v14 - v14 % dword_501978) / dword_501978];
        v35 = v17 * a3;
        *(float *)&v30[3] = v17 * a3;
        v32 = v17 * a2;
        *(float *)&v30[2] = v17 * a2;
        do
        {
          v18 = *(unsigned long *)(v40 + 4 * v15);
          v19 = v18 << 6;
          if ( *(unsigned char *)((v18 << 6) + v42[4] + 12) == 1
            || (v41 = sub_403DF0(v43, v33), v37 = sub_403DF0(v43, v18), v41 == v37) )
          {
            v7 = (int)v42;
          }
          else
          {
            v20 = *(unsigned long *)(v42[6] + 4 * v18) - *(unsigned long *)(v42[6] + 4 * v18) % dword_501978;
            v21 = (double)(*(unsigned long *)(v42[6] + 4 * v18) % dword_501978);
            v7 = (int)v42;
            v22 = v42[4];
            v23 = *(float *)(v19 + v22 + 36);
            *(float *)&v24 = dword_43E048[v20 / dword_501978] * a2;
            *(float *)&v25 = dword_43E048[v20 / dword_501978] * a3;
            *(float *)&v26 = v21 * 3.141592653589793 / (double)dword_501978 - 1.570796326794897;
            v31[4] = v26;
            *(float *)&v21 = v34 - *(float *)(v19 + v22 + 32);
            v31[0] = *(unsigned long *)(v19 + v22 + 32);
            *(float *)&v31[1] = v23;
            v31[2] = v24;
            v31[3] = v25;
            if ( (float)((float)((float)(v38 - v23) * (float)(v38 - v23)) + (float)(*(float *)&v21 * *(float *)&v21)) <= (float)((float)((float)((float)(v35 + v32) + *(float *)&v24) + *(float *)&v25) * (float)((float)((float)(v35 + v32) + *(float *)&v24) + *(float *)&v25))
              && sub_4337C0((float *)v30, (float *)v31) )
            {
              sub_403E20((int *)v43, v41, v37);
            }
          }
          ++v15;
        }
        while ( v15 < a5 );
        v9 = a5;
      }
      v8 = v40;
      v10 = v39 + 1;
      v39 = v10;
    }
    while ( v10 < v9 );
    if ( v9 > 0 )
    {
      v27 = v36;
      v28 = v40 - (unsigned long)v36;
      do
      {
        *v27 = sub_403DF0(v43, *(int *)((char *)v27 + v28));
        ++v27;
        --v9;
      }
      while ( v9 );
    }
  }
  if ( v43[0] )
    operator delete(v43[0]);
}
float * sub_432B30(int a2, float *a3, float *a4)
{
  int v5; 
  int v6; 
  float *result; 
  double v8; 
  int v9; 
  double v10; 
  int v11; 
  float v12; 
  double v13; 
  double v14; 
  int v15; 
  float v16; 

  v15 = 984 * a2;
  v5 = this[5] + v15;
  v6 = *(unsigned long *)(v5 + 8);
  if ( v6 )
    v6 = *(unsigned long *)(v6 + 4);
  if ( !*(unsigned long *)(v5 + 8) )
  {
    *a4 = 0.0;
    result = a3;
    *a3 = 0.0;
    return result;
  }
  v8 = sub_434A20(v5, this[4]);
  v9 = this[5] + v15;
  v14 = v8;
  v13 = *(double *)(v9 + 952);
  if ( v13 * 0.05 > v8 )
  {
    v10 = sub_42D2D0(v9 + 48, (int)this, v6, this[4], (unsigned long **)*(unsigned long *)(v9 + 8));
    v9 = this[5] + v15;
    if ( (v14 / v13 * 0.032579890889899 * (v14 / v13)
        - (v14 / v13 * 2.64733466882046 * (v14 / v13) * (v14 / v13) * (v14 / v13)
         + v14 / v13 * 0.009846068014184001 * (v14 / v13) * (v14 / v13))
        - v14 / v13 * 0.00189980856504
        + 0.000031466578083)
       * 10000.0
       - 0.0005 > v10 / (*(double *)(v9 + 912) - *(double *)(v9 + 904)) / v13 )
    {
      *a3 = 500.0;
LABEL_8:
      result = a4;
      *a4 = 0.0;
      return result;
    }
  }
  v11 = *(unsigned long *)(v9 + 8);
  if ( v11 && *(int *)(v11 + 4) >= 3 )
  {
    v16 = sub_434A80(v9);
    if ( v16 >= 0.0 )
      v12 = v16;
    else
      v12 = 0.0;
    *a3 = v12;
    result = a4;
    if ( v16 >= 0.0 )
      *a4 = 0.0;
    else
      *a4 = -v16;
  }
  else if ( v6 == 1 )
  {
    result = a3;
    *a3 = 6000.0;
  }
  else if ( v6 == 2 )
  {
    result = a3;
    *a3 = 60.0;
  }
  else
  {
    if ( v6 <= 0 )
      goto LABEL_8;
    result = a3;
    *a3 = (float)(6 - v6) * 6.0;
  }
  return result;
}
void  sub_432D20(int a1, float a2)
{
  int *v3; 
  int v4; 
  void *v5; 
  void **v6; 
  unsigned long *v7; 
  int v8; 
  unsigned long long *v9; 
  unsigned long *v10; 
  void *v11; 
  int *v12; 
  int *v13; 
  int v14; 
  void *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  void **v21; 
  long long v22; 
  int v23; 
  void *v24; 
  long long v25; 
  void *v26; 
  void *v27; 
  void *v28; 
  void *v29; 
  void *i; 
  int v31; 
  int v32; 
  int *v33; 
  float v34; 
  int v35; 

  v3 = (int *)a1;
  v32 = a1;
  v4 = *(unsigned long *)(a1 + 8);
  *(unsigned long *)(a1 + 32) = operator new[](4 * v4);
  v21 = &DwCTwoDimArray<float>::`vftable`;
  v22 = 0i64;
  v24 = 0;
  v23 = 0;
  v25 = 0i64;
  v35 = 0;
  sub_431F70((int)&v21, 2, v4, 0);
  v5 = 0;
  for ( i = 0; (int)v5 < v4; v6[1] = v28 )
  {
    sub_432B30(v3, (int)v5, (float *)&v29, (float *)&v28);
    v6 = *(void ***)(DWORD2(v25) + 4 * (unsigned long)i);
    i = (char *)i + 1;
    v5 = i;
    *v6 = v29;
  }
  v7 = operator new(0xCu);
  v28 = v7;
  if ( v7 )
  {
    v8 = DWORD1(v25);
    *(unsigned long long *)v7 = 0i64;
    v7[2] = 0;
    *v7 = v8;
    v7[2] = 1;
  }
  else
  {
    v28 = 0;
  }
  v9 = operator new(0x28u);
  v29 = v9;
  if ( v9 )
  {
    *v9 = 0i64;
    v9[1] = 0i64;
    *((unsigned long long *)v9 + 4) = 0i64;
    *((unsigned long *)v9 + 3) = sub_431D50;
    *((unsigned long *)v9 + 4) = 0;
    *((unsigned char *)v9 + 32) = 0;
  }
  else
  {
    v29 = 0;
  }
  v10 = operator new(8u);
  i = v10;
  if ( v10 )
  {
    v11 = v28;
    *(unsigned long long *)v10 = 0i64;
    *v10 = v11;
    v10[1] = v29;
  }
  else
  {
    i = 0;
  }
  dword_50198C = (int)(v3 + 21);
  v26 = operator new[](0xFA0u);
  v12 = (int *)operator new(0x58u);
  v33 = v12;
  v27 = v12;
  LOBYTE(v35) = 1;
  if ( v12 )
  {
    memset(v12, 0, 0x58u);
    sub_42DA70((int)v33, (void *)v4, 2, i);
    v13 = v33;
    *v33 = (int)&Expansion::`vftable`;
  }
  else
  {
    v13 = 0;
    v33 = 0;
  }
  LOBYTE(v35) = 0;
  sub_431090(v13);
  (*(void ( **)(int *))(*v33 + 36))(v33);
  v14 = 0;
  v31 = 0;
  if ( v4 > 0 )
  {
    do
    {
      v15 = (void *)(v14 + 1);
      v27 = (void *)(v14 + 1);
      v16 = v14 + 1;
      if ( v14 + 1 < v4 )
      {
        do
        {
          if ( *(float *)(*(unsigned long *)(*(unsigned long *)(v32 + 112) + 4 * v14) + 4 * v16) > 0.0 )
          {
            (*(void ( **)(int *, int, int, int))(*v33 + 16))(v33, v14, v16, 1065353216);
            v14 = v31;
            v17 = *(unsigned long *)(*(unsigned long *)(v32 + 112) + 4 * v31);
            *(float *)(v17 + 4 * v16) = *(float *)(v17 + 4 * v16) * a2;
          }
          ++v16;
        }
        while ( v16 < v4 );
        v15 = v27;
      }
      v14 = (int)v15;
      v31 = (int)v15;
    }
    while ( (int)v15 < v4 );
    v3 = (int *)v32;
  }
  sub_4311F0(v33);
  sub_431170(v33, 1, &v34);
  sub_4311F0(v33);
  v18 = 0;
  v32 = 0;
  if ( v4 > 0 )
  {
    v31 = 0;
    do
    {
      v19 = (*(int ( **)(int *, int))(*v33 + 28))(v33, v18);
      v20 = v32;
      *(unsigned long *)(v3[8] + 4 * v32) = v19;
      if ( *(unsigned long *)(v3[8] + 4 * v20) == 1 )
      {
        sub_434AE0((unsigned long *)(v31 + v3[5]), v3[4]);
        v20 = v32;
      }
      v31 += 984;
      v18 = v20 + 1;
      v32 = v18;
    }
    while ( v18 < v4 );
  }
  operator delete(v28);
  operator delete(v29);
  operator delete(i);
  (*(void ( **)(int *, int))*v33)(v33, 1);
  operator delete[](v26);
  if ( DWORD1(v25) )
    operator delete[]((void *)DWORD1(v25));
  if ( HIDWORD(v25) )
    operator delete[]((void *)HIDWORD(v25));
  if ( DWORD2(v25) )
    operator delete[]((void *)DWORD2(v25));
}
char  sub_433070()
{
  int v1; 

  v1 = this[2];
  if ( v1 )
    LOBYTE(v1) = sub_431F70((int)(this + 21), v1, v1, 0);
  return v1;
}
void  sub_433090(int a1, int a2, int a3, int a4, int a5, long long a6, unsigned int a7)
{
  if ( *(unsigned long *)(*(unsigned long *)(a1 + 40) + 4) >= 0xAu )
  {
    *(unsigned long *)(a1 + 24) = a5;
    *(unsigned long *)(a1 + 16) = a3;
    *(unsigned long *)(a1 + 28) = a4;
    sub_431D80(a1);
    sub_432150(a1, a2, *(float *)&a6, *((float *)&a6 + 1), a7);
  }
  else
  {
    *(unsigned char *)(a1 + 80) = 0;
  }
}
char  sub_4330F0( int a2, int a3, int a4, float a5, float a6, double a7, char a8)
{
  unsigned long **v8; 
  unsigned long *v9; 
  unsigned long *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  float v15; 
  int v16; 
  int v17; 
  unsigned long **v18; 
  int v19; 
  int v20; 
  unsigned long *v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  double v26; 
  int v27; 
  int v28; 
  float v29; 
  float v30; 
  float v31; 
  int v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double *v37; 
  long long *v38; 
  double v39; 
  double v40; 
  int v42[5]; 
  int v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  double v48; 
  int v49; 
  float v50; 
  unsigned long *v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  unsigned long **v57; 
  int v58; 
  unsigned long *v59; 
  int v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 

  v59 = this;
  v52 = a3;
  v55 = a2;
  v54 = a4;
  v53 = 984 * a3;
  if ( *(unsigned char *)(984 * a3 + a2 + 960) )
  {
    v49 = 984 * a4;
    if ( *(unsigned char *)(984 * a4 + a2 + 960) )
    {
      v8 = *(unsigned long ***)(984 * a3 + a2 + 8);
      v57 = *(unsigned long ***)(984 * a4 + a2 + 8);
      v9 = *v8;
      v51 = v8;
      v10 = (unsigned long *)*v9;
      if ( (unsigned long *)*v9 != v9 )
      {
        v11 = (int)v59;
        do
        {
          v12 = v10[2];
          v13 = *(unsigned long *)(v11 + 16);
          v60 = v12;
          if ( *(unsigned char *)((v12 << 6) + v13 + 12) != 1 )
          {
            v14 = *(unsigned long *)(v11 + 16);
            v15 = dword_43E048[(*(unsigned long *)(*(unsigned long *)(v11 + 24) + 4 * v12)
                              - *(unsigned long *)(*(unsigned long *)(v11 + 24) + 4 * v12) % dword_501978)
                             / dword_501978];
            v16 = *(int *)((v60 << 6) + v14 + 32);
            *(float *)&v17 = v15 * a5;
            v18 = (unsigned long **)*v57;
            *(float *)&v19 = v15 * a6;
            *(float *)&v20 = (double)(*(unsigned long *)(*(unsigned long *)(v11 + 24) + 4 * v12) % dword_501978)
                           * 3.141592653589793
                           / (double)dword_501978
                           - 1.570796326794897;
            v21 = (unsigned long *)**v57;
            v58 = v16;
            v42[4] = v20;
            v22 = *(int *)((v60 << 6) + v14 + 36);
            v42[0] = v16;
            v50 = *(float *)&v22;
            v42[1] = v22;
            v60 = v17;
            v42[2] = v17;
            v56 = v19;
            v42[3] = v19;
            if ( v21 != v18 )
            {
              do
              {
                v23 = v21[2];
                v24 = *(unsigned long *)(v11 + 16);
                HIDWORD(v64) = v23;
                if ( *(unsigned char *)((v23 << 6) + v24 + 12) != 1 )
                {
                  v25 = *(unsigned long *)(*(unsigned long *)(v11 + 24) + 4 * v23);
                  v26 = (double)(v25 % dword_501978);
                  v11 = (int)v59;
                  v27 = (v25 - v25 % dword_501978) / dword_501978;
                  v28 = v59[4];
                  v29 = dword_43E048[v27] * a5;
                  v30 = dword_43E048[v27] * a6;
                  v31 = v26 * 3.141592653589793 / (double)dword_501978 - 1.570796326794897;
                  v44 = *(float *)((HIDWORD(v64) << 6) + v28 + 36);
                  v47 = v31;
                  *(float *)&v26 = *(float *)&v16 - *(float *)((HIDWORD(v64) << 6) + v28 + 32);
                  v43 = *(unsigned long *)((HIDWORD(v64) << 6) + v28 + 32);
                  v45 = v29;
                  v46 = v30;
                  if ( (float)((float)((float)(v50 - v44) * (float)(v50 - v44))
                             + (float)(*(float *)&v26 * *(float *)&v26)) <= (float)((float)((float)((float)(*(float *)&v19 + *(float *)&v17)
                                                                                                  + v29)
                                                                                          + v30)
                                                                                  * (float)((float)((float)(*(float *)&v19 + *(float *)&v17)
                                                                                                  + v29)
                                                                                          + v30)) )
                  {
                    if ( sub_4337C0((float *)v42, (float *)&v43) )
                    {
                      v32 = v55;
                      v64 = sub_431B10((int)v59, v55, v52, v54, a7);
                      if ( v64 < 0.0 )
                        return 0;
                      v33 = *(double *)(v53 + v32 + 968);
                      v34 = *(double *)(v53 + v32 + 976);
                      v63 = v33;
                      v61 = v34;
                      v35 = *(double *)(v49 + v32 + 968);
                      v36 = *(double *)(v49 + v32 + 976);
                      v62 = v35;
                      v64 = v36;
                      if ( a8 || v33 > v36 || v35 > v34 )
                        return 1;
                      v37 = &v64;
                      if ( v36 <= v34 )
                        v37 = &v61;
                      v38 = (long long *)&v62;
                      if ( v33 <= v35 )
                        v38 = (long long *)&v63;
                      v39 = *v37 - *(double *)v38;
                      if ( v36 < v33 )
                      {
                        if ( v34 < v35 )
                        {
                          v40 = v48;
                        }
                        else
                        {
                          v40 = v34 - v35;
                          v48 = v40;
                        }
                      }
                      else
                      {
                        v40 = v36 - v33;
                        v48 = v36 - v33;
                      }
                      if ( v40 / v39 < 0.1 )
                        return 1;
                      v11 = (int)v59;
                    }
                    v17 = v60;
                    v19 = v56;
                  }
                  v16 = v58;
                }
                v21 = (unsigned long *)*v21;
              }
              while ( v21 != *v57 );
            }
          }
          v10 = (unsigned long *)*v10;
        }
        while ( v10 != (unsigned long *)*v51 );
      }
      return 0;
    }
  }
  return 0;
}
void  sub_433490( int a2, long long a3, int a4, int a5)
{
  unsigned long *v5; 
  int v6; 
  unsigned long *v7; 
  unsigned long *v8; 
  int v9; 
  unsigned long *v10; 
  unsigned long *v11; 
  unsigned long *v12; 
  unsigned long *v13; 
  int v14; 
  int v15; 

  v5 = this;
  v6 = a2;
  if ( !this[2] )
  {
    v7 = operator new(8u);
    v8 = v7;
    if ( v7 )
    {
      *(unsigned long long *)v7 = 0i64;
      *v7 = 0;
      v7[1] = 0;
      sub_42AD80(0, 0);
      *v8 = v9;
    }
    else
    {
      v8 = 0;
    }
    v5[2] = v8;
  }
  v10 = **(unsigned long ***)(a2 + 8);
  v11 = (unsigned long *)*v10;
  if ( (unsigned long *)*v10 != v10 )
  {
    do
    {
      v12 = (unsigned long *)v5[2];
      v13 = (unsigned long *)*v12;
      v14 = sub_426520((unsigned long *)*v12, *(unsigned long **)(*v12 + 4), v11 + 2);
      v15 = v12[1];
      if ( v15 == 357913940 )
        std::_Xlength_error("list<T> too long");
      v12[1] = v15 + 1;
      v6 = a2;
      v13[1] = v14;
      v5 = this;
      **(unsigned long **)(v14 + 4) = v14;
      v11 = (unsigned long *)*v11;
    }
    while ( v11 != **(unsigned long ***)(a2 + 8) );
  }
  sub_4320C0(v6);
  sub_434990((int)v5, a4, a5);
  sub_4348C0(v5, a3, a4);
}
int  sub_4335C0(const int *a1, int a2)
{
  int v2; 
  int v4; 
  int v5; 
  int v6; 
  const int *v7; 
  const int *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  void *v13; 
  int v14; 
  int v15; 
  int v16; 
  int i; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  const int *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v28; 
  void *v29; 

  v2 = 0;
  v4 = 0;
  v28 = 0;
  if ( a2 > 0 )
  {
    if ( (unsigned int)a2 < 8 || dword_5019B4 < 2 )
    {
      v7 = a1;
    }
    else
    {
      v5 = 0i64;
      v6 = 0i64;
      v7 = a1;
      v8 = a1;
      do
      {
        v9 = _mm_loadu_si128(v8);
        v2 += 8;
        v8 += 2;
        v5 = _mm_max_epi32(v5, v9);
        v6 = _mm_max_epi32(v6, _mm_loadu_si128(v8 - 1));
      }
      while ( v2 < a2 - (a2 & 7) );
      v10 = _mm_max_epi32(v5, v6);
      v11 = _mm_max_epi32(v10, _mm_srli_si128(v10, 8));
      v4 = _mm_cvtsi128_si32(_mm_max_epi32(v11, _mm_srli_si128(v11, 4)));
      v28 = v4;
    }
    if ( v2 < a2 )
    {
      do
      {
        v12 = v7->m128i_i32[v2];
        if ( v12 > v4 )
          v4 = v12;
        v7 = a1;
        ++v2;
      }
      while ( v2 < a2 );
      v28 = v4;
    }
  }
  v13 = operator new[](4 * (v4 + 1));
  v29 = v13;
  memset(v13, 0, 4 * v4);
  v14 = 0;
  if ( a2 > 0 )
  {
    do
    {
      v15 = a1->m128i_i32[v14++];
      *((unsigned long *)v13 + v15) = 1;
    }
    while ( v14 < a2 );
    v4 = v28;
  }
  v16 = 0;
  for ( i = v4; v16 < i; ++v16 )
  {
    if ( !*((unsigned long *)v13 + v16) )
    {
      for ( i = v4; i > v16; --i )
      {
        if ( *((unsigned long *)v13 + i) == 1 )
          break;
      }
      v18 = 0;
      *((unsigned long *)v13 + i) = 0;
      *((unsigned long *)v13 + v16) = 1;
      if ( a2 > 0 )
      {
        do
        {
          if ( a1->m128i_i32[v18] == i )
            a1->m128i_i32[v18] = v16;
          ++v18;
        }
        while ( v18 < a2 );
        v4 = v28;
        v13 = v29;
      }
    }
  }
  v19 = 0;
  v20 = 0;
  if ( a2 > 0 )
  {
    if ( (unsigned int)a2 >= 8 && dword_5019B4 >= 2 )
    {
      v21 = 0i64;
      v22 = 0i64;
      v23 = a1;
      do
      {
        v24 = _mm_loadu_si128(v23);
        v20 += 8;
        v23 += 2;
        v21 = _mm_max_epi32(v21, v24);
        v22 = _mm_max_epi32(v22, _mm_loadu_si128(v23 - 1));
      }
      while ( v20 < a2 - (a2 & 7) );
      v25 = _mm_max_epi32(v21, v22);
      v26 = _mm_max_epi32(v25, _mm_srli_si128(v25, 8));
      v19 = _mm_cvtsi128_si32(_mm_max_epi32(v26, _mm_srli_si128(v26, 4)));
    }
    if ( v20 < a2 )
    {
      do
      {
        if ( a1->m128i_i32[v20] > v19 )
          v19 = a1->m128i_i32[v20];
        ++v20;
      }
      while ( v20 < a2 );
      v13 = v29;
    }
  }
  operator delete[](v13);
  return v19 + 1;
}
bool  sub_4337C0(float *a1, float *a2)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 

  v4 = *(double *)libm_sse2_cos_precise(v35, v37).m128_u64;
  v40 = v4;
  v5 = *(double *)libm_sse2_sin_precise().m128_u64;
  v45 = v5;
  v43 = *a2 - *a1;
  v46 = a2[1] - a1[1];
  v6 = *(double *)libm_sse2_cos_precise(v36, v38).m128_u64;
  v41 = v6;
  v7 = *(double *)libm_sse2_sin_precise().m128_u64;
  v8 = a1[3];
  v9 = v46 * v7;
  v10 = (float)(v46 * v41) - (float)(v43 * v7);
  v11 = a1[2];
  v12 = v9 + (float)(v43 * v41);
  v13 = v12 - a2[2];
  v42 = v10 - a2[3];
  v14 = a2[2] + v12;
  v15 = v8 * v45;
  v16 = v8 * v40;
  v17 = -v15;
  v47 = v14;
  v39 = a2[3] + v10;
  v18 = (float)(v11 * v40) + v17;
  v19 = v17 - (float)(v11 * v40);
  v20 = v11 * v45;
  v21 = v16 + v20;
  v22 = v16 - v20;
  v44 = v45 * v40;
  if ( (float)(v45 * v40) < 0.0 )
  {
    v23 = v18;
    v18 = v19;
    v19 = v23;
    v24 = v21;
    v21 = v22;
    v44 = v24;
    v22 = v24;
  }
  if ( v45 < 0.0 )
  {
    v19 = -v19;
    v22 = -v22;
  }
  if ( v19 > v47 || v19 > (float)-v13 )
    return 0;
  v25 = v21;
  if ( v44 == 0.0 )
  {
    v26 = -v21;
  }
  else
  {
    if ( (float)((float)(v47 - v18) * (float)(v13 - v18)) > 0.0 )
    {
      if ( (float)(v13 - v18) >= 0.0 )
      {
        v27 = v13 - v18;
        v28 = v19 + v18;
        v29 = v22 + v21;
      }
      else
      {
        v27 = v47 - v18;
        v28 = v18 - v19;
        v29 = v21 - v22;
      }
      v25 = (float)((float)(v27 * v29) / v28) + v21;
    }
    v30 = v13 + v18;
    v26 = -v21;
    v48 = v47 + v18;
    if ( (float)(v48 * v30) > 0.0 )
    {
      v31 = -v18;
      if ( v30 >= 0.0 )
      {
        v32 = v31 + v19;
        v33 = v22 - v21;
      }
      else
      {
        v30 = v48;
        v32 = v31 - v19;
        v33 = v26 - v22;
      }
      v26 = (float)((float)(v30 * v33) / v32) - v21;
    }
  }
  return (v42 <= v25 || v42 <= v26) && (v25 <= v39 || v26 <= v39);
}
void  sub_433A80( long long a2, long long a3)
{
  this[3] = _mm_loadu_si128((const int *)&a2);
  this[4] = _mm_loadu_si128((const int *)&a3);
}

void  sub_433AA0( int a2, int a3, int a4)
{
  int v5; 
  int v6; 
  void *v7; 
  unsigned long **v8; 
  unsigned long *v9; 
  int v10; 
  float v11; 
  int v12; 
  int v13; 
  int *v14; 
  unsigned long *v15; 
  int v16; 
  unsigned long *v17; 
  unsigned long *v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  char *v25; 
  unsigned long **v26; 
  unsigned long *i; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  char v33; 
  int v34; 
  int v35; 
  unsigned long **v36; 
  char *v37; 

  v5 = *(unsigned long *)(this + 40);
  if ( *(unsigned long *)(v5 + 4) >= 0xAu )
  {
    *(unsigned long *)(this + 24) = a4;
    *(unsigned long *)(this + 16) = a2;
    *(unsigned long *)(this + 28) = a3;
    v6 = *(unsigned long *)(v5 + 4);
    v34 = v6;
    v7 = operator new[](4 * v6);
    v8 = *(unsigned long ***)(this + 40);
    *(unsigned long *)(this + 36) = v7;
    v9 = (unsigned long *)**v8;
    if ( v9 != *v8 )
    {
      v10 = 0;
      do
      {
        v10 += 4;
        *(unsigned long *)(v10 + *(unsigned long *)(this + 36) - 4) = v9[2];
        v9 = (unsigned long *)*v9;
      }
      while ( v9 != *v8 );
      v6 = v34;
    }
    sub_431F70(this + 120, v6, 5, 0);
    v11 = *(double *)&qword_43E0E0;
    sub_432870(
      (unsigned long *)this,
      *(double *)&qword_43E0B8,
      v11,
      4,
      v6,
      *(unsigned long *)(this + 36),
      *(unsigned long *)(*(unsigned long *)(this + 148) + 16));
    v12 = sub_4335C0(*(const int **)(*(unsigned long *)(this + 148) + 16), v6);
    *(unsigned long *)(this + 8) = v12;
    v13 = (984 * (unsigned long long)(unsigned int)v12) >> 32 != 0 ? -1 : 984 * v12;
    v14 = (int *)operator new[](__CFADD__(v13, 4) ? -1 : v13 + 4);
    if ( v14 )
    {
      v15 = v14 + 1;
      *v14 = v12;
      `eh vector constructor iterator`(
        v14 + 1,
        0x3D8u,
        v12,
        (void ( *)(void *))sub_4313A0,
        (void ( *)(void *))sub_4316D0);
    }
    else
    {
      v15 = 0;
    }
    v16 = 0;
    for ( *(unsigned long *)(this + 20) = v15; v16 < v34; **(unsigned long **)(v22 + 4) = v22 )
    {
      v35 = 984 * *(unsigned long *)(4 * v16 + *(unsigned long *)(*(unsigned long *)(this + 148) + 16));
      if ( *(unsigned long *)(v35 + *(unsigned long *)(this + 20) + 8) )
      {
        v20 = 984 * *(unsigned long *)(4 * v16 + *(unsigned long *)(*(unsigned long *)(this + 148) + 16));
      }
      else
      {
        v17 = operator new(8u);
        v18 = v17;
        if ( v17 )
        {
          *(unsigned long long *)v17 = 0i64;
          *v17 = 0;
          v17[1] = 0;
          sub_42AD80(0, 0);
          *v18 = v19;
        }
        else
        {
          v18 = 0;
        }
        v20 = v35;
        *(unsigned long *)(v35 + *(unsigned long *)(this + 20) + 8) = v18;
      }
      v21 = *(unsigned long *)(v20 + *(unsigned long *)(this + 20) + 8);
      v36 = *(unsigned long ***)v21;
      v22 = sub_426520(v36, v36[1], (unsigned long *)(4 * v16 + *(unsigned long *)(this + 36)));
      v23 = *(unsigned long *)(v21 + 4);
      if ( v23 == 357913940 )
        std::_Xlength_error("list<T> too long");
      ++v16;
      *(unsigned long *)(v21 + 4) = v23 + 1;
      v36[1] = (unsigned long *)v22;
    }
    v24 = 0;
    if ( *(int *)(this + 8) > 0 )
    {
      v25 = 0;
      v37 = 0;
      do
      {
        v26 = *(unsigned long ***)&v25[*(unsigned long *)(this + 20) + 8];
        for ( i = (unsigned long *)**v26; i != *v26; i = (unsigned long *)*i )
          *(unsigned long *)((i[2] << 6) + *(unsigned long *)(this + 16) + 20) = v24;
        ++v24;
        v25 = v37 + 984;
        v37 += 984;
      }
      while ( v24 < *(unsigned long *)(this + 8) );
    }
    v28 = *(unsigned long *)(this + 8);
    v29 = 0;
    v30 = 0;
    if ( v28 <= 0 )
      goto LABEL_36;
    v31 = *(unsigned long *)(this + 20) + 8;
    do
    {
      if ( *(unsigned long *)v31 )
      {
        v32 = *(unsigned long *)(*(unsigned long *)v31 + 4);
        if ( v32 > 0 )
        {
          ++v29;
          v30 += v32;
        }
      }
      v31 += 984;
      --v28;
    }
    while ( v28 );
    if ( v29 == 1 || (v29 == 2 || v29 == 3) && v30 < 15 )
      v33 = 0;
    else
LABEL_36:
      v33 = 1;
    *(unsigned char *)(this + 80) = v33;
  }
  else
  {
    *(unsigned char *)(this + 80) = 0;
  }
}

int  sub_433D90(int a1, int a2, int a3)
{
  int result; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  float v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 

  result = *(unsigned long *)(a1 + 40);
  if ( *(unsigned long *)(result + 4) >= 0xAu )
  {
    sub_431D80(a1);
    v5 = 0;
    if ( *(int *)(a1 + 8) > 0 )
    {
      v6 = 0;
      do
      {
        sub_434990(v6 + *(unsigned long *)(a1 + 20), *(unsigned long *)(a1 + 16), *(unsigned long *)(a1 + 24));
        sub_4348C0((unsigned long *)(v6 + *(unsigned long *)(a1 + 20)), *(unsigned long long *)(a1 + 160), *(unsigned long *)(a1 + 16));
        sub_4345E0(
          v6 + *(unsigned long *)(a1 + 20),
          a1,
          v6,
          a2,
          *(unsigned long *)(a1 + 160),
          *(unsigned long *)(a1 + 164),
          *(unsigned long *)(a1 + 16));
        ++v5;
        v6 += 984;
      }
      while ( v5 < *(unsigned long *)(a1 + 8) );
    }
    v7 = 0;
    v28 = 0;
    do
    {
      v8 = 0;
      v26 = 0;
      if ( *(int *)(a1 + 8) > 0 )
      {
        v9 = 0;
        v30 = 0;
        do
        {
          v10 = v8 + 1;
          v11 = v8 + 1;
          v24 = v8 + 1;
          if ( v8 + 1 < *(unsigned long *)(a1 + 8) )
          {
            v12 = v9 + 984;
            v31 = v9 + 984;
            do
            {
              v13 = *(double *)((char *)&qword_43E0D0 + v28);
              if ( sub_4330F0(
                     (unsigned long *)a1,
                     *(unsigned long *)(a1 + 20),
                     v8,
                     v11,
                     *(double *)((char *)&qword_43E0A8 + v28),
                     v13,
                     10.0,
                     0) )
              {
                v14 = *(unsigned long *)(a1 + 20);
                v15 = v14 + v30;
                sub_433490(
                  (unsigned long *)(v14 + v30),
                  v31 + v14,
                  *(unsigned long long *)(a1 + 160),
                  *(unsigned long *)(a1 + 16),
                  *(unsigned long *)(a1 + 24));
                sub_4345E0(v15, a1, v15, a2, *(unsigned long *)(a1 + 160), *(unsigned long *)(a1 + 164), *(unsigned long *)(a1 + 16));
                v12 = v31;
              }
              v8 = v26;
              ++v11;
              v12 += 984;
              v31 = v12;
            }
            while ( v11 < *(unsigned long *)(a1 + 8) );
            v9 = v30;
            v10 = v24;
          }
          v8 = v10;
          v9 += 984;
          v26 = v10;
          v30 = v9;
        }
        while ( v10 < *(unsigned long *)(a1 + 8) );
        v7 = v28;
      }
      v7 -= 8;
      v28 = v7;
    }
    while ( v7 >= -16 );
    result = 0;
    v27 = 0;
    if ( *(int *)(a1 + 8) > 0 )
    {
      v16 = 0;
      v32 = 0;
      do
      {
        v17 = ++result;
        v25 = result;
        if ( result < *(unsigned long *)(a1 + 8) )
        {
          v18 = v16 + 984;
          v29 = v16 + 984;
          do
          {
            v19 = *(unsigned long *)(a1 + 20);
            v20 = *(unsigned long *)(v16 + v19 + 8);
            if ( v20 )
            {
              if ( *(int *)(v20 + 4) > 0 )
              {
                v21 = *(unsigned long *)(v18 + v19 + 8);
                if ( v21 )
                {
                  if ( *(int *)(v21 + 4) > 0 )
                  {
                    if ( sub_4330F0((unsigned long *)a1, v19, v27, v17, 1.0, 0.125, 8.0, 1) == 1 )
                    {
                      v22 = *(unsigned long *)(a1 + 20);
                      v23 = v22 + v32;
                      sub_433490(
                        (unsigned long *)(v22 + v32),
                        v29 + v22,
                        *(unsigned long long *)(a1 + 160),
                        *(unsigned long *)(a1 + 16),
                        *(unsigned long *)(a1 + 24));
                      sub_4345E0(v23, a1, v23, a2, *(unsigned long *)(a1 + 160), *(unsigned long *)(a1 + 164), *(unsigned long *)(a1 + 16));
                      v18 = v29;
                    }
                    v16 = v32;
                  }
                }
              }
            }
            ++v17;
            v18 += 984;
            v29 = v18;
          }
          while ( v17 < *(unsigned long *)(a1 + 8) );
          result = v25;
        }
        v16 += 984;
        v27 = result;
        v32 = v16;
      }
      while ( result < *(unsigned long *)(a1 + 8) );
    }
  }
  else
  {
    *(unsigned long *)(a1 + 8) = 0;
    *(unsigned char *)(a1 + 80) = 0;
  }
  return result;
}

float * sub_434030()
{
  float *result; 
  int v3; 
  int v4; 
  float v5; 
  int i; 
  int j; 
  int v8; 
  float v9; 

  result = (float *)operator new[](4 * this[2]);
  v3 = 0;
  this[3] = result;
  if ( (int)this[2] > 0 )
  {
    v4 = 0;
    do
    {
      result = (float *)this[3];
      LODWORD(v5) = v4 + this[5];
      v4 += 984;
      result[v3++] = v5;
    }
    while ( v3 < this[2] );
  }
  for ( i = 0; i < this[2]; ++i )
  {
    for ( j = i; j < this[2]; ++j )
    {
      v8 = this[3];
      v9 = *(float *)(v8 + 4 * i);
      result = *(float **)(v8 + 4 * j);
      if ( *(float *)(LODWORD(v9) + 96) * *(double *)(LODWORD(v9) + 64)
         - *(float *)(LODWORD(v9) + 88) * *(double *)(LODWORD(v9) + 72) > result[24] * *((double *)result + 8)
                                                                        - result[22] * *((double *)result + 9) )
      {
        *(unsigned long *)(v8 + 4 * i) = result;
        result = (float *)this[3];
        result[j] = v9;
      }
    }
  }
  return result;
}

void  sub_4340F0()
{
  int v2; 
  unsigned long *v3; 
  unsigned long *v4; 
  int v5; 
  int v6; 
  unsigned long ***v7; 
  unsigned long *v8; 
  unsigned long *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned long *v19; 
  unsigned long *v20; 
  unsigned long *v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 

  v2 = *(unsigned long *)(this + 40);
  v3 = **(unsigned long ***)v2;
  **(unsigned long **)v2 = *(unsigned long *)v2;
  *(unsigned long *)(*(unsigned long *)v2 + 4) = *(unsigned long *)v2;
  *(unsigned long *)(v2 + 4) = 0;
  if ( v3 != *(unsigned long **)v2 )
  {
    do
    {
      v4 = (unsigned long *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != *(unsigned long **)v2 );
  }
  v5 = 0;
  v24 = 0;
  if ( *(int *)(this + 8) > 0 )
  {
    v6 = 0;
    v22 = 0;
    do
    {
      v7 = *(unsigned long ****)(v6 + *(unsigned long *)(this + 20) + 8);
      v20 = v7;
      if ( v7 )
      {
        if ( (int)v7[1] > 0 )
        {
          v8 = **v7;
          if ( v8 != *v7 )
          {
            do
            {
              v9 = *(unsigned long **)(this + 40);
              v19 = (unsigned long *)*v9;
              v10 = sub_426520((unsigned long *)*v9, *(unsigned long **)(*v9 + 4), v8 + 2);
              v11 = v9[1];
              if ( v11 == 357913940 )
                std::_Xlength_error("list<T> too long");
              v9[1] = v11 + 1;
              v19[1] = v10;
              **(unsigned long **)(v10 + 4) = v10;
              v8 = (unsigned long *)*v8;
            }
            while ( v8 != (unsigned long *)*v20 );
            v6 = v22;
            v5 = v24;
          }
        }
      }
      ++v5;
      v6 += 984;
      v24 = v5;
      v22 = v6;
    }
    while ( v5 < *(unsigned long *)(this + 8) );
  }
  v12 = *(unsigned long *)(this + 8);
  v13 = 0;
  if ( v12 > 0 )
  {
    v14 = 0;
    v15 = 1;
    v25 = 0;
    v23 = 1;
    do
    {
      v21 = (unsigned long *)(*(unsigned long *)(this + 20) + v14);
      v16 = v21[2];
      if ( !v16 || !*(unsigned long *)(v16 + 4) )
      {
        v17 = v15;
        if ( v15 < v12 )
        {
          v18 = *(unsigned long *)(this + 20) + v25 + 992;
          while ( !*(unsigned long *)v18 || !*(unsigned long *)(*(unsigned long *)v18 + 4) )
          {
            ++v17;
            v18 += 984;
            if ( v17 >= v12 )
              goto LABEL_24;
          }
          sub_433490(
            v21,
            *(unsigned long *)(this + 20) + 984 * v17,
            *(unsigned long long *)(this + 160),
            *(unsigned long *)(this + 16),
            *(unsigned long *)(this + 24));
          *(unsigned long *)(*(unsigned long *)(this + 32) + 4 * v13) = *(unsigned long *)(*(unsigned long *)(this + 32) + 4 * v17);
LABEL_24:
          v15 = v23;
        }
        v12 = *(unsigned long *)(this + 8);
        if ( v17 == v12 )
          break;
      }
      ++v13;
      ++v15;
      v14 = v25 + 984;
      v23 = v15;
      v25 += 984;
    }
    while ( v13 < *(unsigned long *)(this + 8) );
  }
  *(unsigned long *)(this + 8) = v13;
}

double  sub_434290( int a2)
{
  int v2; 
  double v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  int v8; 
  unsigned long *v9; 
  unsigned long **v10; 
  int v11; 
  double v12; 
  double v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  long long v24; 
  int v25; 
  long long v26; 
  int v27; 
  long long v28; 
  int v29; 
  long long v30; 
  int v31; 
  int v32; 

  v2 = this[2];
  v3 = 0.0;
  v4 = 0.0;
  v19 = 0.0;
  v5 = 0.0;
  v22 = 0.0;
  v6 = 0.0;
  v20 = 0.0;
  v7 = 0.0;
  v8 = *(unsigned long *)(v2 + 4);
  v23 = 0.0;
  v21 = 0.0;
  v9 = **(unsigned long ***)v2;
  if ( v9 != *(unsigned long **)v2 )
  {
    v10 = *(unsigned long ***)v2;
    do
    {
      v11 = v9[2] << 6;
      v9 = (unsigned long *)*v9;
      v12 = *(float *)(v11 + a2 + 32);
      v13 = *(float *)(v11 + a2 + 36);
      v3 = v3 + v12;
      v5 = v5 + v13;
      v6 = v6 + v12 * v12;
      v7 = v7 + v13 * v13;
      v4 = v4 + v13 * v12;
    }
    while ( v9 != v10 );
    v23 = v7;
    v21 = v4;
    v20 = v6;
    v22 = v5;
    v19 = v3;
  }
  v31 = 0;
  v30 = 0i64;
  LODWORD(v30) = &CMyMatrix::`vftable`;
  DWORD2(v30) = 0;
  sub_403EE0(&v30);
  HIDWORD(v30) = 2;
  v31 = 2;
  DWORD2(v30) = cvCreateMat(2, 2, 5);
  DWORD1(v30) = *(unsigned long *)(DWORD2(v30) + 16);
  v32 = 0;
  v26 = 0i64;
  v27 = 0;
  LODWORD(v26) = &CMyMatrix::`vftable`;
  DWORD2(v26) = 0;
  sub_403EE0(&v26);
  HIDWORD(v26) = 2;
  v27 = 1;
  DWORD2(v26) = cvCreateMat(2, 1, 5);
  DWORD1(v26) = *(unsigned long *)(DWORD2(v26) + 16);
  LOBYTE(v32) = 1;
  v28 = 0i64;
  v29 = 0;
  LODWORD(v28) = &CMyMatrix::`vftable`;
  DWORD2(v28) = 0;
  sub_403EE0(&v28);
  HIDWORD(v28) = 2;
  v29 = 2;
  DWORD2(v28) = cvCreateMat(2, 2, 5);
  DWORD1(v28) = *(unsigned long *)(DWORD2(v28) + 16);
  LOBYTE(v32) = 2;
  v24 = 0i64;
  v25 = 0;
  LODWORD(v24) = &CMyMatrix::`vftable`;
  DWORD2(v24) = 0;
  sub_403EE0(&v24);
  HIDWORD(v24) = 2;
  v25 = 2;
  v14 = (double)v8;
  DWORD2(v24) = cvCreateMat(2, 2, 5);
  DWORD1(v24) = *(unsigned long *)(DWORD2(v24) + 16);
  v15 = (v20 - v19 / v14 * (v19 / v14) * v14) / v14;
  *(float *)DWORD1(v30) = v15;
  v16 = (v21 - v14 * v19 / v14 * v22 / v14) / v14;
  *(float *)(DWORD1(v30) + 4) = v16;
  *(float *)(DWORD1(v30) + 4 * v31) = v16;
  *(float *)(DWORD1(v30) + 4 * v31 + 4) = (v23 - v22 / (double)v8 * (v22 / (double)v8) * (double)v8) / (double)v8;
  cvSVD(DWORD2(v30), DWORD2(v26), DWORD2(v28), DWORD2(v24), 0);
  v17 = *(double *)libm_sse2_atan_precise().m128_u64;
  sub_403E70(&v24);
  LOBYTE(v32) = 1;
  sub_403E70(&v28);
  LOBYTE(v32) = 0;
  sub_403E70(&v26);
  v32 = -1;
  sub_403E70(&v30);
  return v17 * 180.0 / 3.141592653589793;
}

void  sub_4345E0(int a1, int a2, int a3@<esi>, int a4, int a5, int a6, int a7)
{
  int v8; 
  unsigned int *v9; 
  unsigned long **v10; 
  unsigned int *v11; 
  unsigned long **v12; 
  unsigned long *v13; 
  unsigned int *v14; 
  int v15; 
  double v16; 
  int v17; 
  double v18; 
  int v19; 
  int v20; 
  unsigned int *v21; 
  int v22; 
  int v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  int v27; 
  int v28; 
  __m128 v29; 
  __m128 v30; 
  double v31; 
  double v32; 
  unsigned int v33; 
  int v34; 
  float v35; 
  float v36; 
  int v39; 
  double v40; 
  int v41; 
  int v42; 

  v8 = *(unsigned long *)(a1 + 8);
  if ( v8 )
    v8 = *(unsigned long *)(v8 + 4);
  v41 = v8;
  v9 = (unsigned int *)operator new[](8 * (v8 + 1));
  v10 = *(unsigned long ***)(a1 + 8);
  v11 = v9;
  v12 = (unsigned long **)*v10;
  v13 = (unsigned long *)**v10;
  if ( v13 != v12 )
  {
    v14 = v9;
    do
    {
      v14 += 2;
      *(v14 - 2) = *(unsigned long *)((v13[2] << 6) + a7 + 32);
      *(v14 - 1) = *(unsigned long *)((v13[2] << 6) + a7 + 36);
      v13 = (unsigned long *)*v13;
    }
    while ( v13 != **(unsigned long ***)(a1 + 8) );
    v11 = v9;
  }
  v15 = (_int)libm_sse2_cos_precise(a2, a3);
  v40 = v15.m128d_f64[0];
  v39 = _mm_unpacklo_pd(v15, v15);
  v16 = *(double *)libm_sse2_sin_precise().m128_u64;
  v17 = v41;
  v18 = v16;
  a4.m128d_f64[0] = v16;
  v19 = 0;
  v20 = _mm_unpacklo_pd(a4, a4);
  if ( v41 > 0 )
  {
    if ( (unsigned int)v41 >= 4 )
    {
      v42 = v41 - v41 % 4;
      v21 = v11 + 1;
      do
      {
        v19 += 4;
        v22 = _mm_sub_pd(_mm_cvtps_pd(_mm_unpacklo_ps((__m128)*(v21 - 1), (__m128)v21[1])), (_int)0i64);
        v23 = _mm_sub_pd(_mm_cvtps_pd(_mm_unpacklo_ps((__m128)*v21, (__m128)v21[2])), (_int)0i64);
        v24 = _mm_cvtpd_ps(_mm_add_pd(_mm_sub_pd(_mm_mul_pd(v39, v22), _mm_mul_pd(v20, v23)), (_int)0i64));
        *(v21 - 1) = v24.m128_i32[0];
        v21[1] = _mm_shuffle_ps(v24, v24, 229).m128_u32[0];
        v25 = _mm_cvtpd_ps(_mm_add_pd(_mm_add_pd(_mm_mul_pd(v39, v23), _mm_mul_pd(v20, v22)), (_int)0i64));
        v26 = (__m128)v21[3];
        *v21 = v25.m128_i32[0];
        v21[2] = _mm_shuffle_ps(v25, v25, 229).m128_u32[0];
        v27 = _mm_sub_pd(_mm_cvtps_pd(_mm_unpacklo_ps(v26, (__m128)v21[5])), (_int)0i64);
        v28 = _mm_sub_pd(_mm_cvtps_pd(_mm_unpacklo_ps((__m128)v21[4], (__m128)v21[6])), (_int)0i64);
        v29 = _mm_cvtpd_ps(_mm_add_pd(_mm_sub_pd(_mm_mul_pd(v27, v39), _mm_mul_pd(v28, v20)), (_int)0i64));
        v21[3] = v29.m128_i32[0];
        v21[5] = _mm_shuffle_ps(v29, v29, 229).m128_u32[0];
        v30 = _mm_cvtpd_ps(_mm_add_pd(_mm_add_pd(_mm_mul_pd(v28, v39), _mm_mul_pd(v27, v20)), (_int)0i64));
        v21[4] = v30.m128_i32[0];
        v21[6] = _mm_shuffle_ps(v30, v30, 229).m128_u32[0];
        v21 += 8;
      }
      while ( v19 < v42 );
    }
    for ( ; v19 < v17; ++v19 )
    {
      v31 = *(float *)&v11[2 * v19] - 0.0;
      v32 = *(float *)&v11[2 * v19 + 1] - 0.0;
      *(float *)&v33 = v31 * v40 - v32 * v18 + 0.0;
      v11[2 * v19] = v33;
      *(float *)&v11[2 * v19 + 1] = v31 * v18 + v32 * v40 + 0.0;
    }
  }
  v34 = 0;
  for ( *(unsigned long long *)(a1 + 968) = xmmword_43A370; v34 < v17; ++v34 )
  {
    v35 = *(float *)&v11[2 * v34];
    if ( *(double *)(a1 + 968) > v35 )
      *(double *)(a1 + 968) = v35;
    v36 = *(float *)&v11[2 * v34];
    if ( v36 > *(double *)(a1 + 976) )
      *(double *)(a1 + 976) = v36;
  }
  operator delete[](v11);
}

void  sub_4348C0( long long a2, int a3)
{
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned long *v8; 
  unsigned long *v9; 
  int v10; 

  v4 = this[2];
  if ( v4 )
  {
    v5 = *(unsigned long *)(v4 + 4);
    if ( v5 >= 3 )
    {
      v6 = (int)(this + 12);
      sub_4317E0((int)(this + 12), v5);
      v7 = this[14];
      v8 = *(unsigned long **)this[2];
      v9 = (unsigned long *)*v8;
      if ( (unsigned long *)*v8 != v8 )
      {
        do
        {
          v7 += 8;
          *(unsigned long *)(v7 - 8) = *(unsigned long *)((v9[2] << 6) + a3 + 32);
          *(unsigned long *)(v7 - 4) = *(unsigned long *)((v9[2] << 6) + a3 + 36);
          v9 = (unsigned long *)*v9;
        }
        while ( v9 != *(unsigned long **)this[2] );
        v6 = (int)(this + 12);
      }
      v10 = 4;
      if ( v5 >= 10 )
      {
        if ( v5 >= 20 )
        {
          if ( v5 < 30 )
            v10 = 3;
        }
        else
        {
          v10 = 2;
        }
      }
      else
      {
        v10 = 1;
      }
      sub_42BE00(v6, 0.0, a2, v10);
      sub_42D210(v6, v5);
    }
  }
}

double  sub_434990( int a2, int a3)
{
  int v3; 
  double v4; 
  unsigned long *v5; 
  unsigned long *v6; 
  int v7; 
  int v8; 
  double result; 

  v3 = *(unsigned long *)(this + 8);
  v4 = 0.0;
  v5 = *(unsigned long **)v3;
  v6 = **(unsigned long ***)v3;
  if ( (unsigned long *)*v5 != v5 )
  {
    do
    {
      v7 = v6[2];
      v6 = (unsigned long *)*v6;
      v4 = v4 + dword_43E048[(*(unsigned long *)(a3 + 4 * v7) - *(unsigned long *)(a3 + 4 * v7) % dword_501978) / dword_501978];
    }
    while ( v6 != v5 );
    v3 = *(unsigned long *)(this + 8);
  }
  if ( v3 )
    v8 = *(unsigned long *)(v3 + 4);
  else
    v8 = 0;
  result = v4 / (double)v8;
  *(double *)(this + 952) = result;
  return result;
}

double  sub_434A20( int a2)
{
  double v3; 
  unsigned long *v4; 
  unsigned long *v5; 
  int v6; 
  double v8; 

  v3 = 0.0;
  v8 = 0.0;
  v4 = **(unsigned long ***)(this + 8);
  v5 = (unsigned long *)*v4;
  if ( (unsigned long *)*v4 != v4 )
  {
    do
    {
      v6 = v5[2];
      v5 = (unsigned long *)*v5;
      v3 = v3 + (double)*(int *)((v6 << 6) + a2 + 8);
    }
    while ( v5 != v4 );
    v8 = v3;
  }
  return v8 / (*(double *)(this + 912) - *(double *)(this + 904) + 0.1);
}

double  sub_434A80()
{
  int v1; 
  int v2; 

  v1 = *(unsigned long *)(this + 8);
  if ( v1 )
    v2 = *(unsigned long *)(v1 + 4);
  else
    v2 = 0;
  return (float)((sub_42D210(this + 48, this) - *(double *)(this + 952) / 5.0) * (double)v2);
}

void  sub_434AE0( int a2)
{
  unsigned long **v2; 
  unsigned long *v3; 
  unsigned long *v4; 

  v2 = (unsigned long **)this[2];
  if ( v2 )
  {
    v3 = *v2;
    v4 = (unsigned long *)*v3;
    if ( (unsigned long *)*v3 != v3 )
    {
      do
      {
        *(unsigned char *)((v4[2] << 6) + a2 + 12) = 1;
        v4 = (unsigned long *)*v4;
      }
      while ( v4 != *(unsigned long **)this[2] );
    }
  }
}

unsigned long * sub_434B20( int a2)
{
  *this = &CLMInformation::`vftable`;
  this[24] = 0;
  this[25] = 0;
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  this[29] = 0;
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  this[38] = 0;
  this[39] = 0;
  this[40] = 0;
  this[41] = 0;
  this[42] = 0;
  this[43] = 0;
  this[44] = 0;
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  this[48] = 0;
  this[49] = 0;
  this[50] = 0;
  this[51] = a2;
  return this;
}

void  sub_434C30()
{
  void ( ***v2)(unsigned long, unsigned long); 
  void ( ***i)(unsigned long, unsigned long); 

  *(unsigned long *)this = &CDocument::`vftable`;
  v2 = (void ( ***)(unsigned long, unsigned long))*((unsigned long *)this + 2);
  if ( v2 )
  {
    for ( i = (void ( ***)(unsigned long, unsigned long))*((unsigned long *)this + 3); v2 != i; v2 += 14 )
      (**v2)(v2, 0);
    operator delete(*((void **)this + 2));
    *((unsigned long *)this + 2) = 0;
    *((unsigned long *)this + 3) = 0;
    *((unsigned long *)this + 4) = 0;
  }
}

void  sub_434CA0()
{
  int v2; 

  *(unsigned long *)this = &CLMInformation::`vftable`;
  if ( *((unsigned long *)this + 48) )
  {
    operator delete(*((void **)this + 48));
    *((unsigned long *)this + 48) = 0;
    *((unsigned long *)this + 49) = 0;
    *((unsigned long *)this + 50) = 0;
  }
  if ( *((unsigned long *)this + 45) )
  {
    operator delete(*((void **)this + 45));
    *((unsigned long *)this + 45) = 0;
    *((unsigned long *)this + 46) = 0;
    *((unsigned long *)this + 47) = 0;
  }
  if ( *((unsigned long *)this + 42) )
  {
    operator delete(*((void **)this + 42));
    *((unsigned long *)this + 42) = 0;
    *((unsigned long *)this + 43) = 0;
    *((unsigned long *)this + 44) = 0;
  }
  v2 = *((unsigned long *)this + 39);
  if ( v2 )
  {
    sub_417570(v2, *((unsigned long *)this + 40));
    operator delete(*((void **)this + 39));
    *((unsigned long *)this + 39) = 0;
    *((unsigned long *)this + 40) = 0;
    *((unsigned long *)this + 41) = 0;
  }
  if ( *((unsigned long *)this + 36) )
  {
    operator delete(*((void **)this + 36));
    *((unsigned long *)this + 36) = 0;
    *((unsigned long *)this + 37) = 0;
    *((unsigned long *)this + 38) = 0;
  }
  if ( *((unsigned long *)this + 33) )
  {
    operator delete(*((void **)this + 33));
    *((unsigned long *)this + 33) = 0;
    *((unsigned long *)this + 34) = 0;
    *((unsigned long *)this + 35) = 0;
  }
  if ( *((unsigned long *)this + 30) )
  {
    operator delete(*((void **)this + 30));
    *((unsigned long *)this + 30) = 0;
    *((unsigned long *)this + 31) = 0;
    *((unsigned long *)this + 32) = 0;
  }
  if ( *((unsigned long *)this + 27) )
  {
    operator delete(*((void **)this + 27));
    *((unsigned long *)this + 27) = 0;
    *((unsigned long *)this + 28) = 0;
    *((unsigned long *)this + 29) = 0;
  }
  if ( *((unsigned long *)this + 24) )
  {
    operator delete(*((void **)this + 24));
    *((unsigned long *)this + 24) = 0;
    *((unsigned long *)this + 25) = 0;
    *((unsigned long *)this + 26) = 0;
  }
}

void * sub_434E70( char a2)
{
  sub_434C30(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

int  sub_434EA0(unsigned long *a1, int a2, int a3)
{
  int Size; 
  int Image; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  float v10; 
  float v11; 
  int v13; 
  int v14; 
  int v15; 

  Size = cvGetSize(a1);
  Image = cvCreateImage(Size);
  v5 = a1[11];
  v14 = a1[10];
  v15 = Image;
  cvSmooth(a1, Image, 2, a3, a3, 0, 0, 0, 0);
  cvSetZero(a2);
  v13 = v5 - 1;
  if ( v5 - 1 > 1 )
  {
    v6 = 1;
    v7 = v14 - 1;
    v8 = v13;
    do
    {
      v9 = 1;
      if ( v7 > 1 )
      {
        do
        {
          v10 = (float)*(unsigned char *)(a1[17] + v6 * a1[18] + v9);
          v11 = (float)*(unsigned char *)(*(unsigned long *)(Image + 68) + v6 * *(unsigned long *)(Image + 72) + v9);
          if ( v10 > v11 * 0.9 || (float)fabs((float)(v10 - v11)) < 25.5 )
            *(unsigned char *)(v9 + v6 * *(unsigned long *)(a2 + 72) + *(unsigned long *)(a2 + 68)) = 0;
          else
            *(unsigned char *)(v9 + v6 * *(unsigned long *)(a2 + 72) + *(unsigned long *)(a2 + 68)) = -1;
          ++v9;
          v7 = v14 - 1;
        }
        while ( v9 < v14 - 1 );
        v8 = v13;
      }
      ++v6;
    }
    while ( v6 < v8 );
  }
  return cvReleaseImage(&v15);
}

void sub_435000(int* inputImage, int* outputImage, double factor, char flag)
{

  sub_435A50(inputImage, v15, (int)v7);
  sub_435B20(inputImage, (int *)v15, v17, (int)v7);

  if ( flag == 1 )
    sub_435570(inputImage, (int)v7, (int *)v17);
  sub_435770(inputImage, outputImage, NULL, (int *)v13, (int *)v17, v7, factor);
  
}

int  sub_4352D0(int a1, int a2, int *a3, int a4, unsigned long *a5, int a6)
{
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int *v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  bool v28; 
  int *v29; 
  int v30; 
  int v31; 
  int *v32; 
  unsigned long *v33; 
  int v34; 
  bool v35; 
  double v36; 
  int v37; 
  int v38; 
  int *v39; 
  int *v40; 
  int result; 
  int v42; 
  int v43; 
  int *v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 

  v6 = a2;
  v7 = a1;
  v8 = *(unsigned long *)(a4 + 4) - *(unsigned long *)a4;
  a4 = *(unsigned long *)a4;
  v9 = -1;
  v48 = -1;
  v10 = v8 / 40;
  v47 = -1;
  v45 = v8 / 40;
  if ( v8 / 40 > 0 )
  {
    v11 = a4;
    v12 = 0;
    v46 = 0;
    do
    {
      if ( *(unsigned char *)(v12 + v11 + 32) == 1 )
      {
        v13 = (int)*(float *)(v12 + v11);
        v14 = (int)*(float *)(v12 + v11 + 4);
        v15 = v47;
        if ( v13 < v7 )
          v7 = v13;
        if ( v13 > v9 )
          v9 = v13;
        v48 = v9;
        if ( v14 < v6 )
          v6 = v14;
        if ( v14 > v47 )
          v15 = v14;
        v16 = (int)*(float *)(v46 + a4 + 16);
        v17 = (int)*(float *)(v46 + a4 + 20);
        v9 = v48;
        if ( v16 < v7 )
          v7 = (int)*(float *)(v46 + a4 + 16);
        if ( v16 > v48 )
          v9 = (int)*(float *)(v46 + a4 + 16);
        v10 = v45;
        v48 = v9;
        if ( v17 < v6 )
          v6 = v17;
        if ( v17 > v15 )
          v15 = v17;
        v12 = v46;
        v47 = v15;
        v11 = a4;
      }
      v12 += 40;
      --v10;
      v46 = v12;
      v45 = v10;
    }
    while ( v10 );
  }
  v18 = (a3[3] - a3[2]) / 56;
  v43 = v18;
  if ( v18 > 0 )
  {
    v19 = (int *)(a3[2] + 8);
    v44 = v19;
    do
    {
      v20 = *v19;
      v21 = v19[1] - *v19;
      v42 = v20;
      v46 = v21 >> 5;
      if ( v21 >> 5 > 0 )
      {
        v22 = 0;
        v45 = 0;
        a3 = (int *)(v20 + 8);
        do
        {
          a4 = (*(unsigned long *)(v20 + v22 + 12) - *(unsigned long *)(v20 + v22 + 8)) / 40;
          if ( a4 > 0 )
          {
            v23 = 0;
            v24 = *a3;
            v48 = *a3;
            do
            {
              v25 = (int)*(double *)(v23 + v24 + 8);
              v23 += 40;
              v26 = (int)*(double *)(v23 + v24 - 24);
              if ( v25 < v7 )
                v7 = v25;
              if ( v25 > v9 )
                v9 = v25;
              v27 = v47;
              if ( v26 < v6 )
                v6 = v26;
              if ( v26 > v47 )
                v27 = v26;
              v28 = a4-- == 1;
              v24 = v48;
              v47 = v27;
            }
            while ( !v28 );
            v48 = v9;
          }
          a3 += 8;
          v22 = v45 + 32;
          v28 = v46-- == 1;
          v20 = v42;
          v45 += 32;
        }
        while ( !v28 );
        v18 = v43;
      }
      v19 = v44 + 14;
      --v18;
      v44 += 14;
      v43 = v18;
    }
    while ( v18 );
  }
  v29 = (int *)&a3;
  a3 = 0;
  a4 = v7 - a6;
  if ( v7 - a6 >= 0 )
    v29 = &a4;
  v30 = v6 - a6;
  v31 = *v29;
  v32 = (int *)&a3;
  if ( v30 >= 0 )
    v32 = &a4;
  a4 = v30;
  v33 = a5;
  v34 = v47 + a6;
  a3 = 0;
  a3 = (int *)*v32;
  a6 += v48;
  v35 = a1 - 1 < a6;
  v42 = a2 - 1;
  a4 = a1 - 1;
  v43 = v34;
  v36 = (double)(int)a3;
  *a5 = (int)((double)v31 * 0.9);
  v37 = (int)(v36 * 0.9);
  v38 = _mm_cvtsi32_si128(a1 - 1);
  v33[1] = v37;
  v39 = &a4;
  if ( !v35 )
    v39 = &a6;
  v33[2] = (int)((double)(*v39 - v31 + 1) * 0.9 + _mm_cvtepi32_pd(v38).m128d_f64[0] * 0.09999999999999998);
  v40 = &v42;
  if ( a2 - 1 >= v34 )
    v40 = &v43;
  result = (int)((double)(*v40 - (int)a3 + 1) * 0.9 + (double)(a2 - 1) * 0.09999999999999998);
  v33[3] = result;
  return result;
}

int  sub_435570(int a1, int a2, int *a3)
{
  int v3; 
  int v4; 
  long long v5; 
  long long v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 
  int v11; 
  int v12; 
  unsigned long long v13; 
  unsigned long long v14; 
  long long v15; 
  unsigned int v16; 

  v16 = 0;
  v3 = *a3;
  if ( (a3[1] - *a3) / 40 )
  {
    v4 = 0;
    do
    {
      v13 = _mm_loadu_si128((const int *)(v4 + v3)).m128i_u64[0];
      v14 = _mm_loadu_si128((const int *)(v4 + v3 + 16)).m128i_u64[0];
      v15 = *(unsigned long long *)(v4 + v3 + 32);
      rand();
      rand();
      rand();
      if ( (unsigned char)v15 == 1 )
      {
        v5 = xmmword_43A280;
        v6 = 0i64;
      }
      else
      {
        v6 = xmmword_43A280;
        v5 = 0i64;
      }
      cvLine(
        a1,
        (int)*(float *)&v13,
        (int)*((float *)&v13 + 1),
        (int)*(float *)&v14,
        (int)*((float *)&v14 + 1),
        v6,
        DWORD1(v6),
        DWORD2(v6),
        HIDWORD(v6),
        v5,
        DWORD1(v5),
        DWORD2(v5),
        HIDWORD(v5),
        8,
        8,
        0);
      ++v16;
      v4 += 40;
      v3 = *a3;
    }
    while ( v16 < (a3[1] - *a3) / 40 );
  }
  v7 = 0;
  v8 = *(unsigned long *)(a2 + 12) - *(unsigned long *)(a2 + 8);
  v9 = (int)((unsigned long long)(2454267027i64 * v8) >> 32) >> 5;
  result = v8 / 56;
  if ( v8 / 56 > 0 )
  {
    v11 = 0;
    do
    {
      sub_425440(v11 + *(unsigned long *)(a2 + 8), v9, a1);
      v12 = *(unsigned long *)(a2 + 12) - *(unsigned long *)(a2 + 8);
      ++v7;
      v11 += 56;
      v9 = (int)((unsigned long long)(2454267027i64 * v12) >> 32) >> 5;
      result = v12 / 56;
    }
    while ( v7 < v12 / 56 );
  }
  return result;
}

int  sub_435770(int a1, int a2, int *a3, int *a4, int *a5, int *a6, double a7)
{
  int *v7; 
  double v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned long long *v15; 
  long long Size; 
  long long v17; 
  int v18; 
  bool v19; 
  long long v20; 
  long long v21; 
  int *v22; 
  int v23; 
  int v24; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  double v30[3]; 
  long long v31; 
  long long v32; 
  unsigned long long v33; 
  char v34[268]; 
  int v35; 

  v7 = a4;
  LODWORD(v33) = a4;
  sub_403F00(v34, "Run - Parameter Estimation & Dewarping");
  v35 = 0;
  v8 = *(double *)libm_sse2_sqrt_precise(v26, v27, v28, v29).m128_u64;
  v9 = 0;
  v30[1] = v8 * 150.0;
  v30[0] = v8 * 200.0;
  v30[2] = 3.402823466385289e38;
  v31 = xmmword_43A890;
  v32 = 0x3FF0000000000000i64;
  do
  {
    v10 = v7[1];
    v11 = *v7;
    v12 = v10 - *v7 + 7;
    v13 = 0;
    v14 = v12 >> 3;
    v15 = (unsigned long long *)v11;
    if ( v11 > v10 )
      v14 = 0;
    if ( v14 )
    {
      do
      {
        ++v13;
        *v15++ = 0i64;
      }
      while ( v13 != v14 );
    }
    *(unsigned long long *)(v11 + 64) = 0x3FF0000000000000i64;
    Size = cvGetSize(a1);
    v7 = (int *)v33;
    sub_4363E0(Size, a6, a5, (int *)v33);
    v17 = cvGetSize(a1);
    sub_436030(v17, a6, a5, v7, v30[v9], *(double *)((char *)&v31 + v9 * 8));
    ++v9;
  }
  while ( v9 < 3 );
  v20 = cvGetSize(a1);
  v18 = v20;
  v19 = (int)v20 < SHIDWORD(v20);
  LODWORD(v20) = (char *)&v33 + 4;
  v33 = __PAIR64__(HIDWORD(v20), v18);
  if ( !v19 )
    LODWORD(v20) = &v33;
  sub_425550(
    v18,
    SHIDWORD(v20),
    (int)a6,
    a5,
    (double)v18 * 0.5,
    (double)SHIDWORD(v20) * 0.5,
    *v7,
    (double)*(int *)v20 * *(double *)(*v7 + 64),
    *(double *)&qword_43E0E8,
    a7);
  v21 = cvGetSize(a2);
  sub_4352D0(v21, SHIDWORD(v21), a6, (int)a5, a3, 25);
  v22 = (int *)(a1 + 40);
  v23 = _mm_cvtsi32_si128(*(unsigned long *)(a1 + 40));
  if ( *(unsigned long *)(a1 + 40) < *(unsigned long *)(a1 + 44) )
    v22 = (int *)(a1 + 44);
  v24 = _mm_loadu_si128(a3);
  sub_425F90(
    a1,
    a2,
    v24.m128i_i32[0],
    v24.m128i_i32[1],
    v24.m128i_i32[2],
    v24.m128i_i32[3],
    _mm_cvtepi32_pd(v23).m128d_f64[0] * 0.5,
    (double)*(int *)(a1 + 44) * 0.5,
    *v7,
    (double)*v22 * *(double *)(*v7 + 64),
    *(double *)&qword_43E0E8,
    a7);
  v35 = -1;
  return sub_403F40(v34);
}

int  sub_435A50(int a1, unsigned long *a2, int a3)
{
  int Size; 
  double v4; 
  int Image; 
  char v7[264]; 
  int v8; 

  sub_403F00(v7, "Run - Line Segment Detection");
  v8 = 0;
  Size = cvGetSize(a1);
  Image = cvCreateImage(Size);
  v4 = cvCvtColor(a1, Image, 6);
  sub_416880(v4, Image, a2, *(double *)(a3 + 24) * 4.0);
  cvReleaseImage(&Image);
  v8 = -1;
  return sub_403F40(v7);
}

unsigned int  sub_435B20(int a1, int *a2, unsigned long *a3, int a4)
{
  int v4; 
  unsigned int v5; 
  double v6; 
  unsigned int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  signed int v12; 
  float v13; 
  double v14; 
  int v15; 
  double v16; 
  double v17; 
  double v18; 
  float v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  float v25; 
  float v26; 
  float v27; 
  int v28; 
  int v29; 
  double v30; 
  int v31; 
  int v32; 
  long long v33; 

  v4 = *a2;
  v5 = 0;
  v6 = *(double *)(a4 + 24) * 6.0;
  v24 = 0;
  v30 = v6;
  v20 = a1;
  result = (a2[1] - *a2) / 40;
  if ( result )
  {
    v8 = 0;
    v29 = 0;
    do
    {
      v9 = _mm_loadu_si128((const int *)(v8 + v4 + 16));
      v33 = *(unsigned long long *)(v8 + v4 + 32);
      v32 = v9;
      LOBYTE(v33) = 1;
      v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
      v10 = _mm_loadu_si128((const int *)(v8 + v4));
      v11 = (int)(*(double *)(v8 + v4 + 24) / v6);
      v31 = v10;
      v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
      v28 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
      v26 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_srli_si128(v9, 4)));
      if ( v11 < 2 )
      {
        sub_4214D0(a3, &v31);
        v6 = v30;
      }
      else
      {
        v12 = 0;
        v13 = *(float *)&v28;
        v14 = (double)v11;
        do
        {
          v15 = _mm_cvtsi32_si128(v12++);
          *(double *)v15.m128i_i64 = _mm_cvtepi32_pd(v15).m128d_f64[0] / v14;
          v16 = 1.0 - *(double *)v15.m128i_i64;
          v17 = v25 * (1.0 - *(double *)v15.m128i_i64) + v27 * *(double *)v15.m128i_i64;
          v18 = v13 * *(double *)v15.m128i_i64;
          *(double *)v15.m128i_i64 = (double)v12 / v14;
          *(float *)v31.m128i_i32 = v17;
          *(float *)&v31.m128i_i32[1] = v26 * v16 + v18;
          *(float *)v32.m128i_i32 = v25 * (1.0 - *(double *)v15.m128i_i64) + v27 * *(double *)v15.m128i_i64;
          *(float *)&v32.m128i_i32[1] = v26 * (1.0 - *(double *)v15.m128i_i64) + v13 * *(double *)v15.m128i_i64;
          *(float *)&v18 = (float)(*(float *)v32.m128i_i32 + *(float *)v31.m128i_i32) * 0.5;
          v31.m128i_i32[2] = LODWORD(v18);
          *(float *)&v18 = (float)(*(float *)&v32.m128i_i32[1] + *(float *)&v31.m128i_i32[1]) * 0.5;
          v31.m128i_i32[3] = LODWORD(v18);
          v19 = *(double *)libm_sse2_sqrt_precise(v20, v21, v22, v23).m128_u64;
          *(double *)&v32.m128i_i64[1] = v19;
          sub_4214D0(a3, &v31);
          v14 = (double)v11;
          v13 = *(float *)&v28;
        }
        while ( v12 < v11 );
        v6 = v30;
        v8 = v29;
        v5 = v24;
      }
      ++v5;
      v8 += 40;
      v24 = v5;
      v29 = v8;
      v4 = *a2;
      result = (a2[1] - *a2) / 40;
    }
    while ( v5 < result );
  }
  return result;
}

int  sub_435DD0(int a1, int a2, unsigned long *a3)
{
  int Size; 
  int v4; 
  unsigned long *Image; 
  int v7; 
  char v8[264]; 
  int v9[34]; 
  int v10; 

  sub_403F00(v8, "Run - Text Line Detection");
  v10 = 0;
  Size = cvGetSize(a2);
  Image = (unsigned long *)cvCreateImage(Size);
  v4 = cvGetSize(a2);
  v7 = cvCreateImage(v4);
  cvCvtColor(a2, Image, 6);
  sub_434EA0(Image, v7, 31);
  
  
  
  cvReleaseImage(&Image);
  cvReleaseImage(&v7);
  
  return sub_403F40(v8);
}

void  sub_436030(long long a1, unsigned long *a2, unsigned long *a3, int *a4, double a5, double a6)
{
  void *v6; 
  long long v7[26]; 
  int v8[4]; 
  long long v9; 
  int v10; 
  void *v11[2]; 
  int v12; 
  int v13; 

  memset(v7, 0, sizeof(v7));
  sub_434B20(v7, 10);
  LODWORD(v7[0]) = &CLMInformation1P::`vftable`;
  *(double *)&v7[4] = (double)(int)a1 * 0.5;
  *(double *)&v7[5] = (double)SHIDWORD(a1) * 0.5;
  v7[7] = 0x408F400000000000i64;
  v7[6] = a1;
  v13 = 1;
  v11[0] = 0;
  v11[1] = 0;
  v12 = 0;
  sub_404F90(a2, v11);
  sub_405120(a2, v7, (unsigned long **)v11);
  sub_404D80(v7, a3);
  sub_4172E0(v7);
  sub_41DA90((int)v7, *a4, 4, *(double *)&qword_43E0E8);
  if ( SHIDWORD(v7[2]) >= 4 )
  {
    *(unsigned long long *)v8 = 0i64;
    v9 = 0i64;
    v10 = 0;
    sub_411000(
      v8,
      (LODWORD(v7[20]) - HIDWORD(v7[19])) / 12 + LODWORD(v7[1]) + 10,
      HIDWORD(v7[2]) + 1 + LODWORD(v7[2]) + LODWORD(v7[3]) + HIDWORD(v7[3]),
      4);
    v6 = (void *)*a4;
    LOBYTE(v13) = 3;
    sub_416640((int)v8, v6);
    v8[3] = a1;
    *(unsigned long long *)&v9 = __PAIR64__(v7, HIDWORD(a1));
    sub_416680(v8);
    sub_40D630((int)v8, (char *)*a4, 10);
    sub_4122B0(v8, (int)a2, a2, (unsigned long **)v11, a3, a5, a6);
    LOBYTE(v13) = 1;
    sub_411070(v8);
  }
  else
  {
    sub_419BD0((int)v7, *a4, 4, qword_43E0E8);
    *(unsigned long long *)v8 = 0i64;
    v9 = 0i64;
    v10 = 0;
    sub_407850(
      v8,
      LODWORD(v7[1]) + 10,
      LODWORD(v7[3]) + HIDWORD(v7[3]) + (LODWORD(v7[17]) - HIDWORD(v7[16])) / 24 + LODWORD(v7[2]) + 1,
      4);
    LOBYTE(v13) = 2;
    sub_416640((int)v8, (void *)*a4);
    v8[3] = a1;
    *(unsigned long long *)&v9 = __PAIR64__(v7, HIDWORD(a1));
    sub_40C4E0(v8);
    sub_40D630((int)v8, (char *)*a4, 10);
    sub_4089A0(v8, (int)a2, (unsigned long **)v11, a3, a5, a6);
    LOBYTE(v13) = 1;
    sub_4078C0(v8);
  }
  if ( v11[0] )
  {
    operator delete(v11[0]);
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
  }
  sub_434CA0(v7);
}

void  sub_4363E0(long long a1, unsigned long *a2, unsigned long *a3, int *a4)
{
  int v4; 
  void *v5; 
  long long v6[26]; 
  int v7[4]; 
  long long v8; 
  int v9; 
  void *v10[2]; 
  int v11; 
  int v12; 

  memset(v6, 0, sizeof(v6));
  sub_434B20(v6, 10);
  LODWORD(v6[0]) = &CLMInformation1P::`vftable`;
  *(double *)&v6[4] = (double)(int)a1 * 0.5;
  *(double *)&v6[5] = (double)SHIDWORD(a1) * 0.5;
  v6[7] = 0x408F400000000000i64;
  v6[6] = a1;
  v12 = 1;
  v10[0] = 0;
  v10[1] = 0;
  v11 = 0;
  sub_404F90(a2, v10);
  sub_405120(a2, v6, (unsigned long **)v10);
  sub_404D80(v6, a3);
  sub_418880((int)v6, (int)a4, (int)a3, *a4, 4, qword_43E0E8);
  v4 = LODWORD(v6[1]) + 10;
  v9 = 0;
  *(unsigned long long *)v7 = 0i64;
  v8 = 0i64;
  sub_40C640(v7, LODWORD(v6[1]) + 10, HIDWORD(v6[3]) + LODWORD(v6[3]) + LODWORD(v6[2]) + 1, 4);
  v5 = (void *)*a4;
  v7[3] = a1;
  *(unsigned long long *)&v8 = __PAIR64__(v6, HIDWORD(a1));
  LOBYTE(v12) = 2;
  sub_416640((int)v7, v5);
  sub_410E70(v7);
  sub_40D630((int)v7, (char *)*a4, v4);
  sub_4172E0(v6);
  LOBYTE(v12) = 1;
  sub_40C6B0(v7);
  if ( v10[0] )
  {
    operator delete(v10[0]);
    v10[0] = 0;
    v10[1] = 0;
    v11 = 0;
  }
  sub_434CA0(v6);
}

void processImage(const char *inputImagePath, const char *outputImagePath, int flag1, int flag2) {
    // Load input image
    int* inputImage = cvLoadImage(inputImagePath, 1);
    if (!inputImage) {
        printf("Failed to load input image: %s\n", inputImagePath);
        return;
    }

    // Create output image
    int* outputImage = cvCreateImage((int)((double)*(int *)(inputImage + 40) * 1.5));
    sub_435000(inputImage, outputImage, 1.5, flag2 != 0);
    cvSaveImage(outputImagePath, outputImage, 0);

    // Optional: Display images
    if (flag1) {
        imshow("Input Image", inputImage);
        imshow("Output Image", outputImage);
        cvWaitKey(0);
        cvDestroyAllWindows();
    }

    // Release images
    cvReleaseImage(&inputImage);
    cvReleaseImage(&outputImage);
}

int main(int argc, const char **argv) {
    if (argc != 5) {
        printf("Usage: app.exe <input image> <rectified image> <flag1> <flag2>\n");
        return 1;
    }

    const char *inputImagePath = argv[1];
    const char *outputImagePath = argv[2];
    int flag1 = atoi(argv[3]);
    int flag2 = atoi(argv[4]);

    processImage(inputImagePath, outputImagePath, flag1, flag2);

    return 0;
}