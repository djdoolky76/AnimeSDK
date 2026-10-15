#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class CharacterTimeSlowBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8D2E50)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8D2C60)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D2DF0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8D2C50)

namespace RPGTools::Timeline
{
	class CharacterTimeSlowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::CharacterTimeSlowBehaviour* template_; // 0x20
		static ::System::String** StaticGet_CharacterTimeScaleKey()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools.Timeline", "CharacterTimeSlowClip")->GetStaticField(0x6FB40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
