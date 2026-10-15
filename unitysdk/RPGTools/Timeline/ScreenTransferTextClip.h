#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE935D90)
#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE935F20)
#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE935F10)

namespace RPGTools::Timeline
{
	class ScreenTransferTextClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double OutStart; // 0x18
		::System::UInt32 SentenceID; // 0x20
		::System::Boolean CanPauseTimeline; // 0x24
		::System::Boolean NotAuto; // 0x25
		::System::Boolean PlayVoice; // 0x26
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

	};
}
