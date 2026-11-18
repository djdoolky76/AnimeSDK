#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArrayView_1_TypeDefinitionIndex = 9023;

	template <typename T>
	struct alignas(8) NativeBitArrayView_1
	{
		::Foundation::Container::NativeFlatStorageView_2<::System::Object*, ::System::UInt32> _view; // 0x0
	};
}
