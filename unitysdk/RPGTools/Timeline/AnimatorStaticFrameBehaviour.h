#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class AnimatorStaticFrameConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B0140)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_EOJBEIJLDLJ_OFFSET UNITYSDK_OFFSET(0xE8AD0F0)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ODOKOLPHKPG_OFFSET UNITYSDK_OFFSET(0xE8AFCE0)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8B0070)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8AFC20)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE8B00F0)

namespace RPGTools::Timeline
{
	class AnimatorStaticFrameBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::AnimatorStaticFrameConfig* Config; // 0x10
		::System::Single Start; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ODOKOLPHKPG(::RPGTools::Timeline::AnimatorStaticFrameConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::AnimatorStaticFrameConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ODOKOLPHKPG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		static ::System::Void EOJBEIJLDLJ(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_EOJBEIJLDLJ_OFFSET))(a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

	};
}
