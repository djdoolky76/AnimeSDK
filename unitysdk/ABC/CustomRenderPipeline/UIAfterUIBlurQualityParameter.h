#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E8F306CDD5F7FC45.h"

#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLURQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x27FC0F0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int UIAfterUIBlurQualityParameter_TypeDefinitionIndex = 16793;

	class UIAfterUIBlurQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::E8F306CDD5F7FC45 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E8F306CDD5F7FC45, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLURQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
