#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation_ElasticInterpolation.h"

#define SPINE_INTERPOLATION_ELASTICOUTINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FA193E0)
#define SPINE_INTERPOLATION_ELASTICOUTINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA19320)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_ElasticOutInterpolation_TypeDefinitionIndex = 33024;

	class Interpolation_ElasticOutInterpolation : public ::Spine::Interpolation_ElasticInterpolation
	{
	public:
		::System::Void _ctor(::System::Single value, ::System::Single power, ::System::Int32 bounces, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_ELASTICOUTINTERPOLATION__CTOR_OFFSET))(this, value, power, bounces, scale);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_ELASTICOUTINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
