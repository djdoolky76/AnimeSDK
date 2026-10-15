#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLEFINISHEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD12C2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleFinishEvent_TypeDefinitionIndex = 64582;

	class GridFightFlowDirector_BattleFinishEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLEFINISHEVENT_CTOR_OFFSET))(this);
		}

	};
}
