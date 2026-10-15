#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAMEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD12E750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PrepareUnfinishedGameEvent_TypeDefinitionIndex = 64590;

	class GridFightFlowDirector_PrepareUnfinishedGameEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAMEEVENT_CTOR_OFFSET))(this);
		}

	};
}
