#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_LONGPRESSEVENT_PRESSINGDOWNEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDF18EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongPressEvent_PressingDownEvent_TypeDefinitionIndex = 74647;

	class LongPressEvent_PressingDownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_PRESSINGDOWNEVENT_CTOR_OFFSET))(this);
		}

	};
}
