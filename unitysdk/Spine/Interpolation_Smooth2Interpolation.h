#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_SMOOTH2INTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE5BF00)
#define SPINE_INTERPOLATION_SMOOTH2INTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5BF40)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_Smooth2Interpolation_TypeDefinitionIndex = 33004;

	class Interpolation_Smooth2Interpolation : public ::Spine::Interpolation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SMOOTH2INTERPOLATION__CTOR_OFFSET))(this);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_SMOOTH2INTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
