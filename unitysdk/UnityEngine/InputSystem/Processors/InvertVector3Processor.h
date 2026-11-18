#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F5F2960)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5F29C0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F2A80)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int InvertVector3Processor_TypeDefinitionIndex = 32035;

	class InvertVector3Processor
	{
	public:
		::System::Boolean invertZ; // 0x10
		::System::Boolean invertX; // 0x11
		::System::Boolean invertY; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR3PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
