#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/OffScreenUISettings__RTIIDs_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/OffScreenUISettings__WorldSpace_e__FixedBuffer.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) OffScreenUISettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::OffScreenUISettings__RTIIDs_e__FixedBuffer RTIIDs; // 0x14
		::UnityEngine::Rendering::OffScreenUISettings__WorldSpace_e__FixedBuffer WorldSpace; // 0x24
	};
}
