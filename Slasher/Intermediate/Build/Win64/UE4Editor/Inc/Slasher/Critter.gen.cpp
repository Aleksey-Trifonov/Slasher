// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slasher/Critter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCritter() {}
// Cross Module References
	SLASHER_API UClass* Z_Construct_UClass_ACritter_NoRegister();
	SLASHER_API UClass* Z_Construct_UClass_ACritter();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Slasher();
// End Cross Module References
	void ACritter::StaticRegisterNativesACritter()
	{
	}
	UClass* Z_Construct_UClass_ACritter_NoRegister()
	{
		return ACritter::StaticClass();
	}
	struct Z_Construct_UClass_ACritter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACritter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACritter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Critter.h" },
		{ "ModuleRelativePath", "Critter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACritter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACritter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACritter_Statics::ClassParams = {
		&ACritter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACritter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACritter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACritter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACritter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACritter, 1488822352);
	template<> SLASHER_API UClass* StaticClass<ACritter>()
	{
		return ACritter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACritter(Z_Construct_UClass_ACritter, &ACritter::StaticClass, TEXT("/Script/Slasher"), TEXT("ACritter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACritter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
