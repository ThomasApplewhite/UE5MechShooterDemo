// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechShooter/MechShooterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechShooterPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MECHSHOOTER_API UClass* Z_Construct_UClass_AMechShooterPlayerController();
	MECHSHOOTER_API UClass* Z_Construct_UClass_AMechShooterPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MechShooter();
// End Cross Module References
	void AMechShooterPlayerController::StaticRegisterNativesAMechShooterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechShooterPlayerController);
	UClass* Z_Construct_UClass_AMechShooterPlayerController_NoRegister()
	{
		return AMechShooterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMechShooterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechShooterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MechShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechShooterPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MechShooterPlayerController.h" },
		{ "ModuleRelativePath", "MechShooterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechShooterPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "MechShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechShooterPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMechShooterPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AMechShooterPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechShooterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechShooterPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechShooterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechShooterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechShooterPlayerController_Statics::ClassParams = {
		&AMechShooterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMechShooterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMechShooterPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMechShooterPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMechShooterPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMechShooterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechShooterPlayerController.OuterSingleton, Z_Construct_UClass_AMechShooterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechShooterPlayerController.OuterSingleton;
	}
	template<> MECHSHOOTER_API UClass* StaticClass<AMechShooterPlayerController>()
	{
		return AMechShooterPlayerController::StaticClass();
	}
	AMechShooterPlayerController::AMechShooterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechShooterPlayerController);
	AMechShooterPlayerController::~AMechShooterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechShooterPlayerController, AMechShooterPlayerController::StaticClass, TEXT("AMechShooterPlayerController"), &Z_Registration_Info_UClass_AMechShooterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechShooterPlayerController), 1876855134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterPlayerController_h_1296378890(TEXT("/Script/MechShooter"),
		Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
