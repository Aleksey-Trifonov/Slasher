// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slasher/Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain() {}
// Cross Module References
	SLASHER_API UEnum* Z_Construct_UEnum_Slasher_EStaminaStatus();
	UPackage* Z_Construct_UPackage__Script_Slasher();
	SLASHER_API UEnum* Z_Construct_UEnum_Slasher_EMovementStatus();
	SLASHER_API UClass* Z_Construct_UClass_AMain_NoRegister();
	SLASHER_API UClass* Z_Construct_UClass_AMain();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* EStaminaStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slasher_EStaminaStatus, Z_Construct_UPackage__Script_Slasher(), TEXT("EStaminaStatus"));
		}
		return Singleton;
	}
	template<> SLASHER_API UEnum* StaticEnum<EStaminaStatus>()
	{
		return EStaminaStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStaminaStatus(EStaminaStatus_StaticEnum, TEXT("/Script/Slasher"), TEXT("EStaminaStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slasher_EStaminaStatus_Hash() { return 2619199789U; }
	UEnum* Z_Construct_UEnum_Slasher_EStaminaStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slasher();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStaminaStatus"), 0, Get_Z_Construct_UEnum_Slasher_EStaminaStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStaminaStatus::ESS_Normal", (int64)EStaminaStatus::ESS_Normal },
				{ "EStaminaStatus::ESS_BelowMinimum", (int64)EStaminaStatus::ESS_BelowMinimum },
				{ "EStaminaStatus::ESS_Exhausted", (int64)EStaminaStatus::ESS_Exhausted },
				{ "EStaminaStatus::ESS_ExhaustedRecovering", (int64)EStaminaStatus::ESS_ExhaustedRecovering },
				{ "EStaminaStatus::ESS_MAX", (int64)EStaminaStatus::ESS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ESS_BelowMinimum.DisplayName", "BelowMinimum" },
				{ "ESS_BelowMinimum.Name", "EStaminaStatus::ESS_BelowMinimum" },
				{ "ESS_Exhausted.DisplayName", "Exhausted" },
				{ "ESS_Exhausted.Name", "EStaminaStatus::ESS_Exhausted" },
				{ "ESS_ExhaustedRecovering.DisplayName", "ExhaustedRecovering" },
				{ "ESS_ExhaustedRecovering.Name", "EStaminaStatus::ESS_ExhaustedRecovering" },
				{ "ESS_MAX.DisplayName", "DefaultMAX" },
				{ "ESS_MAX.Name", "EStaminaStatus::ESS_MAX" },
				{ "ESS_Normal.DisplayName", "Normal" },
				{ "ESS_Normal.Name", "EStaminaStatus::ESS_Normal" },
				{ "ModuleRelativePath", "Main.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slasher,
				nullptr,
				"EStaminaStatus",
				"EStaminaStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slasher_EMovementStatus, Z_Construct_UPackage__Script_Slasher(), TEXT("EMovementStatus"));
		}
		return Singleton;
	}
	template<> SLASHER_API UEnum* StaticEnum<EMovementStatus>()
	{
		return EMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementStatus(EMovementStatus_StaticEnum, TEXT("/Script/Slasher"), TEXT("EMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slasher_EMovementStatus_Hash() { return 2447074730U; }
	UEnum* Z_Construct_UEnum_Slasher_EMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slasher();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementStatus"), 0, Get_Z_Construct_UEnum_Slasher_EMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementStatus::EMS_Normal", (int64)EMovementStatus::EMS_Normal },
				{ "EMovementStatus::EMS_Sprinting", (int64)EMovementStatus::EMS_Sprinting },
				{ "EMovementStatus::EMS_MAX", (int64)EMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMS_MAX.DisplayName", "DefaultMAX" },
				{ "EMS_MAX.Name", "EMovementStatus::EMS_MAX" },
				{ "EMS_Normal.DisplayName", "Normal" },
				{ "EMS_Normal.Name", "EMovementStatus::EMS_Normal" },
				{ "EMS_Sprinting.DisplayName", "Sprinting" },
				{ "EMS_Sprinting.Name", "EMovementStatus::EMS_Sprinting" },
				{ "ModuleRelativePath", "Main.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slasher,
				nullptr,
				"EMovementStatus",
				"EMovementStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMain::StaticRegisterNativesAMain()
	{
	}
	UClass* Z_Construct_UClass_AMain_NoRegister()
	{
		return AMain::StaticClass();
	}
	struct Z_Construct_UClass_AMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Coins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShiftKeyDown_MetaData[];
#endif
		static void NewProp_bShiftKeyDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShiftKeyDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSprintStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSprintStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaminaStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaminaStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Main.h" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_Coins_MetaData[] = {
		{ "Category", "Player stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, Coins), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_Coins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_Coins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Player stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Player stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, Stamina), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, Health), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	void Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown_SetBit(void* Obj)
	{
		((AMain*)Obj)->bShiftKeyDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown = { "bShiftKeyDown", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMain), &Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, SprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, RunningSpeed), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina = { "MinSprintStamina", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MinSprintStamina), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, StaminaDrainRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus = { "StaminaStatus", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, StaminaStatus), Z_Construct_UEnum_Slasher_EStaminaStatus, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus = { "MovementStatus", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MovementStatus), Z_Construct_UEnum_Slasher_EMovementStatus, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Coins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_bShiftKeyDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMain_Statics::ClassParams = {
		&AMain::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMain, 4063386570);
	template<> SLASHER_API UClass* StaticClass<AMain>()
	{
		return AMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMain(Z_Construct_UClass_AMain, &AMain::StaticClass, TEXT("/Script/Slasher"), TEXT("AMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
