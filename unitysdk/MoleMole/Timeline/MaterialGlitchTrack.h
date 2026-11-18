#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MATERIALGLITCHTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FF30D50)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF30EF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialGlitchTrack_TypeDefinitionIndex = 32289;

	class MaterialGlitchTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHTRACK_CREATEPLAYABLE_OFFSET))(this, graph, go, clip);
		}
	};
}
