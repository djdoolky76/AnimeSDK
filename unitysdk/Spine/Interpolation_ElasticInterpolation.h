#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_ELASTICINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA7810)
#define SPINE_INTERPOLATION_ELASTICINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA7750)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_ElasticInterpolation_TypeDefinitionIndex = 33022;

	class Interpolation_ElasticInterpolation : public ::Spine::Interpolation
	{
	public:
		::System::Single power; // 0x10
		::System::Single value; // 0x14
		::System::Single scale; // 0x18
		::System::Single bounces; // 0x1C

		::System::Void _ctor(::System::Single value, ::System::Single power, ::System::Int32 bounces, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_ELASTICINTERPOLATION__CTOR_OFFSET))(this, value, power, bounces, scale);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_ELASTICINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
