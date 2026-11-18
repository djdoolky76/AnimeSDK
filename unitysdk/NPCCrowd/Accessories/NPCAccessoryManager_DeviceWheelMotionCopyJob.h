#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelMotion.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelMotionBinding.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELMOTIONCOPYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x67E340)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_DeviceWheelMotionCopyJob_TypeDefinitionIndex = 52989;

	struct alignas(8) NPCAccessoryManager_DeviceWheelMotionCopyJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> Transforms; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> Movements; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Boolean> IsUsing; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::DeviceWheelMotionBinding> Bindings; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::DeviceWheelMotion> Output; // 0x50
		::System::Byte _padding4[0x8];
		::System::UInt32 ExpectedRevision; // 0x60
		::System::UInt32 CurrentRevision; // 0x64

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELMOTIONCOPYJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
