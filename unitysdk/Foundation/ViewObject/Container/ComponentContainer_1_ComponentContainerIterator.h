#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int ComponentContainer_1_ComponentContainerIterator_TypeDefinitionIndex = 66114;

	template <typename T>
	struct alignas(8) ComponentContainer_1_ComponentContainerIterator
	{
		::System::Object* _enumerator; // 0x0
	};
}
