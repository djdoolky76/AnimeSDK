#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class FAED0374422E783A; }

#define TA_ENVIRONMENTSYSTEM_VECTOR2INTERPOLATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x2898090)
#define TA_ENVIRONMENTSYSTEM_VECTOR2INTERPOLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2898150)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int Vector2Interpolator_TypeDefinitionIndex = 16179;

	class Vector2Interpolator : public ::System::Object
	{
	public:
		::UnityEngine::FAED0374422E783A* curveX; // 0x10
		::UnityEngine::FAED0374422E783A* curveY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VECTOR2INTERPOLATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Evaluate(::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VECTOR2INTERPOLATOR_EVALUATE_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
