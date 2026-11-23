#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Composites/Vector3Composite_F2C66747C5AEE2D8.h"
#include "unitysdk/A51FD0B221815D6B.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3F6ED90)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x3F6EE50)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F6F150)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector3Composite_TypeDefinitionIndex = 14297;

	class Vector3Composite
	{
	public:
		::System::Int32 up; // 0x10
		::System::Int32 down; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 right; // 0x1C
		::System::Int32 forward; // 0x20
		::System::Int32 backward; // 0x24
		::UnityEngine::InputSystem::Composites::Vector3Composite_F2C66747C5AEE2D8 mode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 ReadValue(::A51FD0B221815D6B& E6CE7391633EEC68)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::A51FD0B221815D6B&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_READVALUE_OFFSET))(this, E6CE7391633EEC68);
		}

		::System::Single EvaluateMagnitude(::A51FD0B221815D6B& E6CE7391633EEC68)
		{
			return ((::System::Single(*)(::PVOID, ::A51FD0B221815D6B&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, E6CE7391633EEC68);
		}
	};
}
