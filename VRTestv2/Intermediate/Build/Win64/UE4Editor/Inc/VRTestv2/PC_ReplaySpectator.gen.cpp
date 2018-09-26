// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRTestv2/Public/PC_ReplaySpectator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_ReplaySpectator() {}
// Cross Module References
	VRTESTV2_API UClass* Z_Construct_UClass_APC_ReplaySpectator_NoRegister();
	VRTESTV2_API UClass* Z_Construct_UClass_APC_ReplaySpectator();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_VRTestv2();
	VRTESTV2_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds();
	VRTESTV2_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds();
	VRTESTV2_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState();
	VRTESTV2_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate();
	VRTESTV2_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds();
// End Cross Module References
	void APC_ReplaySpectator::StaticRegisterNativesAPC_ReplaySpectator()
	{
		UClass* Class = APC_ReplaySpectator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentReplayCurrentTimeInSeconds", &APC_ReplaySpectator::execGetCurrentReplayCurrentTimeInSeconds },
			{ "GetCurrentReplayTotalTimeInSeconds", &APC_ReplaySpectator::execGetCurrentReplayTotalTimeInSeconds },
			{ "SetCurrentReplayPausedState", &APC_ReplaySpectator::execSetCurrentReplayPausedState },
			{ "SetCurrentReplayPlayRate", &APC_ReplaySpectator::execSetCurrentReplayPlayRate },
			{ "SetCurrentReplayTimeToSeconds", &APC_ReplaySpectator::execSetCurrentReplayTimeToSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics
	{
		struct PC_ReplaySpectator_eventGetCurrentReplayCurrentTimeInSeconds_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventGetCurrentReplayCurrentTimeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurentReplay" },
		{ "ModuleRelativePath", "Public/PC_ReplaySpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "GetCurrentReplayCurrentTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PC_ReplaySpectator_eventGetCurrentReplayCurrentTimeInSeconds_Parms), Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics
	{
		struct PC_ReplaySpectator_eventGetCurrentReplayTotalTimeInSeconds_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventGetCurrentReplayTotalTimeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "ModuleRelativePath", "Public/PC_ReplaySpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "GetCurrentReplayTotalTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PC_ReplaySpectator_eventGetCurrentReplayTotalTimeInSeconds_Parms), Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics
	{
		struct PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms
		{
			bool bDoPause;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bDoPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms), &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_bDoPause_SetBit(void* Obj)
	{
		((PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms*)Obj)->bDoPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_bDoPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoPause", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms), &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_bDoPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::NewProp_bDoPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "ModuleRelativePath", "Public/PC_ReplaySpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "SetCurrentReplayPausedState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms), Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics
	{
		struct PC_ReplaySpectator_eventSetCurrentReplayPlayRate_Parms
		{
			float PlayRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventSetCurrentReplayPlayRate_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "ModuleRelativePath", "Public/PC_ReplaySpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "SetCurrentReplayPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPlayRate_Parms), Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics
	{
		struct PC_ReplaySpectator_eventSetCurrentReplayTimeToSeconds_Parms
		{
			int32 Seconds;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::NewProp_Seconds = { UE4CodeGen_Private::EPropertyClass::Int, "Seconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventSetCurrentReplayTimeToSeconds_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "ModuleRelativePath", "Public/PC_ReplaySpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "SetCurrentReplayTimeToSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PC_ReplaySpectator_eventSetCurrentReplayTimeToSeconds_Parms), Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APC_ReplaySpectator_NoRegister()
	{
		return APC_ReplaySpectator::StaticClass();
	}
	struct Z_Construct_UClass_APC_ReplaySpectator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_ReplaySpectator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRTestv2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APC_ReplaySpectator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds, "GetCurrentReplayCurrentTimeInSeconds" }, // 177161044
		{ &Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds, "GetCurrentReplayTotalTimeInSeconds" }, // 3576536143
		{ &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState, "SetCurrentReplayPausedState" }, // 3756831723
		{ &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate, "SetCurrentReplayPlayRate" }, // 3869335996
		{ &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds, "SetCurrentReplayTimeToSeconds" }, // 3314205377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_ReplaySpectator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PC_ReplaySpectator.h" },
		{ "ModuleRelativePath", "Public/PC_ReplaySpectator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_ReplaySpectator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_ReplaySpectator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APC_ReplaySpectator_Statics::ClassParams = {
		&APC_ReplaySpectator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APC_ReplaySpectator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APC_ReplaySpectator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APC_ReplaySpectator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APC_ReplaySpectator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_ReplaySpectator, 2196821494);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_ReplaySpectator(Z_Construct_UClass_APC_ReplaySpectator, &APC_ReplaySpectator::StaticClass, TEXT("/Script/VRTestv2"), TEXT("APC_ReplaySpectator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_ReplaySpectator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
