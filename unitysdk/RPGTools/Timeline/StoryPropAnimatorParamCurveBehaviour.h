#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryEntityAnimatorCurveParam.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class PKLHDDGKKOC;
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class StoryPropAnimatorParamCurveClip; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF462770)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xF4623A0)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_NIAADEAMMIJ_OFFSET UNITYSDK_OFFSET(0xF462620)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_OLKILDAGBFM_OFFSET UNITYSDK_OFFSET(0xF4625A0)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF4623C0)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF462440)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xF4623B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropAnimatorParamCurveBehaviour_TypeDefinitionIndex = 49276;

	class StoryPropAnimatorParamCurveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryPropAnimatorParamCurveClip* _Clip_k__BackingField; // 0x10
		::RPGTools::Timeline::StoryEntityAnimatorCurveParam Parameter; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryPropAnimatorParamCurveClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryPropAnimatorParamCurveClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryPropAnimatorParamCurveClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryPropAnimatorParamCurveClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OLKILDAGBFM(::PKLHDDGKKOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKLHDDGKKOC*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_OLKILDAGBFM_OFFSET))(this, a1);
		}

		::System::Void NIAADEAMMIJ(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVEBEHAVIOUR_NIAADEAMMIJ_OFFSET))(this, a1, a2);
		}

	};
}
