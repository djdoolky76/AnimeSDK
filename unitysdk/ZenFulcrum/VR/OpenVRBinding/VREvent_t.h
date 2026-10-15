#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Data_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_t_TypeDefinitionIndex = 39302;

	struct alignas(4) VREvent_t
	{
		::System::UInt32 eventType; // 0x10
		::System::UInt32 trackedDeviceIndex; // 0x14
		::System::Single eventAgeSeconds; // 0x18
		::System::Byte _padding0[0x4];
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Data_t data; // 0x20
	};
}
