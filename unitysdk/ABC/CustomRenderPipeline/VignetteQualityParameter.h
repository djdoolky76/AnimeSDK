#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B9957DBBA55517C1.h"

#define ABC_CUSTOMRENDERPIPELINE_VIGNETTEQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x27DE8D0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int VignetteQualityParameter_TypeDefinitionIndex = 16693;

	class VignetteQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::B9957DBBA55517C1 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::B9957DBBA55517C1, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VIGNETTEQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
