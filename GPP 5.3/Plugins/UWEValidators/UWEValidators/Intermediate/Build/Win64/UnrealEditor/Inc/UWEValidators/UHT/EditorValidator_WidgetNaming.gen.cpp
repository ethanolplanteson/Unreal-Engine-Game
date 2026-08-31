// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UWEValidators/Public/EditorValidator_WidgetNaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_WidgetNaming() {}
// Cross Module References
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	UPackage* Z_Construct_UPackage__Script_UWEValidators();
	UWEVALIDATORS_API UClass* Z_Construct_UClass_UEditorValidator_WidgetNaming();
	UWEVALIDATORS_API UClass* Z_Construct_UClass_UEditorValidator_WidgetNaming_NoRegister();
// End Cross Module References
	void UEditorValidator_WidgetNaming::StaticRegisterNativesUEditorValidator_WidgetNaming()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_WidgetNaming);
	UClass* Z_Construct_UClass_UEditorValidator_WidgetNaming_NoRegister()
	{
		return UEditorValidator_WidgetNaming::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UWEValidators,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EditorValidator_WidgetNaming.h" },
		{ "ModuleRelativePath", "Public/EditorValidator_WidgetNaming.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_WidgetNaming>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::ClassParams = {
		&UEditorValidator_WidgetNaming::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEditorValidator_WidgetNaming()
	{
		if (!Z_Registration_Info_UClass_UEditorValidator_WidgetNaming.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_WidgetNaming.OuterSingleton, Z_Construct_UClass_UEditorValidator_WidgetNaming_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidator_WidgetNaming.OuterSingleton;
	}
	template<> UWEVALIDATORS_API UClass* StaticClass<UEditorValidator_WidgetNaming>()
	{
		return UEditorValidator_WidgetNaming::StaticClass();
	}
	UEditorValidator_WidgetNaming::UEditorValidator_WidgetNaming() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_WidgetNaming);
	UEditorValidator_WidgetNaming::~UEditorValidator_WidgetNaming() {}
	struct Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_WidgetNaming_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_WidgetNaming_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_WidgetNaming, UEditorValidator_WidgetNaming::StaticClass, TEXT("UEditorValidator_WidgetNaming"), &Z_Registration_Info_UClass_UEditorValidator_WidgetNaming, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_WidgetNaming), 296429676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_WidgetNaming_h_3843782232(TEXT("/Script/UWEValidators"),
		Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_WidgetNaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPP_5_3_Plugins_UWEValidators_UWEValidators_Source_UWEValidators_Public_EditorValidator_WidgetNaming_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
