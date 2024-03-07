#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	char name[10];
	int a=0, b=0,c=0, d=0, e=0, f=0, g=0, i=0, j, menu, menu2;
	char s;
	
	printf("☆★15일 캐릭터 육성 게임★☆");
	Sleep(1000);
	printf("\n스탯항목: 검술능력, 마법능력, 사교능력, 예술능력, 가사능력, 학습능력, 스트레스\n");
	Sleep(3000);
	printf("각 능력의 초기스탯은  0  이며, 수업 수행 시 스탯이 올라갑니다.\n");
	Sleep(3000);
	printf("※단, 스트레스가  50 이상 시 휴식을 취해야 합니다. 휴식은 저녁식사 후 가능합니다.\n");
	Sleep(1000);
	printf("\n다음으로 넘어가려면 'enter키'를 눌러주세요.");
	getch();
	
	printf("\n이름(10자이내): ");
	scanf("%s", &name);
	
	for(i=1; i<16; i++){
		printf("\nDay %d", i);
		Sleep(800);
		printf("\n\n      스탯"); 
		printf("\n================\n");
		printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
		printf("\n================\n");
		
		getch();
		
		printf("\n\n07:00 기상. %s(은)는 아침을 먹었다!", name);
		Sleep(700);
		printf("\n\n[07:30~10:00]");
		Sleep(700);
		printf("\n\n수업을 선택하세요.\n");
		printf("\n1. 근처 산으로 사냥을 간다.\n2. 화가 J 에게 미술을 배운다.\n3. 옆집 아주머니에게 요리를 배운다.\n4. 도서관에서 책을 읽는다.\n");
        printf("\n선택 : ");
    	scanf("%d", &menu);
        switch(menu){
            case 1 : printf("\n%s(은)는 덫에 걸린 짐승을 잡았다!\n", name);
            Sleep(700);
			printf("검술능력+20\n마법능력+20\n스트레스+5\n"); 
			a += 20, b += 20, g += 5;
			break;
			case 2 : printf("\n%s(은)는 마을 풍경을 그렸다!\n", name);
			Sleep(700);
			printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
			d += 20, c += 10, g += 5;
			break;
            case 3 : printf("\n%s(은)는 맛있는 초콜릿을 만들었다!\n", name);
            Sleep(700);
			printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
			e += 20, c += 10, g += 5;
			break;
            case 4 : 
			if (i%2 == 0){
				printf("\n%s(은)는 도서관에서 책'마법공학'을 읽었다!\n", name);
                Sleep(700);
		    	printf("학습능력+20\n마법능력+10\n스트레스+5\n");
		    	f += 20, b += 10, g += 5;
			}
			else {
				printf("\n%s(은)는 도서관에서 책'검술식'을 읽었다!\n", name);
                Sleep(700);
		    	printf("학습능력+20\n검술능력+10\n스트레스+5\n");
				f += 20, a += 10, g += 5;
			}
			break;
	    }
	    Sleep(700);
		printf("\n\n      스탯"); 
		printf("\n================\n");
		printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
		printf("\n================\n");
		getch();
		
		
		printf("\n\n[10:00~12:30]");
		Sleep(700);
		printf("\n\n수업을 선택하세요.\n");
		printf("\n1. 검 수련장에 간다.\n2. 마법 수련장에 간다.\n3. 화가 J 에게 미술을 배운다.\n4. 옆집 아주머니에게 요리를 배운다.\n");
        printf("\n선택 : ");
    	scanf("%d", &menu);
        switch(menu){
            case 1 : printf("\n%s(은)는 검사 K 에게 검술을 배웠다!\n", name);
            Sleep(700);
			printf("검술능력+20\n학습능력+10\n스트레스+5\n"); 
			a += 20, f += 10, g += 5;
			break;
			case 2 : printf("\n%s(은)는 마법사 A 에게 마법을 배웠다\n", name);
            Sleep(700);
			printf("마법능력+20\n학습능력+10\n스트레스+5\n");
			b += 20, f += 10, g += 5;
			break;
            case 3 : printf("\n%s(은)는 누군가의 초상화를 그렸다!\n", name);
			Sleep(700);
			printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
			d += 20, c += 10, g += 5;
			break;
            case 4 : printf("\n%s(은)는 맛있는 빵을 만들었다!\n", name);
            Sleep(700);
			printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
			e += 20, c += 10, g += 5;
			break;
	    }
	    Sleep(1000);
		printf("\n\n      스탯"); 
		printf("\n================\n");
		printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
		printf("\n================\n");
		getch();
		
		
		printf("\n\n12:30 %s(은)는 점심을 먹어야한다.", name);
		Sleep(700);
		printf("\n\n1.편하게 집에서 먹자.\n2.친구와 먹자.\n");
		printf("\n선택 : ");
    	scanf("%d", &menu);
    	printf("\n%s(은)는 점심을 먹었다!\n", name);
        switch(menu){
			case 2 : printf("사교능력+20\n스트레스+5\n");
			c += 20, g += 5;
			break; 
		}
		Sleep(700);
		printf("\n\n[13:00~15:30]");
		Sleep(700);
		printf("\n\n수업을 선택하세요.\n");
		printf("\n1. 검 수련장에 간다.\n2. 마법 수련장에 간다.\n3. 화가 J 에게 미술을 배운다.\n4. 옆집 아주머니에게 요리를 배운다.\n");
        printf("\n선택 : ");
    	scanf("%d", &menu);
        switch(menu){
            case 1 : printf("\n%s(은)는 검사 K 에게 검술을 배웠다!\n", name);
            Sleep(700);
			printf("검술능력+20\n학습능력+10\n스트레스+5\n"); 
			a += 20, f += 10, g += 5;
			break;
			case 2 : printf("\n%s(은)는 마법사 A 에게 마법을 배웠다\n", name);
            Sleep(700);
			printf("마법능력+20\n학습능력+10\n스트레스+5\n");
			b += 20, f += 10, g += 5;
			break;
            case 3 : printf("\n%s(은)는 화가 J의 초상화를 그렸다!\n", name);
			Sleep(700);
			printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
			d += 20, c += 10, g += 5;
			break;
            case 4 : printf("\n%s(은)는 맛있는 쿠키를 만들었다!\n", name);
            Sleep(700);
			printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
			e += 20, c += 10, g += 5;
			break;
	    }
	    Sleep(700);
		printf("\n\n      스탯"); 
		printf("\n================\n");
		printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
		printf("\n================\n");
		getch();
		
		printf("\n\n[15:30~18:00]");
		Sleep(700);
		printf("\n\n수업을 선택하세요.\n");
		printf("\n1. 검 수련장에 간다.\n2. 마법 수련장에 간다.\n3. 화가 J 에게 미술을 배운다.\n4. 옆집 아주머니에게 요리를 배운다.\n");
        printf("\n선택 : ");
    	scanf("%d", &menu);
        switch(menu){
            case 1 : printf("\n%s(은)는 검사 K 에게 검술을 배웠다!\n", name);
            Sleep(700);
			printf("검술능력+20\n학습능력+10\n스트레스+5\n"); 
			a += 20, f += 10, g += 5;
			break;
			case 2 : printf("\n%s(은)는 마법사 A 에게 마법을 배웠다\n", name);
            Sleep(700);
			printf("마법능력+20\n학습능력+10\n스트레스+5\n");
			b += 20, f += 10, g += 5;
			break;
            case 3 : printf("\n%s(은)는 정물화를 그렸다!\n", name);
			Sleep(700);
			printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
			d += 20, c += 10, g += 5;
			break;
            case 4 : printf("\n%s(은)는 맛있는 피자를 만들었다!\n", name);
            Sleep(700);
			printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
			e += 20, c += 10, g += 5;
			break;
	    }
	    Sleep(700);
		printf("\n\n       스탯"); 
		printf("\n================\n");
		printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
		printf("\n================\n");
		getch();
		
		printf("\n\n18:00 %s(은)는 저녁을 먹었다!", name);
		Sleep(700);
		printf("\n\n[18:30~21:00]");
		Sleep(700);
		printf("\n\n휴식을 취하겠습니까?(Y/N)");
    	scanf("%s", &s);
        switch(s){
        	case 'Y': case 'y': printf("\n\n%s(와)과 즐거운 시간을 보내봅시다!.\n", name);
			printf("\n1. 좋아하는 물건을 사주자!\n2. 맛있는 걸 사주자!\n3. 미술관에 방문하자!\n4. 경치 좋은 곳으로 놀러가자!\n");
			printf("\n선택 : ");
			scanf("%d", &j);
			printf("\n%s(은)는 즐거운 시간을 보냈다!\n", name);
			Sleep(700);
			printf("스트레스-60\n"); 
			g -= 60;
			Sleep(700);
			printf("\n\n      스탯"); 
			printf("\n================\n");
			printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
			printf("\n================\n");
			getch();
			break;
        	case 'N': case 'n': printf("\n\n수업을 선택하세요.\n");
			printf("\n1. 검 수련장에 간다.\n2. 마법 수련장에 간다.\n3. 화가 J 에게 미술을 배운다.\n4. 옆집 아주머니에게 요리를 배운다.\n");
			printf("\n선택 : ");
			scanf("%d", &menu);
			switch(menu){
		        case 1 : printf("\n%s(은)는 검사 K 에게 검술을 배웠다!\n", name);
                Sleep(700);
			    printf("검술능력+20\n학습능력+10\n스트레스+5\n"); 
			    a += 20, f += 10, g += 5;
			    break;
			    case 2 : printf("\n%s(은)는 마법사 A 에게 마법을 배웠다\n", name);
                Sleep(700);
			    printf("마법능력+20\n학습능력+10\n스트레스+5\n");
			    b += 20, f += 10, g += 5;
			    break;
                case 3 : printf("\n%s(은)는 상상화를 그렸다!\n", name);
			    Sleep(700);
			    printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
			    d += 20, c += 10, g += 5;
			    break;
                case 4 : printf("\n%s(은)는 맛있는 스프를 만들었다!\n", name);
                Sleep(700);
			    printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
			    e += 20, c += 10, g += 5;
			    break;
			}
			Sleep(700);
			printf("\n\n      스탯"); 
			printf("\n================\n");
			printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
			printf("\n================\n");
			getch();
			break;
		}
		
		if(i>7){
			printf("\n\n21:00");
			printf("\n\n%s(은)는 지난 %d일간의 수업으로 무도회와 학술회의 초대권을 얻었다!", name, i);
			Sleep(700);
			printf("\n\n선택하세요.\n\n1.~24:00 무도회에 참가한다.\n2.~24:00 학술회에 참가한다.\n3.~23:30 수업을 받는다.");
		    printf("\n선택 : ");
    	    scanf("%d", &menu2);
            switch(menu2){
            	case 1: printf("\n%s(은)는 사교계의 모두에게 주목을 받았다!\n", name);
				Sleep(700);
				printf("사교능력+80\n스트레스+5\n"); 
				c += 80, g += 5;
				break;
				case 2: printf("\n%s(은)는 학계의 모두에게 주목을 받았다!\n", name);
				Sleep(700);
				printf("학습능력+95\n스트레스+5\n"); 
				f += 95, g += 5;
				break;
        		case 3: printf("\n\n수업을 선택하세요.\n");
				printf("\n1. 검 수련장에 간다.\n2. 마법 수련장에 간다.\n3. 화가 J 에게 미술을 배운다.\n4. 옆집 아주머니에게 요리를 배운다.\n");
				printf("\n선택 : ");
				scanf("%d", &menu);
				switch(menu){
		        	case 1 : printf("\n%s(은)는 검사 K 에게 검술을 배웠다!\n", name);
                	Sleep(700);
			    	printf("검술능력+20\n학습능력+10\n스트레스+5\n"); 
			    	a += 20, f += 10, g += 5;
			    	break;
			    	case 2 : printf("\n%s(은)는 마법사 A 에게 마법을 배웠다\n", name);
                	Sleep(700);
			    	printf("마법능력+20\n학습능력+10\n스트레스+5\n");
			   		b += 20, f += 10, g += 5;
			    	break;
                	case 3 : printf("\n%s(은)는 거리 풍경을 그렸다!\n", name);
			    	Sleep(700);
			    	printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
			    	d += 20, c += 10, g += 5;
			    	break;
                	case 4 : printf("\n%s(은)는 맛있는 닭 요리를 만들었다!\n", name);
                	Sleep(700);
			    	printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
			    	e += 20, c += 10, g += 5;
			    	break;
			    }
			}
		}
		else{
			printf("\n\n[21:00~23:30]");
			Sleep(700);
			printf("\n\n수업을 선택하세요.\n");
			printf("\n1. 검 수련장에 간다.\n2. 마법 수련장에 간다.\n3. 화가 J 에게 미술을 배운다.\n4. 옆집 아주머니에게 요리를 배운다.\n");
       		printf("\n선택 : ");
    		scanf("%d", &menu);
        	switch(menu){
            	case 1 : printf("\n%s(은)는 검사 K 에게 검술을 배웠다!\n", name);
            	Sleep(700);
				printf("검술능력+20\n학습능력+10\n스트레스+5\n"); 
				a += 20, f += 10, g += 5;
				break;
				case 2 : printf("\n%s(은)는 마법사 A 에게 마법을 배웠다\n", name);
            	Sleep(700);
				printf("마법능력+20\n학습능력+10\n스트레스+5\n");
				b += 20, f += 10, g += 5;
				break;
            	case 3 : printf("\n%s(은)는 미술계 거장의 작품을 모작했다!\n", name);
				Sleep(700);
				printf("예술능력+20\n사교능력+10\n스트레스+5\n"); 
				d += 20, c += 10, g += 5;
				break;
            	case 4 : printf("\n%s(은)는 맛있는 사탕을 만들었다!\n", name);
            	Sleep(700);
				printf("가사능력+20\n사교능력+10\n스트레스+5\n"); 
				e += 20, c += 10, g += 5;
				break;
	    	}
	    }
			Sleep(700);
			printf("\n\n      스탯"); 
			printf("\n================\n");
			printf("\n  검술능력: %d\n  마법능력: %d\n  사교능력: %d\n  예술능력: %d\n  가사능력: %d\n  학습능력: %d\n  스트레스: %d\n", a, b, c, d, e, f, g);
			printf("\n================\n");
			getch();
	}
	if(g>50){
		printf("\n\n%s는...");

		printf("스트레스가 50을 초과하여 세상을 떠났다...\n");
	
		printf("좀 더 놀아줄걸...\n");
	}
	else if(a >= 1600){
		printf("\n\n%s는 대륙의 7명밖에 없는 소드마스터가 되었다!", name);
	}
	else if(b >= 1600){
		printf("\n\n%s는 대륙의 3명밖에 없는 대마법사가 되었다!", name);
	}
	else if(c >= 1600){
		printf("\n\n%s는 왕실과 혼인을 맺어 왕족이 되었다!", name);
	}
	else if(d >= 1600){
		printf("\n\n%s는 뛰어난 실력으로 궁중화가가 되었다!", name);
	}
	else if(e >= 1600){
		printf("\n\n%s는 대륙 제일의 요리사가 되었다!", name);
	}
	else if(f >= 1600){
		printf("\n\n%s는 왕족의 교육을 담당하는 왕실교사가 되었다!", name);
	}
	else if(a >= 1000 && a < 1600){
		printf("\n\n%s는 기사가 되었다!");
	}
	else if(b >= 1000 && b < 1600){
		printf("\n\n%s는 마법사가 되었다!", name);
	}
	else if(c >= 1000 && c < 1600){
		printf("\n\n%s는 사교계의 거장이 되었다!", name);
	}
	else if(d >= 1000 && d < 1600){
		printf("\n\n%s는 작품 주문이 끊이지 않는 화가가 되었다!", name);
	}
	else if(e >= 1000 && e < 1600){
		printf("\n\n%s는 식당을 차려 떼돈을 벌었다!", name);
	}
	else if(f >= 1000 && f < 1600){
		printf("\n\n%s는 대륙 최고의 학교에서 선생님이 되었다!", name);
	}
	else if(a >= 800 && a < 1000 && b >= 800 && b < 1000){
		printf("\n\n%s는 '검사와 마법에 통달한 자'라는 칭호와 명예 훈장을 받았다!", name);
	}
	else if(a >= 800 && a < 1000 && f >= 800 && f < 1000){
		printf("\n\n%s는 군 지휘관이 되었다!", name);
	}
	else if(b >= 800 && b < 1000 && f >= 800 && f < 1000){
		printf("\n\n%s는 마법학교 선생님이 되었다!", name);
	}
	else if(c >= 800 && c < 1000 && f >= 800 && f < 1000){
		printf("\n\n%s는 왕 보조관이 되었다!", name);
	}
	else if(c >= 800 && c < 1000 && e >= 800 && e < 1000){
		printf("\n\n%s는 사랑하는 사람과 가정을 꾸렸다!", name);
	}
	else if(c >= 800 && c < 1000 && f >= 800 && f < 1000){
		printf("\n\n%s는 상단을 운영해 떼돈을 벌었다!", name);
	}
	else if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g < 0){
		printf("\n\n%s가 아무것도 하지 않았지만, 그것이 %s의 행복이라면야...", name, name);
		Sleep(500);
		printf("괜찮지 않을까?");
	}
	else{
		printf("\n\n조금 더 노력했더라면 좋았겠지만,");
		Sleep(400);
		printf("괜찮아.");
		Sleep(400);
		printf("다음에 더 잘하자!.");
	}
	Sleep(500);
	printf("\n\n-The End-\n\n");
}
