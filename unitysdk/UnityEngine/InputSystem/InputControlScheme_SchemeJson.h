#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x1E44AEA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_OFFSET UNITYSDK_OFFSET(0x1E44AD50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEMES_OFFSET UNITYSDK_OFFSET(0x1E44B000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEME_OFFSET UNITYSDK_OFFSET(0x8FE190)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_SchemeJson_TypeDefinitionIndex = 31662;

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
		static ::UnityEngine::InputSystem::InputControlScheme_SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme scheme)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_SchemeJson(*)(::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_OFFSET))(scheme);
		}
		*/

		static ::Il2CppArray<::System::Object*>* ToJson_1(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* schemes)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_1_OFFSET))(schemes);
		}

		static ::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* ToSchemes(::Il2CppArray<::System::Object*>* schemes)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEMES_OFFSET))(schemes);
		}
	};
}
