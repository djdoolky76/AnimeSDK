#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int Data_TypeDefinitionIndex = 41048;

	struct alignas(8) Data
	{
		::System::Object* data; // 0x10
	};
}
