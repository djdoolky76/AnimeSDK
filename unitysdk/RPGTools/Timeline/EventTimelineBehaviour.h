#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/TimelineEventType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class TimelineEventArgument; }

#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_CIBEDOJENKM_OFFSET UNITYSDK_OFFSET(0xE8F9F00)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_COAMDPOBJDG_OFFSET UNITYSDK_OFFSET(0xE8F9CE0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8FA0B0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_INOGAAOEHPN_OFFSET UNITYSDK_OFFSET(0xE8F9AB0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8F99E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EventTimelineBehaviour_TypeDefinitionIndex = 48425;

	class EventTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TimelineEventType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPGTools::Timeline::TimelineEventArgument* Arguments; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void INOGAAOEHPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_INOGAAOEHPN_OFFSET))(this);
		}

		::System::Void COAMDPOBJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_COAMDPOBJDG_OFFSET))(this);
		}

		::System::Void CIBEDOJENKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINEBEHAVIOUR_CIBEDOJENKM_OFFSET))(this);
		}

	};
}
