#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_BAKEDDATAEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8CECD0)

namespace HoudiniEngineUnity
{
	class HEU_BakedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BAKEDDATAEVENT_CTOR_OFFSET))(this);
		}

	};
}
