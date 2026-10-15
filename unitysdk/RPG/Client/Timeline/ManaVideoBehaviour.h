#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPG_CLIENT_TIMELINE_MANAVIDEOBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A4890)

namespace RPG::Client::Timeline
{
	class ManaVideoBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
