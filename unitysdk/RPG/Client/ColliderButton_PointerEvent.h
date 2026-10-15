#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_COLLIDERBUTTON_POINTEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xCB9C750)

namespace RPG::Client
{
	class ColliderButton_PointerEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_POINTEREVENT_CTOR_OFFSET))(this);
		}

	};
}
