#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_LINEARINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F55FC30)
#define SPINE_INTERPOLATION_LINEARINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55FB90)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_LinearInterpolation_TypeDefinitionIndex = 33002;

	class Interpolation_LinearInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_LINEARINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_LINEARINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
