#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_TRIGGEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D2370)

namespace UnityEngine::EventSystems
{
	class EventTrigger_TriggerEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_TRIGGEREVENT_CTOR_OFFSET))(this);
		}

	};
}
