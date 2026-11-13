#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class ShowSDFTextData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWSDFTEXTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DA1ADC0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AF50)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1DA1ADB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowSDFTextClip_TypeDefinitionIndex = 49291;

	class ShowSDFTextClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::ShowSDFTextData* Config; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
