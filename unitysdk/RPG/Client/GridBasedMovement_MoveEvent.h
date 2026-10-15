#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDBASEDMOVEMENT_MOVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD0C8BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridBasedMovement_MoveEvent_TypeDefinitionIndex = 72536;

	class GridBasedMovement_MoveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_MOVEEVENT_CTOR_OFFSET))(this);
		}

	};
}
