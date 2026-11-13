#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define HCKKJKBKCBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B3D70)

inline static constexpr unsigned int HCKKJKBKCBD_TypeDefinitionIndex = 76162;

	class HCKKJKBKCBD
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HCKKJKBKCBD_CTOR_OFFSET))(this, a1);
		}

	};
