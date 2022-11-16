// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGGALLERY_FileIO_generated_h
#error "FileIO.generated.h already included, missing '#pragma once' in FileIO.h"
#endif
#define SHOOTINGGALLERY_FileIO_generated_h

#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_SPARSE_DATA
#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveStringArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToStringArray); \
	DECLARE_FUNCTION(execLoadFileToString);


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveStringArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToStringArray); \
	DECLARE_FUNCTION(execLoadFileToString);


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend struct Z_Construct_UClass_UFileIO_Statics; \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootingGallery"), NO_API) \
	DECLARE_SERIALIZER(UFileIO)


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend struct Z_Construct_UClass_UFileIO_Statics; \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootingGallery"), NO_API) \
	DECLARE_SERIALIZER(UFileIO)


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileIO(UFileIO&&); \
	NO_API UFileIO(const UFileIO&); \
public:


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileIO(UFileIO&&); \
	NO_API UFileIO(const UFileIO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO)


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_PRIVATE_PROPERTY_OFFSET
#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_26_PROLOG
#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_PRIVATE_PROPERTY_OFFSET \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_SPARSE_DATA \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_RPC_WRAPPERS \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_INCLASS \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_PRIVATE_PROPERTY_OFFSET \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_SPARSE_DATA \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_INCLASS_NO_PURE_DECLS \
	ShootingGallery_4_25_Source_ShootingGallery_FileIO_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGGALLERY_API UClass* StaticClass<class UFileIO>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingGallery_4_25_Source_ShootingGallery_FileIO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
