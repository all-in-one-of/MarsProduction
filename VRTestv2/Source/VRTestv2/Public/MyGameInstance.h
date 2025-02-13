// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NetworkReplayStreaming.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FS_ReplayInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
		FString ReplayName;
	UPROPERTY(BlueprintReadOnly)
		FString FriendlyName;
	UPROPERTY(BlueprintReadOnly)
		FDateTime Timestamp;
	UPROPERTY(BlueprintReadOnly)
		int32 LengthInMS;
	UPROPERTY(BlueprintReadOnly)
		bool bIsValid;

	FS_ReplayInfo(FString NewName, FString NewFriendlyName, FDateTime NewTimestamp, int32 NewLengthInMS)
	{
		ReplayName = NewName;
		FriendlyName = NewFriendlyName;
		Timestamp = NewTimestamp;
		LengthInMS = NewLengthInMS;
		bIsValid = true;
	}

	FS_ReplayInfo()
	{
		ReplayName = "Replay";
		FriendlyName = "Replay";
		Timestamp = FDateTime::MinValue();
		LengthInMS = 0;
		bIsValid = false;
	}
};

UCLASS()
class VRTESTV2_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

		
	
public:

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartRecordingReplayFromBP(FString ReplayName, FString FriendlyName);

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StopRecordingReplayFromBP();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void PlayReplayFromBP(FString ReplayName);

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void FindReplays();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void RenameReplay(const FString &ReplayName, const FString &NewFriendlyReplayName);

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void DeleteReplay(const FString &ReplayName);

	virtual void PostInitProperties() override;


private:

	TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr;
	FOnEnumerateStreamsComplete OnEnumerateStreamsCompleteDelegate;

	void OnEnumerateStreamsComplete(const TArray<FNetworkReplayStreamInfo>& StreamInfos);

	FOnDeleteFinishedStreamComplete OnDeleteFinishedStreamCompleteDelegate;

	void OnDeleteFinishedStreamComplete(const bool bDeleteSucceeded);

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "Replays")
		void BP_OnFindReplaysComplete(const TArray<FS_ReplayInfo> &AllReplays);
	
	
};
