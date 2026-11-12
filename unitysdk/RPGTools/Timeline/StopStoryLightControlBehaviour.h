#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF459F30)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_HNIHCJOOFBJ_OFFSET UNITYSDK_OFFSET(0xF459AD0)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF459A40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StopStoryLightControlBehaviour_TypeDefinitionIndex = 49381;

	class StopStoryLightControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void HNIHCJOOFBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_HNIHCJOOFBJ_OFFSET))(this);
		}

	};
}
