#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROTATIONHELPER_GETROTATIONBYTWOPOSITION_OFFSET UNITYSDK_OFFSET(0x1C2C9E20)

inline static constexpr unsigned int RotationHelper_TypeDefinitionIndex = 86417;

class RotationHelper : public ::System::Object
{
public:
	static ::UnityEngine::Quaternion GetRotationByTwoPosition(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 initialDirection)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROTATIONHELPER_GETROTATIONBYTWOPOSITION_OFFSET))(from, to, initialDirection);
	}
};
