#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREAVELHINTCLOSEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD12D310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_MonsterReavelHintClosedEvent_TypeDefinitionIndex = 64580;

	class GridFightFlowDirector_MonsterReavelHintClosedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREAVELHINTCLOSEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
