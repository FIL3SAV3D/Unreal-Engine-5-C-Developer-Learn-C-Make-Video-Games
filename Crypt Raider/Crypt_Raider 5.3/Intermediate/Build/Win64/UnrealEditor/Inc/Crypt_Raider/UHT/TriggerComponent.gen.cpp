// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crypt_Raider/TriggerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}
// Cross Module References
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_UMover_NoRegister();
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_UTriggerComponent();
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_Crypt_Raider();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerComponent::execSetMover)
	{
		P_GET_OBJECT(UMover,Z_Param_Mover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMover(Z_Param_Mover);
		P_NATIVE_END;
	}
	void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
	{
		UClass* Class = UTriggerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMover", &UTriggerComponent::execSetMover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerComponent_SetMover_Statics
	{
		struct TriggerComponent_eventSetMover_Parms
		{
			UMover* Mover;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mover_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mover;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_Mover_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_Mover = { "Mover", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerComponent_eventSetMover_Parms, Mover), Z_Construct_UClass_UMover_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_Mover_MetaData), Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_Mover_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_Mover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerComponent, nullptr, "SetMover", nullptr, nullptr, Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::TriggerComponent_eventSetMover_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::TriggerComponent_eventSetMover_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTriggerComponent_SetMover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerComponent);
	UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
	{
		return UTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccepableActorTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AccepableActorTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Crypt_Raider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerComponent_SetMover, "SetMover" }, // 4290877402
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_AccepableActorTag_MetaData[] = {
		{ "Category", "TriggerComponent" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_AccepableActorTag = { "AccepableActorTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerComponent, AccepableActorTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_AccepableActorTag_MetaData), Z_Construct_UClass_UTriggerComponent_Statics::NewProp_AccepableActorTag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_AccepableActorTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
		&UTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTriggerComponent()
	{
		if (!Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton;
	}
	template<> CRYPT_RAIDER_API UClass* StaticClass<UTriggerComponent>()
	{
		return UTriggerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
	UTriggerComponent::~UTriggerComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_TriggerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_TriggerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerComponent, UTriggerComponent::StaticClass, TEXT("UTriggerComponent"), &Z_Registration_Info_UClass_UTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerComponent), 4109059748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_TriggerComponent_h_3573764772(TEXT("/Script/Crypt_Raider"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_TriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_TriggerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
