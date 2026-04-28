// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_Detect.h"
#include "AIController.h"

UBTService_Detect::UBTService_Detect()
{
	// 노드 이름 설정.
	NodeName = TEXT("Detect");
	
	// 서비스 실행 간격 설정(단위: 초).
	Interval = 1.0f;
}

void UBTService_Detect::TickNode(
	UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory,
	float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	// 구현하고 싶은 것: AI폰 위치를 기준으로 특정 반경 안에 캐릭터가 있는지 확인.
	// 1. AI폰 위치 가져오기.
	APawn* ControllingPawn
		= OwnerComp.GetAIOwner()->GetPawn();

	if (!ControllingPawn)
	{
		return;
	}

	// 2. 캐릭터 감지 - 충돌(오버랩) 기능을 활용해 캐릭터 감지.
	
	
	// 3. 감지된 정보는 블랙보드에 기록.
	// 디버그 용도로 감지 영역 시각화.
}
