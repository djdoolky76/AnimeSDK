#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_CIRCLEININTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F7750F0)
#define SPINE_INTERPOLATION_CIRCLEININTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F775130)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_CircleInInterpolation_TypeDefinitionIndex = 33020;

	class Interpolation_CircleInInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_CIRCLEININTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_CIRCLEININTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
