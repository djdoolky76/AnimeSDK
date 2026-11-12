#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_COLLIDERBUTTON_POINTEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD500FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ColliderButton_PointerEvent_TypeDefinitionIndex = 74597;

	class ColliderButton_PointerEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_POINTEREVENT_CTOR_OFFSET))(this);
		}

	};
}
