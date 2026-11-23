#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3F51BC0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F51BD0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F51C00)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int InvertProcessor_TypeDefinitionIndex = 14203;

	class InvertProcessor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Process(::System::Single E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
