#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B97BD50)

namespace HoudiniEngineUnity
{
	class HEU_ReloadDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT_CTOR_OFFSET))(this);
		}

	};
}
