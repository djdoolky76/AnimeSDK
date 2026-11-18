#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorView_2_TypeDefinitionIndex = 9086;

	template <typename T1, typename T2>
	struct alignas(8) NativeVectorView_2
	{
		::Foundation::Container::NativeFlatStorageView_2<::System::Object*, T1> _view; // 0x0
	};
}
