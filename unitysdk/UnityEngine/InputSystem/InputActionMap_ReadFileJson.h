#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_READFILEJSON_TOMAPS_OFFSET UNITYSDK_OFFSET(0x3F57930)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_ReadFileJson_TypeDefinitionIndex = 14166;

	struct alignas(8) InputActionMap_ReadFileJson
	{
		::Il2CppArray<::System::Object*>* actions; // 0x10
		::Il2CppArray<::System::Object*>* maps; // 0x18

		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* ToMaps()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_READFILEJSON_TOMAPS_OFFSET))(this);
		}
	};
}
