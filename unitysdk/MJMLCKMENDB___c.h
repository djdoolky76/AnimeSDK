#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MJMLCKMENDB___C_BCIFAFIBLBG_OFFSET UNITYSDK_OFFSET(0x17D37430)
#define MJMLCKMENDB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D373E0)
#define MJMLCKMENDB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D37420)

inline static constexpr unsigned int MJMLCKMENDB___c_TypeDefinitionIndex = 43559;

class MJMLCKMENDB___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__9_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(MJMLCKMENDB___c_TypeDefinitionIndex)->GetStaticField(0x4A3C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MJMLCKMENDB___c_TypeDefinitionIndex)->GetStaticField(0x4A3C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMLCKMENDB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB___C__CTOR_OFFSET))(this);
	}

	::System::Void BCIFAFIBLBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB___C_BCIFAFIBLBG_OFFSET))(this);
	}
};
