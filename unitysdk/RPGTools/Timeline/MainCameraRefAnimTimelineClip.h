#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
class IBBIJEJAIGE;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE9025E0)
#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE902770)
#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE9025C0)
#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_SET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE9025D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraRefAnimTimelineClip_TypeDefinitionIndex = 48446;

	class MainCameraRefAnimTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationClip* clip; // 0x20
		::System::Boolean ChangeNearClip; // 0x28
		::System::Boolean changeNearClip; // 0x29
		::System::Byte _padding1[0x2];
		::System::Single nearClipDis; // 0x2C
		::System::Single farClipDis; // 0x30
		::System::Byte _padding2[0x4];
		::IBBIJEJAIGE* template_; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void set_clipCaps(::UnityEngine::Timeline::ClipCaps a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_SET_CLIPCAPS_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
