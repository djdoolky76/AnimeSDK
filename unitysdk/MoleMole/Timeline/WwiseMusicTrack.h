#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class NEADCLHFNIB;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1A73CD80)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_DFBHNIGIMPO_OFFSET UNITYSDK_OFFSET(0x1A73D1D0)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_JGJPMNIKFEB_OFFSET UNITYSDK_OFFSET(0x1A73CFD0)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x1A73CF90)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73CEE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseMusicTrack_TypeDefinitionIndex = 71586;

	class WwiseMusicTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::NEADCLHFNIB*>* paramList; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void JGJPMNIKFEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_JGJPMNIKFEB_OFFSET))(this);
		}

		::System::Void DFBHNIGIMPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_DFBHNIGIMPO_OFFSET))(this);
		}
	};
}
