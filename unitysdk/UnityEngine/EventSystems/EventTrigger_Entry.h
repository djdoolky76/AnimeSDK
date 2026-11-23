#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5D9B2730D543D46/FFA81DAE6D02FDFE.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::EventSystems { class EventTrigger_TriggerEvent; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x42167A0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_Entry_TypeDefinitionIndex = 18531;

	class EventTrigger_Entry : public ::System::Object
	{
	public:
		::F5D9B2730D543D46::FFA81DAE6D02FDFE eventID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::EventSystems::EventTrigger_TriggerEvent* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ENTRY__CTOR_OFFSET))(this);
		}
	};
}
