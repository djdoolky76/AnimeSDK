#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/TimelineClipInformation.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"

namespace TA::EnvironmentSystem { class ESPatch; }
namespace TA::EnvironmentSystem { class ESPhase; }

#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_GET_PATCH_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x28579B0)
#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_PREPARE_OFFSET UNITYSDK_OFFSET(0x2857A70)
#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_REMOVEPATCH_OFFSET UNITYSDK_OFFSET(0x2857AE0)
#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2857B50)

namespace TA::EnvironmentSystem::Timeline
{
	inline static constexpr unsigned int ESPatchPhaseBehaviour_TypeDefinitionIndex = 15992;

	class ESPatchPhaseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::TA::EnvironmentSystem::ESPhase* Phase; // 0x10
		::ABC::TechArt::Timeline::TimelineClipInformation ClipInfo; // 0x18
		::System::Byte _padding0[0x4];
		::TA::EnvironmentSystem::ESPatch* _Patch_k__BackingField; // 0x40

		::TA::EnvironmentSystem::ESPatch* get_Patch()
		{
			return ((::TA::EnvironmentSystem::ESPatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_GET_PATCH_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::FA1EDF0909FD0302::AE42330449B9EF25 F9739C01C3FB65CA)
		{
			return ((::System::Void(*)(::PVOID, ::FA1EDF0909FD0302::AE42330449B9EF25))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, F9739C01C3FB65CA);
		}

		::System::Void RemovePatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_REMOVEPATCH_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASEBEHAVIOUR_PREPARE_OFFSET))(this);
		}
	};
}
