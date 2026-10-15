#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F409A50)

namespace UnityEngine::Networking::PlayerConnection
{
	class PlayerEditorConnectionEvents_MessageEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGEEVENT_CTOR_OFFSET))(this);
		}

	};
}
