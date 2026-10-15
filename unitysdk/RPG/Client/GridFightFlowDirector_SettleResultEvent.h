#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD136A40)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0xD134350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_SettleResultEvent_TypeDefinitionIndex = 64588;

	class GridFightFlowDirector_SettleResultEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT_GET_ISMANUALQUIT_OFFSET))(this);
		}

	};
}
