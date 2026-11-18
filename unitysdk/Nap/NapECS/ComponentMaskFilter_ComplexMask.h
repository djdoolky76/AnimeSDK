#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentAccessFilterMode.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMaskFilter_ComplexMask_TypeDefinitionIndex = 35980;

	struct alignas(4) ComponentMaskFilter_ComplexMask
	{
		::Nap::NapECS::ComponentAccessFilterMode Mode; // 0x10
		::System::Byte _padding0[0x4];
		::Nap::NapECS::ComponentMask Mask; // 0x18
	};
}
