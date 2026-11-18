#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation_PowInterpolation.h"

#define SPINE_INTERPOLATION_POWOUTINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF08220)
#define SPINE_INTERPOLATION_POWOUTINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF081C0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_PowOutInterpolation_TypeDefinitionIndex = 33008;

	class Interpolation_PowOutInterpolation : public ::Spine::Interpolation_PowInterpolation
	{
	public:
		::System::Void _ctor(::System::Int32 power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POWOUTINTERPOLATION__CTOR_OFFSET))(this, power);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POWOUTINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
