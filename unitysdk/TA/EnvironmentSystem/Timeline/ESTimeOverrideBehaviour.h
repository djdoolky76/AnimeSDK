#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/TimelineClipInformation.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESTIMEOVERRIDEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x28DAF80)

namespace TA::EnvironmentSystem::Timeline
{
	inline static constexpr unsigned int ESTimeOverrideBehaviour_TypeDefinitionIndex = 16373;

	class ESTimeOverrideBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::ABC::TechArt::Timeline::TimelineClipInformation ClipInfo; // 0x10
		::System::Single OverrideTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESTIMEOVERRIDEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
