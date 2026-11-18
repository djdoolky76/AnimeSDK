#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/NPCCrowd/Animation/MontageTransitionConfig.h"
#include "unitysdk/NPCCrowd/Animation/StateMachineTransitionConfig.h"

#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xE796970)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationTransitionConfigAssetSO_TypeDefinitionIndex = 55464;

	class AnimationTransitionConfigAssetSO : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::NPCCrowd::Animation::MontageTransitionConfig MontageTransitionConfig; // 0x58
		::System::Byte _padding0[0x4];
		::NPCCrowd::Animation::StateMachineTransitionConfig StateMachineTransitionConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO__CTOR_OFFSET))(this);
		}
	};
}
