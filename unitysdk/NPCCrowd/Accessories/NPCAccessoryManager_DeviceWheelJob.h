#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/AccessoryFollowStaticData.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelMotion.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x634370)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_DeviceWheelJob_TypeDefinitionIndex = 52996;

	struct alignas(8) NPCAccessoryManager_DeviceWheelJob
	{
		::Unity::Collections::NativeArray_1<::System::Byte> FollowEnabled; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Byte> PoseValid; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::AccessoryFollowStaticData> FollowData; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> WheelFollowIndices; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::DeviceWheelMotion> Motions; // 0x50
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::DeviceWheelState> States; // 0x60
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> Pose; // 0x70
		::System::Byte _padding6[0x8];
		::System::Single CurrentTime; // 0x80
		::System::Single RadiusEpsilon; // 0x84

		::System::Void Execute(::System::Int32 wheelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELJOB_EXECUTE_OFFSET))(this, wheelIndex);
		}
	};
}
