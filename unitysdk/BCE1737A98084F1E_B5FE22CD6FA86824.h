#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define BCE1737A98084F1E_B5FE22CD6FA86824__CTOR_OFFSET UNITYSDK_OFFSET(0x2A41000)

inline static constexpr unsigned int BCE1737A98084F1E_B5FE22CD6FA86824_TypeDefinitionIndex = 18306;

struct alignas(8) BCE1737A98084F1E_B5FE22CD6FA86824
{
	::UnityEngine::Object* A75D6A0D867D0E2E; // 0x10
	::System::Single E0BFA8AE397C1845; // 0x18

	::System::Void _ctor(::UnityEngine::Object* A898BF354CA4EE50, ::System::Single FEE08DFCD06F58D2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + BCE1737A98084F1E_B5FE22CD6FA86824__CTOR_OFFSET))(this, A898BF354CA4EE50, FEE08DFCD06F58D2);
	}
};
