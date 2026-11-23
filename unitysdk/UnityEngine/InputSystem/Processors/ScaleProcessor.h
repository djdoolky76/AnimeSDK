#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x4002960)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4002970)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x40029E0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleProcessor_TypeDefinitionIndex = 14504;

	class ScaleProcessor
	{
	public:
		::System::Single factor; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET))(this);
		}

		::System::Single Process(::System::Single E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR__CTOR_OFFSET))(this);
		}
	};
}
