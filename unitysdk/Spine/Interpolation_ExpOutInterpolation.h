#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation_ExpInterpolation.h"

#define SPINE_INTERPOLATION_EXPOUTINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF60150)
#define SPINE_INTERPOLATION_EXPOUTINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF600A0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_ExpOutInterpolation_TypeDefinitionIndex = 33018;

	class Interpolation_ExpOutInterpolation : public ::Spine::Interpolation_ExpInterpolation
	{
	public:
		::System::Void _ctor(::System::Single value, ::System::Single power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_EXPOUTINTERPOLATION__CTOR_OFFSET))(this, value, power);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_EXPOUTINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
