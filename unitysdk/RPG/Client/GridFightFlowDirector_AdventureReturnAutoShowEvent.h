#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_ADVENTURERETURNAUTOSHOWEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD12C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_AdventureReturnAutoShowEvent_TypeDefinitionIndex = 64586;

	class GridFightFlowDirector_AdventureReturnAutoShowEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_ADVENTURERETURNAUTOSHOWEVENT_CTOR_OFFSET))(this);
		}

	};
}
