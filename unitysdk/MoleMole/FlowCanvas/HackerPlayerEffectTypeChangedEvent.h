#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10D09320)
#define MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D09380)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerPlayerEffectTypeChangedEvent_TypeDefinitionIndex = 92243;

	class HackerPlayerEffectTypeChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
