#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IMDLNCOMBIH;
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System { template <typename T> class Comparison_1; }

#define GKJENBGICIP___C_GPMGPDMBHBN_OFFSET UNITYSDK_OFFSET(0x149DB710)
#define GKJENBGICIP___C_IKNIJFONICE_OFFSET UNITYSDK_OFFSET(0x149DB750)
#define GKJENBGICIP___C_LPCDDLBHJBF_OFFSET UNITYSDK_OFFSET(0x149DB6E0)
#define GKJENBGICIP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149DB690)
#define GKJENBGICIP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149DB6D0)

inline static constexpr unsigned int GKJENBGICIP___c_TypeDefinitionIndex = 50359;

class GKJENBGICIP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GKJENBGICIP___c_TypeDefinitionIndex)->GetStaticField(0x31CA0);
	}
	static ::System::Comparison_1<::MoleMole::Project::Config::BabelFloorInfoTemplateExt*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::MoleMole::Project::Config::BabelFloorInfoTemplateExt*>**)Il2CppClass::FromTypeDefinitionIndex(GKJENBGICIP___c_TypeDefinitionIndex)->GetStaticField(0x31CA8);
	}
	static ::System::Comparison_1<::IMDLNCOMBIH*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::IMDLNCOMBIH*>**)Il2CppClass::FromTypeDefinitionIndex(GKJENBGICIP___c_TypeDefinitionIndex)->GetStaticField(0x31CB0);
	}
	static ::System::Comparison_1<::IMDLNCOMBIH*>** StaticGet___9__6_1()
	{
		return (::System::Comparison_1<::IMDLNCOMBIH*>**)Il2CppClass::FromTypeDefinitionIndex(GKJENBGICIP___c_TypeDefinitionIndex)->GetStaticField(0x31CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJENBGICIP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJENBGICIP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LPCDDLBHJBF(::IMDLNCOMBIH* EJCBEJMGFAJ, ::IMDLNCOMBIH* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IMDLNCOMBIH*, ::IMDLNCOMBIH*))((::PBYTE)hIl2Cpp + GKJENBGICIP___C_LPCDDLBHJBF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 GPMGPDMBHBN(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* EJCBEJMGFAJ, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + GKJENBGICIP___C_GPMGPDMBHBN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 IKNIJFONICE(::IMDLNCOMBIH* EJCBEJMGFAJ, ::IMDLNCOMBIH* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IMDLNCOMBIH*, ::IMDLNCOMBIH*))((::PBYTE)hIl2Cpp + GKJENBGICIP___C_IKNIJFONICE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
