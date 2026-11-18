#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define GHBHLPHOOAB___C_BHMJHENFKMK_OFFSET UNITYSDK_OFFSET(0x16CC4080)
#define GHBHLPHOOAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CC4030)
#define GHBHLPHOOAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC4070)

inline static constexpr unsigned int GHBHLPHOOAB___c_TypeDefinitionIndex = 67657;

class GHBHLPHOOAB___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(GHBHLPHOOAB___c_TypeDefinitionIndex)->GetStaticField(0x378B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHBHLPHOOAB___c_TypeDefinitionIndex)->GetStaticField(0x378B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBHLPHOOAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBHLPHOOAB___C__CTOR_OFFSET))(this);
	}

	::System::Void BHMJHENFKMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBHLPHOOAB___C_BHMJHENFKMK_OFFSET))(this);
	}
};
