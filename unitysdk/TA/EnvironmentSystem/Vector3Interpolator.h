#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class FAED0374422E783A; }

#define TA_ENVIRONMENTSYSTEM_VECTOR3INTERPOLATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x28AAAE0)
#define TA_ENVIRONMENTSYSTEM_VECTOR3INTERPOLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x28AABF0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int Vector3Interpolator_TypeDefinitionIndex = 16206;

	class Vector3Interpolator : public ::System::Object
	{
	public:
		::UnityEngine::FAED0374422E783A* curveX; // 0x10
		::UnityEngine::FAED0374422E783A* curveY; // 0x18
		::UnityEngine::FAED0374422E783A* curveZ; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VECTOR3INTERPOLATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Evaluate(::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VECTOR3INTERPOLATOR_EVALUATE_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
