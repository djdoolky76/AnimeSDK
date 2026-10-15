#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventClip.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class FireNotifyWithIntArgBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8FADE0)
#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8FAF80)

namespace RPGTools::Timeline
{
	class FireNotifyWithIntArgClip : public ::RPGTools::Timeline::CustomEventClip
	{
	public:
		::RPGTools::Timeline::FireNotifyWithIntArgBehaviour* template_; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
