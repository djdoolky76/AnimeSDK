#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace UnityEngine { class FAED0374422E783A; }

#define TA_ENVIRONMENTSYSTEM_VECTOR4INTERPOLATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x28CFD90)
#define TA_ENVIRONMENTSYSTEM_VECTOR4INTERPOLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x28CFEC0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int Vector4Interpolator_TypeDefinitionIndex = 16300;

	class Vector4Interpolator : public ::System::Object
	{
	public:
		::UnityEngine::FAED0374422E783A* curveX; // 0x10
		::UnityEngine::FAED0374422E783A* curveY; // 0x18
		::UnityEngine::FAED0374422E783A* curveZ; // 0x20
		::UnityEngine::FAED0374422E783A* curveW; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VECTOR4INTERPOLATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::E8984F4E44AE20E5 Evaluate(::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::E8984F4E44AE20E5(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VECTOR4INTERPOLATOR_EVALUATE_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
