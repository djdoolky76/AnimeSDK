#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_CONNECTIONCHANGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F409A70)

namespace UnityEngine::Networking::PlayerConnection
{
	class PlayerEditorConnectionEvents_ConnectionChangeEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_CONNECTIONCHANGEEVENT_CTOR_OFFSET))(this);
		}

	};
}
