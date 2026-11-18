#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_CIRCLEOUTINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA76D0)
#define SPINE_INTERPOLATION_CIRCLEOUTINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA7700)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_CircleOutInterpolation_TypeDefinitionIndex = 33021;

	class Interpolation_CircleOutInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_CIRCLEOUTINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_CIRCLEOUTINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
