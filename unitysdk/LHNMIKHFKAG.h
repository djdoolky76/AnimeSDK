#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LHNMIKHFKAG_CTOR_OFFSET UNITYSDK_OFFSET(0x19520)

inline static constexpr unsigned int LHNMIKHFKAG_TypeDefinitionIndex = 69537;

	struct alignas(4) LHNMIKHFKAG
	{
		::System::Single KNBGHGEMNLF; // 0x10
		::UnityEngine::Vector2 IKINMNCCKJI; // 0x14
		::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LHNMIKHFKAG_CTOR_OFFSET))(this, a1, a2);
		}

	};
