#pragma once









#define PRINT_INFO	DbgPrint("------------------------------------------------------\n");	\
					DbgPrint("������ް�ȫ��� ����������������> sysydiag.sys\n");					\
					DbgPrint("��Ŀ��ַ:https://github.com/stonedreamforest/re_sysdiag\n");													\
					DbgPrint("��վ:https://github.com/stonedreamforest\n");					\
					DbgPrint("����:Tennn\n");												\
					DbgPrint("------------------------------------------------------\n");









extern SYSDIAG g_sysdiag;

//NTKERNELAPI VOID NTAPI SeDeleteAccessState(
extern NTKERNELAPI  PSHORT NtBuildNumber;





extern PINIT_LIST g_LT;

extern INIT_LIST	g_init_list_A;
extern INIT_LIST	g_init_list_B;
extern INIT_LIST	g_init_list_C;
extern INIT_LIST	g_init_list_D;


extern INIT_FUNTABLE	g_init_ftA;
extern INIT_FUNTABLE	g_init_ftB;
extern INIT_FUNTABLE	g_init_ftC;
extern INIT_FUNTABLE	g_init_ftD;







