#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREAVELHINTCLOSEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD1355F0)

namespace RPG::Client
{
	class GridFightFlowDirector_MonsterReavelHintClosedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREAVELHINTCLOSEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
