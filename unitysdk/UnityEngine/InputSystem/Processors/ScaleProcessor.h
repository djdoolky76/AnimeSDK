#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1EE6F0D0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EE6F0E0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F160)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleProcessor_TypeDefinitionIndex = 32039;

	class ScaleProcessor
	{
	public:
		::System::Single factor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Process(::System::Single value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
