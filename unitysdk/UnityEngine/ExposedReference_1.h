#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyName.h"
namespace UnityEngine { class Object; }

namespace UnityEngine
{
	template <typename T>
	struct alignas(8) ExposedReference_1
	{
		::UnityEngine::PropertyName exposedName; // 0x0
		::UnityEngine::Object* defaultValue; // 0x0
	};
}
