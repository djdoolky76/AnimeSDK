#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_ReadMapJson_TypeDefinitionIndex = 31611;

	struct alignas(8) InputActionMap_ReadMapJson
	{
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::Il2CppArray<::System::Object*>* actions; // 0x20
		::Il2CppArray<::System::Object*>* bindings; // 0x28
	};
}
