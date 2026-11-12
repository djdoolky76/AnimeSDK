#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class TriggerEffectListOnCharacter; }

#define RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF46C790)
#define RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF46C480)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerEffectListOnCharacterBehaviour_TypeDefinitionIndex = 49374;

	class TriggerEffectListOnCharacterBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::TriggerEffectListOnCharacter* Config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
