#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGING_DEBUGCHARACTERAIDESCISIONHUD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FCA70)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int DebugCharacterAIDescisionHud_TypeDefinitionIndex = 85002;

	class DebugCharacterAIDescisionHud : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGCHARACTERAIDESCISIONHUD_CTOR_OFFSET))(this);
		}

	};
}
