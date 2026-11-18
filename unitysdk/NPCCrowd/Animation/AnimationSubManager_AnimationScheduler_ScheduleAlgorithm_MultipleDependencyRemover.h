#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_MULTIPLEDEPENDENCYREMOVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x6331F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_MultipleDependencyRemover_TypeDefinitionIndex = 81184;

	struct alignas(8) AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_MultipleDependencyRemover
	{
		::Foundation::BitSet64 Result; // 0x10
		::Unity::Collections::NativeArray_1<::Foundation::BitSet64> Prerequisite; // 0x18
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> Nodes; // 0x28
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> Order; // 0x38

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_MULTIPLEDEPENDENCYREMOVER_INVOKE_OFFSET))(this, index);
		}
	};
}
