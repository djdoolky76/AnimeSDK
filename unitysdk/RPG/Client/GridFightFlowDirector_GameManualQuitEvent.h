#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GAMEMANUALQUITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD134F00)

namespace RPG::Client
{
	class GridFightFlowDirector_GameManualQuitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GAMEMANUALQUITEVENT_CTOR_OFFSET))(this);
		}

	};
}
