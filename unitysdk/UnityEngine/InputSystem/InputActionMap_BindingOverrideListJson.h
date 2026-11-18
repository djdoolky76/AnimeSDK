#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_BindingOverrideListJson_TypeDefinitionIndex = 31606;

	struct alignas(8) InputActionMap_BindingOverrideListJson
	{
		::System::Collections::Generic::List_1<::System::Object*>* bindings; // 0x10
	};
}
