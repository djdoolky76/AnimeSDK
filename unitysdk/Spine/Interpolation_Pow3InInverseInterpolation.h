#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_POW3ININVERSEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x20066040)
#define SPINE_INTERPOLATION_POW3ININVERSEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x200660F0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_Pow3InInverseInterpolation_TypeDefinitionIndex = 33011;

	class Interpolation_Pow3InInverseInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW3ININVERSEINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POW3ININVERSEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
