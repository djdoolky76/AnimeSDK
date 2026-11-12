#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class RemoveEffectOnCharacter; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF40E210)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF40E020)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveEffectOnCharacterBehaviour_TypeDefinitionIndex = 49370;

	class RemoveEffectOnCharacterBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::RemoveEffectOnCharacter* Config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
