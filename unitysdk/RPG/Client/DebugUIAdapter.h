#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGUIADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FC7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugUIAdapter_TypeDefinitionIndex = 74837;

	class DebugUIAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGUIADAPTER_CTOR_OFFSET))(this);
		}

	};
}
