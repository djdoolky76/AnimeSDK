#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR3MAGNITUDECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x8D3F00)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Vector3MagnitudeComparer_TypeDefinitionIndex = 32111;

	struct alignas(4) Vector3MagnitudeComparer
	{
		::System::Int32 Compare(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR3MAGNITUDECOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
