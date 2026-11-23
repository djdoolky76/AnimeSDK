#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Composites/Vector2Composite_F2C66747C5AEE2D8.h"
#include "unitysdk/A51FD0B221815D6B.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3FC2140)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x3FC21D0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x3FC2350)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector2Composite_TypeDefinitionIndex = 14368;

	class Vector2Composite
	{
	public:
		::System::Int32 up; // 0x10
		::System::Int32 down; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 right; // 0x1C
		::System::Boolean normalize; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::InputSystem::Composites::Vector2Composite_F2C66747C5AEE2D8 mode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE__CTOR_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude(::A51FD0B221815D6B& E6CE7391633EEC68)
		{
			return ((::System::Single(*)(::PVOID, ::A51FD0B221815D6B&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, E6CE7391633EEC68);
		}

		::UnityEngine::Vector2 ReadValue(::A51FD0B221815D6B& E6CE7391633EEC68)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::A51FD0B221815D6B&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_READVALUE_OFFSET))(this, E6CE7391633EEC68);
		}
	};
}
