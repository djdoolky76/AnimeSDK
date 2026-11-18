#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6006D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowPhysicsDirtyProcessor_ExecuteJob_TypeDefinitionIndex = 85608;

	struct alignas(8) NPCAbilityPathFollowPhysicsDirtyProcessor_ExecuteJob
	{
		::System::Boolean enablePhysicsGroundedOnStair; // 0x10
		::System::Byte _padding0[0x7];
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x18
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x28
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> runtime_navmesh; // 0x38
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> runtime_splineFollow; // 0x48
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> runtime_pathFollow; // 0x58
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_pathFollowPhysicsEnable; // 0x68

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
