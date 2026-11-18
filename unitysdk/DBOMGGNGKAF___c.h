#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFDIGDGLMJO;
class GEIHCPAOKKK;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define DBOMGGNGKAF___C_IHJHKEPHJML_OFFSET UNITYSDK_OFFSET(0x147C0240)
#define DBOMGGNGKAF___C_LAINAICOOAC_OFFSET UNITYSDK_OFFSET(0x147C0250)
#define DBOMGGNGKAF___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x147C0140)
#define DBOMGGNGKAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147C00F0)
#define DBOMGGNGKAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147C0130)

inline static constexpr unsigned int DBOMGGNGKAF___c_TypeDefinitionIndex = 92418;

class DBOMGGNGKAF___c : public ::System::Object
{
public:
	static ::System::Action_2<::EFDIGDGLMJO*, ::GEIHCPAOKKK*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::EFDIGDGLMJO*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(DBOMGGNGKAF___c_TypeDefinitionIndex)->GetStaticField(0x47CD0);
	}
	static ::System::Action** StaticGet___9__17_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DBOMGGNGKAF___c_TypeDefinitionIndex)->GetStaticField(0x47CD8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DBOMGGNGKAF___c_TypeDefinitionIndex)->GetStaticField(0x47CE0);
	}
	static ::System::Action** StaticGet___9__17_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DBOMGGNGKAF___c_TypeDefinitionIndex)->GetStaticField(0x47CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBOMGGNGKAF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::EFDIGDGLMJO* KJDCJGNAJEP, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::EFDIGDGLMJO*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF___C_PLACCFJJGGK_OFFSET))(this, KJDCJGNAJEP, OHPJHPEOFLD);
	}

	::System::Void IHJHKEPHJML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF___C_IHJHKEPHJML_OFFSET))(this);
	}

	::System::Void LAINAICOOAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF___C_LAINAICOOAC_OFFSET))(this);
	}
};
