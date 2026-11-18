#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SINEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE5BE20)
#define SPINE_INTERPOLATION_SINEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5BEB0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SineInterpolation_TypeDefinitionIndex = 33013;

	class Interpolation_SineInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SINEINTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SINEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
