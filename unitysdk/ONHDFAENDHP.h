#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CharacterStoryMoveStopData; }

#define ONHDFAENDHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4F850)
#define ONHDFAENDHP_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xBF4F730)
#define ONHDFAENDHP_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBF4F5E0)
#define ONHDFAENDHP_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xBF4F6B0)

inline static constexpr unsigned int ONHDFAENDHP_TypeDefinitionIndex = 48015;

	class ONHDFAENDHP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveStopData* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHDFAENDHP_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + ONHDFAENDHP_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + ONHDFAENDHP_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + ONHDFAENDHP_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

	};
