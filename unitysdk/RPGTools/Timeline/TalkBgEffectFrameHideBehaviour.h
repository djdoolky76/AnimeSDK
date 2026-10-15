#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class TalkBgEffectFrameHideClip; }

#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE9491F0)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE949140)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE949160)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE949150)

namespace RPGTools::Timeline
{
	class TalkBgEffectFrameHideBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TalkBgEffectFrameHideClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TalkBgEffectFrameHideClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TalkBgEffectFrameHideClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TalkBgEffectFrameHideClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkBgEffectFrameHideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
