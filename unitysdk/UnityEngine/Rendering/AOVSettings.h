#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) AOVSettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 MainLightRT; // 0x14
		::System::Int32 LocalLightRT; // 0x18
		::System::Int32 CharLocalLightRT; // 0x1C
	};
}
