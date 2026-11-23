#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB0D64B103BB2404.h"

namespace UnityEngine { class GameObject; }

#define E59272E1E1E4017B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E59272E1E1E4017B_TypeDefinitionIndex = 8963;

class E59272E1E1E4017B : public ::FB0D64B103BB2404
{
public:
	::UnityEngine::GameObject* B12F0F4EDEBD5F26; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E59272E1E1E4017B__CTOR_OFFSET))(this);
	}
};
