#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CAMERASHAKECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8C35A0)
#define RPGTOOLS_TIMELINE_CAMERASHAKECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C3A80)
#define RPGTOOLS_TIMELINE_CAMERASHAKECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8C3A70)

namespace RPGTools::Timeline
{
	class CameraShakeClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Boolean DestroyOnClipEnd; // 0x20
		::System::Byte _padding0[0x7];
		::RPGTools::Timeline::CameraShakeConfig* CameraShakeConfig; // 0x28
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

	};
}
