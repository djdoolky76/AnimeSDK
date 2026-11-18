#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_POWINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FAB71B0)
#define SPINE_INTERPOLATION_POWINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB7130)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_PowInterpolation_TypeDefinitionIndex = 33006;

	class Interpolation_PowInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Int32 power; // 0x10

		::System::Void _ctor(::System::Int32 power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POWINTERPOLATION__CTOR_OFFSET))(this, power);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_POWINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
