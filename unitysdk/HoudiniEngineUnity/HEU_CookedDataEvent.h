#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D7030)

namespace HoudiniEngineUnity
{
	class HEU_CookedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT_CTOR_OFFSET))(this);
		}

	};
}
