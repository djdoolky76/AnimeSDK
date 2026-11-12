#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }

#define IPDNAEAMIJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB853C90)
#define IPDNAEAMIJH_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB853B70)
#define IPDNAEAMIJH_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB853A20)
#define IPDNAEAMIJH_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xB853AF0)

inline static constexpr unsigned int IPDNAEAMIJH_TypeDefinitionIndex = 49042;

	class IPDNAEAMIJH : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveStartData* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDNAEAMIJH_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IPDNAEAMIJH_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IPDNAEAMIJH_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IPDNAEAMIJH_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

	};
