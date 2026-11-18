#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/ClipType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class OngoingSubtitlePreviewBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A0F83A0)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A0F8380)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP_GET_CLIPTYPE_OFFSET UNITYSDK_OFFSET(0x1A0F8390)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F84C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OngoingSubtitlePreviewClip_TypeDefinitionIndex = 85878;

	class OngoingSubtitlePreviewClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::OngoingSubtitlePreviewBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipType get_ClipType()
		{
			return ((::UnityEngine::Timeline::ClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP_GET_CLIPTYPE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
