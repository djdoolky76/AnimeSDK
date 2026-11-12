#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOPERFORMANCECRPCAMERASPLITSCREENLINEUIMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A8EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPerformanceCRPCameraSplitScreenLineUIMarker_TypeDefinitionIndex = 62043;

	class MonoPerformanceCRPCameraSplitScreenLineUIMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCECRPCAMERASPLITSCREENLINEUIMARKER_CTOR_OFFSET))(this);
		}

	};
}
