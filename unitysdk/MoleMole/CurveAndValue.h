#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CURVEANDVALUE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x142CEC60)
#define MOLEMOLE_CURVEANDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x142CEC50)

namespace MoleMole
{
	inline static constexpr unsigned int CurveAndValue_TypeDefinitionIndex = 73025;

	class CurveAndValue : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x10
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEANDVALUE__CTOR_OFFSET))(this);
		}

		::System::Single FCFOEJGPDNO(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEANDVALUE_FCFOEJGPDNO_OFFSET))(this, FNIOPKPHDEH);
		}
	};
}
