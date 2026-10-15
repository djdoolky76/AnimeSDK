#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_VIRTUALCURSOR_MOVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE457680)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_MoveEvent_TypeDefinitionIndex = 73233;

	class VirtualCursor_MoveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_MOVEEVENT_CTOR_OFFSET))(this);
		}

	};
}
