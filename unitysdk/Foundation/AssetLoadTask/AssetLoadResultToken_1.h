#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadResultToken_1_TypeDefinitionIndex = 8143;

	template <typename T>
	struct alignas(8) AssetLoadResultToken_1
	{
		::System::Object* _key; // 0x0
	};
}
