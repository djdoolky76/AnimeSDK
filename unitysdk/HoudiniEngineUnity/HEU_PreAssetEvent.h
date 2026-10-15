#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_PREASSETEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B97BC70)

namespace HoudiniEngineUnity
{
	class HEU_PreAssetEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PREASSETEVENT_CTOR_OFFSET))(this);
		}

	};
}
