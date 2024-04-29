// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MechShooterProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MECHSHOOTER_MechShooterProjectile_generated_h
#error "MechShooterProjectile.generated.h already included, missing '#pragma once' in MechShooterProjectile.h"
#endif
#define MECHSHOOTER_MechShooterProjectile_generated_h

#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_SPARSE_DATA
#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_ACCESSORS
#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechShooterProjectile(); \
	friend struct Z_Construct_UClass_AMechShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMechShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechShooter"), NO_API) \
	DECLARE_SERIALIZER(AMechShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechShooterProjectile(AMechShooterProjectile&&); \
	NO_API AMechShooterProjectile(const AMechShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechShooterProjectile) \
	NO_API virtual ~AMechShooterProjectile();


#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_12_PROLOG
#define FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_SPARSE_DATA \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_ACCESSORS \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHSHOOTER_API UClass* StaticClass<class AMechShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_media_thomas_storage_GameProjects_UE5MechShooterPortfolio_MechShooter_Source_MechShooter_MechShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
