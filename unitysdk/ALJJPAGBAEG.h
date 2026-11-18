#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define ALJJPAGBAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x728470)

inline static constexpr unsigned int ALJJPAGBAEG_TypeDefinitionIndex = 69359;

struct alignas(8) ALJJPAGBAEG
{
	::UnityEngine::GameObject* KEHECMCDLFC; // 0x10
	::System::Boolean ADNPFJMKDNM; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* HODAIDNDKHD, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALJJPAGBAEG__CTOR_OFFSET))(this, HODAIDNDKHD, FIPHFGHNNBE);
	}
};
