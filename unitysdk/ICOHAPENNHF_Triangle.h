#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ICOHAPENNHF_TRIANGLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB310)

inline static constexpr unsigned int ICOHAPENNHF_Triangle_TypeDefinitionIndex = 69328;

	struct alignas(4) ICOHAPENNHF_Triangle
	{
		::UnityEngine::Vector2 a; // 0x10
		::UnityEngine::Vector2 b; // 0x18
		::UnityEngine::Vector2 c; // 0x20
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ICOHAPENNHF_TRIANGLE_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
