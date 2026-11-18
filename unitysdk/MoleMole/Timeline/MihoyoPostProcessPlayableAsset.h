#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class MihoyoPostProcessBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18127450)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18127440)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x181275A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoPostProcessPlayableAsset_TypeDefinitionIndex = 82010;

	class MihoyoPostProcessPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::MihoyoPostProcessBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}
	};
}
