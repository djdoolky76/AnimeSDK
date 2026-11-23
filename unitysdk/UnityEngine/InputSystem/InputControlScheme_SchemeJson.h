#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x4026780)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_OFFSET UNITYSDK_OFFSET(0x4026580)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEMES_OFFSET UNITYSDK_OFFSET(0x4026A90)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEME_OFFSET UNITYSDK_OFFSET(0x40268B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_SchemeJson_TypeDefinitionIndex = 14607;

	struct alignas(8) InputControlScheme_SchemeJson
	{
		::System::String* name; // 0x10
		::System::String* bindingGroup; // 0x18
		::Il2CppArray<::System::Object*>* devices; // 0x20

		::UnityEngine::InputSystem::InputControlScheme ToScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEME_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::InputControlScheme_SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme F5BC495013A4369F)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_SchemeJson(*)(::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_OFFSET))(F5BC495013A4369F);
		}
		*/

		static ::Il2CppArray<::System::Object*>* ToJson_1(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* AA757DDF34ED3EB8)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_1_OFFSET))(AA757DDF34ED3EB8);
		}

		static ::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* ToSchemes(::Il2CppArray<::System::Object*>* AA757DDF34ED3EB8)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEMES_OFFSET))(AA757DDF34ED3EB8);
		}
	};
}
