#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x1C0E1A20)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C0E15C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1C0E1820)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C0E1810)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x1C0E19E0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E1980)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceTrack_TypeDefinitionIndex = 40387;

	class TVTextureSequenceTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, JEIDPPCEHLD, PHGBOCIDLEI);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::UnityEngine::Timeline::TimelineClip* FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCETRACK_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
