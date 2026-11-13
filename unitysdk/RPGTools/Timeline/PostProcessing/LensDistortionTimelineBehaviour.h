#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/LensDistortionParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7655D0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ENIPBHJFBDC_OFFSET UNITYSDK_OFFSET(0x1C7654A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1C765310)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1C765250)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C765520)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C764AE0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LensDistortionTimelineBehaviour_TypeDefinitionIndex = 49618;

	class LensDistortionTimelineBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::LensDistortionParameter LensDistortionParameter; // 0x28
		::System::Boolean _FlipNotified; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ENIPBHJFBDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINEBEHAVIOUR_ENIPBHJFBDC_OFFSET))(this);
		}

	};
}
