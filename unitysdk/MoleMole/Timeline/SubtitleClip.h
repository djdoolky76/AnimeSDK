#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/ClipType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class SubtitleBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_SUBTITLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C0E12A0)
#define MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C0E1280)
#define MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPTYPE_OFFSET UNITYSDK_OFFSET(0x1C0E1290)
#define MOLEMOLE_TIMELINE_SUBTITLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E1530)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SubtitleClip_TypeDefinitionIndex = 56279;

	class SubtitleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::SubtitleBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipType get_ClipType()
		{
			return ((::UnityEngine::Timeline::ClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPTYPE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
