#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

#define TRUE 1
#define FALSE 0

// 방 구조 
void First_floor(); // 1층 
void intro(); // 스토리라인 
void room1(); // 1번 방 
void room2(); // 2번 방 
void room3(); // 3번 방 
void room4(); // 4번 방 
void toiletroom(); // 공용화장실 
void bathroom(); // 욕실 
void ghostroom(); // ???
void restaurant(); // 식당 
void hallway(); // 복도 
void Healthroom(); // 보건실 
void realescape(); // 탈출구 
void ending(); // 엔딩 
void underground(); //지하실
void weapon(); // 무기창고 
void housetruth(); // 저택 진실 
 
// 구조물 
void stove(); // 화로 
void frame(); //액자 
void shutter(); // 셔터(철문) 
void gun(); // 총
void shutter_pw(); // 셔터 비밀번호 
void mirror_pw(); // 거울 비번 
void weapon_pw(); // 총 비번
void bathroom_pw(); // 욕실 비번 
void bed(); // 침대 
void pillow(); // 베개 
void pot(); // 냄비
void fryingpan(); // 후라이팬 
void medicine(); // 약품 
void syringe(); // 주사기 
void ghost(); // 귀신 
void usedgun(); // 총 사용 함수 
void usedmedicine(); // 약품 사용 함수 
void usedsyringe(); // 주사기 사용 함수 
void conversation(); // 귀신 대화 
void ghost_pw(); // 귀신 힌트 비번 
void ghost_hint(); // 귀신 힌트 함수 
void safe(); // 금고 

// 아이템 파손 여부 
int Gunbroken = FALSE; // 총 파손 
int Syringebroken = FALSE; // 주사기 파손 
int Medicineborken = FALSE; // 약 파손
int Fryingpanbroken = FALSE; // 후라이팬 파손
int Potbroken = FALSE; // 냄비 파손 
int Basinbroken = FALSE; // 세면대 파손
int Toiletbroken = FALSE; // 변기 파손
int Mirrorbroken = FALSE; // 거울 파손
int Framebroken = FALSE; // 액자 파손
int Bedbroken = FALSE; // 침대 파손
int Pillowbroken = FALSE; // 배게 파손
int Truthbroken = FALSE; // 저택의 진실 파손 

// 아이템 유무 
int getSilverkey = FALSE; // 은색 열쇠 획득 
int getSoilkey = FALSE; // 흙으로 된 열쇠 획득
int getGun = FALSE; // 총 획득
int getmedicine = FALSE; // 약품 획득 
int getsyringe = FALSE; // 주사기 획득 
int openshutter = FALSE; // 셔터(철문) 오픈 여부 
int openmirror = FALSE; // 화장대 비밀번호 오픈 여부 
int openweapon = FALSE; // 무기창고 비밀번호 오픈 여부
int openbathroom = FALSE; // 욕실 비밀번호 오픈 여부 
int openghost = FALSE; // 귀신 비밀번호 맞춤 여부 
int opensafe = FALSE; // 금고 오픈 여부 
int getTruth = FALSE; // 저택의 진실 획득 여부 

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
				printf("\n\n잘못 입력\n\n");
				break;
		}
	}
	
}

void intro(){
	system("cls");
	printf("\n\n");
	printf("자고 일어나니 눈에 보이는 것은 생에 내부에 무엇이 있는지도 모를 고급 저택이었다.\n\n");
	Sleep(1500);
	printf("누가 날 여기로 옮겼지?\n\n");
	Sleep(1500);
	printf("분명 집에서 잘 자고 있었는데...\n\n");
	Sleep(1500);
	printf("누군지는 몰라도 범인이 밝혀지는 순간 온갖 욕과 함께 주거침입죄로 고소하고 말 것이다.\n\n");
	Sleep(2500);
	printf("그렇게 하기 위해선 우선 이 저택을 빠져나가야 한다.\n\n");
	Sleep(1500);
	system("pause");
}

void ending(){
	system("cls");
	printf("\n\n");
	printf("그 더러운 집을 탈출하는데 성공했다.\n\n");
	Sleep(1500);
	printf("나는 탈출하고 나서 그 집을 신고하기 위해 경찰서로 들어갔다.\n\n");
	Sleep(2500);
	printf("하지만 탈출 후 그 집은 사라져있었다.\n\n");
	Sleep(1500);
	printf("경찰의 말을 들어보니 그곳은 처음부터 밭이었다고 한다.\n\n");
	Sleep(2500);
	printf("누구의 집인지\n\n");
	Sleep(1500);
	printf("왜 귀신이 사는지\n\n");
	Sleep(1500);
	printf("왜 하필 나인지\n\n");
	Sleep(1500);
	printf("의문은 많았지만 알고 싶지 않았다.\n\n");
	Sleep(2500);
	printf("현재까지 들리는 소문으론 아직까지 이러한 일이 벌어지고 있다는 점이다.\n\n");
	Sleep(2500);
	printf("		======		THE END		======\n");
	printf("				유토피아는 존재할까\n\n");
	system("pause");
	exit(0);
}

void First_floor(){
	int menu;
	
	system("cls");
	printf("[1층] - [현재 갇힌 방]\n\n");
	printf("일단 주변을 살펴보자\n\n");
	printf("1. 방을 살핀다.\n");
	printf("0. 방을 나간다.\n\n");
	printf(">> ");
	
	scanf("%d", &menu);
	
	system("cls");
	printf("[1층] - [현재 갇힌 방]\n\n");
	
	switch(menu){
		case 1:
			printf("아무것도 없는 것 같다.\n");
			printf("그냥 나가자\n\n");
			break;
		case 0:
			printf("아무것도 없는 것 같다.\n");
			printf("그냥 나가자\n\n");
			break;
		default:
			printf("잘못 입력했지만\n");
			printf("나가는 길만 있으니까 나가자.\n\n"); 
			break;
	} 
	system("pause");

	while(1){
		system("cls");
		printf("[1층] - [복도]\n\n");
		printf("방이 무척 많다.\n");
		printf("어디부터 들릴까?\n\n");
		printf("1. 주변을 살핀다.	2. 1번 방		3. 2번방		4. 3번방\n");
		printf("5. 4번방		6. 무기창고		7. 공용화장실		8. 욕실\n");
		printf("9. 식당			10. 보건실		11. ???			12. 지하실 이동\n\n");
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
					printf("철컹- 철컹- \n\n\n");
					printf("잠겨 있는 것 같다.\n\n");
				}
				break;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void hallway(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [복도]\n\n");
		printf("수많은 해골들이 돌아다닌다.\n");
		printf("으윽... 기분나빠...\n");
		printf("빨리 조사해야겠다.\n\n");
		printf("1. 화로		2. 거대한 액자		3. 셔터(철문)		0. 돌아가기\n\n");
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
				printf("입력값 오류!\n");
			}
		system("pause");
	} 
} 

void stove(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [복도] - [화로]\n\n");
		printf("숯이 너무 많아 살피기 힘들다.\n");
		printf("1. 손을 넣는다.\n");
		printf("2. 손을 넣지 않는다.\n");
		printf("0. 돌아간다\n\n");
		printf(">> ");
	
		scanf("%d", &menu);
	
		switch(menu){
			case 1: 
				system("cls");
				printf("[1층] - [복도] - [화로]\n\n");
				
				if(getSilverkey){
					printf("이미 힌트는 다 얻은 것 같다.\n\n");
				}
				else{
					getSilverkey = TRUE; // 은색 열쇠 획득
				
					printf("반짝거리는 무언가가 있는 것 같다.\n");
					printf("은색 열쇠를 찾았다.\n");
					printf("뭔가 열어야 하나?\n\n");
				
					printf("[은색 열쇠]를 얻었다.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [복도] - [화로]\n\n");
				printf("손이 더러워지니 그냥 두자.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n\n");
		}
		system("pause");
	} 
}

void frame(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [복도] - [거대한 액자]\n\n");
		
		printf("액자 뒤에 뭐라고 쓰여있는 것 같다.\n\n");
		printf("1. 난 눈이 좋으니까 볼 수 있을 것 같다.\n");
		printf("2. 짜증나는데 그냥 부셔서 봐!\n");
		printf("0. 돌아간다.\n\n"); 
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [복도] - [거대한 액자]\n\n");
				
				if(Framebroken){
					printf("이미 액자가 부셔졌다.\n\n");
				}
				else{
					if(getGun && !Gunbroken){ // 정답 : 100 
						printf("100의 반을 1/2로 나누면 얼마인지 알아?\n\n");
						printf("이게 뭔 쌉소리야\n\n");
					}
					else{
						printf("너무 멀어서 보이지 않는다.\n\n");
					}
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [복도] - [거대한 액자]\n\n");
				
				if(Framebroken){
					printf("이미 액자가 부셔졌다.\n\n");
				}
				else{
					Framebroken = TRUE;
				
					system("cls");
				
					printf("[1층] - [복도] - [거대한 액자]\n\n");
					printf("아 짜증난다...!\n\n");
					printf("쨍그랑!!\n\n\n");
					printf("...? 그 살짝쳤는데 부숴진다고?\n\n");
					printf("...버근가\n\n"); 
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n\n");
		}
		system("pause");
	}
}

void shutter(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [복도] - [셔터(철문)]\n\n");
		printf("철컹- 철컹- \n\n\n");
		printf("잠겨 있는 것 같다.\n\n");
		printf("뭔가 메모가 쓰여있는 것 같다.\n\n");
		
		printf("1. 메모를 본다.\n");
		printf("2. 비밀번호를 입력한다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
		
				printf("[1층] - [복도] - [셔터(철문)]\n\n");
				printf("Does not exist in the world with happy.\n\n");
				printf("영어로 쓰는 건가?\n");
				printf("첫 문자는 대문자인 것 같다.\n\n");
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
				printf("입력값 오류!\n");
				
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
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		지하실로 들어갈 수 있을 것 같다.\n\n");
	}
	else{
		system("cls");
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		틀린 것 같다...\n\n");
		return;
	}
}

void underground(){
	char answer1[12] = "ReadyToLove", answer2[13] = "SecretRecipe", answer3[5] = "9779", temp1[12], temp2[13], temp3[5];
	int menu;
	
	while(1){
		system("cls");
		printf("[지하실] - [출입문]\n\n");
		printf("힌트가 무지 많은 것 같다.\n");
		printf("진짜 마지막이니 신중하게 풀어보자.\n\n");
	
		printf("1. 힌트 보기\n");
		printf("2. 비밀번호 입력\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
				case 1:
					system("cls");
			
					printf("[지하실] - [출입문]\n\n");
					printf("1. 처음 느낀 심장의 속도가 이렇게 빠를 줄 몰랐어\n\n");
					printf("2. 그날 먹었던 초콜릿을 아직도 기억해!\n");
					printf("   물론 요리법은 안 알려주겠지?\n");
					printf("   아, 이름이 뭐라고 했었는데... 비밀이라 했어!\n\n");
					printf("그녀와 만나봤어?\n\n");
					printf("(1번과 2번은 영어인 것 같다.)\n");
					printf("(공백은 대문자로 구분하는 것 같다. 첫번째 글자도 대문자인듯 하다.)\n");
					printf("(이러다 영어 울렁증이 생기겠다.)\n\n"); 
					break;
				case 2:
					system("cls");
					
					printf("					[PASSWORD]\n\n");
					printf("정답을 모두 입력하시오.\n");
					printf("(정답은 엔터로 구분합니다.)\n");
					scanf("%s%s%s", &temp1, &temp2, &temp3);
					if(!strcmp(answer1, temp1) && !strcmp(answer2, temp2) && !strcmp(answer3, temp3)){
						printf("...SYSTEM 확인중...\n\n");
						Sleep(1500);
						printf("SYSTEM CORRECT\n\n");
						Sleep(2500);
						ending();
					}
					else{
						system("cls");
					
						printf("...SYSTEM 확인중...\n\n");
						Sleep(1500);
						printf("SYSTEM FAILED\n\n");
						Sleep(2500);
						printf("틀린 것 같다...\n\n");
					}
					break;
				default:
					printf("\n\nERROR!\n");
					printf("입력값 오류!\n");
				
		}
		system("pause");
	}
	
} 

void room1(){		
	system("cls");
	printf("[1층] - [1번 방]\n\n");;
	printf("... 아무것도 없는 것 같다.\n\n");
}

void room2(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [2번 방]\n\n");
		printf("떡하니 화장대 하나가 놓여있다.\n");
		printf("화장대를 조사해봐야겠다.\n\n"); 
		printf("1. 거울에 비춘 내 모습을 본다\n");
		printf("2. 주변을 살핀다.\n");
		printf("3. 거울을 살핀다.\n");
		printf("0. 돌아간다.\n\n"); 
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [2번 방] - [화장대]\n\n");
				
				if(Mirrorbroken){
					printf("거울이 이미 깨진 것 같다.\n\n");
				}
				else{
					Mirrorbroken = TRUE;
				
				printf("아, 역시 난 너무 잘생긴(예쁜) 것 같아.\n\n");
				printf("쨍그랑!!\n\n\n");
				printf("거울이 참지 못하고 깨진 것 같다.\n\n");
				}
				break;
			case 2:
				if(openmirror){
					system("cls");
					printf("[1층] - [2번 방] - [화장대]\n\n");
					printf("할 수 있는 조사는 다 한것 같다.\n");
					continue;
				}
				else{
					mirror_pw();
				}
				break;
			case 3:
				system("cls");
				printf("[1층] - [2번 방] - [화장대]\n\n");
				
				if(Mirrorbroken){
					printf("거울이 이미 깨진 것 같다.\n\n");
				}
				else{
					Mirrorbroken = TRUE;
				
					printf("내 얼굴을 본 순간 오징어를 닮아 눈이 썩은 것 같다.\n\n");
					printf("쨍그랑!!\n\n\n");
					printf("순간적으로 거울을 깨부쉈다.\n");
					printf("... 어라?\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
			}
		system("pause");
	} 
}

void mirror_pw(){
	char password[5] = "1009", temp[5];
	int menu;
	
	while(1){
		system("cls");
		
		printf("[1층] - [2번 방] - [거울]\n\n");
		printf("화장품 보관함에 비밀번호가 걸려있는 것 같다.\n");
		printf("아래에 뭐라고 쓰여있는데?\n\n");
		printf("1. 글귀를 읽는다.\n");
		printf("2. 비밀번호를 연다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
	
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				
				printf("피.... 피를 원해... 피를 줘....\n");
				printf("...?\n\n");
				break;
			case 2:
				system("cls");
				printf("		[PASSWORD]\n\n");
	
				scanf("%s", temp);
	
				if(!strcmp(password, temp)){
					openmirror = TRUE;
					system("cls");
		
					printf("		...SYSTEM 확인중...\n\n");
					Sleep(1500);
					printf("		SYSTEM CORRECT\n\n");
					Sleep(2500);
					printf("		KID가 숫자로 뭔지 알 수 있어?\n");
					printf("		[흙으로 된 열쇠]를 얻었다.\n\n");
				}
				else{
					system("cls");
					printf("		...SYSTEM 확인중...\n\n");
					Sleep(1500);
					printf("		SYSTEM FAILED\n\n");
					Sleep(2500);
					printf("		틀린 것 같다...\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
		}
		system("pause");
	}
	
}

void room3(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [3번 방]\n\n");
		printf("큰 방 가운데 이상한 구도로 침대가 놓여있다.\n");
		printf("침대를 조사해봐야겠다.\n\n"); 
		printf("1. 침대 밑을 조사한다.\n");
		printf("2. 침대를 조사한다.\n");
		printf("3. 베개를 조사한다.\n"); 
		printf("0. 돌아간다.\n\n"); 
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [3번 방] - [침대 밑]\n\n");
				printf("어두워서 아무것도 보이지 않는다.\n\n");
				break;
			case 2:
				if(Bedbroken){
					system("cls");
				printf("[1층] - [3번 방] - [침대]\n\n");
					printf("침대는 파괴되어 더는 볼 수 없을 것 같다.\n\n");
				} 
				else{
					bed();
				}
				break;
			case 3:
				if(Pillowbroken || Bedbroken){
					system("cls");
					printf("[1층] - [3번 방] - [베개]\n\n");
					printf("침대가 더러워져 더는 볼 수 없을 것 같다.\n\n");
				}
				else{
					pillow();
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
			}
		system("pause");
	} 
}

void bed(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [3번 방] - [침대]\n\n");
				
		printf("아무것도 보이지 않는다.\n\n"); 
		printf("1. 침대를 부순다.\n");
		printf("2. 그냥 냅둔다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
			
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [3번 방] - [침대]\n\n");
				
				if(Bedbroken){
					printf("이미 손상되어 볼 수 없다.\n\n");
				}
				else{
					Bedbroken = TRUE;
					
					printf("아 짜증나!!\n\n");
					printf("쿵---!!\n\n\n");
					printf("손이 너무 아프다.\n\n");
					printf("침대가 파손되었다.\n\n");
				
				}
				break;
			case 2:
				system("cls");
				if(Bedbroken){
					printf("이미 손상되어 볼 수 없다.\n\n");
				}
				else{
					printf("그래, 화를 내도 바뀌는 건 없으니까..\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
			}
		system("pause");
	}
}

void pillow(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [3번 방] - [배게]\n\n");
				
		printf("아무것도 없다.\n\n"); 
		printf("1. 배게를 살핀다.\n");
		printf("2. 배게를 찢는다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
			
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [3번 방] - [침대]\n\n");
				
				if(Pillowbroken){
					printf("이미 손상되어 볼 수 없다.\n\n");
				}
				else{
					printf("베개 안에서 메모지가 나왔다.\n\n");
					printf("f(x) = 3x + 5 일 때, \n");
					printf("f'(x)?'\n\n");
					printf("수학 포기자한테 수학은 너무한거 아니야?\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [3번 방] - [침대]\n\n");
				
				if(Pillowbroken){
					printf("이미 손상되어 볼 수 없다.\n\n");
				}
				else{
					Pillowbroken = TRUE;
				
					printf("아오 짜증나!!!\n\n");
					printf("찌이이익!!\n\n\n");
					printf("너무 화가난 나머지 배게를 찢어버렸다.\n\n");
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
			}
		system("pause");
	}
}

void room4(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [4번 방]\n\n");
		printf("방마다 중앙에 이상하게 배치된 가구가 있는 것 같다\n");
		printf("이번엔 옷장인가?\n\n"); 
		printf("1. 셔츠		2. 청바지	3. 치마		4. 교복		5. 코트\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [4번 방] - [옷장] - [셔츠]\n\n");
				printf("구찌 셔츠... 비싸보인다.\n\n");
				break;
			case 2:
				system("cls");
				printf("[1층] - [4번 방] - [옷장] - [청바지]\n\n");
				printf("찢청인 것 같다.\n\n");
				break;
			case 3:
				system("cls");
				printf("[1층] - [4번 방] - [옷장] - [치마]\n\n");
				printf("치마가 있다.\n");
				printf("여자가 살았었나?\n\n");
				break;
			case 4:
				system("cls");
				printf("[1층] - [4번 방] - [옷장] - [교복]\n\n");
				printf("학교 교복이다.\n");
				printf("학생인건가?\n\n");
				break; 
			case 5:
				system("cls");
				printf("[1층] - [4번 방] - [옷장] - [코트]\n\n");
				printf("코트가 매우 비싸보인다...\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n\n");		
			}
		system("pause");
	} 
} 

void weapon(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [무기창고]\n\n");
		printf("...이 저택은 무슨 짓거리를 하면 이런 방도 다 있는 거야\n\n");
		printf("... 일단 조사해볼까\n\n"); 
		printf("1. 총을 가져간다.\n");
		printf("2. 총을 쏴본다.\n"); 
		printf("3. 총을 던진다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [무기창고] - [총]\n\n");
					
				if(Gunbroken){
					printf("남은 여분의 총은 없는 것 같다.\n\n");
				}
				else{
					getGun = TRUE;
					
					printf("어딘가 쓸 곳이 있겠지...\n");
					printf("[총] 아이템을 얻었다.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [무기창고] - [총]\n\n");
				
				if(Gunbroken){
					printf("남은 여분의 총은 없는 것 같다.\n\n");
				}
				else{
					Gunbroken = TRUE;
				
					printf("탕---\n\n\n"); 
					printf("으악! 실탄이었다!\n\n");
					printf("틱---\n\n");
					printf("틱---\n\n\n");
					printf("한 발만 장전된 것 같다.\n");
					printf("가지고 있어봤자 무거우니 버리자.\n\n");
				}
				break;
			case 3:
				system("cls");
				printf("[1층] - [무기창고] - [총]\n\n");
				
				if(Gunbroken){
					printf("남은 여분의 총은 없는 것 같다.\n\n");
				}
				else{
					Gunbroken = TRUE;
				
					printf("아악!! 짜증나!!.\n\n");
					printf("콰직--!\n\n\n");
					printf("총이 손상되어 쓸 수 없어졌다.\n\n");
				
				}
				break; 
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n\n");		
			}
		system("pause");
	} 
}

void weapon_pw(){
	char password[6] = "Adult", temp[6];
	int menu;
	
	system("cls");
	printf("[1층] - [무기창고]\n\n");
	printf("들어가기 위해 비밀번호를 입력하시오.\n\n");
	printf("		[PASSWORD]\n");
	printf("	(No children allowed.)\n\n");
	scanf("%s", temp);
	
	if(!strcmp(password, temp)){
		openweapon = TRUE;
		
		system("cls");
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		끼이익...\n");
		printf("		문이 열린 것 같다. \n");
	}
	else{
		system("cls");
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		틀린 것 같다...\n\n");
		return;
	}
	system("pause");
}

void toiletroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [공용화장실]\n\n");
		printf("변기가 있다.\n");
		printf("물의 색이 붉은 것 같다. 피인가?\n\n");
		printf("1. 변기물을 내린다.\n");
		printf("2. 변기 뚜껑을 닫는다.\n");
		printf("3. 변기를 부순다.\n"); 
		printf("0. 돌아간다.\n\n"); 
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [공용화장실] - [변기]\n\n");
				
				if(Toiletbroken){
					printf("더는 조사할 것이 없다.\n");
				}
				else{
					Toiletbroken = TRUE;
					
					printf("붉은 것이 내려간다.\n");
					printf("뭔가 진정이 된다.\n\n"); 
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [공용화장실] - [변기]\n\n");
				printf("뚜껑 위에 뭐라고 쓰여져 있다.\n\n");
				printf("	O - - - -\n");
				printf("	- - - - -\n");
				printf("	- - - - -\n");
				printf("	- - - - O\n\n");
				printf("이게 뭘까?\n\n");
				break;
			case 3:
				system("cls");
				printf("[1층] - [공용화장실] - [변기]\n\n");
				
				if(Toiletbroken){
					printf("더는 조사할 것이 없다.\n");
				}
				else{
					Toiletbroken = TRUE;
					
					printf("짜증이 난 나머지 변기를 부셨다.\n\n"); 
					printf("붉은색 물이 주변에 튀었다.\n");
					printf("기분 나쁜데?\n\n"); 
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
			}
		system("pause");
	} 
}

void bathroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [욕실]\n\n");
		printf("특별한 무언가는 없는 것 같다.\n\n");
		printf("1. 세면대를 살핀다.\n");
		printf("2. 세면대를 부순다.\n"); 
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [욕실] - [세면대]\n\n");
				
				if(Basinbroken){
					printf("세면대가 산산조각이 나버렸다.\n\n");
				}
				else{
					printf("비누가 있다.\n\n");
					printf("코로나19 ~ing 예방!\n");
					printf("손을 깨끗하게 씻자!\n\n");
					printf("... 보면 반성해야 할 일이 많은 것 같다.\n\n");
				
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [욕실] - [세면대]\n\n");
				
				if(Basinbroken){
					printf("세면대가 산산조각이 나버렸다.\n\n");
				}
				else{
					Basinbroken = TRUE;
				
					printf("퍼엉!!\n\n\n");
					printf("폭발음과 함께 세면대가 부셔졌다.\n");
					printf("물이 뿜어져 나오면서 무언가 글자를 만들었다.\n\n");
					printf("R..T...L...?\n");
					printf("이게 뭘까?\n\n");
				}
				
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
			}
		system("pause");
	} 
} 

void bathroom_pw(){
	char password[2] = "3", temp[2];
	int menu;
	
	system("cls");
	printf("[1층] - [욕실]\n\n");
	printf("들어가기 위해 비밀번호를 입력하시오.\n\n");
	printf("		[PASSWORD]\n\n");
	scanf("%s", temp);
	
	if(!strcmp(password, temp)){
		openweapon = TRUE;
		
		system("cls");
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		끼이익...\n");
		printf("		문이 열린 것 같다. \n");
		printf("		(문을 닫고 다시 여시오)\n\n");
	}
	else{
		system("cls");
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		틀린 것 같다...\n\n");
		return;
	}
} 

void restaurant(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [식당]\n\n");
		printf("식당인데 조리하는 곳이 다 보인다.\n");
		printf("요리하는 모습을 다 보여주는 건가?\n");
		printf("일단 수상한 것들을 조사해보자.\n\n");
		printf("1. 냄비		2. 후라이팬		0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [식당] - [냄비]\n\n");
				
				if(Potbroken){
					printf("까맣게 타버려 재가 되버렸다.\n\n");
				}
				else{
					pot(); 
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [식당] - [후라이팬]\n\n");
				
				if(Fryingpanbroken){
					printf("까맣게 타버려 재가 되버렸다.\n\n");
				}
				else{
					fryingpan();
			}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
		}
		system("pause");
	} 
}

void pot(){
	int menu;
	
	while(1){
		printf("1. 냄비를 살핀다.\n");
		printf("2. 냄비를 태운다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [식당] - [냄비]\n\n");
				
				if(Potbroken){
					printf("까맣게 타버려 재가 되버렸다.\n\n");
				}
				else{
					printf("맛있는 음식을 먹을 수 있을 것 같다.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [식당] - [냄비]\n\n");
				Potbroken = TRUE;
				
				printf("치이이익---\n\n\n");
				printf("저절로 불이 켜지더니 타버렸다.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void fryingpan(){
	int menu;
	
	while(1){
		printf("1. 후라이팬을 살핀다.\n");
		printf("2. 후라이팬을 태운다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [식당] - [후라이팬]\n\n");
				if(Fryingpanbroken){
					printf("까맣게 타버려 재가 되버렸다.\n\n");
				}
				else{
					Fryingpanbroken = TRUE;
			
					printf("why...?\n");
					printf("라고 쓰여있다.\n");
					printf("뭔가 더 있는 것 같은데...\n");
					printf("앗...!\n");
					printf("후라이팬이 저절로 타버려 더는 볼 수 없을 것 같다.\n"); 
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [식당] - [후라이팬]\n\n");
				if(Fryingpanbroken){
					printf("까맣게 타버려 재가 되버렸다.\n\n");
				}
				else{
					Fryingpanbroken = TRUE;
				
					printf("치이이익---\n\n\n");
					printf("저절로 불이 켜지더니 타버렸다.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void Healthroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [보건실]\n\n");
		printf("특별한 무언가는 없는 것 같다.\n");
		printf("어떤걸 조사할까?\n\n");
		printf("1. 약품		2. 주사기 	  0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [보건실] - [약품]\n\n");
				
				if(Medicineborken || getmedicine){
					printf("약이 다 떨어진 것 같다.\n\n");
				}
				else{
					medicine();
				} 
				break;
			case 2:
				system("cls");
				printf("[1층] - [욕실] - [세면대]\n\n");
				
				if(Syringebroken || getsyringe){
					printf("이 이상의 주사기는 없는 것 같다.\n\n");
				}
				else{
					syringe();
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
			}
		system("pause");
	} 
}

void medicine(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [보건실] - [약품]\n\n");
				
		printf("1. 약품을 살핀다.\n");
		printf("2. 약품을 가져간다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [보건실] - [약품]\n\n");
				
				printf("제조일품이 써져있다.\n");
				printf("APTX4869...?\n");
				printf("뭔가 먹으면 어린 아이가 될 것 같다.\n\n");
				break;
			case 2:
				system("cls");
				printf("[1층] - [보건실] - [약품]\n\n");
				
				if(getmedicine && Medicineborken){
					printf("여분의 약품이 없는 것 같다.\n\n");
				}
				else{
					getmedicine = TRUE;
				
					printf("어딘가 쓸 일이 있겠지...?\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
} 

void syringe(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [보건실] - [주사기]\n\n");
				
		printf("1. 주사기를 살핀다.\n");
		printf("2. 주사기를 챙긴다.\n");
		printf("3. 주사기를 살핀다.\n");
		printf("4. 주사기를 버린다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [보건실] - [주사기]\n\n");
				
				if(getsyringe && Syringebroken){
					printf("더는 뭔가 있는 것 같지 않다.\n\n");
				}
				else{
					printf("안에 약품이 들어있는 것 같다.\n\n");
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [보건실] - [주사기]\n\n");
				
				if(getsyringe && Syringebroken){
					printf("더는 뭔가 있는 것 같지 않다.\n\n");
				}
				else{
					getsyringe = TRUE;
				
					printf("쓸 일이 있으려나?\n\n");
				}
				break;
			case 3:
				system("cls");
				printf("[1층] - [보건실] - [주사기]\n\n");
				
				if(Syringebroken){
					printf("주사기가 없다.\n\n");
				} 
				else{
					printf("주사기에 恐怖라고 쓰여있다.\n\n");
				}
				break;
			case 4:
				system("cls");
				printf("[1층] - [보건실] - [주사기]\n\n");
				
				if(Syringebroken || getsyringe){
					printf("주사기가 없다.\n\n");
				} 
				else{
					Syringebroken = TRUE;
					
					printf("화르륵--! \n\n\n");
					printf("주사기를 태웠다.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void ghostroom(){
	int choose;
	
	while(1){
		
		system("cls");
		printf("[1층] - [???]\n\n");
		printf("조금 으스스한 기분이 든다.\n");
		printf("빨리 조사하고 나가야할 것 같다.\n\n");
		printf("1. ???	2. 금고	0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				system("cls");
				printf("[1층] - [???] - [귀신]\n\n");
				
				if(openghost){
					ghost_hint();
				}
				else{
					conversation();
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [???] - [금고]\n\n");
				
				printf("열쇠 구멍이 2개가 있다.\n");
				printf("열쇠는 2개라는 소리인가?\n\n");
				if(getSilverkey && getSoilkey){
					safe(); 
				}
				else if(opensafe){
					printf("이미 힌트는 다 얻은 것 같다.\n\n");
				}
				else{
					printf("재료가 덜 준비된 것 같다.\n\n");
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");		
			}
		system("pause");
	} 
}

void ghost(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [귀신]\n\n");
		
		printf("으악! 귀신이다!\n");
		printf("침착하게... 대응해야한다...!\n\n");
				
		printf("1. 총을 사용한다.\n");
		printf("2. 약품을 사용한다.\n");
		printf("3. 주사기를 사용한다.\n");
		printf("4. 귀신에게 말을 걸어본다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [???] - [귀신] - [총]\n\n");
				
				if(!getGun || Gunbroken){
					printf("총이 없는데 뭘 하라는 거야!\n\n");
				}
				else{
					usedgun();
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [???] - [귀신] - [약품]\n\n");
				
				if(Medicineborken || !getmedicine){
					printf("약품이 없는 것 같다!\n\n");
				}
				else{
					usedmedicine(); 
				}
				break;
			case 3:
				system("cls");
				printf("[1층] - [???] - [귀신] - [주사기]\n\n");
				
				if(Syringebroken || !getsyringe){
					printf("주사기가 없는 것 같다!\n\n");
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
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void usedgun(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [귀신] - [총]\n\n");
		
		printf("귀신이 총을 맞을리 있냐?!\n\n"); 
		printf("1. 그래도 총을 쏜다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [???] - [귀신] - [총]\n\n");
				Gunbroken = TRUE;
				
				printf("총알이 맞지 않았다!\n\n");
				printf("다시 총을 쏴보려하니\n");
				printf("총알이 나가지 않는다.\n");
				printf("...어떡하지?\n\n"); 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void usedmedicine(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [귀신] - [약품]\n\n");
		
		printf("귀신인데 약품이 먹겠어?\n\n"); 
		printf("1. 그래도 약품을 사용한다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [???] - [귀신] - [약품]\n\n");
				Medicineborken = TRUE;
				
				printf("으악!\n\n");
				printf("약품이 갑자기 사라졌다.\n");
				printf("...어떡하지?\n\n"); 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
} 

void usedsyringe(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [귀신] - [약품]\n\n");
		
		printf("귀신인데 주사기가 먹히겠어?\n\n"); 
		printf("1. 그래도 주사기를 사용한다.\n");
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [???] - [귀신] - [주사기]\n\n");
				Syringebroken = TRUE;
				
				printf("......\n\n");
				printf("주사기가 그대로 바닥에 떨어져 안에 있는 약물이 전부 쏟아졌다.\n");
				printf("...어떡하지?\n\n"); 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void conversation(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [귀신] - [대화]\n\n");
		
		printf("'...'\n");
		printf("'why....'\n\n");
		printf("...?\n");
		printf("그건 내가 하고 싶은 말이라고!\n\n");
		printf("'I adult...?'\n\n");
		printf("(자세히 보니 무언갈 입력하는 게 있다.)\n");
		printf("(첫 글자는 대문자인 것 같다.)\n\n");
		 
		printf("1. 비밀번호를 입력한다.\n");
		printf("0. 돌아간다.\n\n");
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
				printf("입력값 오류!\n");
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
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM CORRECT\n\n");
		Sleep(2500);
		printf("		'그가 올 때까지 어려야헤...'\n\n");
		printf("(다시 대화를 걸면 되려나...?)\n\n");
	}
	else{
		system("cls");
		printf("		...SYSTEM 확인중...\n\n");
		Sleep(1500);
		printf("		SYSTEM FAILED\n\n");
		Sleep(2500);
		printf("		귀신이 매섭게 처다보고 있다.\n\n");
		return;
	}
}

void ghost_hint(){
	int menu;
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [귀신] - [대화]\n\n");
		
		printf("(그가 올 때까지 어려야 한다는 게 무엇을 의미하는 걸까?)\n");
		printf("(으으... 알것 같은데...)\n\n");
		 
		printf("1. 약품을 준다.\n");
		printf("2. 내가 같이 가줄까?\n"); 
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				printf("'고마워...'\n\n");
				printf("(무언가 종이를 줬다.)\n");
				printf("(종이를 읽어보니...)\n\n");
				printf("|||| 지금까지 힌트 다 버렸어? ||||\n\n");
				printf("버렸으면 큰일나는 건가?\n\n"); 
				break;
			case 2:
				printf("(귀신이 한심하단 표정을 지었다.)\n\n");
				printf("(괜히 머쓱해진다.)\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void safe(){
	int menu;
	opensafe = TRUE; 
	
	while(1){
		system("cls");
		printf("[1층] - [???] - [금고] - [진실]\n\n");
		
		printf("[저택의 진실]이라는 쪽지가 하나 있다\n\n");
		 
		printf("1. 읽는다.\n");
		printf("2. 태운다.\n");
		printf("3. 찢는다.\n"); 
		printf("0. 돌아간다.\n\n");
		printf(">> ");
		
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				system("cls");
				printf("[1층] - [???] - [금고] - [진실]\n\n");
				
				if(getTruth && !Truthbroken){
					printf("이미 다 읽은 것 같다.\n\n");
				}
				else{
					getTruth = TRUE;
					
					housetruth(); 
				}
				break;
			case 2:
				system("cls");
				printf("[1층] - [???] - [금고] - [진실]\n\n");
					
				if(Truthbroken){
					printf("이미 손상되어 사용할 수 없다.\n\n");
				}
				else{
					Truthbroken = TRUE;
				
					printf("까맣게 타버려 재가 되었다.\n\n");
				}
				break; 
			case 3:
				system("cls");
				printf("[1층] - [???] - [금고] - [진실]\n\n");
				
				if(Truthbroken){
					printf("이미 손상되어 사용할 수 없다.\n\n");
				}
				else{
					Truthbroken = TRUE;
				
					printf("이딴 진실 알고 싶지 않아!\n\n");
					printf("... 알 수 없는 짜증에 쪽지를 찢어버렸다.\n\n");
				} 
				break;
			case 0:
				return;
			default:
				printf("\n\nERROR!\n");
				printf("입력값 오류!\n");
		}
		system("pause");
	}
}

void housetruth(){	
	printf("'이 저택에 산지 오늘로 벌써 수개월이 지나간다.'\n\n");
	Sleep(2500);
	printf("'너는 언제 올까?'\n\n");
	Sleep(1500);
	printf("'네가 준 문제 다 풀었는데 왜 아직도 안와...?'\n\n");
	Sleep(2500);
	printf("(글씨가 흐려져 읽기가 힘들어졌다.)\n\n");
	Sleep(2500);
	printf("'안 온 지 1년이 되었다.'\n\n");
	Sleep(2500);
	printf("'이제 네 문제의 답을 알려줄게...'\n\n");
	Sleep(2500);
	printf("(뒤는 눈물자국으로 인해 보이지 않는다.)\n\n");
}

