#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SWINGININTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF602E0)
#define SPINE_INTERPOLATION_SWINGININTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF60270)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_SwingInInterpolation_TypeDefinitionIndex = 33027;

	class Interpolation_SwingInInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Single scale; // 0x10

		::System::Void _ctor(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SWINGININTERPOLATION__CTOR_OFFSET))(this, scale);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SWINGININTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
