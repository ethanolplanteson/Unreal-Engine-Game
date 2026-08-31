// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UWEValidators/Public/ValidatorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValidatorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UWEValidators();
	UWEVALIDATORS_API UClass* Z_Construct_UClass_UValidatorSettings();
	UWEVALIDATORS_API UClass* Z_Construct_UClass_UValidatorSettings_NoRegister();
// End Cross Module References
	void UValidatorSettings::StaticRegisterNativesUValidatorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UValidatorSettings);
	UClass* Z_Construct_UClass_UValidatorSettings_NoRegister()
	{
		return UValidatorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UValidatorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeIntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SomeIntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeBoolProperty_MetaData[];
#endif
		static void NewProp_SomeBoolProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SomeBoolProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UValidatorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UWEValidators,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UValidatorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UValidatorSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ValidatorSettings.h" },
		{ "ModuleRelativePath", "Public/ValidatorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeIntProperty_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ValidatorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeIntProperty = { "SomeIntProperty", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UValidatorSettings, SomeIntProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeIntProperty_MetaData), Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeIntProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ValidatorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty_SetBit(void* Obj)
	{
		((UValidatorSettings*)Obj)->SomeBoolProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty = { "SomeBoolProperty", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UValidatorSettings), &Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty_MetaData), Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UValidatorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeIntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidatorSettings_Statics::NewProp_SomeBoolProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UValidatorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UValidatorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UValidatorSettings_Statics::ClassParams = {
		&UValidatorSettings::StaticClass,
		"UWEValidatorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UValidatorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UValidatorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValidatorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UValidatorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UValidatorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UValidatorSettings()
	{
		if (!Z_Registration_Info_UClass_UValidatorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UValidatorSettings.OuterSingleton, Z_Construct_UClass_UValidatorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UValidatorSettings.OuterSingleton;
	}
	template<> UWEVALIDATORS_API UClass* StaticClass<UValidatorSettings>()
	{
		return UValidatorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UValidatorSettings);
	UValidatorSettings::~UValidatorSettings() {}
	struct Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_ValidatorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_ValidatorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UValidatorSettings, UValidatorSettings::StaticClass, TEXT("UValidatorSettings"), &Z_Registration_Info_UClass_UValidatorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UValidatorSettings), 2362048975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_ValidatorSettings_h_3171813668(TEXT("/Script/UWEValidators"),
		Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_ValidatorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_ValidatorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
