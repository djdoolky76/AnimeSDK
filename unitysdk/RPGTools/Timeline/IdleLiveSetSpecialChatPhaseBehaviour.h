#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C743E80)
#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_IALNCOFIEMC_OFFSET UNITYSDK_OFFSET(0x1C743E10)
#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1C743D30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveSetSpecialChatPhaseBehaviour_TypeDefinitionIndex = 48824;

	class IdleLiveSetSpecialChatPhaseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 SpecialChatPhaseId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void IALNCOFIEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_IALNCOFIEMC_OFFSET))(this);
		}

	};
}
