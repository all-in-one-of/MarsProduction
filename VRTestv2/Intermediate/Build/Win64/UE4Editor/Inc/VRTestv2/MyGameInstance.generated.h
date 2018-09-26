// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ReplayInfo;
#ifdef VRTESTV2_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define VRTESTV2_MyGameInstance_generated_h

#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ReplayInfo_Statics; \
	VRTESTV2_API static class UScriptStruct* StaticStruct();


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewFriendlyReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameReplay(Z_Param_ReplayName,Z_Param_NewFriendlyReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindReplays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindReplays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReplayFromBP(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingReplayFromBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecordingReplayFromBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecordingReplayFromBP(Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	}


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewFriendlyReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameReplay(Z_Param_ReplayName,Z_Param_NewFriendlyReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindReplays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindReplays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReplayFromBP(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingReplayFromBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecordingReplayFromBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecordingReplayFromBP(Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	}


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_EVENT_PARMS \
	struct MyGameInstance_eventBP_OnFindReplaysComplete_Parms \
	{ \
		TArray<FS_ReplayInfo> AllReplays; \
	};


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_CALLBACK_WRAPPERS
#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRTestv2"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRTestv2"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_PRIVATE_PROPERTY_OFFSET
#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_49_PROLOG \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_EVENT_PARMS


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_PRIVATE_PROPERTY_OFFSET \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_RPC_WRAPPERS \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_CALLBACK_WRAPPERS \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_INCLASS \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_PRIVATE_PROPERTY_OFFSET \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_CALLBACK_WRAPPERS \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_INCLASS_NO_PURE_DECLS \
	VRTestv2_Source_VRTestv2_Public_MyGameInstance_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRTestv2_Source_VRTestv2_Public_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
