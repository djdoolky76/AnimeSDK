#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F66B2D4167ED2B9B.h"

#define ABC_CUSTOMRENDERPIPELINE_CUSTOMPPMATPASSQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x27CE450)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int CustomPPMatPassQualityParameter_TypeDefinitionIndex = 16749;

	class CustomPPMatPassQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::F66B2D4167ED2B9B E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::F66B2D4167ED2B9B, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CUSTOMPPMATPASSQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
