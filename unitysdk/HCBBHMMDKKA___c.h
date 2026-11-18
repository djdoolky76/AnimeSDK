#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define HCBBHMMDKKA___C_LMCEBKILLAE_OFFSET UNITYSDK_OFFSET(0x14D0C0B0)
#define HCBBHMMDKKA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D0C060)
#define HCBBHMMDKKA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0C0A0)

inline static constexpr unsigned int HCBBHMMDKKA___c_TypeDefinitionIndex = 39148;

class HCBBHMMDKKA___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(HCBBHMMDKKA___c_TypeDefinitionIndex)->GetStaticField(0x49CC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCBBHMMDKKA___c_TypeDefinitionIndex)->GetStaticField(0x49CC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBBHMMDKKA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBBHMMDKKA___C__CTOR_OFFSET))(this);
	}

	::System::Void LMCEBKILLAE(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + HCBBHMMDKKA___C_LMCEBKILLAE_OFFSET))(this, MNDIBLLFAJI);
	}
};
