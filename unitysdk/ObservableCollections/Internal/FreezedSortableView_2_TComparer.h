#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedSortableView_2_TComparer_TypeDefinitionIndex = 28269;

	template <typename T1, typename T2>
	class FreezedSortableView_2_TComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<T1>* comparer; // 0x0
	};
}
