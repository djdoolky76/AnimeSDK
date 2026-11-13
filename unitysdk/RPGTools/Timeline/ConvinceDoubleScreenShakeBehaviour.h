#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class KJCHLFOFENJ;
namespace RPGTools::Timeline { class ConvinceDoubleScreenShakeClip; }

#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EB000)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D8EACE0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1D8EAF70)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D8EAD00)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D8EACF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceDoubleScreenShakeBehaviour_TypeDefinitionIndex = 49069;

	class ConvinceDoubleScreenShakeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceDoubleScreenShakeClip* _Clip_k__BackingField; // 0x10
		::KJCHLFOFENJ* _ShakeSource; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceDoubleScreenShakeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceDoubleScreenShakeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceDoubleScreenShakeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceDoubleScreenShakeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

	};
}
