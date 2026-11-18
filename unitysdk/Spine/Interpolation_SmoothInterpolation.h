#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SMOOTHINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F775270)
#define SPINE_INTERPOLATION_SMOOTHINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F775290)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SmoothInterpolation_TypeDefinitionIndex = 33003;

	class Interpolation_SmoothInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SMOOTHINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SMOOTHINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
