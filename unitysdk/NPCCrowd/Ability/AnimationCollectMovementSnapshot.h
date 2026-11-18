#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"

#define NPCCROWD_ABILITY_ANIMATIONCOLLECTMOVEMENTSNAPSHOT_CREATE_OFFSET UNITYSDK_OFFSET(0xE0C06D0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTMOVEMENTSNAPSHOT_ISDIFFERENTFROM_OFFSET UNITYSDK_OFFSET(0x590A30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AnimationCollectMovementSnapshot_TypeDefinitionIndex = 77158;

	struct alignas(4) AnimationCollectMovementSnapshot
	{
		::System::Boolean IsMoving; // 0x10
		::System::Boolean PathFollowEnable; // 0x11
		::System::Boolean PathFollowStarted; // 0x12
		::System::Boolean PathFollowMoving; // 0x13
		::System::Boolean PathFollowInteracting; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 StairType; // 0x18
		::System::Int32 SlopeType; // 0x1C
		::System::Single InitDesiredSpeed; // 0x20
		::UnityEngine::Vector3 Velocity; // 0x24
		::System::Boolean NavmeshEnable; // 0x30
		::System::Boolean NavmeshIsInStair; // 0x31
		::System::Byte _padding1[0x2];
		::System::Int32 NavmeshStairType; // 0x34

		/*
		static ::NPCCrowd::Ability::AnimationCollectMovementSnapshot Create(::NPCCrowd::Ability::FNPCCPUAnimatorFragment animator, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::Ability::FNPCAbilityMovementFragment movement, ::NPCCrowd::Ability::FNPCNavmeshFragment navmesh)
		{
			return ((::NPCCrowd::Ability::AnimationCollectMovementSnapshot(*)(::NPCCrowd::Ability::FNPCCPUAnimatorFragment, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::FNPCAbilityMovementFragment, ::NPCCrowd::Ability::FNPCNavmeshFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTMOVEMENTSNAPSHOT_CREATE_OFFSET))(animator, pathFollow, movement, navmesh);
		}
		*/

		::System::Boolean IsDifferentFrom(::NPCCrowd::Ability::FNPCCPUAnimatorFragment animator, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::Ability::FNPCAbilityMovementFragment movement, ::NPCCrowd::Ability::FNPCNavmeshFragment navmesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::FNPCAbilityMovementFragment, ::NPCCrowd::Ability::FNPCNavmeshFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTMOVEMENTSNAPSHOT_ISDIFFERENTFROM_OFFSET))(this, animator, pathFollow, movement, navmesh);
		}
	};
}
