#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x15AD9570)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x15AD9040)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x15AD8EE0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x15AD93D0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x15AD9530)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD94D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EmoSyncAnimationTrack_TypeDefinitionIndex = 69301;

	class EmoSyncAnimationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::MoleMole::LanguageVoiceType curVoiceLanguage; // 0xB0
		::System::Boolean hasLoadAudio; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, JEIDPPCEHLD, PHGBOCIDLEI);
		}

		::System::Boolean KOPLHACOBFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_KOPLHACOBFC_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::UnityEngine::Timeline::TimelineClip* FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
