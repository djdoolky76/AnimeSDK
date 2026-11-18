#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UTILS_VALUEORCURVEFLOAT_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x12C1CAF0)
#define MOLEMOLE_UTILS_VALUEORCURVEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1CB70)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurveFloat_TypeDefinitionIndex = 86999;

	class ValueOrCurveFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single SampleCurve(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEFLOAT_SAMPLECURVE_OFFSET))(this, time);
		}
	};
}
