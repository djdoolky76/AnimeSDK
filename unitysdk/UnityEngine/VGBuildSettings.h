#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int VGBuildSettings_TypeDefinitionIndex = 4100;

	struct alignas(8) VGBuildSettings
	{
		::System::Boolean debugMode; // 0x10
		::System::Boolean encode; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single precision; // 0x14
		::System::Boolean saveRes; // 0x18
		::System::Byte _padding1[0x3];
		::System::UInt32 clusterSize; // 0x1C
		::System::UInt32 seekIteratorCount; // 0x20
		::System::Byte _padding2[0x4];
		::System::String* guid; // 0x28
	};
}
