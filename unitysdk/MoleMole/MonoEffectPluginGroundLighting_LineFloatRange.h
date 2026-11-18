#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginGroundLighting_LineFloatRange_TypeDefinitionIndex = 42517;

	struct alignas(4) MonoEffectPluginGroundLighting_LineFloatRange
	{
		::System::Boolean UseRandom; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Min; // 0x14
		::System::Single Max; // 0x18
	};
}
