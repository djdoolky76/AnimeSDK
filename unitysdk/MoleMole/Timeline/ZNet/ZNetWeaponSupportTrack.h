#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x17E7DAE0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x17E7D9D0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7DA80)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetWeaponSupportTrack_TypeDefinitionIndex = 40645;

	class ZNetWeaponSupportTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, JEIDPPCEHLD, PHGBOCIDLEI);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::UnityEngine::Timeline::TimelineClip* FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
