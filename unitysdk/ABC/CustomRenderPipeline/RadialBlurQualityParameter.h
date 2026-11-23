#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E144B4B2E5372A90.h"

#define ABC_CUSTOMRENDERPIPELINE_RADIALBLURQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x2820620)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int RadialBlurQualityParameter_TypeDefinitionIndex = 16868;

	class RadialBlurQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::E144B4B2E5372A90 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E144B4B2E5372A90, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLURQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
