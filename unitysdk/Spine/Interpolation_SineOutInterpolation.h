#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SINEOUTINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x20066140)
#define SPINE_INTERPOLATION_SINEOUTINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x200661B0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SineOutInterpolation_TypeDefinitionIndex = 33015;

	class Interpolation_SineOutInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SINEOUTINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SINEOUTINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
