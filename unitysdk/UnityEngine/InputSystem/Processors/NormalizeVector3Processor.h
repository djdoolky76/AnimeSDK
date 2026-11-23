#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3FEC6C0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3FEC7D0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3FEC800)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeVector3Processor_TypeDefinitionIndex = 14440;

	class NormalizeVector3Processor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
