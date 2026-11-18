#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define PIGMGJJMAMI___C_ANGJHEGIHHA_OFFSET UNITYSDK_OFFSET(0x1B9E6A90)
#define PIGMGJJMAMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6A40)
#define PIGMGJJMAMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6A80)

inline static constexpr unsigned int PIGMGJJMAMI___c_TypeDefinitionIndex = 55122;

class PIGMGJJMAMI___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(PIGMGJJMAMI___c_TypeDefinitionIndex)->GetStaticField(0x47920);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PIGMGJJMAMI___c_TypeDefinitionIndex)->GetStaticField(0x47928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGMGJJMAMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGMGJJMAMI___C__CTOR_OFFSET))(this);
	}

	::System::Void ANGJHEGIHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGMGJJMAMI___C_ANGJHEGIHHA_OFFSET))(this);
	}
};
