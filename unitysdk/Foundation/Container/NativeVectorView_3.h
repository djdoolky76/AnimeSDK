#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorView_3_TypeDefinitionIndex = 8831;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeVectorView_3
	{
		::Foundation::Container::NativeFlatStorageView_3<::System::Object*, T1, T2> _view; // 0x0
	};
}
