#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class B196ACFA9D2AE729; }

#define TA_ENVIRONMENTSYSTEM_COLORINTERPOLATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x286F020)
#define TA_ENVIRONMENTSYSTEM_COLORINTERPOLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x286F0B0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ColorInterpolator_TypeDefinitionIndex = 16134;

	class ColorInterpolator : public ::System::Object
	{
	public:
		::UnityEngine::B196ACFA9D2AE729* gradient; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_COLORINTERPOLATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::E46B881AA2636190 Evaluate(::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_COLORINTERPOLATOR_EVALUATE_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
