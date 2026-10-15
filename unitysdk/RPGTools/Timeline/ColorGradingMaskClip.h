#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8D4780)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D4910)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8D4770)

namespace RPGTools::Timeline
{
	class ColorGradingMaskClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean AutoReset; // 0x18
		::System::Byte _padding0[0x7];
		::RPGTools::Timeline::ColorGradingMaskWhitelist Whitelist; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
