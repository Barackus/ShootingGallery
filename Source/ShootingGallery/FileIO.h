// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <runtime\core\Public\misc\FileHelper.h>
#include "FileIO.generated.h"
//#include "FileHelpers.h"
//#include <Runtime\Core\Public\Templates\UnrealTemplate.h>
//#include <Runtime\Core\Public\Containers\Array.h>

//#include "fstream.h"
//#include <Runtime\Core\Public\IO\>








/**
 * 
 */
UCLASS()
class SHOOTINGGALLERY_API UFileIO : public UBlueprintFunctionLibrary
{
//#define UE_ARRAY_COUNT( array ) (sizeof(UE4ArrayCountHelper(array)) - 1)
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString Filename);

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static TArray<FString> LoadFileToStringArray(FString Filename);

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static bool SaveStringArrayToFile(FString Filename, TArray<FString> Lines);

		//UFUNCTION(BlueprintCallable, Category = "File I/O")
		//static bool SaveStringArrayToFile(const TArray<FString>& Lines, const TCHAR* Filename, FFileHelper::EEncodingOptions EncodingOptions = FFileHelper::EEncodingOptions::AutoDetect, IFileManager* FileManager = &IFileManager::Get(), uint32 WriteFlags = 0);
	
};
