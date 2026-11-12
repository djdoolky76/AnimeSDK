#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xF3F9C50)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xF403740)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PostProcessTimelineTrack_TypeDefinitionIndex = 49638;

	class PostProcessTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

	};
}
