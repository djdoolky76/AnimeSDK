#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class PKLHDDGKKOC;
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class StoryEntityAnimatorParam; }
namespace RPGTools::Timeline { class StoryPropAnimatorParamClip; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE944640)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE944270)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_NIAADEAMMIJ_OFFSET UNITYSDK_OFFSET(0xE9444F0)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_OLKILDAGBFM_OFFSET UNITYSDK_OFFSET(0xE9443E0)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE944290)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE944280)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropAnimatorParamBehaviour_TypeDefinitionIndex = 48235;

	class StoryPropAnimatorParamBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryPropAnimatorParamClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryPropAnimatorParamClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryPropAnimatorParamClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryPropAnimatorParamClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryPropAnimatorParamClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OLKILDAGBFM(::PKLHDDGKKOC* a1, ::RPGTools::Timeline::StoryEntityAnimatorParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PKLHDDGKKOC*, ::RPGTools::Timeline::StoryEntityAnimatorParam*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_OLKILDAGBFM_OFFSET))(this, a1, a2);
		}

		::System::Void NIAADEAMMIJ(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_NIAADEAMMIJ_OFFSET))(this, a1, a2);
		}

	};
}
