#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_ShadersThatShareTiling_ShaderThatSharesTiling_TypeDefinitionIndex = 96273;

	struct alignas(8) MB3_ShadersThatShareTiling_ShaderThatSharesTiling
	{
		::System::String* shadername; // 0x10
		::System::Boolean allPropsShareTiling; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* tilingTexturePropName; // 0x20
	};
}
