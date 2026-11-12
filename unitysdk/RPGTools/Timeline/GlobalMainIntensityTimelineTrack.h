#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xF3D9740)
#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xF3D97F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int GlobalMainIntensityTimelineTrack_TypeDefinitionIndex = 49514;

	class GlobalMainIntensityTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINETRACK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINETRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

	};
}
