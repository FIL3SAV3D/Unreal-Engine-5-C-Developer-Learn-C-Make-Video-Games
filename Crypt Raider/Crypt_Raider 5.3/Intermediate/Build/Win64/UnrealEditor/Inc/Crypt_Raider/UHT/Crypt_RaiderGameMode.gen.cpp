// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crypt_Raider/Crypt_RaiderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrypt_RaiderGameMode() {}
// Cross Module References
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_ACrypt_RaiderGameMode();
	CRYPT_RAIDER_API UClass* Z_Construct_UClass_ACrypt_RaiderGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Crypt_Raider();
// End Cross Module References
	void ACrypt_RaiderGameMode::StaticRegisterNativesACrypt_RaiderGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrypt_RaiderGameMode);
	UClass* Z_Construct_UClass_ACrypt_RaiderGameMode_NoRegister()
	{
		return ACrypt_RaiderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACrypt_RaiderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Crypt_Raider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Crypt_RaiderGameMode.h" },
		{ "ModuleRelativePath", "Crypt_RaiderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrypt_RaiderGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::ClassParams = {
		&ACrypt_RaiderGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACrypt_RaiderGameMode()
	{
		if (!Z_Registration_Info_UClass_ACrypt_RaiderGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrypt_RaiderGameMode.OuterSingleton, Z_Construct_UClass_ACrypt_RaiderGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrypt_RaiderGameMode.OuterSingleton;
	}
	template<> CRYPT_RAIDER_API UClass* StaticClass<ACrypt_RaiderGameMode>()
	{
		return ACrypt_RaiderGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrypt_RaiderGameMode);
	ACrypt_RaiderGameMode::~ACrypt_RaiderGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrypt_RaiderGameMode, ACrypt_RaiderGameMode::StaticClass, TEXT("ACrypt_RaiderGameMode"), &Z_Registration_Info_UClass_ACrypt_RaiderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrypt_RaiderGameMode), 3596236464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderGameMode_h_2563181684(TEXT("/Script/Crypt_Raider"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_5_Projects_Unreal_Engine_5_C_Developer_Learn_C_Make_Video_Games_Crypt_Raider_Crypt_Raider_5_3_Source_Crypt_Raider_Crypt_RaiderGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
