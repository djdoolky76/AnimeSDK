#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_CHIMERARANKTALKPOPSHOWTIME_CTOR_OFFSET UNITYSDK_OFFSET(0xCB58E00)

namespace RPG::Client
{
	class ChimeraRankTalkPopShowTime : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single TalkPopShowTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKTALKPOPSHOWTIME_CTOR_OFFSET))(this);
		}

	};
}
