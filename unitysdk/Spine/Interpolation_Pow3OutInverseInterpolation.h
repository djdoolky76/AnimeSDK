#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_POW3OUTINVERSEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F55FC40)
#define SPINE_INTERPOLATION_POW3OUTINVERSEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55FBE0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_Pow3OutInverseInterpolation_TypeDefinitionIndex = 33012;

	class Interpolation_Pow3OutInverseInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW3OUTINVERSEINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW3OUTINVERSEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
