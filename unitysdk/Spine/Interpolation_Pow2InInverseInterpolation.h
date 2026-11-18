#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_POW2ININVERSEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA7990)
#define SPINE_INTERPOLATION_POW2ININVERSEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA79C0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_Pow2InInverseInterpolation_TypeDefinitionIndex = 33009;

	class Interpolation_Pow2InInverseInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW2ININVERSEINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW2ININVERSEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
