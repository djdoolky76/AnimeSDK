#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE903FE0)
#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_FJDHHOKMPDM_OFFSET UNITYSDK_OFFSET(0xE903F70)
#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE903E90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveSwitchNormalChatPhaseBehaviour_TypeDefinitionIndex = 47795;

	class IdleLiveSwitchNormalChatPhaseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 NormalChatPhaseId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void FJDHHOKMPDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_FJDHHOKMPDM_OFFSET))(this);
		}

	};
}
