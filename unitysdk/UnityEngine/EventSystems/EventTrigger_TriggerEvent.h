#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_TRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x422EA30)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_TriggerEvent_TypeDefinitionIndex = 18530;

	class EventTrigger_TriggerEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_TRIGGEREVENT__CTOR_OFFSET))(this);
		}
	};
}
