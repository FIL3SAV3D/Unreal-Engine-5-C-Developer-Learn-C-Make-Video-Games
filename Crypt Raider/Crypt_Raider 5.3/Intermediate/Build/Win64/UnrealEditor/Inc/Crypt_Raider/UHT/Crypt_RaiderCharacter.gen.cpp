// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crypt_Raider/Crypt_RaiderCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrypt_RaiderCharacter() {}
// Cross Module References
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_ACrypt_RaiderCharacter();
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_ACrypt_RaiderCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Crypt_Raider();
// End Cross Module References
	DEFINE_FUNCTION(ACrypt_RaiderCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrypt_RaiderCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void ACrypt_RaiderCharacter::StaticRegisterNativesACrypt_RaiderCharacter()
	{
		UClass* Class = ACrypt_RaiderCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &ACrypt_RaiderCharacter::execGetHasRifle },
			{ "SetHasRifle", &ACrypt_RaiderCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics
	{
		struct Crypt_RaiderCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Crypt_RaiderCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Crypt_RaiderCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrypt_RaiderCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::Crypt_RaiderCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::Crypt_RaiderCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics
	{
		struct Crypt_RaiderCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((Crypt_RaiderCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Crypt_RaiderCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrypt_RaiderCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::Crypt_RaiderCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::Crypt_RaiderCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrypt_RaiderCharacter);
	UClass* Z_Construct_UClass_ACrypt_RaiderCharacter_NoRegister()
	{
		return ACrypt_RaiderCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACrypt_RaiderCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Crypt_Raider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrypt_RaiderCharacter_GetHasRifle, "GetHasRifle" }, // 930296566
		{ &Z_Construct_UFunction_ACrypt_RaiderCharacter_SetHasRifle, "SetHasRifle" }, // 2026624981
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Crypt_RaiderCharacter.h" },
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrypt_RaiderCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrypt_RaiderCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrypt_RaiderCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrypt_RaiderCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrypt_RaiderCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrypt_RaiderCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "Crypt_RaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((ACrypt_RaiderCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACrypt_RaiderCharacter), &Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrypt_RaiderCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::ClassParams = {
		&ACrypt_RaiderCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACrypt_RaiderCharacter()
	{
		if (!Z_Registration_Info_UClass_ACrypt_RaiderCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrypt_RaiderCharacter.OuterSingleton, Z_Construct_UClass_ACrypt_RaiderCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrypt_RaiderCharacter.OuterSingleton;
	}
	template<> CRYPT_RAIDER_API UClass* StaticClass<ACrypt_RaiderCharacter>()
	{
		return ACrypt_RaiderCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrypt_RaiderCharacter);
	ACrypt_RaiderCharacter::~ACrypt_RaiderCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrypt_RaiderCharacter, ACrypt_RaiderCharacter::StaticClass, TEXT("ACrypt_RaiderCharacter"), &Z_Registration_Info_UClass_ACrypt_RaiderCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrypt_RaiderCharacter), 911234966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderCharacter_h_3497967853(TEXT("/Script/Crypt_Raider"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS