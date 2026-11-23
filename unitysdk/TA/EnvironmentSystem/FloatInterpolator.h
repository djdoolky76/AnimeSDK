#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class FAED0374422E783A; }

#define TA_ENVIRONMENTSYSTEM_FLOATINTERPOLATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x285C590)
#define TA_ENVIRONMENTSYSTEM_FLOATINTERPOLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x285C610)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int FloatInterpolator_TypeDefinitionIndex = 16037;

	class FloatInterpolator : public ::System::Object
	{
	public:
		::UnityEngine::FAED0374422E783A* curve; // 0x10

		::System::Single Evaluate(::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_FLOATINTERPOLATOR_EVALUATE_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_FLOATINTERPOLATOR__CTOR_OFFSET))(this);
		}
	};
}
