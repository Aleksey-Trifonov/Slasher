// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SLASHER_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SLASHER_Item_generated_h

#define Slasher_Source_Slasher_Item_h_12_SPARSE_DATA
#define Slasher_Source_Slasher_Item_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Slasher_Source_Slasher_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Slasher_Source_Slasher_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slasher"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Slasher_Source_Slasher_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slasher"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Slasher_Source_Slasher_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define Slasher_Source_Slasher_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Slasher_Source_Slasher_Item_h_12_PRIVATE_PROPERTY_OFFSET
#define Slasher_Source_Slasher_Item_h_9_PROLOG
#define Slasher_Source_Slasher_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slasher_Source_Slasher_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	Slasher_Source_Slasher_Item_h_12_SPARSE_DATA \
	Slasher_Source_Slasher_Item_h_12_RPC_WRAPPERS \
	Slasher_Source_Slasher_Item_h_12_INCLASS \
	Slasher_Source_Slasher_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Slasher_Source_Slasher_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slasher_Source_Slasher_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	Slasher_Source_Slasher_Item_h_12_SPARSE_DATA \
	Slasher_Source_Slasher_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Slasher_Source_Slasher_Item_h_12_INCLASS_NO_PURE_DECLS \
	Slasher_Source_Slasher_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASHER_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Slasher_Source_Slasher_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
