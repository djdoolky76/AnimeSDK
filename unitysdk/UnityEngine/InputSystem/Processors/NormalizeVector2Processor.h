#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F5F2A90)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5F2AE0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F2B20)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeVector2Processor_TypeDefinitionIndex = 32037;

	class NormalizeVector2Processor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
