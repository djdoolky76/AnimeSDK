#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
class INLLHDNHJMA;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CHINLBJOLJE_OFFSET UNITYSDK_OFFSET(0xE90E920)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE90E720)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE90E9A0)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE90E700)
#define RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_SET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE90E710)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaybackTimelineClip_TypeDefinitionIndex = 48457;

	class PlaybackTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x18
		::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions Option; // 0x1C
		::System::String* MarkerName; // 0x20
		::System::Double TargetTime; // 0x28
		::Il2CppArray<::System::String*>* JumpPredicates; // 0x30
		::INLLHDNHJMA* template_; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void set_clipCaps(::UnityEngine::Timeline::ClipCaps a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_SET_CLIPCAPS_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void CHINLBJOLJE(::UnityEngine::Playables::PlayableGraph a1, ::INLLHDNHJMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::INLLHDNHJMA*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYBACKTIMELINECLIP_CHINLBJOLJE_OFFSET))(this, a1, a2);
		}

	};
}
