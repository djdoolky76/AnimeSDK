#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define E490AAC5C1685E29_A91940E475447FC0_EDC7CA3361F84241_OFFSET UNITYSDK_OFFSET(0x40EAF00)

namespace E490AAC5C1685E29
{
	inline static constexpr unsigned int A91940E475447FC0_TypeDefinitionIndex = 21271;

	struct alignas(4) A91940E475447FC0
	{
		::UnityEngine::Vector3 B935AE50F7461070; // 0x10
		::UnityEngine::Vector3 E94143082AABB810; // 0x1C
		::System::Single EA73309374408D18; // 0x28
		::System::Int32 B839A2858E111281; // 0x2C
		::System::Int32 EB3E56A4A99E6436; // 0x30

		::UnityEngine::Vector3 EDC7CA3361F84241()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + E490AAC5C1685E29_A91940E475447FC0_EDC7CA3361F84241_OFFSET))(this);
		}
	};
}
