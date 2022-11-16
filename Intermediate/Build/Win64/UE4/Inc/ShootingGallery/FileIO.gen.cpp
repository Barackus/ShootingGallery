// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingGallery/FileIO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileIO() {}
// Cross Module References
	SHOOTINGGALLERY_API UClass* Z_Construct_UClass_UFileIO_NoRegister();
	SHOOTINGGALLERY_API UClass* Z_Construct_UClass_UFileIO();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ShootingGallery();
// End Cross Module References
	DEFINE_FUNCTION(UFileIO::execSaveStringArrayToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_TARRAY(FString,Z_Param_Lines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::SaveStringArrayToFile(Z_Param_Filename,Z_Param_Lines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execLoadFileToStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileIO::LoadFileToStringArray(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execLoadFileToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileIO::LoadFileToString(Z_Param_Filename);
		P_NATIVE_END;
	}
	void UFileIO::StaticRegisterNativesUFileIO()
	{
		UClass* Class = UFileIO::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileToString", &UFileIO::execLoadFileToString },
			{ "LoadFileToStringArray", &UFileIO::execLoadFileToStringArray },
			{ "SaveStringArrayToFile", &UFileIO::execSaveStringArrayToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileIO_LoadFileToString_Statics
	{
		struct FileIO_eventLoadFileToString_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileIO_eventLoadFileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileIO_eventLoadFileToString_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "FileIO.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "LoadFileToString", nullptr, nullptr, sizeof(FileIO_eventLoadFileToString_Parms), Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileIO_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics
	{
		struct FileIO_eventLoadFileToStringArray_Parms
		{
			FString Filename;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileIO_eventLoadFileToStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileIO_eventLoadFileToStringArray_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "FileIO.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "LoadFileToStringArray", nullptr, nullptr, sizeof(FileIO_eventLoadFileToStringArray_Parms), Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_LoadFileToStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileIO_LoadFileToStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics
	{
		struct FileIO_eventSaveStringArrayToFile_Parms
		{
			FString Filename;
			TArray<FString> Lines;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventSaveStringArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileIO_eventSaveStringArrayToFile_Parms), &Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileIO_eventSaveStringArrayToFile_Parms, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileIO_eventSaveStringArrayToFile_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_Lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_Lines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "FileIO.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "SaveStringArrayToFile", nullptr, nullptr, sizeof(FileIO_eventSaveStringArrayToFile_Parms), Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_SaveStringArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileIO_SaveStringArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileIO_NoRegister()
	{
		return UFileIO::StaticClass();
	}
	struct Z_Construct_UClass_UFileIO_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileIO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingGallery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileIO_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileIO_LoadFileToString, "LoadFileToString" }, // 509246579
		{ &Z_Construct_UFunction_UFileIO_LoadFileToStringArray, "LoadFileToStringArray" }, // 1899390352
		{ &Z_Construct_UFunction_UFileIO_SaveStringArrayToFile, "SaveStringArrayToFile" }, // 4103169520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FileIO.h" },
		{ "ModuleRelativePath", "FileIO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileIO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileIO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileIO_Statics::ClassParams = {
		&UFileIO::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileIO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileIO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileIO, 333668299);
	template<> SHOOTINGGALLERY_API UClass* StaticClass<UFileIO>()
	{
		return UFileIO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileIO(Z_Construct_UClass_UFileIO, &UFileIO::StaticClass, TEXT("/Script/ShootingGallery"), TEXT("UFileIO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileIO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
