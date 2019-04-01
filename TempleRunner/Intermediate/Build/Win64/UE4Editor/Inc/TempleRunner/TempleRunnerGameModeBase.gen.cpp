// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleRunner/TempleRunnerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempleRunnerGameModeBase() {}
// Cross Module References
	TEMPLERUNNER_API UClass* Z_Construct_UClass_ATempleRunnerGameModeBase_NoRegister();
	TEMPLERUNNER_API UClass* Z_Construct_UClass_ATempleRunnerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TempleRunner();
// End Cross Module References
	void ATempleRunnerGameModeBase::StaticRegisterNativesATempleRunnerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATempleRunnerGameModeBase_NoRegister()
	{
		return ATempleRunnerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATempleRunnerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TempleRunnerGameModeBase.h" },
		{ "ModuleRelativePath", "TempleRunnerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATempleRunnerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::ClassParams = {
		&ATempleRunnerGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATempleRunnerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATempleRunnerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATempleRunnerGameModeBase, 1805092155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATempleRunnerGameModeBase(Z_Construct_UClass_ATempleRunnerGameModeBase, &ATempleRunnerGameModeBase::StaticClass, TEXT("/Script/TempleRunner"), TEXT("ATempleRunnerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATempleRunnerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
