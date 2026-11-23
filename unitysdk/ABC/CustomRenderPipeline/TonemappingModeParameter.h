#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/BC1368EC0789F68B.h"

#define ABC_CUSTOMRENDERPIPELINE_TONEMAPPINGMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x28263C0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TonemappingModeParameter_TypeDefinitionIndex = 16836;

	class TonemappingModeParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::BC1368EC0789F68B E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::BC1368EC0789F68B, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TONEMAPPINGMODEPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
