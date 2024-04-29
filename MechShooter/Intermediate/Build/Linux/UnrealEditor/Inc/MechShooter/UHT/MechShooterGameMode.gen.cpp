// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechShooter/MechShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechShooterGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MECHSHOOTER_API UClass* Z_Construct_UClass_AMechShooterGameMode();
	MECHSHOOTER_API UClass* Z_Construct_UClass_AMechShooterGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MechShooter();
// End Cross Module References
	void AMechShooterGameMode::StaticRegisterNativesAMechShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechShooterGameMode);
	UClass* Z_Construct_UClass_AMechShooterGameMode_NoRegister()
	{
		return AMechShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMechShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MechShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MechShooterGameMode.h" },
		{ "ModuleRelativePath", "MechShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechShooterGameMode_Statics::ClassParams = {
		&AMechShooterGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMechShooterGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMechShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_AMechShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechShooterGameMode.OuterSingleton, Z_Construct_UClass_AMechShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechShooterGameMode.OuterSingleton;
	}
	template<> MECHSHOOTER_API UClass* StaticClass<AMechShooterGameMode>()
	{
		return AMechShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechShooterGameMode);
	AMechShooterGameMode::~AMechShooterGameMode() {}
	struct Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechShooterGameMode, AMechShooterGameMode::StaticClass, TEXT("AMechShooterGameMode"), &Z_Registration_Info_UClass_AMechShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechShooterGameMode), 160485984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterGameMode_h_2946090793(TEXT("/Script/MechShooter"),
		Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
