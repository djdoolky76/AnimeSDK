#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JLKMMJJKOPC_ANGDONLONAF__CTOR_OFFSET UNITYSDK_OFFSET(0x74D7A0)

inline static constexpr unsigned int JLKMMJJKOPC_ANGDONLONAF_TypeDefinitionIndex = 45163;

struct alignas(4) JLKMMJJKOPC_ANGDONLONAF
{
	::System::Single BIMPNEDLAED; // 0x10
	::UnityEngine::Vector3 GPIOJBLKFAJ; // 0x14

	::System::Void _ctor(::System::Single BEKLCLFIDKF, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_ANGDONLONAF__CTOR_OFFSET))(this, BEKLCLFIDKF, EGEGIMGMJHN);
	}
};
