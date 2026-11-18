#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/AnimationCollectMovementSnapshot.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5974E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAnimationCollectDirtyDetectProcessor_ExecuteJob_TypeDefinitionIndex = 69358;

	struct alignas(8) NPCAnimationCollectDirtyDetectProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> IsUsing; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> LastFrameTransforms; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> Transforms; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> Animators; // 0x50
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> MoveTargets; // 0x60
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> PathFollows; // 0x70
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> Movements; // 0x80
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> Navmeshes; // 0x90
		::System::Byte _padding8[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment> Montages; // 0xA0
		::System::Byte _padding9[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::AnimationCollectMovementSnapshot> MovementSnapshots; // 0xB0
		::System::Byte _padding10[0x8];
		::System::Object* TransformRelatedDirtyWriter; // 0xC0
		::System::Byte _padding11[0x10];
		::System::Object* AnimationDirtyWriter; // 0xD8

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
