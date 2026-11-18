#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F007E00)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F007E20)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F007ED0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ClampProcessor_TypeDefinitionIndex = 32030;

	class ClampProcessor
	{
	public:
		::System::Single max; // 0x10
		::System::Single min; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Process(::System::Single value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
