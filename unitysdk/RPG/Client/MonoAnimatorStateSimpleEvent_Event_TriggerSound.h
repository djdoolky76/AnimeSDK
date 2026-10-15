#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_Event.h"
namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }
namespace System { class String; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0xD72F390)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xD72F280)

namespace RPG::Client
{
	class MonoAnimatorStateSimpleEvent_Event_TriggerSound : public ::RPG::Client::MonoAnimatorStateSimpleEvent_Event
	{
	public:
		::System::String* EventName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND_CTOR_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK(::RPG::Client::MonoAnimatorStateSimpleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGERSOUND_OIBKPJEGPOK_OFFSET))(this, a1);
		}

	};
}
