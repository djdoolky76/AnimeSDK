#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_RubyQuadTextBinding_TypeDefinitionIndex = 74765;

	struct alignas(4) RubyFeature_RubyQuadTextBinding
	{
		::System::Int32 quadStart; // 0x10
		::System::Int32 quadCount; // 0x14
		::System::Int32 textIndex; // 0x18
	};
}
