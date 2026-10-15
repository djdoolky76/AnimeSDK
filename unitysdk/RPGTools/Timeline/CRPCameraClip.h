#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class CRPCameraBlendConfig; }
namespace RPGTools::Timeline { class CRPCameraFollowAndLookAt; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8B34B0)
#define RPGTOOLS_TIMELINE_CRPCAMERACLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B3610)
#define RPGTOOLS_TIMELINE_CRPCAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8B34A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraClip_TypeDefinitionIndex = 47886;

	class CRPCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 CRPCameraIndex; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AreaName; // 0x20
		::System::String* CutCameraAnchorName; // 0x28
		::System::String* BlendCameraAnchorName; // 0x30
		::RPGTools::Timeline::CRPCameraBlendConfig* BlendConfig; // 0x38
		::RPGTools::Timeline::CRPCameraFollowAndLookAt* FollowAndLookAt; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERACLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERACLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERACLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
