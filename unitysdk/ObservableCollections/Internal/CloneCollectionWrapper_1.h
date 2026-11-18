#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/Internal/CloneCollection_1.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollectionWrapper_1_TypeDefinitionIndex = 28175;

	template <typename T>
	struct alignas(8) CloneCollectionWrapper_1
	{
		::ObservableCollections::Internal::CloneCollection_1<T> _cloneCollection; // 0x0
	};
}
