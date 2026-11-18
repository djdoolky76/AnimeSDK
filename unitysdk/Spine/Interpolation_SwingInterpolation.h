#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SWINGINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FAB72A0)
#define SPINE_INTERPOLATION_SWINGINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB7230)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SwingInterpolation_TypeDefinitionIndex = 33025;

	class Interpolation_SwingInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Single scale; // 0x10

		::System::Void _ctor(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SWINGINTERPOLATION__CTOR_OFFSET))(this, scale);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SWINGINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
