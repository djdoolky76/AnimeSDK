#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define NMFIJEAAIHA___C_PFFJIBPJNAE_OFFSET UNITYSDK_OFFSET(0x13169400)
#define NMFIJEAAIHA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131693B0)
#define NMFIJEAAIHA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131693F0)

inline static constexpr unsigned int NMFIJEAAIHA___c_TypeDefinitionIndex = 38473;

class NMFIJEAAIHA___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NMFIJEAAIHA___c_TypeDefinitionIndex)->GetStaticField(0x42570);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NMFIJEAAIHA___c_TypeDefinitionIndex)->GetStaticField(0x42578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMFIJEAAIHA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFIJEAAIHA___C__CTOR_OFFSET))(this);
	}

	::System::Void PFFJIBPJNAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFIJEAAIHA___C_PFFJIBPJNAE_OFFSET))(this);
	}
};
