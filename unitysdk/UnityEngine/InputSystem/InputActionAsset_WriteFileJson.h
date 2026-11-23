#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset_WriteFileJson_TypeDefinitionIndex = 14223;

	struct alignas(8) InputActionAsset_WriteFileJson
	{
		::System::String* name; // 0x10
		::Il2CppArray<::System::Object*>* maps; // 0x18
		::Il2CppArray<::System::Object*>* controlSchemes; // 0x20
	};
}
