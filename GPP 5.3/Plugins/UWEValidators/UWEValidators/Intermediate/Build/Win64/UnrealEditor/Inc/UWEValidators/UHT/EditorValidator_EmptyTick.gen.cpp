// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UWEValidators/Public/EditorValidator_EmptyTick.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_EmptyTick() {}
// Cross Module References
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	UPackage* Z_Construct_UPackage__Script_UWEValidators();
	UWEVALIDATORS_API UClass* Z_Construct_UClass_UEditorValidator_EmptyTick();
	UWEVALIDATORS_API UClass* Z_Construct_UClass_UEditorValidator_EmptyTick_NoRegister();
// End Cross Module References
	void UEditorValidator_EmptyTick::StaticRegisterNativesUEditorValidator_EmptyTick()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_EmptyTick);
	UClass* Z_Construct_UClass_UEditorValidator_EmptyTick_NoRegister()
	{
		return UEditorValidator_EmptyTick::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidator_EmptyTick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UWEValidators,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EditorValidator_EmptyTick.h" },
		{ "ModuleRelativePath", "Public/EditorValidator_EmptyTick.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_EmptyTick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::ClassParams = {
		&UEditorValidator_EmptyTick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEditorValidator_EmptyTick()
	{
		if (!Z_Registration_Info_UClass_UEditorValidator_EmptyTick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_EmptyTick.OuterSingleton, Z_Construct_UClass_UEditorValidator_EmptyTick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidator_EmptyTick.OuterSingleton;
	}
	template<> UWEVALIDATORS_API UClass* StaticClass<UEditorValidator_EmptyTick>()
	{
		return UEditorValidator_EmptyTick::StaticClass();
	}
	UEditorValidator_EmptyTick::UEditorValidator_EmptyTick() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_EmptyTick);
	UEditorValidator_EmptyTick::~UEditorValidator_EmptyTick() {}
	struct Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_EmptyTick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_EmptyTick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_EmptyTick, UEditorValidator_EmptyTick::StaticClass, TEXT("UEditorValidator_EmptyTick"), &Z_Registration_Info_UClass_UEditorValidator_EmptyTick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_EmptyTick), 533897842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_EmptyTick_h_4195728520(TEXT("/Script/UWEValidators"),
		Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_EmptyTick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_EmptyTick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
