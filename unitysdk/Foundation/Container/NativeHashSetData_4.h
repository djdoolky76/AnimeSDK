#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeArrayData_3.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayData_3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetData_4_TypeDefinitionIndex = 8865;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) NativeHashSetData_4
	{
		::Foundation::Container::NativeSparseArrayData_3<T1, ::System::Object*, T2> _elements; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::Foundation::Container::NativeHashSetElementId, T2> _buckets; // 0x0
	};
}
