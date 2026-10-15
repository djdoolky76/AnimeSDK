#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD72EE30)

namespace RPG::Client
{
	class MonoAnimatorStateSimpleEvent_Event : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_CTOR_OFFSET))(this);
		}

	};
}
