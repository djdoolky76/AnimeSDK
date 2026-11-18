#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1F788F80)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F788EF0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F789010)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int ButtonWithOneModifier_TypeDefinitionIndex = 32162;

	class ButtonWithOneModifier
	{
	public:
		::System::Int32 button; // 0x10
		::System::Int32 modifier; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_READVALUE_OFFSET))(this, context);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}
	};
}
