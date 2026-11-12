#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class PerformanceBgEffectFrameConfig; }
namespace RPGTools::Timeline { class TalkBgEffectFrameShowClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF4676B0)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_EKAAEDIFCBD_OFFSET UNITYSDK_OFFSET(0xF4674B0)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xF4673B0)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF4673D0)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xF4673C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBgEffectFrameShowBehaviour_TypeDefinitionIndex = 49422;

	class TalkBgEffectFrameShowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TalkBgEffectFrameShowClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TalkBgEffectFrameShowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TalkBgEffectFrameShowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TalkBgEffectFrameShowClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkBgEffectFrameShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PerformanceBgEffectFrameConfig* EKAAEDIFCBD(::System::String* a1)
		{
			return ((::RPG::GameCore::PerformanceBgEffectFrameConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_EKAAEDIFCBD_OFFSET))(this, a1);
		}

	};
}
