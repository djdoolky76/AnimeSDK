#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEMAPJSON_FROMMAP_OFFSET UNITYSDK_OFFSET(0x3F5C340)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_WriteMapJson_TypeDefinitionIndex = 14164;

	struct alignas(8) InputActionMap_WriteMapJson
	{
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::Il2CppArray<::System::Object*>* actions; // 0x20
		::Il2CppArray<::System::Object*>* bindings; // 0x28

		/*
		static ::UnityEngine::InputSystem::InputActionMap_WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap* EC8C669D28373005)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_WriteMapJson(*)(::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEMAPJSON_FROMMAP_OFFSET))(EC8C669D28373005);
		}
		*/
	};
}
