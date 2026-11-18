#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_EKFKEGLHAHC_OFFSET UNITYSDK_OFFSET(0x18972980)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_DURATIONTIME_OFFSET UNITYSDK_OFFSET(0x18972950)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x18972920)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x18972900)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18972970)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ShotActiveBehaviour_TypeDefinitionIndex = 83139;

	class ShotActiveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean isUnActive; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::Timeline::TimelineClip* _clip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Double get_StartTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_EndTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_ENDTIME_OFFSET))(this);
		}

		::System::Double get_DurationTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_DURATIONTIME_OFFSET))(this);
		}

		::System::Void EKFKEGLHAHC(::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_EKFKEGLHAHC_OFFSET))(this, PHGBOCIDLEI);
		}
	};
}
