#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class CEOFEKNAADD;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1A09C9E0)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A09D080)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_GDIEJLEBKEL_OFFSET UNITYSDK_OFFSET(0x1A09D860)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x1A09D870)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09D7F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EffectSimluateTrack_TypeDefinitionIndex = 88517;

	class EffectSimluateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::CEOFEKNAADD* template_; // 0xB0
		::System::Boolean editorPreview; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::UnityEngine::Timeline::IPropertyCollector* BHNDKLNKKNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_GATHERPROPERTIES_OFFSET))(this, GALAOBFOBFA, BHNDKLNKKNK);
		}

		::System::Void GDIEJLEBKEL(::UnityEngine::Playables::PlayableDirector* MIALFKCCCPI, ::UnityEngine::Timeline::IPropertyCollector* KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_GDIEJLEBKEL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
