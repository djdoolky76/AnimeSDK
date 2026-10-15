#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }

#define BPOGJEBDHMC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AD660)
#define BPOGJEBDHMC_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xC1AD640)
#define BPOGJEBDHMC_KMHJFIODPCO_OFFSET UNITYSDK_OFFSET(0xC1AD650)
#define BPOGJEBDHMC_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xC1AD520)
#define BPOGJEBDHMC_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xC1AD3D0)
#define BPOGJEBDHMC_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xC1AD380)
#define BPOGJEBDHMC_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xC1AD4A0)

inline static constexpr unsigned int BPOGJEBDHMC_TypeDefinitionIndex = 48008;

	class BPOGJEBDHMC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveSequenceData* EABKOHGCHFP; // 0x10
		::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean KMHJFIODPCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOGJEBDHMC_KMHJFIODPCO_OFFSET))(this);
		}

	};
