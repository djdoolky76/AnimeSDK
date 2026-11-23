#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E5DF2034EEAF195D.h"

#define UNITYENGINE_E1E80627D89AD4F3_F5AB073355EF10A0_OFFSET UNITYSDK_OFFSET(0x1EAE190)
#define UNITYENGINE_E1E80627D89AD4F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE190)

namespace UnityEngine
{
	inline static constexpr unsigned int E1E80627D89AD4F3_TypeDefinitionIndex = 16996;

	struct alignas(4) E1E80627D89AD4F3
	{
		::UnityEngine::E5DF2034EEAF195D B0A3112A9418A85A; // 0x10

		::System::Void F5AB073355EF10A0(::UnityEngine::E5DF2034EEAF195D E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E5DF2034EEAF195D))((::PBYTE)hIl2Cpp + UNITYENGINE_E1E80627D89AD4F3_F5AB073355EF10A0_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor(::UnityEngine::E5DF2034EEAF195D E8074BBF0ADF3A7B)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E5DF2034EEAF195D))((::PBYTE)hIl2Cpp + UNITYENGINE_E1E80627D89AD4F3__CTOR_OFFSET))(this, E8074BBF0ADF3A7B);
		}
	};
}
