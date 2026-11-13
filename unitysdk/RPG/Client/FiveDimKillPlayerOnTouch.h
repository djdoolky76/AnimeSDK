#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B32C710)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimKillPlayerOnTouch_TypeDefinitionIndex = 61682;

	class FiveDimKillPlayerOnTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH_CTOR_OFFSET))(this);
		}

	};
}
