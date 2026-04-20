// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "Player/ABPlayerController.h"
#include "Character/ABCharacterPlayer.h"

AABGameMode::AABGameMode()
{
	// 기본 폰 클래스 설정.
	DefaultPawnClass = AABCharacterPlayer::StaticClass();

	// 기본 플레이어 컨트롤러 클래스 설정.
	PlayerControllerClass = AABPlayerController::StaticClass();


	// 기본 클래스 지정.
	//PlayerControllerClass = AABPlayerController::StaticClass();

	//static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(
	//	TEXT("/Script/ArenaBattle.ABPlayerController")
	//);

	//static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(
	//	TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonPlayerController.BP_ThirdPersonPlayerController_C")
	//);
	//
	//if (PlayerControllerRef.Succeeded())
	//{
	//	PlayerControllerClass = PlayerControllerRef.Class;
	//}
}
