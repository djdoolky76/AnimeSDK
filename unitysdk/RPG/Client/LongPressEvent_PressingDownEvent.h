#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_LONGPRESSEVENT_PRESSINGDOWNEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD4AAAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongPressEvent_PressingDownEvent_TypeDefinitionIndex = 72568;

	class LongPressEvent_PressingDownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_PRESSINGDOWNEVENT_CTOR_OFFSET))(this);
		}

	};
}
