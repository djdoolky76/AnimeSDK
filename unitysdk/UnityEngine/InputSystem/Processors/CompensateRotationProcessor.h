#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_A438D535F39C67BD.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_GET_CACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x165D460)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3F5D520)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F5D830)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F5D860)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int CompensateRotationProcessor_TypeDefinitionIndex = 14272;

	class CompensateRotationProcessor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::Quaternion Process(::UnityEngine::Quaternion E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::UnityEngine::InputSystem::InputProcessor_A438D535F39C67BD get_cachingPolicy()
		{
			return ((::UnityEngine::InputSystem::InputProcessor_A438D535F39C67BD(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_GET_CACHINGPOLICY_OFFSET))(this);
		}
	};
}
