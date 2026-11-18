#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UTILS_VALUEORCURVEVECTOR3_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x170DD560)
#define MOLEMOLE_UTILS_VALUEORCURVEVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x170DD660)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurveVector3_TypeDefinitionIndex = 67024;

	class ValueOrCurveVector3
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 SampleCurve(::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEVECTOR3_SAMPLECURVE_OFFSET))(this, time);
		}
	};
}
