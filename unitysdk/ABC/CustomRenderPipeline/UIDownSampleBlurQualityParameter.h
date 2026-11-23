#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/FD9648DC8AAA6896.h"

#define ABC_CUSTOMRENDERPIPELINE_UIDOWNSAMPLEBLURQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x2797980)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int UIDownSampleBlurQualityParameter_TypeDefinitionIndex = 16568;

	class UIDownSampleBlurQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::FD9648DC8AAA6896 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::FD9648DC8AAA6896, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIDOWNSAMPLEBLURQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
