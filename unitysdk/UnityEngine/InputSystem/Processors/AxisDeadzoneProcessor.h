#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3F46980)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3F469F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3F466B0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F46800)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F46940)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int AxisDeadzoneProcessor_TypeDefinitionIndex = 14190;

	class AxisDeadzoneProcessor
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::Single get_maxOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET))(this);
		}

		::System::Single Process(::System::Single E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::System::Single get_minOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR__CTOR_OFFSET))(this);
		}
	};
}
