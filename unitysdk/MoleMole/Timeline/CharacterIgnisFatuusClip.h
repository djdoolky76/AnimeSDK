#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class CharacterIgnisFatuusBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A09C220)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A09C210)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09C400)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterIgnisFatuusClip_TypeDefinitionIndex = 75005;

	class CharacterIgnisFatuusClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CharacterIgnisFatuusBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
