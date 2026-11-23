#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_READFILEJSON_TOASSET_OFFSET UNITYSDK_OFFSET(0x3F57840)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset_ReadFileJson_TypeDefinitionIndex = 14224;

	struct alignas(8) InputActionAsset_ReadFileJson
	{
		::System::String* name; // 0x10
		::Il2CppArray<::System::Object*>* maps; // 0x18
		::Il2CppArray<::System::Object*>* controlSchemes; // 0x20

		::System::Void ToAsset(::UnityEngine::InputSystem::InputActionAsset* B286159CFDC40A9F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_READFILEJSON_TOASSET_OFFSET))(this, B286159CFDC40A9F);
		}
	};
}
