#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define HJBNLMDBAIK__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0FB0)

inline static constexpr unsigned int HJBNLMDBAIK_TypeDefinitionIndex = 66197;

struct alignas(8) HJBNLMDBAIK
{
	::UnityEngine::GameObject* KEHECMCDLFC; // 0x10
	::System::Boolean ADNPFJMKDNM; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* HODAIDNDKHD, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJBNLMDBAIK__CTOR_OFFSET))(this, HODAIDNDKHD, FIPHFGHNNBE);
	}
};
