#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

#define TRUE 1
#define FALSE 0

// �� ���� 
void First_floor(); // 1�� 
void intro(); // ���丮���� 
void room1(); // 1�� �� 
void room2(); // 2�� �� 
void room3(); // 3�� �� 
void room4(); // 4�� �� 
void toiletroom(); // ����ȭ��� 
void bathroom(); // ��� 
void ghostroom(); // ???
void restaurant(); // �Ĵ� 
void hallway(); // ���� 
void Healthroom(); // ���ǽ� 
void realescape(); // Ż�ⱸ 
void ending(); // ���� 
void underground(); //���Ͻ�
void weapon(); // ����â�� 
void housetruth(); // ���� ���� 
 
// ������ 
void stove(); // ȭ�� 
void frame(); //���� 
void shutter(); // ����(ö��) 
void gun(); // ��
void shutter_pw(); // ���� ��й�ȣ 
void mirror_pw(); // �ſ� ��� 
void weapon_pw(); // �� ���
void bathroom_pw(); // ��� ��� 
void bed(); // ħ�� 
void pillow(); // ���� 
void pot(); // ����
void fryingpan(); // �Ķ����� 
void medicine(); // ��ǰ 
void syringe(); // �ֻ�� 
void ghost(); // �ͽ� 
void usedgun(); // �� ��� �Լ� 
void usedmedicine(); // ��ǰ ��� �Լ� 
void usedsyringe(); // �ֻ�� ��� �Լ� 
void conversation(); // �ͽ� ��ȭ 
void ghost_pw(); // �ͽ� ��Ʈ ��� 
void ghost_hint(); // �ͽ� ��Ʈ �Լ� 
void safe(); // �ݰ� 

// ������ �ļ� ���� 
int Gunbroken = FALSE; // �� �ļ� 
int Syringebroken = FALSE; // �ֻ�� �ļ� 
int Medicineborken = FALSE; // �� �ļ�
int Fryingpanbroken = FALSE; // �Ķ����� �ļ�
int Potbroken = FALSE; // ���� �ļ� 
int Basinbroken = FALSE; // ����� �ļ�
int Toiletbroken = FALSE; // ���� �ļ�
int Mirrorbroken = FALSE; // �ſ� �ļ�
int Framebroken = FALSE; // ���� �ļ�
int Bedbroken = FALSE; // ħ�� �ļ�
int Pillowbroken = FALSE; // ��� �ļ�
int Truthbroken = FALSE; // ������ ���� �ļ� 

// ������ ���� 
int getSilverkey = FALSE; // ���� ���� ȹ�� 
int getSoilkey = FALSE; // ������ �� ���� ȹ��
int getGun = FALSE; // �� ȹ��
int getmedicine = FALSE; // ��ǰ ȹ�� 
int getsyringe = FALSE; // �ֻ�� ȹ�� 
int openshutter = FALSE; // ����(ö��) ���� ���� 
int openmirror = FALSE; // ȭ��� ��й�ȣ ���� ���� 
int openweapon = FALSE; // ����â�� ��й�ȣ ���� ����
int openbathroom = FALSE; // ��� ��й�ȣ ���� ���� 
int openghost = FALSE; // �ͽ� ��й�ȣ ���� ���� 
int opensafe = FALSE; // �ݰ� ���� ���� 
int getTruth = FALSE; // ������ ���� ȹ�� ���� 

int main(){
	int play;
	
	while(1){
		printf("ESCAPE THE HOUSE\n\n");
		printf("PLAY?\n\n");
		printf("1. YES\n");
		printf("0. NO\n\n");
		printf(">> ");
		
		scanf("%d", &play);
		
		switch(play){
			case 1 : 
				intro();
				First_floor();
				break;
			case 0 : 
				return 0;
			default:
				printf("\n\n�߸� �Է�\n\n");
				break;
		}
	}
	
}

void intro(){
	system("cls");
	printf("\n\n");
	printf("�ڰ� �Ͼ�� ���� ���̴� ���� ���� ���ο� ������ �ִ����� �� ��� �����̾���.\n\n");
	Sleep(1500);
	printf("���� �� ����� �Ű���?\n\n");
	Sleep(1500);
	printf("�и� ������ �� �ڰ� �־��µ�...\n\n");
	Sleep(1500);
	printf("�������� ���� ������ �������� ���� �°� ��� �Բ� �ְ�ħ���˷� ����ϰ� �� ���̴�.\n\n");
	Sleep(2500);
	printf("�׷��� �ϱ� ���ؼ� �켱 �� ������ ���������� �Ѵ�.\n\n");
	Sleep(1500);
	system("pause");
}

void ending(){
	system("cls");
	printf("\n\n");
	printf("�� ������ ���� Ż���ϴµ� �����ߴ�.\n\n");
	Sleep(1500);
	printf("���� Ż���ϰ� ���� �� ���� �Ű��ϱ� ���� �������� ����.\n\n");
	Sleep(2500);
	printf("������ Ż�� �� �� ���� ������־���.\n\n");
	Sleep(1500);
	printf("������ ���� ���� �װ��� ó������ ���̾��ٰ� �Ѵ�.\n\n");
	Sleep(2500);
	printf("������ ������\n\n");
	Sleep(1500);
	printf("�� �ͽ��� �����\n\n");
	Sleep(1500);
	printf("�� ���� ������\n\n");
	Sleep(1500);
	printf("�ǹ��� �������� �˰� ���� �ʾҴ�.\n\n");
	Sleep(2500);
	printf("������� �鸮�� �ҹ����� �������� �̷��� ���� �������� �ִٴ� ���̴�.\n\n");
	Sleep(2500);
	printf("		======		THE END		======\n");
	printf("				�����Ǿƴ� �����ұ�\n\n");
	system("pause");
	exit(0);
}

void First_floor(){
	int menu;
	
	system("cls");
	printf("[1��] - [���� ���� ��]\n\n");
	printf("�ϴ� �ֺ��� ���캸��\n\n");
	printf("1. ���� ���ɴ�.\n");
	printf("0. ���� ������.\n\n");
	printf(">> ");
	
	scanf("%d", &menu);
	
	system("cls");
	printf("[1��] - [���� ���� ��]\n\n");
	
	switch(menu){
		case 1:
			printf("�ƹ��͵� ���� �� ����.\n");
			printf("�׳� ������\n\n");
			break;
		case 0:
			printf("�ƹ��͵� ���� �� ����.\n");
			printf("�׳� ������\n\n");
			break;
		default:
			printf("�߸� �Է�������\n");
			printf("������ �游 �����ϱ� ������.\n\n"); 
			break;
	} 
	system("pause");

	while(1){
		system("cls");
		printf("[1��] - [����]\n\n");
		printf("���� ��ô ����.\n");
		printf("������ �鸱��?\n\n");
		printf("1. �ֺ��� ���ɴ�.	2. 1�� ��		3. 2����		4. 3����\n");
		printf("5. 4����		6. ����â��		7. ����ȭ���		8. ���\n");
		printf("9. �Ĵ�			10. ���ǽ�		11. ???			12. ���Ͻ� �̵�\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				hallway(); 
				break;
			case 2:
				room1();
				break;
			case 3:
				room2(); 
				break;
			case 4:
				room3();
				break;
			case 5:
				room4();
				break;
			case 6:
				if(openweapon){
					weapon();
				}
				else{
					weapon_pw();
				}
				break;
			case 7:
				toiletroom();
				break;
			case 8:
				if(openbathroom){
					bathroom();
				}
				else{
					bathroom_pw();
				}
				break;
			case 9:
				restaurant();
				break;
			case 10:
				Healthroom();
				break;
			case 11:
				ghostroom();
				break;
			case 12:
				if(openshutter){
					underground();
				} 
				else{
					system("cls");
					printf("ö��- ö��- \n\n\n");
					printf("��� �ִ� �� ����.\n\n");
				}
				break;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void hallway(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [����]\n\n");
		printf("������ �ذ���� ���ƴٴѴ�.\n");
		printf("����... ��г���...\n");
		printf("���� �����ؾ߰ڴ�.\n\n");
		printf("1. ȭ��		2. �Ŵ��� ����		3. ����(ö��)		0. ���ư���\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				stove();
				break;
			case 2:
				frame();
				break;
			case 3:
				if(openshutter){
					underground();
				}
				else{
					shutter();
				}
				break;
			case 0:
				return; 
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
			}
		system("pause");
	} 
} 

void stove(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [����] - [ȭ��]\n\n");
		printf("���� �ʹ� ���� ���Ǳ� �����.\n");
		printf("1. ���� �ִ´�.\n");
		printf("2. ���� ���� �ʴ´�.\n");
		printf("0. ���ư���\n\n");
		printf(">> ");
	
		scanf("%d", &menu);
	
		switch(menu){
			case 1: 
				system("cls");
				printf("[1��] - [����] - [ȭ��]\n\n");
				
				if(getSilverkey){
					printf("�̹� ��Ʈ�� �� ���� �� ����.\n\n");
				}
				else{
					getSilverkey = TRUE; // ���� ���� ȹ��
				
					printf("��¦�Ÿ��� ���𰡰� �ִ� �� ����.\n");
					printf("���� ���踦 ã�Ҵ�.\n");
					printf("���� ����� �ϳ�?\n\n");
				
					printf("[���� ����]�� �����.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [����] - [ȭ��]\n\n");
				printf("���� ���������� �׳� ����.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n\n");
		}
		system("pause");
	} 
}

void frame(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [����] - [�Ŵ��� ����]\n\n");
		
		printf("���� �ڿ� ����� �����ִ� �� ����.\n\n");
		printf("1. �� ���� �����ϱ� �� �� ���� �� ����.\n");
		printf("2. ¥�����µ� �׳� �μż� ��!\n");
		printf("0. ���ư���.\n\n"); 
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [����] - [�Ŵ��� ����]\n\n");
				
				if(Framebroken){
					printf("�̹� ���ڰ� �μ�����.\n\n");
				}
				else{
					if(getGun && !Gunbroken){ // ���� : 100 
						printf("100�� ���� 1/2�� ������ ������ �˾�?\n\n");
						printf("�̰� �� �ԼҸ���\n\n");
					}
					else{
						printf("�ʹ� �־ ������ �ʴ´�.\n\n");
					}
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [����] - [�Ŵ��� ����]\n\n");
				
				if(Framebroken){
					printf("�̹� ���ڰ� �μ�����.\n\n");
				}
				else{
					Framebroken = TRUE;
				
					system("cls");
				
					printf("[1��] - [����] - [�Ŵ��� ����]\n\n");
					printf("�� ¥������...!\n\n");
					printf("¸�׶�!!\n\n\n");
					printf("...? �� ��¦�ƴµ� �ν����ٰ�?\n\n");
					printf("...���ٰ�\n\n"); 
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n\n");
		}
		system("pause");
	}
}

void shutter(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [����] - [����(ö��)]\n\n");
		printf("ö��- ö��- \n\n\n");
		printf("��� �ִ� �� ����.\n\n");
		printf("���� �޸� �����ִ� �� ����.\n\n");
		
		printf("1. �޸� ����.\n");
		printf("2. ��й�ȣ�� �Է��Ѵ�.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
		
				printf("[1��] - [����] - [����(ö��)]\n\n");
				printf("Does not exist in the world with happy.\n\n");
				printf("����� ���� �ǰ�?\n");
				printf("ù ���ڴ� �빮���� �� ����.\n\n");
				break;
			case 2:
				if(openshutter){
					return;
				}
				else{
					shutter_pw();
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
				
		}
		system("pause");
	}	
}

void shutter_pw(){
	char password[7] = "Utopia", temp[7];
	int menu;
	
	system("cls");
	printf("		[PASSWORD]\n\n");
	
	scanf("%s", temp);
	
	if(!strcmp(password, temp)){
		openshutter = TRUE;
		
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		���ϽǷ� �� �� ���� �� ����.\n\n");
	}
	else{
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		Ʋ�� �� ����...\n\n");
		return;
	}
}

void underground(){
	char answer1[12] = "ReadyToLove", answer2[13] = "SecretRecipe", answer3[5] = "9779", temp1[12], temp2[13], temp3[5];
	int menu;
	
	while(1){
		system("cls");
		printf("[���Ͻ�] - [���Թ�]\n\n");
		printf("��Ʈ�� ���� ���� �� ����.\n");
		printf("��¥ �������̴� �����ϰ� Ǯ���.\n\n");
	
		printf("1. ��Ʈ ����\n");
		printf("2. ��й�ȣ �Է�\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
				case 1:
					system("cls");
			
					printf("[���Ͻ�] - [���Թ�]\n\n");
					printf("1. ó�� ���� ������ �ӵ��� �̷��� ���� �� ������\n\n");
					printf("2. �׳� �Ծ��� ���ݸ��� ������ �����!\n");
					printf("   ���� �丮���� �� �˷��ְ���?\n");
					printf("   ��, �̸��� ����� �߾��µ�... ����̶� �߾�!\n\n");
					printf("�׳�� �����þ�?\n\n");
					printf("(1���� 2���� ������ �� ����.)\n");
					printf("(������ �빮�ڷ� �����ϴ� �� ����. ù��° ���ڵ� �빮���ε� �ϴ�.)\n");
					printf("(�̷��� ���� �ﷷ���� ����ڴ�.)\n\n"); 
					break;
				case 2:
					system("cls");
					
					printf("					[PASSWORD]\n\n");
					printf("������ ��� �Է��Ͻÿ�.\n");
					printf("(������ ���ͷ� �����մϴ�.)\n");
					scanf("%s%s%s", &temp1, &temp2, &temp3);
					if(!strcmp(answer1, temp1) && !strcmp(answer2, temp2) && !strcmp(answer3, temp3)){
						printf("...SYSTEM Ȯ����...\n\n");
						Sleep(1500);
						printf("SYSTEM CORRECT\n\n");
						Sleep(2500);
						ending();
					}
					else{
						system("cls");
					
						printf("...SYSTEM Ȯ����...\n\n");
						Sleep(1500);
						printf("SYSTEM FAILED\n\n");
						Sleep(2500);
						printf("Ʋ�� �� ����...\n\n");
					}
					break;
				default:
					printf("\n\nERROR!\n");
					printf("�Է°� ����!\n");
				
		}
		system("pause");
	}
	
} 

void room1(){		
	system("cls");
	printf("[1��] - [1�� ��]\n\n");;
	printf("... �ƹ��͵� ���� �� ����.\n\n");
}

void room2(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [2�� ��]\n\n");
		printf("���ϴ� ȭ��� �ϳ��� �����ִ�.\n");
		printf("ȭ��븦 �����غ��߰ڴ�.\n\n"); 
		printf("1. �ſ￡ ���� �� ����� ����\n");
		printf("2. �ֺ��� ���ɴ�.\n");
		printf("3. �ſ��� ���ɴ�.\n");
		printf("0. ���ư���.\n\n"); 
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [2�� ��] - [ȭ���]\n\n");
				
				if(Mirrorbroken){
					printf("�ſ��� �̹� ���� �� ����.\n\n");
				}
				else{
					Mirrorbroken = TRUE;
				
				printf("��, ���� �� �ʹ� �߻���(����) �� ����.\n\n");
				printf("¸�׶�!!\n\n\n");
				printf("�ſ��� ���� ���ϰ� ���� �� ����.\n\n");
				}
				break;
			case 2:
				if(openmirror){
					system("cls");
					printf("[1��] - [2�� ��] - [ȭ���]\n\n");
					printf("�� �� �ִ� ����� �� �Ѱ� ����.\n");
					continue;
				}
				else{
					mirror_pw();
				}
				break;
			case 3:
				system("cls");
				printf("[1��] - [2�� ��] - [ȭ���]\n\n");
				
				if(Mirrorbroken){
					printf("�ſ��� �̹� ���� �� ����.\n\n");
				}
				else{
					Mirrorbroken = TRUE;
				
					printf("�� ���� �� ���� ��¡� ��� ���� ���� �� ����.\n\n");
					printf("¸�׶�!!\n\n\n");
					printf("���������� �ſ��� ���ν���.\n");
					printf("... ���?\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
			}
		system("pause");
	} 
}

void mirror_pw(){
	char password[5] = "1009", temp[5];
	int menu;
	
	while(1){
		system("cls");
		
		printf("[1��] - [2�� ��] - [�ſ�]\n\n");
		printf("ȭ��ǰ �����Կ� ��й�ȣ�� �ɷ��ִ� �� ����.\n");
		printf("�Ʒ��� ����� �����ִµ�?\n\n");
		printf("1. �۱͸� �д´�.\n");
		printf("2. ��й�ȣ�� ����.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
	
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				
				printf("��.... �Ǹ� ����... �Ǹ� ��....\n");
				printf("...?\n\n");
				break;
			case 2:
				system("cls");
				printf("		[PASSWORD]\n\n");
	
				scanf("%s", temp);
	
				if(!strcmp(password, temp)){
					openmirror = TRUE;
					system("cls");
		
					printf("		...SYSTEM Ȯ����...\n\n");
					Sleep(1500);
					printf("		SYSTEM CORRECT\n\n");
					Sleep(2500);
					printf("		KID�� ���ڷ� ���� �� �� �־�?\n");
					printf("		[������ �� ����]�� �����.\n\n");
				}
				else{
					system("cls");
					printf("		...SYSTEM Ȯ����...\n\n");
					Sleep(1500);
					printf("		SYSTEM FAILED\n\n");
					Sleep(2500);
					printf("		Ʋ�� �� ����...\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
		}
		system("pause");
	}
	
}

void room3(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [3�� ��]\n\n");
		printf("ū �� ��� �̻��� ������ ħ�밡 �����ִ�.\n");
		printf("ħ�븦 �����غ��߰ڴ�.\n\n"); 
		printf("1. ħ�� ���� �����Ѵ�.\n");
		printf("2. ħ�븦 �����Ѵ�.\n");
		printf("3. ������ �����Ѵ�.\n"); 
		printf("0. ���ư���.\n\n"); 
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [3�� ��] - [ħ�� ��]\n\n");
				printf("��ο��� �ƹ��͵� ������ �ʴ´�.\n\n");
				break;
			case 2:
				if(Bedbroken){
					system("cls");
				printf("[1��] - [3�� ��] - [ħ��]\n\n");
					printf("ħ��� �ı��Ǿ� ���� �� �� ���� �� ����.\n\n");
				} 
				else{
					bed();
				}
				break;
			case 3:
				if(Pillowbroken || Bedbroken){
					system("cls");
					printf("[1��] - [3�� ��] - [����]\n\n");
					printf("ħ�밡 �������� ���� �� �� ���� �� ����.\n\n");
				}
				else{
					pillow();
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
			}
		system("pause");
	} 
}

void bed(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [3�� ��] - [ħ��]\n\n");
				
		printf("�ƹ��͵� ������ �ʴ´�.\n\n"); 
		printf("1. ħ�븦 �μ���.\n");
		printf("2. �׳� ���д�.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
			
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [3�� ��] - [ħ��]\n\n");
				
				if(Bedbroken){
					printf("�̹� �ջ�Ǿ� �� �� ����.\n\n");
				}
				else{
					Bedbroken = TRUE;
					
					printf("�� ¥����!!\n\n");
					printf("��---!!\n\n\n");
					printf("���� �ʹ� ������.\n\n");
					printf("ħ�밡 �ļյǾ���.\n\n");
				
				}
				break;
			case 2:
				system("cls");
				if(Bedbroken){
					printf("�̹� �ջ�Ǿ� �� �� ����.\n\n");
				}
				else{
					printf("�׷�, ȭ�� ���� �ٲ�� �� �����ϱ�..\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
			}
		system("pause");
	}
}

void pillow(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [3�� ��] - [���]\n\n");
				
		printf("�ƹ��͵� ����.\n\n"); 
		printf("1. ��Ը� ���ɴ�.\n");
		printf("2. ��Ը� ���´�.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
			
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [3�� ��] - [ħ��]\n\n");
				
				if(Pillowbroken){
					printf("�̹� �ջ�Ǿ� �� �� ����.\n\n");
				}
				else{
					printf("���� �ȿ��� �޸����� ���Դ�.\n\n");
					printf("f(x) = 3x + 5 �� ��, \n");
					printf("f'(x)?'\n\n");
					printf("���� ���������� ������ �ʹ��Ѱ� �ƴϾ�?\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [3�� ��] - [ħ��]\n\n");
				
				if(Pillowbroken){
					printf("�̹� �ջ�Ǿ� �� �� ����.\n\n");
				}
				else{
					Pillowbroken = TRUE;
				
					printf("�ƿ� ¥����!!!\n\n");
					printf("��������!!\n\n\n");
					printf("�ʹ� ȭ���� ������ ��Ը� ������ȴ�.\n\n");
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
			}
		system("pause");
	}
}

void room4(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [4�� ��]\n\n");
		printf("�渶�� �߾ӿ� �̻��ϰ� ��ġ�� ������ �ִ� �� ����\n");
		printf("�̹��� �����ΰ�?\n\n"); 
		printf("1. ����		2. û����	3. ġ��		4. ����		5. ��Ʈ\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [4�� ��] - [����] - [����]\n\n");
				printf("���� ����... ��κ��δ�.\n\n");
				break;
			case 2:
				system("cls");
				printf("[1��] - [4�� ��] - [����] - [û����]\n\n");
				printf("��û�� �� ����.\n\n");
				break;
			case 3:
				system("cls");
				printf("[1��] - [4�� ��] - [����] - [ġ��]\n\n");
				printf("ġ���� �ִ�.\n");
				printf("���ڰ� ��Ҿ���?\n\n");
				break;
			case 4:
				system("cls");
				printf("[1��] - [4�� ��] - [����] - [����]\n\n");
				printf("�б� �����̴�.\n");
				printf("�л��ΰǰ�?\n\n");
				break; 
			case 5:
				system("cls");
				printf("[1��] - [4�� ��] - [����] - [��Ʈ]\n\n");
				printf("��Ʈ�� �ſ� ��κ��δ�...\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n\n");		
			}
		system("pause");
	} 
} 

void weapon(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [����â��]\n\n");
		printf("...�� ������ ���� ���Ÿ��� �ϸ� �̷� �浵 �� �ִ� �ž�\n\n");
		printf("... �ϴ� �����غ���\n\n"); 
		printf("1. ���� ��������.\n");
		printf("2. ���� ������.\n"); 
		printf("3. ���� ������.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [����â��] - [��]\n\n");
					
				if(Gunbroken){
					printf("���� ������ ���� ���� �� ����.\n\n");
				}
				else{
					getGun = TRUE;
					
					printf("��� �� ���� �ְ���...\n");
					printf("[��] �������� �����.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [����â��] - [��]\n\n");
				
				if(Gunbroken){
					printf("���� ������ ���� ���� �� ����.\n\n");
				}
				else{
					Gunbroken = TRUE;
				
					printf("��---\n\n\n"); 
					printf("����! ��ź�̾���!\n\n");
					printf("ƽ---\n\n");
					printf("ƽ---\n\n\n");
					printf("�� �߸� ������ �� ����.\n");
					printf("������ �־���� ���ſ�� ������.\n\n");
				}
				break;
			case 3:
				system("cls");
				printf("[1��] - [����â��] - [��]\n\n");
				
				if(Gunbroken){
					printf("���� ������ ���� ���� �� ����.\n\n");
				}
				else{
					Gunbroken = TRUE;
				
					printf("�ƾ�!! ¥����!!.\n\n");
					printf("����--!\n\n\n");
					printf("���� �ջ�Ǿ� �� �� ��������.\n\n");
				
				}
				break; 
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n\n");		
			}
		system("pause");
	} 
}

void weapon_pw(){
	char password[6] = "Adult", temp[6];
	int menu;
	
	system("cls");
	printf("[1��] - [����â��]\n\n");
	printf("���� ���� ��й�ȣ�� �Է��Ͻÿ�.\n\n");
	printf("		[PASSWORD]\n");
	printf("	(No children allowed.)\n\n");
	scanf("%s", temp);
	
	if(!strcmp(password, temp)){
		openweapon = TRUE;
		
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		������...\n");
		printf("		���� ���� �� ����. \n");
	}
	else{
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		Ʋ�� �� ����...\n\n");
		return;
	}
	system("pause");
}

void toiletroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [����ȭ���]\n\n");
		printf("���Ⱑ �ִ�.\n");
		printf("���� ���� ���� �� ����. ���ΰ�?\n\n");
		printf("1. ���⹰�� ������.\n");
		printf("2. ���� �Ѳ��� �ݴ´�.\n");
		printf("3. ���⸦ �μ���.\n"); 
		printf("0. ���ư���.\n\n"); 
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [����ȭ���] - [����]\n\n");
				
				if(Toiletbroken){
					printf("���� ������ ���� ����.\n");
				}
				else{
					Toiletbroken = TRUE;
					
					printf("���� ���� ��������.\n");
					printf("���� ������ �ȴ�.\n\n"); 
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [����ȭ���] - [����]\n\n");
				printf("�Ѳ� ���� ����� ������ �ִ�.\n\n");
				printf("	O - - - -\n");
				printf("	- - - - -\n");
				printf("	- - - - -\n");
				printf("	- - - - O\n\n");
				printf("�̰� ����?\n\n");
				break;
			case 3:
				system("cls");
				printf("[1��] - [����ȭ���] - [����]\n\n");
				
				if(Toiletbroken){
					printf("���� ������ ���� ����.\n");
				}
				else{
					Toiletbroken = TRUE;
					
					printf("¥���� �� ������ ���⸦ �μ̴�.\n\n"); 
					printf("������ ���� �ֺ��� Ƣ����.\n");
					printf("��� ���۵�?\n\n"); 
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
			}
		system("pause");
	} 
}

void bathroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [���]\n\n");
		printf("Ư���� ���𰡴� ���� �� ����.\n\n");
		printf("1. ����븦 ���ɴ�.\n");
		printf("2. ����븦 �μ���.\n"); 
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [���] - [�����]\n\n");
				
				if(Basinbroken){
					printf("����밡 ��������� �����ȴ�.\n\n");
				}
				else{
					printf("�񴩰� �ִ�.\n\n");
					printf("�ڷγ�19 ~ing ����!\n");
					printf("���� �����ϰ� ����!\n\n");
					printf("... ���� �ݼ��ؾ� �� ���� ���� �� ����.\n\n");
				
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [���] - [�����]\n\n");
				
				if(Basinbroken){
					printf("����밡 ��������� �����ȴ�.\n\n");
				}
				else{
					Basinbroken = TRUE;
				
					printf("�۾�!!\n\n\n");
					printf("�������� �Բ� ����밡 �μ�����.\n");
					printf("���� �վ��� �����鼭 ���� ���ڸ� �������.\n\n");
					printf("R..T...L...?\n");
					printf("�̰� ����?\n\n");
				}
				
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
			}
		system("pause");
	} 
} 

void bathroom_pw(){
	char password[2] = "3", temp[2];
	int menu;
	
	system("cls");
	printf("[1��] - [���]\n\n");
	printf("���� ���� ��й�ȣ�� �Է��Ͻÿ�.\n\n");
	printf("		[PASSWORD]\n\n");
	scanf("%s", temp);
	
	if(!strcmp(password, temp)){
		openweapon = TRUE;
		
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		������...\n");
		printf("		���� ���� �� ����. \n");
		printf("		(���� �ݰ� �ٽ� ���ÿ�)\n\n");
	}
	else{
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		Ʋ�� �� ����...\n\n");
		return;
	}
} 

void restaurant(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [�Ĵ�]\n\n");
		printf("�Ĵ��ε� �����ϴ� ���� �� ���δ�.\n");
		printf("�丮�ϴ� ����� �� �����ִ� �ǰ�?\n");
		printf("�ϴ� ������ �͵��� �����غ���.\n\n");
		printf("1. ����		2. �Ķ�����		0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [�Ĵ�] - [����]\n\n");
				
				if(Potbroken){
					printf("��İ� Ÿ���� �簡 �ǹ��ȴ�.\n\n");
				}
				else{
					pot(); 
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [�Ĵ�] - [�Ķ�����]\n\n");
				
				if(Fryingpanbroken){
					printf("��İ� Ÿ���� �簡 �ǹ��ȴ�.\n\n");
				}
				else{
					fryingpan();
			}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
		}
		system("pause");
	} 
}

void pot(){
	int menu;
	
	while(1){
		printf("1. ���� ���ɴ�.\n");
		printf("2. ���� �¿��.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [�Ĵ�] - [����]\n\n");
				
				if(Potbroken){
					printf("��İ� Ÿ���� �簡 �ǹ��ȴ�.\n\n");
				}
				else{
					printf("���ִ� ������ ���� �� ���� �� ����.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [�Ĵ�] - [����]\n\n");
				Potbroken = TRUE;
				
				printf("ġ������---\n\n\n");
				printf("������ ���� �������� Ÿ���ȴ�.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void fryingpan(){
	int menu;
	
	while(1){
		printf("1. �Ķ������� ���ɴ�.\n");
		printf("2. �Ķ������� �¿��.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [�Ĵ�] - [�Ķ�����]\n\n");
				if(Fryingpanbroken){
					printf("��İ� Ÿ���� �簡 �ǹ��ȴ�.\n\n");
				}
				else{
					Fryingpanbroken = TRUE;
			
					printf("why...?\n");
					printf("��� �����ִ�.\n");
					printf("���� �� �ִ� �� ������...\n");
					printf("��...!\n");
					printf("�Ķ������� ������ Ÿ���� ���� �� �� ���� �� ����.\n"); 
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [�Ĵ�] - [�Ķ�����]\n\n");
				if(Fryingpanbroken){
					printf("��İ� Ÿ���� �簡 �ǹ��ȴ�.\n\n");
				}
				else{
					Fryingpanbroken = TRUE;
				
					printf("ġ������---\n\n\n");
					printf("������ ���� �������� Ÿ���ȴ�.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void Healthroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [���ǽ�]\n\n");
		printf("Ư���� ���𰡴� ���� �� ����.\n");
		printf("��� �����ұ�?\n\n");
		printf("1. ��ǰ		2. �ֻ�� 	  0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [���ǽ�] - [��ǰ]\n\n");
				
				if(Medicineborken || getmedicine){
					printf("���� �� ������ �� ����.\n\n");
				}
				else{
					medicine();
				} 
				break;
			case 2:
				system("cls");
				printf("[1��] - [���] - [�����]\n\n");
				
				if(Syringebroken || getsyringe){
					printf("�� �̻��� �ֻ��� ���� �� ����.\n\n");
				}
				else{
					syringe();
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
			}
		system("pause");
	} 
}

void medicine(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [���ǽ�] - [��ǰ]\n\n");
				
		printf("1. ��ǰ�� ���ɴ�.\n");
		printf("2. ��ǰ�� ��������.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [���ǽ�] - [��ǰ]\n\n");
				
				printf("������ǰ�� �����ִ�.\n");
				printf("APTX4869...?\n");
				printf("���� ������ � ���̰� �� �� ����.\n\n");
				break;
			case 2:
				system("cls");
				printf("[1��] - [���ǽ�] - [��ǰ]\n\n");
				
				if(getmedicine && Medicineborken){
					printf("������ ��ǰ�� ���� �� ����.\n\n");
				}
				else{
					getmedicine = TRUE;
				
					printf("��� �� ���� �ְ���...?\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
} 

void syringe(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [���ǽ�] - [�ֻ��]\n\n");
				
		printf("1. �ֻ�⸦ ���ɴ�.\n");
		printf("2. �ֻ�⸦ ì���.\n");
		printf("3. �ֻ�⸦ ���ɴ�.\n");
		printf("4. �ֻ�⸦ ������.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [���ǽ�] - [�ֻ��]\n\n");
				
				if(getsyringe && Syringebroken){
					printf("���� ���� �ִ� �� ���� �ʴ�.\n\n");
				}
				else{
					printf("�ȿ� ��ǰ�� ����ִ� �� ����.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [���ǽ�] - [�ֻ��]\n\n");
				
				if(getsyringe && Syringebroken){
					printf("���� ���� �ִ� �� ���� �ʴ�.\n\n");
				}
				else{
					getsyringe = TRUE;
				
					printf("�� ���� ��������?\n\n");
				}
				break;
			case 3:
				system("cls");
				printf("[1��] - [���ǽ�] - [�ֻ��]\n\n");
				
				if(Syringebroken){
					printf("�ֻ�Ⱑ ����.\n\n");
				} 
				else{
					printf("�ֻ�⿡ ���׶�� �����ִ�.\n\n");
				}
				break;
			case 4:
				system("cls");
				printf("[1��] - [���ǽ�] - [�ֻ��]\n\n");
				
				if(Syringebroken || getsyringe){
					printf("�ֻ�Ⱑ ����.\n\n");
				} 
				else{
					Syringebroken = TRUE;
					
					printf("ȭ����--! \n\n\n");
					printf("�ֻ�⸦ �¿���.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void ghostroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1��] - [???]\n\n");
		printf("���� �������� ����� ���.\n");
		printf("���� �����ϰ� �������� �� ����.\n\n");
		printf("1. ???	2. �ݰ�	0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1��] - [???] - [�ͽ�]\n\n");
				
				if(openghost){
					ghost_hint();
				}
				else{
					conversation();
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [???] - [�ݰ�]\n\n");
				
				printf("���� ������ 2���� �ִ�.\n");
				printf("����� 2����� �Ҹ��ΰ�?\n\n");
				if(getSilverkey && getSoilkey){
					safe(); 
				}
				else if(opensafe){
					printf("�̹� ��Ʈ�� �� ���� �� ����.\n\n");
				}
				else{
					printf("��ᰡ �� �غ�� �� ����.\n\n");
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");		
			}
		system("pause");
	} 
}

void ghost(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ͽ�]\n\n");
		
		printf("����! �ͽ��̴�!\n");
		printf("ħ���ϰ�... �����ؾ��Ѵ�...!\n\n");
				
		printf("1. ���� ����Ѵ�.\n");
		printf("2. ��ǰ�� ����Ѵ�.\n");
		printf("3. �ֻ�⸦ ����Ѵ�.\n");
		printf("4. �ͽſ��� ���� �ɾ��.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [???] - [�ͽ�] - [��]\n\n");
				
				if(!getGun || Gunbroken){
					printf("���� ���µ� �� �϶�� �ž�!\n\n");
				}
				else{
					usedgun();
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [???] - [�ͽ�] - [��ǰ]\n\n");
				
				if(Medicineborken || !getmedicine){
					printf("��ǰ�� ���� �� ����!\n\n");
				}
				else{
					usedmedicine(); 
				}
				break;
			case 3:
				system("cls");
				printf("[1��] - [???] - [�ͽ�] - [�ֻ��]\n\n");
				
				if(Syringebroken || !getsyringe){
					printf("�ֻ�Ⱑ ���� �� ����!\n\n");
				} 
				else{
					usedsyringe();
				}
				break;
			case 4:
				conversation();
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void usedgun(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ͽ�] - [��]\n\n");
		
		printf("�ͽ��� ���� ������ �ֳ�?!\n\n"); 
		printf("1. �׷��� ���� ���.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [???] - [�ͽ�] - [��]\n\n");
				Gunbroken = TRUE;
				
				printf("�Ѿ��� ���� �ʾҴ�!\n\n");
				printf("�ٽ� ���� �������ϴ�\n");
				printf("�Ѿ��� ������ �ʴ´�.\n");
				printf("...�����?\n\n"); 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void usedmedicine(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ͽ�] - [��ǰ]\n\n");
		
		printf("�ͽ��ε� ��ǰ�� �԰ھ�?\n\n"); 
		printf("1. �׷��� ��ǰ�� ����Ѵ�.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [???] - [�ͽ�] - [��ǰ]\n\n");
				Medicineborken = TRUE;
				
				printf("����!\n\n");
				printf("��ǰ�� ���ڱ� �������.\n");
				printf("...�����?\n\n"); 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
} 

void usedsyringe(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ͽ�] - [��ǰ]\n\n");
		
		printf("�ͽ��ε� �ֻ�Ⱑ �����ھ�?\n\n"); 
		printf("1. �׷��� �ֻ�⸦ ����Ѵ�.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [???] - [�ͽ�] - [�ֻ��]\n\n");
				Syringebroken = TRUE;
				
				printf("......\n\n");
				printf("�ֻ�Ⱑ �״�� �ٴڿ� ������ �ȿ� �ִ� �๰�� ���� �������.\n");
				printf("...�����?\n\n"); 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void conversation(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ͽ�] - [��ȭ]\n\n");
		
		printf("'...'\n");
		printf("'why....'\n\n");
		printf("...?\n");
		printf("�װ� ���� �ϰ� ���� ���̶��!\n\n");
		printf("'I adult...?'\n\n");
		printf("(�ڼ��� ���� ���� �Է��ϴ� �� �ִ�.)\n");
		printf("(ù ���ڴ� �빮���� �� ����.)\n\n");
		 
		printf("1. ��й�ȣ�� �Է��Ѵ�.\n");
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				if(!openghost){
					ghost_pw();
				}
				else{
					continue;
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void ghost_pw(){
	char password[6] = "Young", temp[6];
	int menu;
	
	system("cls");
	printf("		[PASSWORD]\n\n");
	
	scanf("%s", temp);
	
	if(!strcmp(password, temp)){
		openghost = TRUE;
		
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		'�װ� �� ������ �������...'\n\n");
		printf("(�ٽ� ��ȭ�� �ɸ� �Ƿ���...?)\n\n");
	}
	else{
		system("cls");
		printf("		...SYSTEM Ȯ����...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		�ͽ��� �ż��� ó�ٺ��� �ִ�.\n\n");
		return;
	}
}

void ghost_hint(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ͽ�] - [��ȭ]\n\n");
		
		printf("(�װ� �� ������ ����� �Ѵٴ� �� ������ �ǹ��ϴ� �ɱ�?)\n");
		printf("(����... �˰� ������...)\n\n");
		 
		printf("1. ��ǰ�� �ش�.\n");
		printf("2. ���� ���� ���ٱ�?\n"); 
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				printf("'����...'\n\n");
				printf("(���� ���̸� ���.)\n");
				printf("(���̸� �о��...)\n\n");
				printf("|||| ���ݱ��� ��Ʈ �� ���Ⱦ�? ||||\n\n");
				printf("�������� ū�ϳ��� �ǰ�?\n\n"); 
				break;
			case 2:
				printf("(�ͽ��� �ѽ��ϴ� ǥ���� ������.)\n\n");
				printf("(���� �Ӿ�������.)\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void safe(){
	int menu;
	opensafe = TRUE; 
	
	while(1){
		system("cls");
		printf("[1��] - [???] - [�ݰ�] - [����]\n\n");
		
		printf("[������ ����]�̶�� ������ �ϳ� �ִ�\n\n");
		 
		printf("1. �д´�.\n");
		printf("2. �¿��.\n");
		printf("3. ���´�.\n"); 
		printf("0. ���ư���.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1��] - [???] - [�ݰ�] - [����]\n\n");
				
				if(getTruth && !Truthbroken){
					printf("�̹� �� ���� �� ����.\n\n");
				}
				else{
					getTruth = TRUE;
					
					housetruth(); 
				}
				break;
			case 2:
				system("cls");
				printf("[1��] - [???] - [�ݰ�] - [����]\n\n");
					
				if(Truthbroken){
					printf("�̹� �ջ�Ǿ� ����� �� ����.\n\n");
				}
				else{
					Truthbroken = TRUE;
				
					printf("��İ� Ÿ���� �簡 �Ǿ���.\n\n");
				}
				break; 
			case 3:
				system("cls");
				printf("[1��] - [???] - [�ݰ�] - [����]\n\n");
				
				if(Truthbroken){
					printf("�̹� �ջ�Ǿ� ����� �� ����.\n\n");
				}
				else{
					Truthbroken = TRUE;
				
					printf("�̵� ���� �˰� ���� �ʾ�!\n\n");
					printf("... �� �� ���� ¥���� ������ ������ȴ�.\n\n");
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("�Է°� ����!\n");
		}
		system("pause");
	}
}

void housetruth(){	
	printf("'�� ���ÿ� ���� ���÷� ���� �������� ��������.'\n\n");
	Sleep(2500);
	printf("'�ʴ� ���� �ñ�?'\n\n");
	Sleep(1500);
	printf("'�װ� �� ���� �� Ǯ���µ� �� ������ �ȿ�...?'\n\n");
	Sleep(2500);
	printf("(�۾��� ����� �бⰡ ���������.)\n\n");
	Sleep(2500);
	printf("'�� �� �� 1���� �Ǿ���.'\n\n");
	Sleep(2500);
	printf("'���� �� ������ ���� �˷��ٰ�...'\n\n");
	Sleep(2500);
	printf("(�ڴ� �����ڱ����� ���� ������ �ʴ´�.)\n\n");
}

