// Fill out your copyright notice in the Description page of Project Settings.


#include "FileIO.h"
#include <Runtime\Core\Public\Misc\Paths.h>
#include <Runtime\Core\Public\HAL\PlatformFilemanager.h>



using namespace std;


FString UFileIO::LoadFileToString(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}

TArray<FString> UFileIO::LoadFileToStringArray(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();


	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToStringArray(result, *myFile);
	}

	return result;
}

bool UFileIO::SaveStringArrayToFile(FString Filename, TArray<FString> Lines)
{
	FString directory = FPaths::ProjectContentDir();
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::SaveStringArrayToFile(Lines, *myFile);
		return true;
	}
	else return false;
}


/*
bool UFileIO::SaveStringArrayToFile(const TArray<FString>& Lines, const TCHAR* Filename, FFileHelper::EEncodingOptions EncodingOptions = FFileHelper::EEncodingOptions::AutoDetect, IFileManager* FileManager = &IFileManager::Get(), uint32 WriteFlags = 0)
{
	int32 Length = 10;
	for (const FString& Line : Lines)
	{
		Length += Line.Len() + UE_ARRAY_COUNT(LINE_TERMINATOR);
	}

	FString CombinedString;
	CombinedString.Reserve(Length);

	for (const FString& Line : Lines)
	{
		CombinedString += Line;
		CombinedString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(CombinedString, Filename, EncodingOptions, FileManager, WriteFlags);
}
*/

/*
bool FFileHelper::SaveStringArrayToFile( const TArray<FString>& Lines, const TCHAR* Filename, EEncodingOptions EncodingOptions, IFileManager* FileManager, uint32 WriteFlags )
{
	int32 Length = 10;
	for(const FString& Line : Lines)
	{
		Length += Line.Len() + UE_ARRAY_COUNT(LINE_TERMINATOR);
	}

	FString CombinedString;
	CombinedString.Reserve(Length);

	for(const FString& Line : Lines)
	{
		CombinedString += Line;
		CombinedString += LINE_TERMINATOR;
	}

	return SaveStringToFile(CombinedString, Filename, EncodingOptions, FileManager, WriteFlags);
}
*/