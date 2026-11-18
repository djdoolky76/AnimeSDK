#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1A7BB2C0)
#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BB320)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerEntityOnDamagedEvent_TypeDefinitionIndex = 65073;

	class HackerEntityOnDamagedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
