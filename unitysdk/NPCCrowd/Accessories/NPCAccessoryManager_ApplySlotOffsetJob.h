#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/AccessoryFollowStaticData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_APPLYSLOTOFFSETJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x632910)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_ApplySlotOffsetJob_TypeDefinitionIndex = 52997;

	struct alignas(8) NPCAccessoryManager_ApplySlotOffsetJob
	{
		::Unity::Collections::NativeArray_1<::System::Byte> FollowEnabled; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Byte> PoseValid; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::AccessoryFollowStaticData> FollowData; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> Pose; // 0x40

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_APPLYSLOTOFFSETJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
