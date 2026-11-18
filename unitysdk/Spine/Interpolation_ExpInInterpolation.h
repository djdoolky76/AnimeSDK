#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation_ExpInterpolation.h"

#define SPINE_INTERPOLATION_EXPININTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF08180)
#define SPINE_INTERPOLATION_EXPININTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF080D0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_ExpInInterpolation_TypeDefinitionIndex = 33017;

	class Interpolation_ExpInInterpolation : public ::Spine::Interpolation_ExpInterpolation
	{
	public:
		::System::Void _ctor(::System::Single value, ::System::Single power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_EXPININTERPOLATION__CTOR_OFFSET))(this, value, power);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_EXPININTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
