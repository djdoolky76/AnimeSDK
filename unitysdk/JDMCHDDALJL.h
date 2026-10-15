#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JDMCHDDALJL_CTOR_OFFSET UNITYSDK_OFFSET(0x165C8CD0)
#define JDMCHDDALJL_INTERP_OFFSET UNITYSDK_OFFSET(0x165C8D40)

inline static constexpr unsigned int JDMCHDDALJL_TypeDefinitionIndex = 74025;

	class JDMCHDDALJL
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JDMCHDDALJL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Interp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JDMCHDDALJL_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
