#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MHMPOKLIBGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A07D0)

inline static constexpr unsigned int MHMPOKLIBGE_TypeDefinitionIndex = 60635;

struct alignas(4) MHMPOKLIBGE
{
	::UnityEngine::Vector2 KEFMPOMFNIB; // 0x10
	::System::Single HBEJMCMJMNL; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 KEFMPOMFNIB, ::System::Single HBEJMCMJMNL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MHMPOKLIBGE__CTOR_OFFSET))(this, KEFMPOMFNIB, HBEJMCMJMNL);
	}
};
