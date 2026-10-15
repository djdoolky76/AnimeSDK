#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline::Audio { class WwiseExternalStopLoopSFXConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8B33D0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B3560)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8B33C0)

namespace RPGTools::Timeline::Audio
{
	class WwiseExternalStopLoopSFXClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* Config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
