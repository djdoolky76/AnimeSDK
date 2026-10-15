#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PerformerTimelineEventType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class TimelineEventArgument; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_CGJACNIEPBD_OFFSET UNITYSDK_OFFSET(0xE913D40)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE913D90)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_OIDMFIAKKJK_OFFSET UNITYSDK_OFFSET(0xE913CD0)
#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE913BB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformerEventTimelineBehaviour_TypeDefinitionIndex = 48451;

	class PerformerEventTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PerformerTimelineEventType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPGTools::Timeline::TimelineEventArgument* Argument; // 0x18
		::System::Boolean _firstFrameHappened; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIDMFIAKKJK(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_OIDMFIAKKJK_OFFSET))(this, a1);
		}

		::System::Void CGJACNIEPBD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINEBEHAVIOUR_CGJACNIEPBD_OFFSET))(this, a1);
		}

	};
}
