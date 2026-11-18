#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR2MAGNITUDECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x93AC80)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Vector2MagnitudeComparer_TypeDefinitionIndex = 32110;

	struct alignas(4) Vector2MagnitudeComparer
	{
		::System::Int32 Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR2MAGNITUDECOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
