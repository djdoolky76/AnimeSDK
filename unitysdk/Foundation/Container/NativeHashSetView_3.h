#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeArrayView_2.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetView_3_TypeDefinitionIndex = 9104;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeHashSetView_3
	{
		::Foundation::Container::NativeSparseArrayView_2<T1, ::System::Object*> _elements; // 0x0
		::Foundation::Container::NativeArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::Container::NativeHashSetElementId> _buckets; // 0x0
	};
}
