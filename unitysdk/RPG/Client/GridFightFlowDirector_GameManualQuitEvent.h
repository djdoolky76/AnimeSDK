#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GAMEMANUALQUITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD12CC20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_GameManualQuitEvent_TypeDefinitionIndex = 64587;

	class GridFightFlowDirector_GameManualQuitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GAMEMANUALQUITEVENT_CTOR_OFFSET))(this);
		}

	};
}
