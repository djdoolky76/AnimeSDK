#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x142F1E20)
#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1E80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerEntityOnDeathEvent_TypeDefinitionIndex = 57422;

	class HackerEntityOnDeathEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
