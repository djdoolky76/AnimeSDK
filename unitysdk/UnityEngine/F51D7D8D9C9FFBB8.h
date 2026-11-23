#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_F51D7D8D9C9FFBB8__CTOR_OFFSET UNITYSDK_OFFSET(0x4161500)

namespace UnityEngine
{
	inline static constexpr unsigned int F51D7D8D9C9FFBB8_TypeDefinitionIndex = 17545;

	struct alignas(4) F51D7D8D9C9FFBB8
	{
		::UnityEngine::Vector3 B01139C5E3D0B4C4; // 0x10
		::System::Single AFD0A8EE300C236A; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::System::Single A40D8CD0F22E8A57)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_F51D7D8D9C9FFBB8__CTOR_OFFSET))(this, A0C1F1E95D5F6CA9, A40D8CD0F22E8A57);
		}
	};
}
