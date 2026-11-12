#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_AVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x20670A50)

namespace UnityEngine
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 5725;

	class Avatar : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_CTOR_OFFSET))(this);
		}

	};
}
