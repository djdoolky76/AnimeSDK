#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SINEININTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE5BD50)
#define SPINE_INTERPOLATION_SINEININTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5BDD0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SineInInterpolation_TypeDefinitionIndex = 33014;

	class Interpolation_SineInInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SINEININTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SINEININTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
