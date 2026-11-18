#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class AFLFFHNMCCG;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_WWISESTATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1C0E6410)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK_DFBHNIGIMPO_OFFSET UNITYSDK_OFFSET(0x1C0E6660)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK_JGJPMNIKFEB_OFFSET UNITYSDK_OFFSET(0x1C0E6850)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x1C0E6620)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E6570)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseStateTrack_TypeDefinitionIndex = 62371;

	class WwiseStateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::AFLFFHNMCCG*>* paramList; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void DFBHNIGIMPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_DFBHNIGIMPO_OFFSET))(this);
		}

		::System::Void JGJPMNIKFEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_JGJPMNIKFEB_OFFSET))(this);
		}
	};
}
