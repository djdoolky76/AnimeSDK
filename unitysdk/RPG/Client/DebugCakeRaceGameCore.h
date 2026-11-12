#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGCAKERACEGAMECORE_CTOR_OFFSET UNITYSDK_OFFSET(0xD55E100)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugCakeRaceGameCore_TypeDefinitionIndex = 70271;

	class DebugCakeRaceGameCore : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGCAKERACEGAMECORE_CTOR_OFFSET))(this);
		}

	};
}
