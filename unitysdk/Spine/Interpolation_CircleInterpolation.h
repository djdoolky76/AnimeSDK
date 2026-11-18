#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_CIRCLEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F775180)
#define SPINE_INTERPOLATION_CIRCLEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F775220)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_CircleInterpolation_TypeDefinitionIndex = 33019;

	class Interpolation_CircleInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_CIRCLEINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_CIRCLEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
