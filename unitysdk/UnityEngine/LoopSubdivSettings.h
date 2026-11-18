#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LoopSubdivSettings_TypeDefinitionIndex = 5262;

	struct alignas(4) LoopSubdivSettings
	{
		::System::Boolean enableNormalConstraint; // 0x10
		::System::Boolean enableBackFaceCulling; // 0x11
		::System::Boolean enableFrontFaceCulling; // 0x12
		::System::Byte _padding0[0x1];
		::System::Single frontFaceCullingStart; // 0x14
		::System::Single frontFaceCullingEnd; // 0x18
		::System::Single frontFaceCullingTolerance; // 0x1C
		::System::Boolean enableVertexLength; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single screenLengthCullingStart; // 0x24
		::System::Single screenLengthCullingEnd; // 0x28
		::System::Boolean enableDistanceCulling; // 0x2C
		::System::Byte _padding2[0x3];
		::System::Single distanceCullingStart; // 0x30
		::System::Single distanceCullingEnd; // 0x34
	};
}
