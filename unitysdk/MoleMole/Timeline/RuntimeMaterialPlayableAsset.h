#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class RuntimeMaterialBehavior; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x162F9360)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x162F93F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x162F93E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_NOMHEOMCMMH_OFFSET UNITYSDK_OFFSET(0x162F9660)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x162F9540)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialPlayableAsset_TypeDefinitionIndex = 56705;

	class RuntimeMaterialPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::RuntimeMaterialBehavior* Recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Void CNHBDOMKKDE(::UnityEngine::GameObject* HKEHGLFJFII, ::UnityEngine::Timeline::AnimationTrack* JDBLFJPLPHK, ::UnityEngine::Timeline::TimelineClip* MOIHAKKIAMA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CNHBDOMKKDE_OFFSET))(this, HKEHGLFJFII, JDBLFJPLPHK, MOIHAKKIAMA);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}

		::System::Void NOMHEOMCMMH(::UnityEngine::GameObject* HKEHGLFJFII)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_NOMHEOMCMMH_OFFSET))(this, HKEHGLFJFII);
		}
	};
}
