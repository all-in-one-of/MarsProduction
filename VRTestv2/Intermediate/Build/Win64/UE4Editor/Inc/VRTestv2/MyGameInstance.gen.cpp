// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRTestv2/Public/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	VRTESTV2_API UScriptStruct* Z_Construct_UScriptStruct_FS_ReplayInfo();
	UPackage* Z_Construct_UPackage__Script_VRTestv2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	VRTESTV2_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	VRTESTV2_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_DeleteReplay();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_FindReplays();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_RenameReplay();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP();
	VRTESTV2_API UFunction* Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP();
// End Cross Module References
class UScriptStruct* FS_ReplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRTESTV2_API uint32 Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ReplayInfo, Z_Construct_UPackage__Script_VRTestv2(), TEXT("S_ReplayInfo"), sizeof(FS_ReplayInfo), Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ReplayInfo(FS_ReplayInfo::StaticStruct, TEXT("/Script/VRTestv2"), TEXT("S_ReplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_VRTestv2_StaticRegisterNativesFS_ReplayInfo
{
	FScriptStruct_VRTestv2_StaticRegisterNativesFS_ReplayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ReplayInfo")),new UScriptStruct::TCppStructOps<FS_ReplayInfo>);
	}
} ScriptStruct_VRTestv2_StaticRegisterNativesFS_ReplayInfo;
	struct Z_Construct_UScriptStruct_FS_ReplayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LengthInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ReplayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "S_ReplayInfo" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FS_ReplayInfo*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FS_ReplayInfo), &Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_LengthInMS_MetaData[] = {
		{ "Category", "S_ReplayInfo" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_LengthInMS = { UE4CodeGen_Private::EPropertyClass::Int, "LengthInMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, LengthInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_LengthInMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_LengthInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "S_ReplayInfo" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_Timestamp = { UE4CodeGen_Private::EPropertyClass::Struct, "Timestamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_Timestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "S_ReplayInfo" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_FriendlyName = { UE4CodeGen_Private::EPropertyClass::Str, "FriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_ReplayName_MetaData[] = {
		{ "Category", "S_ReplayInfo" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, ReplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_ReplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_LengthInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::NewProp_ReplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRTestv2,
		nullptr,
		&NewStructOps,
		"S_ReplayInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FS_ReplayInfo),
		alignof(FS_ReplayInfo),
		Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ReplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRTestv2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ReplayInfo"), sizeof(FS_ReplayInfo), Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ReplayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC() { return 1091869967U; }
	static FName NAME_UMyGameInstance_BP_OnFindReplaysComplete = FName(TEXT("BP_OnFindReplaysComplete"));
	void UMyGameInstance::BP_OnFindReplaysComplete(TArray<FS_ReplayInfo> const& AllReplays)
	{
		MyGameInstance_eventBP_OnFindReplaysComplete_Parms Parms;
		Parms.AllReplays=AllReplays;
		ProcessEvent(FindFunctionChecked(NAME_UMyGameInstance_BP_OnFindReplaysComplete),&Parms);
	}
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteReplay", &UMyGameInstance::execDeleteReplay },
			{ "FindReplays", &UMyGameInstance::execFindReplays },
			{ "PlayReplayFromBP", &UMyGameInstance::execPlayReplayFromBP },
			{ "RenameReplay", &UMyGameInstance::execRenameReplay },
			{ "StartRecordingReplayFromBP", &UMyGameInstance::execStartRecordingReplayFromBP },
			{ "StopRecordingReplayFromBP", &UMyGameInstance::execStopRecordingReplayFromBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllReplays_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllReplays;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllReplays_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays = { UE4CodeGen_Private::EPropertyClass::Array, "AllReplays", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventBP_OnFindReplaysComplete_Parms, AllReplays), METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AllReplays", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FS_ReplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "BP_OnFindReplaysComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08480800, sizeof(MyGameInstance_eventBP_OnFindReplaysComplete_Parms), Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics
	{
		struct MyGameInstance_eventDeleteReplay_Parms
		{
			FString ReplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventDeleteReplay_Parms, ReplayName), METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::NewProp_ReplayName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "DeleteReplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventDeleteReplay_Parms), Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_DeleteReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_DeleteReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_FindReplays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_FindReplays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_FindReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "FindReplays", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_FindReplays_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_FindReplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_FindReplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_FindReplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics
	{
		struct MyGameInstance_eventPlayReplayFromBP_Parms
		{
			FString ReplayName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventPlayReplayFromBP_Parms, ReplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "PlayReplayFromBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventPlayReplayFromBP_Parms), Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics
	{
		struct MyGameInstance_eventRenameReplay_Parms
		{
			FString ReplayName;
			FString NewFriendlyReplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFriendlyReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewFriendlyReplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "NewFriendlyReplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventRenameReplay_Parms, NewFriendlyReplayName), METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventRenameReplay_Parms, ReplayName), METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_ReplayName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "RenameReplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventRenameReplay_Parms), Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_RenameReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_RenameReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics
	{
		struct MyGameInstance_eventStartRecordingReplayFromBP_Parms
		{
			FString ReplayName;
			FString FriendlyName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::NewProp_FriendlyName = { UE4CodeGen_Private::EPropertyClass::Str, "FriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventStartRecordingReplayFromBP_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventStartRecordingReplayFromBP_Parms, ReplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "StartRecordingReplayFromBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventStartRecordingReplayFromBP_Parms), Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "StopRecordingReplayFromBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VRTestv2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete, "BP_OnFindReplaysComplete" }, // 980638804
		{ &Z_Construct_UFunction_UMyGameInstance_DeleteReplay, "DeleteReplay" }, // 3463351091
		{ &Z_Construct_UFunction_UMyGameInstance_FindReplays, "FindReplays" }, // 191359017
		{ &Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP, "PlayReplayFromBP" }, // 248300133
		{ &Z_Construct_UFunction_UMyGameInstance_RenameReplay, "RenameReplay" }, // 2358589049
		{ &Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP, "StartRecordingReplayFromBP" }, // 3511222127
		{ &Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP, "StopRecordingReplayFromBP" }, // 1566014550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 9219393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/VRTestv2"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
