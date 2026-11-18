#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

namespace ParadoxNotion
{
	inline static constexpr unsigned int EventData_1_TypeDefinitionIndex = 29935;

	template <typename T>
	struct alignas(8) EventData_1
	{
		::UnityEngine::GameObject* _receiver_k__BackingField; // 0x0
		::System::Object* _sender_k__BackingField; // 0x0
		T _value_k__BackingField; // 0x0
	};
}
