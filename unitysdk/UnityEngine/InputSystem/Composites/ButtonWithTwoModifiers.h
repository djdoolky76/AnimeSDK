#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1F789120)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F789030)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F789210)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int ButtonWithTwoModifiers_TypeDefinitionIndex = 32163;

	class ButtonWithTwoModifiers
	{
	public:
		::System::Int32 button; // 0x10
		::System::Int32 modifier2; // 0x14
		::System::Int32 modifier1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS__CTOR_OFFSET))(this);
		}

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_READVALUE_OFFSET))(this, context);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}
	};
}
