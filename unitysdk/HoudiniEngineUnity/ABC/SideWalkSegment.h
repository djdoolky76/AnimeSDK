#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity::ABC
{
	inline static constexpr unsigned int SideWalkSegment_TypeDefinitionIndex = 17845;

	struct alignas(4) SideWalkSegment
	{
		::System::Boolean keepEmpty; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single sidewalkWidth; // 0x14
		::System::Single curbHeight; // 0x18
		::System::Single curbLength; // 0x1C
		::System::Single curbWidth; // 0x20
		::System::Single curbHeightdifference; // 0x24
		::System::Single sewerWidth; // 0x28
	};
}
