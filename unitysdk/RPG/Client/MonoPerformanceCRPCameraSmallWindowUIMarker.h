#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOPERFORMANCECRPCAMERASMALLWINDOWUIMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0xD856980)

namespace RPG::Client
{
	class MonoPerformanceCRPCameraSmallWindowUIMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCECRPCAMERASMALLWINDOWUIMARKER_CTOR_OFFSET))(this);
		}

	};
}
