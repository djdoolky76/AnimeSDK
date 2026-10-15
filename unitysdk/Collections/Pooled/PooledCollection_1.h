#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledCollection_1_TypeDefinitionIndex = 5099;

	template <typename T>
	class PooledCollection_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* _items; // 0x0
	};
}
