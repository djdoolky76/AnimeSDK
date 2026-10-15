#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE93ADB0)
#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKBEHAVIOUR_EMDEHBNCHOC_OFFSET UNITYSDK_OFFSET(0xE93AD30)
#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE93AAA0)

namespace RPGTools::Timeline
{
	class SimpleBlackMaskBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::SimpleTalkBlackMaskColor FadeColor; // 0x10
		::System::Int32 InitialAlpha; // 0x14
		::System::Boolean NeedFadeIn; // 0x18
		::System::Boolean NeedFadeStay; // 0x19
		::System::Boolean NeedFadeOut; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single FadeInDuration; // 0x1C
		::System::Single FadeOutDuration; // 0x20
		::System::Single FadeStayDuration; // 0x24
		::System::Single _FinialAlha; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void EMDEHBNCHOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKBEHAVIOUR_EMDEHBNCHOC_OFFSET))(this, a1);
		}

	};
}
