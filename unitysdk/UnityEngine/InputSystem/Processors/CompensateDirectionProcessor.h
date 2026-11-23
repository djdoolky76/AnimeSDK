#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_A438D535F39C67BD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_GET_CACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x165D460)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3FDDC00)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3FDDDF0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3FDDE20)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int CompensateDirectionProcessor_TypeDefinitionIndex = 14477;

	class CompensateDirectionProcessor
	{
	public:
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		::UnityEngine::InputSystem::InputProcessor_A438D535F39C67BD get_cachingPolicy()
		{
			return ((::UnityEngine::InputSystem::InputProcessor_A438D535F39C67BD(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_GET_CACHINGPOLICY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR__CTOR_OFFSET))(this);
		}
	};
}
