#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"
namespace System { class String; }

namespace RPG::CustomRP
{
	struct alignas(8) PlatfromConfig
	{
		::System::Boolean multiDeviceName; // 0x10
		::System::Boolean useReg; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* graphicsDeviceName; // 0x18
		::UnityEngine::Rendering::GraphicsDeviceType deviceType; // 0x20
		::System::Byte _padding1[0x4];
		::System::UInt64 flag; // 0x28
	};
}
