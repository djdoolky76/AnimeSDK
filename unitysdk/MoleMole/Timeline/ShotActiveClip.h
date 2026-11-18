#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/ClipType.h"
#include "unitysdk/UnityEngine/Timeline/MultiShowClip.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class ShotActiveBehaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x13F28290)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13F27F70)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_EKFKEGLHAHC_OFFSET UNITYSDK_OFFSET(0x13F28240)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13F27F00)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPTYPE_OFFSET UNITYSDK_OFFSET(0x13F27F10)
#define MOLEMOLE_TIMELINE_SHOTACTIVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13F281B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ShotActiveClip_TypeDefinitionIndex = 90384;

	class ShotActiveClip : public ::UnityEngine::Timeline::MultiShowClip
	{
	public:
		::MoleMole::Timeline::ShotActiveBehaviour* template_; // 0x18
		::UnityEngine::Timeline::TimelineClip* _clip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipType get_ClipType()
		{
			return ((::UnityEngine::Timeline::ClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_GET_CLIPTYPE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Void EKFKEGLHAHC(::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_EKFKEGLHAHC_OFFSET))(this, PHGBOCIDLEI);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVECLIP_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
