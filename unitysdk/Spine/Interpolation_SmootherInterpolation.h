#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SMOOTHERINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x20019130)
#define SPINE_INTERPOLATION_SMOOTHERINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x20019160)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SmootherInterpolation_TypeDefinitionIndex = 33005;

	class Interpolation_SmootherInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SMOOTHERINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SMOOTHERINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
