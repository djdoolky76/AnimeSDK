#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/AB87D26537D8AE29.h"

#define ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATIONQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x282EC20)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ChromaticAberrationQualityParameter_TypeDefinitionIndex = 16943;

	class ChromaticAberrationQualityParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::AB87D26537D8AE29 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::AB87D26537D8AE29, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATIONQUALITYPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
