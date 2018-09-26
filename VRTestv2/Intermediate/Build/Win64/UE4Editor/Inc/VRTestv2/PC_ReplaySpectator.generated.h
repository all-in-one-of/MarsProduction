// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRTESTV2_PC_ReplaySpectator_generated_h
#error "PC_ReplaySpectator.generated.h already included, missing '#pragma once' in PC_ReplaySpectator.h"
#endif
#define VRTESTV2_PC_ReplaySpectator_generated_h

#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayTimeToSeconds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayTimeToSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayCurrentTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayTotalTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_bDoPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCurrentReplayPausedState(Z_Param_bDoPause); \
		P_NATIVE_END; \
	}


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayTimeToSeconds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayTimeToSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayCurrentTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayTotalTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_bDoPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCurrentReplayPausedState(Z_Param_bDoPause); \
		P_NATIVE_END; \
	}


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPC_ReplaySpectator(); \
	friend struct Z_Construct_UClass_APC_ReplaySpectator_Statics; \
public: \
	DECLARE_CLASS(APC_ReplaySpectator, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRTestv2"), NO_API) \
	DECLARE_SERIALIZER(APC_ReplaySpectator)


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPC_ReplaySpectator(); \
	friend struct Z_Construct_UClass_APC_ReplaySpectator_Statics; \
public: \
	DECLARE_CLASS(APC_ReplaySpectator, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRTestv2"), NO_API) \
	DECLARE_SERIALIZER(APC_ReplaySpectator)


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APC_ReplaySpectator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_ReplaySpectator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_ReplaySpectator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_ReplaySpectator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APC_ReplaySpectator(APC_ReplaySpectator&&); \
	NO_API APC_ReplaySpectator(const APC_ReplaySpectator&); \
public:


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APC_ReplaySpectator(APC_ReplaySpectator&&); \
	NO_API APC_ReplaySpectator(const APC_ReplaySpectator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_ReplaySpectator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_ReplaySpectator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_ReplaySpectator)


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_PRIVATE_PROPERTY_OFFSET
#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_12_PROLOG
#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_PRIVATE_PROPERTY_OFFSET \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_RPC_WRAPPERS \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_INCLASS \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_PRIVATE_PROPERTY_OFFSET \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_INCLASS_NO_PURE_DECLS \
	VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRTestv2_Source_VRTestv2_Public_PC_ReplaySpectator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
