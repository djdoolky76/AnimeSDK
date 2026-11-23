#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F16DBADA15554606.h"

#define ABC_CUSTOMRENDERPIPELINE_COLORGRADINGQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x276C470)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ColorGradingQualityParameter_TypeDefinitionIndex = 16521;

	class ColorGradingQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::F16DBADA15554606 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::F16DBADA15554606, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADINGQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
