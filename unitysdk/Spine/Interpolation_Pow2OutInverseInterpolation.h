#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_POW2OUTINVERSEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF601B0)
#define SPINE_INTERPOLATION_POW2OUTINVERSEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF60220)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_Pow2OutInverseInterpolation_TypeDefinitionIndex = 33010;

	class Interpolation_Pow2OutInverseInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW2OUTINVERSEINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW2OUTINVERSEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
