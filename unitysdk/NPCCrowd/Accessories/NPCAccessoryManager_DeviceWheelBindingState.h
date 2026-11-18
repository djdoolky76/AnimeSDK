#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessoryManager_DeviceWheelMotionBatch; }

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_DeviceWheelBindingState_TypeDefinitionIndex = 52994;

	struct alignas(8) NPCAccessoryManager_DeviceWheelBindingState
	{
		::NPCCrowd::Accessories::NPCAccessoryManager_DeviceWheelMotionBatch* Batch; // 0x10
		::System::Int32 BindingIndex; // 0x18
		::System::Int32 WheelIndex; // 0x1C
	};
}
