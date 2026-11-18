#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class ExtensionManagerTrack; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TimelinePlayable; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINERUNTIMEGRAPHUTILITY_GETCOMPILEDEXTENSIONTRACKS_OFFSET UNITYSDK_OFFSET(0x1FD7AC50)
#define UNITYENGINE_TIMELINE_TIMELINERUNTIMEGRAPHUTILITY_TRYGETCOMPILEDTRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FD7AFF0)
#define UNITYENGINE_TIMELINE_TIMELINERUNTIMEGRAPHUTILITY_TRYGETTIMELINEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FD7AD90)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineRuntimeGraphUtility_TypeDefinitionIndex = 32468;

	class TimelineRuntimeGraphUtility : public ::System::Object
	{
	public:
		static ::System::Void GetCompiledExtensionTracks(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::MoleMole::Timeline::ExtensionManagerTrack*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::MoleMole::Timeline::ExtensionManagerTrack*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINERUNTIMEGRAPHUTILITY_GETCOMPILEDEXTENSIONTRACKS_OFFSET))(graph, results);
		}

		static ::System::Boolean TryGetCompiledTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable& playable)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINERUNTIMEGRAPHUTILITY_TRYGETCOMPILEDTRACKPLAYABLE_OFFSET))(graph, track, playable);
		}

		static ::System::Boolean TryGetTimelinePlayable(::UnityEngine::Playables::Playable playable, ::UnityEngine::Timeline::TimelinePlayable*& timelinePlayable)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Timeline::TimelinePlayable*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINERUNTIMEGRAPHUTILITY_TRYGETTIMELINEPLAYABLE_OFFSET))(playable, timelinePlayable);
		}
	};
}
