#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOPERFORMANCECRPCAMERASMALLWINDOWUIMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A8EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPerformanceCRPCameraSmallWindowUIMarker_TypeDefinitionIndex = 62042;

	class MonoPerformanceCRPCameraSmallWindowUIMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCECRPCAMERASMALLWINDOWUIMARKER_CTOR_OFFSET))(this);
		}

	};
}
