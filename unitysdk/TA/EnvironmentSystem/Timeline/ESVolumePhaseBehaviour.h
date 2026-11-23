#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/TimelineClipInformation.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace TA::EnvironmentSystem { class ESPhase; }

#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESVOLUMEPHASEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace TA::EnvironmentSystem::Timeline
{
	inline static constexpr unsigned int ESVolumePhaseBehaviour_TypeDefinitionIndex = 16348;

	class ESVolumePhaseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::TA::EnvironmentSystem::ESPhase* Phase; // 0x10
		::ABC::TechArt::Timeline::TimelineClipInformation ClipInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESVOLUMEPHASEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
