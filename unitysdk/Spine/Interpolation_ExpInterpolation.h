#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_EXPINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F8BA150)
#define SPINE_INTERPOLATION_EXPINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BA0A0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_ExpInterpolation_TypeDefinitionIndex = 33016;

	class Interpolation_ExpInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Single power; // 0x10
		::System::Single value; // 0x14
		::System::Single min; // 0x18
		::System::Single scale; // 0x1C

		::System::Void _ctor(::System::Single value, ::System::Single power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_EXPINTERPOLATION__CTOR_OFFSET))(this, value, power);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_EXPINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
