#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define IOBHECCHNIJ_FDGFOHHHNHL_OFFSET UNITYSDK_OFFSET(0x8046E0)
#define IOBHECCHNIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int IOBHECCHNIJ_TypeDefinitionIndex = 84036;

struct alignas(8) IOBHECCHNIJ
{
	::UnityEngine::GameObject* NJOAJLDJCCJ; // 0x10
	::System::Boolean FIPHFGHNNBE; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + IOBHECCHNIJ__CTOR_OFFSET))(this, NJOAJLDJCCJ, FIPHFGHNNBE);
	}

	::System::Void FDGFOHHHNHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBHECCHNIJ_FDGFOHHHNHL_OFFSET))(this);
	}
};
