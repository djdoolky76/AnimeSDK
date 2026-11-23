#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3FEE9F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3FEEA20)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3FEEAB0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleVector2Processor_TypeDefinitionIndex = 14437;

	class ScaleVector2Processor
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::Vector2 Process(::UnityEngine::Vector2 E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}
	};
}
