#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x12B31110)
#define MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B31170)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerPlayerOnDamagedEvent_TypeDefinitionIndex = 92870;

	class HackerPlayerOnDamagedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
