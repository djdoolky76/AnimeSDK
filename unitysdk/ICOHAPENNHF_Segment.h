#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ICOHAPENNHF_SEGMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define ICOHAPENNHF_SEGMENT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x2E7FC40)

inline static constexpr unsigned int ICOHAPENNHF_Segment_TypeDefinitionIndex = 69329;

	struct alignas(4) ICOHAPENNHF_Segment
	{
		::UnityEngine::Vector2 a; // 0x10
		::UnityEngine::Vector2 b; // 0x18
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ICOHAPENNHF_SEGMENT_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 get_Center()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_SEGMENT_GET_CENTER_OFFSET))(this);
		}

	};
