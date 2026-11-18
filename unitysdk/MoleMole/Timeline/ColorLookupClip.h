#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class ColorLookupBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A09C4B0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A09C4A0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09C690)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorLookupClip_TypeDefinitionIndex = 76520;

	class ColorLookupClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::ColorLookupBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
