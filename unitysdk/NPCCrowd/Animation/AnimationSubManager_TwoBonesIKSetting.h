#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKJointAssignPolicy.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKSetting_TypeDefinitionIndex = 81149;

	struct alignas(4) AnimationSubManager_TwoBonesIKSetting
	{
		::HHDPDELCDNI EndBoneIndex; // 0x10
		::HHDPDELCDNI MiddleBoneIndex; // 0x14
		::HHDPDELCDNI BeginBoneIndex; // 0x18
		::System::Single StartStretchRatio; // 0x1C
		::System::Single MaxStretchScale; // 0x20
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKJointAssignPolicy JointPolicy; // 0x24
		::UnityEngine::Vector3 JointMetaParam; // 0x28
	};
}
