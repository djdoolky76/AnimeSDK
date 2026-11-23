#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3FD8D10)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3FD8D50)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3FD8E10)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleVector3Processor_TypeDefinitionIndex = 14428;

	class ScaleVector3Processor
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR__CTOR_OFFSET))(this);
		}
	};
}
