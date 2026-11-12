#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_VIRTUALCURSOR_MOVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xEF15F90)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_MoveEvent_TypeDefinitionIndex = 75349;

	class VirtualCursor_MoveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_MOVEEVENT_CTOR_OFFSET))(this);
		}

	};
}
