#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_DENORMALIZE_OFFSET UNITYSDK_OFFSET(0x3F55BF0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x3F55C40)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x3F55D30)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F55D60)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F55E20)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeProcessor_TypeDefinitionIndex = 14169;

	class NormalizeProcessor
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14
		::System::Single zero; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_TOSTRING_OFFSET))(this);
		}

		::System::Single Process(::System::Single E937D4885DAA1AE8, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_PROCESS_OFFSET))(this, E937D4885DAA1AE8, B35325D9541AD934);
		}

		static ::System::Single Normalize(::System::Single E937D4885DAA1AE8, ::System::Single BDD0BFB63061789A, ::System::Single BD80BAA77F7F7D95, ::System::Single F2D13DDA221F99E3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_NORMALIZE_OFFSET))(E937D4885DAA1AE8, BDD0BFB63061789A, BD80BAA77F7F7D95, F2D13DDA221F99E3);
		}

		static ::System::Single Denormalize(::System::Single E937D4885DAA1AE8, ::System::Single BDD0BFB63061789A, ::System::Single BD80BAA77F7F7D95, ::System::Single F2D13DDA221F99E3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_DENORMALIZE_OFFSET))(E937D4885DAA1AE8, BDD0BFB63061789A, BD80BAA77F7F7D95, F2D13DDA221F99E3);
		}
	};
}
