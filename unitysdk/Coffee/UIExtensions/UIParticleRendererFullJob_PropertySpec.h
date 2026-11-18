#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRendererFullJob_PropertySpec_TypeDefinitionIndex = 34420;

	struct alignas(4) UIParticleRendererFullJob_PropertySpec
	{
		::System::Int32 PropertyID; // 0x10
		::System::Int32 Type; // 0x14
		::System::Int32 IsHDRColor; // 0x18
	};
}
